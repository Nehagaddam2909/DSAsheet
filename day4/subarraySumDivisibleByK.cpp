#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //vector<int>prefix;
        if(nums.size()==0) return 0;
        map<int,int>mp;
        int pre=0,c=0,p;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            pre=pre+nums[i];
            p=(pre)%k;
            
            if(p<0) p+=k;
            
            
            if(mp[p]!=0)
            {
                c+=mp[p];
                
            }
                
             mp[p]++;   
        }
        return c;
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    Solution s;
    cout<<s.subarraysDivByK(nums,m)<<endl;
    return 0;
}