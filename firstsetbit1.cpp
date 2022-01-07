#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=12,count=0;
    while(n>0){
        count++;
        if(n%2==1){
            break;
        }
        n=n/2;
    }
    cout<<count;
}