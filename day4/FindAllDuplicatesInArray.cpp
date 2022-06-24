#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int n=abs(nums[i]);
            if(nums[n-1]>0) nums[n-1]=-nums[n-1];
            else v.push_back(n);
        }
        return v;
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
    vector<int>v;
    v=s.findDuplicates(nums);
    for(auto it:v)
      cout<<it<<" ";
    return 0;
}