#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        vector<int>prefix;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            prefix.push_back(s);
        }
        int mx=0,temp;
        int i=-1;
        int j=nums.size()-k-1;
        if(j<0)
            return s;
        while(j<prefix.size() and j>=0)
        {
            if(i>=0)
                temp=prefix[j]-prefix[i];
            else
                temp=prefix[j];
            mx=max(mx,s-temp);
            i++;
            j++;
        }
        return mx;
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
    cout<<s.maxScore(nums,m)<<endl;
    return 0;
}