#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>nums;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<bool>row(n,false);
        vector<bool>col(m,false);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(row[i]==true or col[j]==true)
                    matrix[i][j]=0;
            }
        }
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
      vector<int>num;
      for(int j=0;j<m;j++)
      {
         int k;
        cin>>k;
        num.push_back(k);
      }
      nums.push_back(num);
    }
    Solution s;
    s.setZeroes(nums);

    for(auto it:nums)
    {
      for(auto itt:it)
      {
         cout<<itt<<" ";
      }
      cout<<endl;
    }
    return 0;
}