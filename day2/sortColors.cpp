 #include<bits/stdc++.h>
using namespace std;
vector<int>nums;
 void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int mid=0;
        while(mid<=j)
        {
            if(nums[mid]==2)
            {
                swap(nums[j],nums[mid]);
                j--;
            }
            else if(nums[mid]==0)
            {
                swap(nums[i],nums[mid]);
                i++;
                mid++;
            }
            else
            {
                mid++;
            }
        }
    }


    int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    
    sortColors(nums);
   cout<<"Sorted colors..."<<endl;
    for(auto it:nums)
      cout<<it<<" ";
    return 0;
}