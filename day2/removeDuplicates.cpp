#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,j=1,temp=nums[0];
        while(i<nums.size() && j<nums.size())
        {
            if(nums[j]!=temp)
            {
                nums[i]=nums[j];
                temp=nums[j];
                i++;
            }
            j++;
        }
        return i;
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
    int k=s.removeDuplicates(nums);
    cout<<"After removing the duplicates...."<<endl;
    for(int i=0;i<k;i++)
      cout<<nums[i]<<" ";
    return 0;
}