#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
     int n=nums.size(),c=0,j=0,curr=0;
        for(int i=0;i<n-1;i++)
        {
            j=max(j,i+nums[i]);
            
            if(curr==i)
            {
                curr=j;
                c++;
            }
        }
        
        return c;
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
    cout<<s.jump(nums)<<endl;
    return 0;
}