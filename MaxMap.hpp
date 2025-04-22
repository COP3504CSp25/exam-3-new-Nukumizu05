#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) 
{
    float max_val = -1;
    
    std::map<std::string, std::vector<float>>::iterator it = data.begin();

    for (it; it != data.end(); ++it)
    {
        if (it->first == search_term)
        {
            for (size_t i = 0; i < it->second.size(); i++)
            {
                max_val = it->second.at(i) > max_val ? it->second.at(i) : max_val;
            }
        }
    }

    return max_val;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) 
{
    std::map<std::string, float> result;
    
    std::map<std::string, std::vector<float>>::iterator it = in_map.begin();

    for (it; it != in_map.end(); ++it)
    {
        result.insert({it->first, consultMax(it->first, in_map)});
    }

    return result;
}
