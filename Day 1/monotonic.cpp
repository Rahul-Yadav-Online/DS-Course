/**
 * @brief
 * Given an array of integers return if the array is monotonic i.e.,
 * If all the elements in the array are either Non decreasing or Non increasing.
 *
 * Time Complexity -> O(n)
 * Space Complexy -> O(1)
 *
 * @author : Rahul Yadav
 * @date : 23-02-2023
 */

#include <iostream>
#include <vector>

bool monotonic(const std::vector<int> arr)
{
    // if the array is Non Increasing and Non decreasing then
    // then return true else return false
    if (arr.size() <= 1)
    {
        return true;
    }
    if (arr[0] - arr[arr.size() - 1] <= 0)
    {
        // check if array is non decreasing
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i - 1] > arr[i])
            {
                return false;
            }
        }
    }
    else
    {
        // check if array is non increasing
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i - 1] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    std::vector<int> v1 = {-2, -2, 2};
    std::vector<int> v2 = {-3};
    std::vector<int> v3 = {};
    std::cout << "\nResult : \n";
    std::cout << (monotonic(v1) ? "true" : "false") << std::endl;
    std::cout << (monotonic(v2) ? "true" : "false") << std::endl;
    std::cout << (monotonic(v3) ? "true" : "false") << std::endl;

    return 0;
}