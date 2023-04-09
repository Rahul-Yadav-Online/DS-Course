/**
 * @brief
 * Given a sorted(ascending order) array of integers and a target integer, return the
 * range of indicies [left_most, right_most] of the target integer
 * or return [-1,-1] if target is not in the array.
 *
 *
 * Time Complexity -> O(log n)
 * Space Complexy -> O(1);
 *
 * @author : Rahul Yadav
 * @date : 25-03-2023
 */

#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int> &arr, const int target, int left, int right)
{
    int mid;
    while (left <= right)
    {
        mid = ((left + right) / 2);
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int leftExtreme(std::vector<int> &arr, const int target)
{
    int idx = binarySearch(arr, target, 0, arr.size() - 1);
    if (idx == 0 || idx == -1)
    {
        return idx;
    }
    while (arr[idx - 1] == target)
    {
        idx = binarySearch(arr, target, 0, idx - 1);
    }
    return idx;
}

int rightExtreme(std::vector<int> &arr, const int target)
{
    int arrlen = arr.size();
    int idx = binarySearch(arr, target, 0, arrlen - 1);
    if (idx == arrlen - 1)
    {
        return idx;
    }
    while (arr[idx + 1] == target)
    {
        idx = binarySearch(arr, target, idx + 1, arrlen - 1);
    }
    return idx;
}

std::vector<int> rangeSearch(std::vector<int> &arr, const int target)
{
    std::vector<int> range = {-1, -1};
    int lp = 0, rp = (arr.size() - 1);
    // Left Extreme
    range[0] = leftExtreme(arr, target);

    if (range[0] == -1)
    {
        return range;
    }
    // right Extreme
    range[1] = rightExtreme(arr, target);

    return range;
}

int main()
{
    std::vector<int> inp_arr = {1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5};
    std::vector<int> res{0};
    std::cout << "\nResult : \n";
    res = rangeSearch(inp_arr, 3);
    std::cout << "[";
    for (auto i : res)
    {
        std::cout << i << ",";
    }
    std::cout << "\b]\n";
}