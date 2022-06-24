#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int goal=n-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]+i>=goal)goal=i;
        }
        if(goal!=0) return false;
        return true;
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
    cout<<s.canJump(nums)<<endl;
    return 0;
}