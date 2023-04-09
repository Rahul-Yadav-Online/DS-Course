/**
 * @brief
 * Given an string, return the length of
 * substring with max number of unique chars / non-repeating chars.
 *
 *
 * Time Complexity -> O(n)
 * Space Complexy -> O(m); m -> no. of unique chars in string
 *
 * @author : Rahul Yadav
 * @date : 03-03-2023
 */

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::vector<std::vector<std::string>> anagrams(std::vector<std::string> &str_arr)
{
    std::unordered_map<std::string, std::vector<std::string>> hashmap;
    std::vector<std::vector<std::string>> result;
    for (int i = 0; i < str_arr.size(); i++)
    {
        std::string str = str_arr[i];
        std::sort(str.begin(), str.end());
        hashmap[str].push_back(str_arr[i]);
    }
    for (auto i = hashmap.begin(); i != hashmap.end(); i++)
    {
        result.push_back(i->second);
    }
    return result;
}

int main()
{
    std::vector<std::string> input = {"abc", "cab", "cat", "act"};
    std::cout << "\nResult : \n";
    std::vector<std::vector<std::string>> res = anagrams(input);
    std::cout << "[";
    for (auto i : res)
    {
        std::cout << "[";
        for (auto j : i)
        {
            std::cout << j << ",";
        }
        std::cout << "\b],";
    }
    std::cout << "\b]\n";
}