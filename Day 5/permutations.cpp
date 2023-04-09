/**
 * @brief
 * Given an array, return a new array
 * with all the permutations of the array.
 *
 * Time Complexity -> O(nxn!)
 * Space Complexy -> O(nxn!)
 *
 * @author : Rahul Yadav
 * @date : 01-03-2023
 */

#include <iostream>
#include <vector>
#include <algorithm>

void solver(std::vector<int> &arr, std::vector<std::vector<int>> &prem, int idx)
{
    if (idx >= arr.size() - 1)
    {
        prem.push_back(arr);
        return;
    }
    for (int i = idx; i < arr.size(); i++)
    {
        std::swap(arr[idx], arr[i]);
        solver(arr, prem, idx + 1);
        std::swap(arr[idx], arr[i]);
    }
    return;
}

std::vector<std::vector<int>> permutations(std::vector<int> &arr)
{
    std::vector<std::vector<int>> perm;
    solver(arr, perm, 0);
    return perm;
}

int main()
{
    std::vector<int> v1 = {1, 2, 3, 4};
    std::vector<std::vector<int>> v2 = permutations(v1);
    std::cout << "\nResult : \n";
    int i = 1;
    for (const auto &x : v2)
    {
        std::cout << i << ". [ ";
        for (const auto &y : x)
        {
            std::cout << y << " ";
        }
        std::cout << "]\n";
        i++;
    }
}