#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0;
        int i=0,j=height.size()-1,k;
        // for(int i=0;i<height.size();i++)
        // {
        //     for(int j=height.size()-1;j>i;j--)
        //     {
        //         int k=min(height[i],height[j])*(j-i);
        //         s=max(s,k);
        //     }
        // }
        
        while(i<j)
        {
            if(height[j]<height[i])
            {
                k=height[j]*(j-i);
                j--;
            }
            else
            {
                k=height[i]*(j-i);
                i++;
            }
            s=max(s,k);
            
        }
        return s;
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
    cout<<s.maxArea(nums)<<endl;
    return 0;
}