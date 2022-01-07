#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int count;
    int mask;
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m == 0 && n == 0){
            return -1;
        }
        else{
            count=1, mask=1;
            while((m&mask) == (n&mask)){
                mask = (mask << 1);
                count++;
            }
        }
    return count;
    }
};

int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}