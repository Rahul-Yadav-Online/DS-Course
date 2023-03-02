/**
 * @brief
 * Given an array of integers and no of rotations(K), return a new array
 * rotated k times.
 * 
 * Time Complexity -> O(n)
 * Space Complexy -> O(1)
 * 
 * @author : Rahul Yadav
 * @date : 24-02-2023
*/

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> rotate(std::vector<int> arr, const int k){
    if(arr.size()<= 0){
        return arr;
    }
    int rotation = k%arr.size();
    for(int i = 0; i < arr.size()/2; i++){
        std::swap(arr[i], arr[arr.size()-i-1]);
    }
    for(int i = 0; i < rotation/2; i++){
        std::swap(arr[i],arr[rotation-i-1]);
    }
    for(int i = rotation; i < (((arr.size()-rotation)/2)+rotation); i++){
        std::swap(arr[i],arr[arr.size()-(i-rotation)-1]);
    }
    return arr;
}

int main(){
    std::vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> v2 = {-3};
    std::vector<int> v3 = {};
    std::cout << "\nResult : \n";
    v1 = rotate(v1,102);
    for(int i :v1){
        std::cout << i << " "; 
    }
    std::cout << std::endl;
    v2 = rotate(v2,109);
    for(int i :v2){
        std::cout << i << std::endl;
    }
    std::cout << std::endl;
    v3 = rotate(v3,109);
    for(int i :v3){
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    return 0;
}