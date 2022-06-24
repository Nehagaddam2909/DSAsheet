#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num>0)
        {
            //cout<<num%10<<endl;
            v.push_back(num%10);
            num=num/10;
        }
        
        sort(v.begin(),v.end());
        
        cout<<endl;
        int i=0,j=1,new1=0,new2=0;
        while(i<v.size() and j<v.size())
        {
            new1=new1*10+v[i];
            new2=new2*10+v[j];
            
           // cout<<new1<<" "<<new2<<endl;
            i+=2;
            j+=2;
        }
       
        return new1+new2;
    }
};
int main()
{
    int n;
    cin>>n;
    Solution s;
    cout<<s.minimumSum(n)<<endl;
    return 0;
}