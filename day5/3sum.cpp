#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>v;
        for(int i=0;i<n-2;i++)
        {
            if(i==0 || (i>0 and nums[i]!=nums[i-1]))
            {
                int q=0-nums[i],k=i+1,j=n-1;
            //cout<<q<<"
                while(k<j)
                {
                    if(nums[k]+nums[j]==q)
                    {
                        vector<int>t;
                        t.push_back(nums[i]);
                        t.push_back(nums[k]);
                        t.push_back(nums[j]);

                        v.push_back(t);
                        
                            while(nums[j-1]==nums[j] and k<j)
                                j--;

                            while(nums[k]==nums[k+1] and k<j)
                                k++;
                    j--;
                    k++;
                    }
                    else if(nums[k]+nums[j] <q)
                    {
                        k++;
                    }
                    else
                        j--;
                }
            }
            
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
    vector<vector<int>>v;
    v=s.threeSum(nums);
    for(auto it:v)
    {
      for(auto itt:it)
      {
         cout<<itt<<" ";
      }
      cout<<endl;
    }
    return 0;
}