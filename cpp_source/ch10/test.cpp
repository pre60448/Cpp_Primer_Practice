#include<iostream>
#include<string>
#include<unordered_map>
#include<fstream>
#include<sstream>
#include<vector>
#include<functional>
using namespace std;

class Solution {
public:
    int getMoneyAmount(int n) {
        function<int(int,int)> dfs=[&](int i,int j)
        {
            if(i>=j) return 0;
            int ans=100;
             for(int x=i;x<=j;x++)
             {
                int l=x+dfs(i,x-1);
                int r=x+dfs(x+1,j);
                l=max(l,r);
                //cout<<l<<endl;
                ans=min(ans,l);
             }
             return ans;
        };
        return dfs(1,n);
    }
};

int main()
{
    Solution xyc;
    cout<<xyc.getMoneyAmount(10);
}