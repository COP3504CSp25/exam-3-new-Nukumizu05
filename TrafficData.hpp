#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>
#include <vector>

std::map<std::string, int> loadTrafficData(const std::string& filename) 
{
    std::map<std::string, int> result;
    
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Failed to open CSV file!" << std::endl;
        std::cout << "-1" << std::endl;
    }

    std::string line;
    while(std::getline(file, line))
    {
        std::istringstream ss(line);
        std::string value;
        std::vector<std::string> row;
        while(std::getline(ss, value, ',')))
        {
            row.push_back(value);
        }

        result.insert({row[0], std::stoi(row[1])});
    }
}

void updateTrafficData(const std::string& filename, std::map<std::string, int>& dataMap) 
{
    std::map<std::string, int> updatedData = loadTrafficData(filename);

    std::map<std::string, int>::iterator it1 = dataMap.begin();
    std::map<std::string, int>::iterator it2 = updatedMap.begin();

    for (auto it2 = updatedMap.begin(); it != updatedMap.end(); ++it2)
    {
        bool flag = false;
        for (auto it1 = dataMap.begin(); it != dataMap.end(); ++it1)
        {
            if (it1->first == it2->first)
            {
                it1->second = it2->second;
                bool flag = true;
            }
        }

        if (flag == false)
        {
            dataMap.insert({it2->first, it2->second});
        }
    }
}
