#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int mx=0;
     for(int i=0;i<n.length();i++)
     {
         mx=max(mx,n[i]-'0');
     }
        return mx;
    }
};

int main()
{
    string n;
    cin>>n;
    
    Solution s;
    cout<<s.minPartitions(n)<<endl;
    return 0;
}