#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int s=0,c=0;
        unordered_map<int,int>mp;
        mp[s]=1;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            int q=s-k;
            if(mp[q]!=0)
                c+=mp[q];
            //mp[nums[i]]++;
            mp[s]++;
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
    cout<<s.subarraySum(nums,m)<<endl;
    return 0;
}