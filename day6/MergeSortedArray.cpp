#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        vector<int>v(v1.begin(),v1.end());
        int k=v.size();
        int j=0,q=0,i=0;
        while(j<m && q<n && i<k)
        {
            if(v[j]<v2[q])
            {
                v1[i]=v[j];
                j++;
            }
            else
            {
                v1[i]=v2[q];
                q++;
            }
            i++;
        }
        while(j<m)
        {
            v1[i]=v[j];
            j++;
            i++;
        }
        while(q<n)
        {
            v1[i]=v2[q];
            q++;
            i++;
        }
     //   return v;
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>nums1(m+n,0);
    vector<int>nums2;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums1[i]=(k);
    }
    for(int i=0;i<m;i++)
    {
        int k;
        cin>>k;
        nums2.push_back(k);
    }
    Solution s;
    s.merge(nums1,n,nums2,m);
    for(auto it:nums1)
      cout<<it<<" ";
    return 0;
}