#include<bits/stdc++.h>
using namespace std;

string dectobin(int n){
    string s="";
    int t;
    while(n>0){
        t = n%2;
        s = s + to_string(t);
        n = n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    int n,a,count=0;
    string ans;
    ans = dectobin(10);
    cout<<ans<<"\n";
    a = ans.length()-1;
    while(a>0){
        count++;
        if(ans[a]=='1'){
            break;
        }
        a--;
    }
    cout<<count;
    return 0;
}