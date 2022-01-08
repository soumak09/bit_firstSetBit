#include<bits/stdc++.h>
using namespace std;

string dectobin(int n){
    string t = "";
    int s;
    while(n>0){
        s = n%2;
        t = t + to_string(s);
        n = n/2;
    }
    reverse(t.begin(), t.end());
    return t;
}

int bintodec(string ans){
    int i = 0, sum=0;
    int t = stoi(ans);
    while(t != 0){
        int n;
        n=t%10;
        sum=sum + n*pow(2,i);
        i++;
        t=t/10;
    }
    return sum;
}

int main(){
    int n = 25, i=0;
    string ans = dectobin(n);
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
    for(int i=1; i<=3; i++){
        if(ans[i]=='1'){
                ans[i]='0';
        }
        else{
                ans[i]='1';
        }
    }
    cout<<ans<<"\n";
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
    int finalans = bintodec(ans);
    cout<<finalans;
    return 0;
}