/**
 * @brief
 * Given an array of distinct integers and a taget value, return a new array
 * with idex of 2 elements in the array that sum up to give the target value.
 *
 * Time Complexity -> O(n)
 * Space Complexy -> O(n)
 *
 * @author : Rahul Yadav
 * @date : 25-02-2023
 */

#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> targetValue(const std::vector<int> arr, int target)
{
    std::unordered_map<int, int> hashtable;
    if (arr.size() <= 1)
    {
        return std::vector<int>{};
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (hashtable.find(target - arr[i]) == hashtable.end())
        {
            hashtable.insert(std::make_pair(arr[i], i));
        }
        else
        {
            return std::vector<int>{i, hashtable[target - arr[i]]};
        }
    }
    return std::vector<int>{};
}

int main()
{
    std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> v2 = {-3};
    std::vector<int> v3 = {};
    std::cout << "\nResult : \n";
    for (int i : targetValue(v1, 19))
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}