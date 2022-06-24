#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]!=0)
                return nums[i];
            
            mp[nums[i]]=i+1;
        }
        return 0;
    }
};

int main()
{
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    Solution s;
    cout<<s.findDuplicate(nums)<<endl;
    return 0;
}