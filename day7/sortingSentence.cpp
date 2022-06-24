#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simple_tokenizer(string s)
    {
        stringstream ss(s);
        string word;
        //vector<string>v;
        map<int,string>mp;
        while (ss >> word) {
            mp[word[word.length()-1]]=word.substr(0,word.length()-1);
        }
        
        string k;
        for(auto it:mp)
        {            
            k+=it.second+" ";
        }
        return k.substr(0,k.length()-1);
    }
 
    string sortSentence(string s) {
        return simple_tokenizer(s);
        //return s;
    }
};

int main()
{
   string str;
   cin>>str;
    Solution s;
    cout<<s.sortSentence(str)<<endl;
    return 0;
}