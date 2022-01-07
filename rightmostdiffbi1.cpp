#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1=5, n2=7, count=1, mask=1;
    while((n1&mask) == (n2&mask)){
        mask = (mask << 1);
        count++;
    }
    cout<<count;
}