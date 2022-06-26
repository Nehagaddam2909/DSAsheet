#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n,m;
    int getLive(vector<vector<int>>&board,int i,int j)
    {
         vector<vector<int>>dim={
            {-1,-1},{-1,1},{-1,0},
            {1,1},{1,-1},{1,0},
            {0,-1},{0,1}
        };
        int live_count=0;
        for(auto it:dim)
                {
                    int newi=i+it[0];
                    int newj=j+it[1];
                    
                    if(newi<n and newi>=0 and newj<m and newj>=0)
                    {
                        if(board[newi][newj])
                            live_count++;
                       
                    }
                }
        return live_count;    
    }
    void gameOfLife(vector<vector<int>>& board) {
        n=board.size(),m=board[0].size();
        vector<vector<int>>v=board;
        
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int live_count=0,dead_count=0;
                
                live_count=getLive(v,i,j);
            
                if(board[i][j])
                {
                    if(live_count<2 || live_count>3)
                        board[i][j]=0;
                   
                }
                else
                {
                    if(live_count==3)
                        board[i][j]=1;
        
                }
                //cout<<live_count<<":"<<board[i][j]<<" ";
                
                
            }
            //cout<<endl;
        }
        v=board;
        
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>nums;
    for(int j=0;j<n;j++)
    {
      vector<int>t;
      for(int i=0;i<m;i++)
      {
         int k;
         cin>>k;
         t.push_back(k);
      }
      nums.push_back(t);
    }
    
    Solution s;
    s.gameOfLife(nums);
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