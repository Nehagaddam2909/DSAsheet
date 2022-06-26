#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int c=0;
    void merge(vector<int>&nums,int low,int mid,int high)
    {
        int i=low;
        int j=mid+1;
        
        while(j<=high and i<=mid)
        {
            if((long)nums[i] > (long) 2 * nums[j])
            {
                c+=((mid+1)-i);
                j++;
            }
            else
            {
                i++;
            }
        }
        
        sort(nums.begin() + low, nums.begin() + high + 1);

    }
    void mergeSort(vector<int>& nums,int low,int high)
    {
        if(low>=high)
        {
            return;
        }
        int mid=(low+high)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        
        merge(nums,low,mid,high);
        return;
    }
    int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
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
    cout<<s.reversePairs(nums)<<endl;
    return 0;
}