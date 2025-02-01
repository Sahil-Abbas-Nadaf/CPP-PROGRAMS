#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 1;
    while (true)
    {
        // The reason is that any number that is divisible by all numbers from 11 to 20 will also be divisible by all numbers from 1 to 10. This is because the numbers from 11 to 20 include all the prime factors needed to cover the numbers from 1 to 10. 

        // For example:
        // - If a number is divisible by 20, it is also divisible by 2, 4, 5, and 10.
        // - If a number is divisible by 18, it is also divisible by 2, 3, 6, and 9.

        // Thus, checking divisibility from 11 to 20 ensures that the number is also divisible by all numbers from 1 to 10.
        
       if(num % 11 == 0 and num % 12 == 0 and num % 13 == 0 and num % 14 == 0 and num % 15 == 0 and num % 16 == 0 and num % 17 == 0 and num % 18 == 0 and num % 19 == 0 and num % 20 == 0){
        cout<<num;
        break;
       }
       else num++;
    }
    
    return 0;

}