#include<bits/stdc++.h>
using namespace std;

int main(){
    int prev = 0;
    int curr = 1;
    int sumFibo = 0;

    while(curr<= 4000000)
    {
        sumFibo += (curr%2 == 0) ? curr : 0;

        int temp = prev;
        prev = curr; 
        curr = prev + temp;
    }
    cout<<sumFibo;
    
}