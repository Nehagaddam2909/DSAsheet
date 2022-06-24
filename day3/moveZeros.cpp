#include<bits/stdc++.h>
using namespace std;
vector<int> nums;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=nums.size();
        int mid=1;
        vector<int>v;
        while(mid<j)
        {
            //cout<<mid<<" "<<endl;
            if(nums[i]==0)
            {
                if(nums[mid]!=0)
                {
                    nums[i]=nums[mid];
                    //cout<<nums[i]<<endl;
                    nums[mid]=0;
                    i++;
                    mid++;
                }
                else
                {
                    mid++;
                }
            }
            else
            {
                i++;
                mid++;
            }
        }
       
        //int k=nums.size()-j
        //for(int j=)
        //sort(nums.begin(),nums.begin()+k);
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
    s.moveZeroes(nums);
    for(auto it:nums)
      cout<<it<<" ";
    return 0;
}