#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //vector<int>prefix;
        int s=0,n=cardPoints.size();
        for(int i=0;i<k;i++)
        {
            s+=cardPoints[i];
            //prefix.push_back(s);
        }
        int j=n-1,mx=s,i=k-1;
        while(i>=0)
        {
            s-=cardPoints[i];
            i--;
            s+=cardPoints[j];
            j--;
            
            mx=max(mx,s);
        }
        //cout<<mx<<endl;
        return mx;
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        nums.push_back(k);
    }
    Solution s;
    cout<<s.maxScore(nums,m)<<endl;
    return 0;
}