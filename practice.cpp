#include<bits/stdc++.h>
using namespace std;


void smaple(){
    cout<<"hello hpow are you";
}
bool is_prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    return false;
    cout<<"hekko";
}



int main(){
   
   for(int i=2;i<=100;i++){
    if(is_prime(i)){
        cout<<i<<"  ";
    }
   }
    
    





    return 0;
}