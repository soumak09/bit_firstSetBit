#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int toggleBits(int N , int L , int R) {
        // code here
        int i=1;
        i=i<<(L-1);
        int k=L;
        while(k<=R){ 
            N=N^i;
            i=i<<1;
            k++;
        }
        return N;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,L,R;
        
        cin>>N>>L>>R;

        Solution ob;
        cout << ob.toggleBits(N,L,R) << endl;
    }
    return 0;
} 