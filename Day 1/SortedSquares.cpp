/**
 * @brief
 * Given an array of integers in ascending order, return a new array
 * with Squares of each number sorted in ascending order.
 *
 * Time Complexity -> O(n)
 * Space Complexy -> O(n)
 *
 * @author : Rahul Yadav
 * @date : 23-02-2023
 */

#include <iostream>
#include <vector>

std::vector<int> sortedSquares(const std::vector<int> arr)
{
    const int size = arr.size();
    std::vector<int> tmp(size, 0); // Vector to store the result
    int start = 0, end = size - 1; // start -> left side pointer
                                   // end -> right side pointer

    for (int i = size - 1; i >= 0; i--)
    {
        int sqr1 = arr[start] * arr[start];
        int sqr2 = arr[end] * arr[end];
        if (sqr1 < sqr2)
        {
            // if the right side element is greatest then add the square of the
            // right side element to the result array and decrement the right side pointer by one.
            tmp[i] = sqr2;
            end--;
        }
        else
        {
            // if the left side element is greatest then add the square of the
            // left side element to the result array and increment the left side pointer by one.
            tmp[i] = sqr1;
            start++;
        }
    }

    return tmp;
}

int main()
{
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {-3, -1, 0, 1, 2};
    std::vector<int> v3 = {};
    std::vector<int> res1 = sortedSquares(v1);
    std::vector<int> res2 = sortedSquares(v2);
    std::vector<int> res3 = sortedSquares(v3);
    std::cout << "\nResult : \n";
    for (int i : res1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    for (int i : res2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    for (int i : res3)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}