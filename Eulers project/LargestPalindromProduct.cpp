#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans = 0;
    for(int i = 100; i<1000; i++) {
        for(int j = 100; j<1000; j++){
          int  maxpalprod = i * j;
          string palprod = to_string(maxpalprod);
          string temp = palprod;
          reverse(palprod.begin(), palprod.end());

          if(palprod == temp and maxpalprod > ans){
            ans = maxpalprod;
          }
        
        }
    }

    cout<<ans<<endl;
    return 0;
}