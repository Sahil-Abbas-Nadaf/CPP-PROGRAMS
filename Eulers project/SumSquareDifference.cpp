#include<bits/stdc++.h>
using namespace std;

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int main(){
    long sqrsum = 0;
    long sumsqr = 0;
    
    for(int i = 1; i<= 100; i++){
        sqrsum += (i*i);
        sumsqr+=i;
    }
    cout<<sumsqr*sumsqr - sqrsum<<endl;
    return 0;
}