#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=12,count=1;
    int mask=1;
    while(n>0){
        if((n&mask) == 1 ){
            break;
        }
        else{
            n = (n >> 1);
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}