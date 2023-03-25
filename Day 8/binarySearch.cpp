/**
 * @brief
 * Given a sorted array of integers and a target integer, return the 
 * index of the target integer or return -1 if target is not in the array.
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

int binarySearch(const std::vector<int> arr, int target){
    int left=0, right=arr.size()-1;
    int mid;
    while(left<=right){
        mid = ((left+right)/2);
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    std::vector<int> inp_arr={1,2,2,3,4,5};
    std::cout << "\nResult : \n";
    std::cout << binarySearch(inp_arr, 2) <<std::endl;
}