#include<bits/stdc++.h>
using namespace std;

string dectobin(int n){
    string t="";
    int n3;
    while(n>0){
        n3 = n%2;
        t = t + to_string(n3);
        n = n/2;
    }
    reverse(t.begin(),t.end());
    return t;
}

int main(){
    int n1=7,n2=5,count=0;
    string ans1 = dectobin(n1);
    string ans2 = dectobin(n2);
    int l1 = ans1.length()-1;
    int l2 = ans2.length()-1;
    cout<<ans1<<"\n";
    cout<<ans2<<"\n";
    while((l1 != 0) || (l2 != 0)){
        count++;
        if(ans1[l1] != ans2[l2]){
            break;
        }
        else{
            l1--;
            l2--;
        }
    }
    cout<<count;
    return 0;
}