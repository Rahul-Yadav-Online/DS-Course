/**
 * @brief
 * Given an string, return the index of the first
 * non repeating character in the array.
 * 
 * 
 * Time Complexity -> O(n)
 * Space Complexy -> O(1)
 * 
 * @author : Rahul Yadav   
 * @date : 02-03-2023
*/

#include <iostream>
#include <string>
#include <unordered_map>

int firstNonRepeatingChar(std::string const str){
    std::unordered_map<char, int> hashmap{};
    for (int i = 0; i < str.length(); i++){
        if(hashmap.find(str[i]) == hashmap.end()){
            hashmap[str[i]] = 1;
        }
        else{
            hashmap[str[i]]++;
        }
    }
    for(int i = 0; i < str.length();i++){
        if(hashmap[str[i]] == 1){
            return i;
        }
    }
    return -1;
}

int main(){
    std::string input = "";
    std::cout << "\nResult : \n";
    std::cout << firstNonRepeatingChar(input) << std::endl;
      
}