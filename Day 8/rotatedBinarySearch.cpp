/**
 * @brief
 * Given a sorted array of integers which is rotated by K(unknown) times and a target integer,
 * return the index of the target integer or return -1 if target is not in the array.
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

int rotatedBinarySearch(const std::vector<int> arr, int target)
{
    int left = 0, right = arr.size() - 1;
    int mid;
    while (left <= right)
    {
        mid = ((left + right) / 2);
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[left] <= arr[mid])
        {
            // Left side is sorted
            if (arr[left] <= target && target < arr[mid])
            {
                // target is in the left side
                right = mid - 1;
            }
            else
            {
                // target is in the right side
                left = mid + 1;
            }
        }
        else
        {
            // Right side is sorted
            if (arr[mid] < target && target <= arr[right])
            {
                // target is in the right side
                left = mid + 1;
            }
            else
            {
                // target is in the left side
                right = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    std::vector<int> inp_arr = {6, 7, 1, 2, 3, 4, 5};
    std::cout << "\nResult : \n";
    std::cout << rotatedBinarySearch(inp_arr, 5) << std::endl;
}