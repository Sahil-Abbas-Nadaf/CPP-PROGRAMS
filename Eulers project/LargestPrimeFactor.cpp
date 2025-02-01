#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int num = 600'851'475'143LL;
    long long int hpf = 0LL;
    long long int curF = 2;

    while(num>hpf){
        if(num%curF == 0 and curF>hpf){
            hpf = curF;

            num /= curF;
        }
        else curF++;
    }

    cout<<hpf;
    return 0;
}