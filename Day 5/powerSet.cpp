/**
 * @brief
 * Given an array, return a new array
 * with all the power set elements of the array.
 * 
 * ex [1,2]= [[],[1],[2],[1,2]]
 * 
 * Time Complexity -> O(nx2^n)
 * Space Complexy -> O(nx2^n)
 * 
 * @author : Rahul Yadav   
 * @date : 01-03-2023
*/

#include <iostream>
#include <vector>


void solver(std::vector<int> &arr, std::vector<std::vector<int>> &set, int idx, std::vector<int>& subset){
    if(idx >= arr.size()){
        set.emplace_back(subset);
        return;
    }
    solver(arr, set, idx+1, subset);
    subset.emplace_back(arr[idx]);
    solver(arr, set, idx+1, subset);
    subset.pop_back();
    return;
}

std::vector<std::vector<int>> powerSet(std::vector<int> &arr){
    std::vector<std::vector<int>> pset = {};
    std::vector<int> subset = {};
    solver(arr, pset, 0, subset);
    return pset;
}

int main(){
    std::vector<int> v1 = {};
    std::vector<std::vector<int>> v2 = powerSet(v1);
    std::cout << "\nResult : \n";
    int i = 1;
    for(const auto& x : v2){
        std::cout << i << ". [ ";
        for(const auto& y : x){
            std::cout << y << " ";
        }
        std::cout << "]\n";
        i++;
    }
}