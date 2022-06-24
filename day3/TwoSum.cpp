#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v(2,-1);
        int k;
        for(int i=0;i<n;i++)
        {
            k=target-nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(k==nums[j])
                {
                    v[0]=i;
                    v[1]=j;
                    break;
                }
            }
        }
        return v;
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
    vector<int>v;
    v=s.twoSum(nums,m);
    for(auto it:v)
    {
      cout<<it<<" ";
    }

    return 0;
}