#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int mask;
    int count;
    unsigned int getFirstSetBit(int n)
    {
        if(n==0){
            return 0;
        }
        if((n%2)!=0){
            return 1;
        }
        else{
            count=1;
            while(n>0){
                if((n&1) == 1 ){
                    return count;
                }
                else{
                    n = (n >> 1);
                    count++;
                }
            }
        }
    }
};

int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}