#include<bits/stdc++.h>
using namespace std;

template<size_t N>
vector<size_t> primeUpTo(){
    array<bool, N> primeL;
    fill(primeL.begin(), primeL.end(),true);

    primeL[0] = primeL[1] = false;

    int sqrtLt = sqrt(N)+1;
    for(int i = 0; i<sqrtLt;i++){
        if(primeL[i]){
            for(int j = i + i; j<N; j+= i)
                primeL[j] = false;
        }
    }

    vector<size_t> res;

    for(int i = 0; i < primeL.size(); i++ ){
        if(primeL[i]){
            res.push_back(i);
        }
    }
    return res;
}
int main(){
    cout<<primeUpTo<1'000'000>()[10000];
    return 0;
}