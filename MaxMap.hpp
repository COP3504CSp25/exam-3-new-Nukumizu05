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
        if (data->first == search_term)
        {
            for (size_t i = 0; i < data->second.size(); i++)
            {
                max_val = data->second.at(i) > max_val ? data->second.at(i) : max_val;
            }
        }
    }

    return max_val;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    //implement your function here
    
}
