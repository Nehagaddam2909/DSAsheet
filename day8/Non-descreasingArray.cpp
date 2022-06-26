#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1 and count<=1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                count++;
                if(i<1 || nums[i-1]<=nums[i+1])
                    nums[i]=nums[i+1];
                else
                    nums[i+1]=nums[i];
            }
        }
        
        return count<=1;
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
    cout<<s.checkPossibility(nums)<<endl;
    return 0;
   
}