/**
 * @brief
 * Given an string, return the true
 * if the string is plaindrome.
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

bool palindrome(std::string const str){
    for(int i=0,j=str.length()-1; i<str.length()/2; i++,j--){
        if(str[i] != str[j]){
            return false;
        }
    }
    return true;
}

int main(){
    std::string input = "aacaa";
    std::cout << "\nResult : \n";
    std::cout << (palindrome(input)?"Palindrome":"Not Palindrome") << std::endl;
      
}