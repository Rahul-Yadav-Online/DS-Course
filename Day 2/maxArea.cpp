/**
 * @brief
 * Given an array of integers of length n, there are n vertical lines drawn
 * such that the endpoints are (i,0) and (i, arr[i]). Then find the maximum area
 * that can be created using the elements of the array and x axis.
 *
 * Time Complexity -> O(n)
 * Space Complexy -> O(1)
 *
 * @author : Rahul Yadav
 * @date : 24-02-2023
 */

#include <iostream>
#include <vector>

int maxArea(std::vector<int> arr)
{
    if (arr.size() <= 1)
    {
        return 0;
    }
    int area = 0;
    int res = 0;
    for (int start = 0, end = arr.size() - 1; start < end;)
    {
        if (arr[start] >= arr[end])
        {
            area = (end - start) * arr[end];
            end--;
        }
        else
        {
            area = (end - start) * arr[start];
            start++;
        }
        if (area > res)
            res = area;
    }

    return res;
}

int main()
{
    std::vector<int> v1 = {9, 1, 2, 3, 10};
    std::vector<int> v2 = {-3};
    std::vector<int> v3 = {};
    std::cout << "\nResult : \n";
    std::cout << std::endl;
    std::cout << maxArea(v1) << std::endl;
    std::cout << maxArea(v2) << std::endl;
    std::cout << maxArea(v3) << std::endl;
    return 0;
}