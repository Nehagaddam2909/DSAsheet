#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>a;
    int n;
    bool bfs(int start,vector<int>& visited)
    {
        if(!visited[start])
        {
            if(a[start]==0)
                return true;
            bool check=false,check1=false;
            visited[start]=true;
            if(start+a[start]<n)
            {
                check=bfs(start+a[start],visited);
            }
            if(start-a[start]>=0)
            {
                check1=bfs(start-a[start],visited);
            }
            if(check || check1)
                return true;
            //return false;
            
        }
        return false;
        
    }
    bool canReach(vector<int>& arr, int start) {
        n=arr.size();
        a=arr;
        vector<int>visited(n,false);
        
        
        return bfs(start,visited);
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
    cout<<s.canReach(nums,m)<<endl;
    return 0;
}