/**
 * @brief
 * Given an string, return the length of
 * substring with max number of unique chars / non-repeating chars.
 * 
 * 
 * Time Complexity -> O(n)
 * Space Complexy -> O(m); m -> no. of unique chars in string
 * 
 * @author : Rahul Yadav   
 * @date : 03-03-2023
*/

#include <iostream>
#include <string>
#include <unordered_map>

int longestSubString(std::string const str){
    std::unordered_map<char, int> hashmap;
    int start = 0, max_length = 0;
    for (int i=0; i < str.length(); i++){
        if(hashmap.find(str[i]) != hashmap.end()){
            start = ((hashmap[str[i]]+1)>start)?(hashmap[str[i]]+1):start;
        }
        max_length = (max_length>(i-start+1))?max_length:i-start+1;
        hashmap[str[i]] = i;
    }
    return max_length;
}

int main(){
    std::string input = "tmmzuxt";
    std::cout << "\nResult : \n";
    std::cout << longestSubString(input) << std::endl;
      
}