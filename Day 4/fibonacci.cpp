/**
 * @brief
 * Given the number of terms(n), return
 * the nth term  of the fibonacci series(0,1,1,2,3,5,8,...).
 * 
 * Time Complexity -> O(n)
 * Space Complexy -> O(1)
 * 
 * @author : Rahul Yadav   
 * @date : 28-02-2023
*/

#include <iostream>
  

long long int fibonacci(int n){
    int prev{0} , current{1}, next{0};
    if(n<=1){
        return n;
    }
    for(int i=1; i<n; i++){
        next = current + prev;
        prev = current;
        current = next;
    }

    return next;
}

int main(){
    long long int v1 = fibonacci(3);
    std::cout << "\nResult : \n";
    std::cout << v1 << std::endl;
}