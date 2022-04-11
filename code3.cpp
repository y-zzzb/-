#include<bits/stdc++.h>
using namespace std;
string S;
int step_min=INT_MAX;
void dfs(int n,string str,int step)
{
    if(n==1)
    {
        if(step_min>step)
        {
            step_min=step;
            S=str;
        }
        return;
    }
    else
    {
        if(n%2==0)
        dfs(n/2,str+'^',step+1);
        else
        {
            dfs(n-1,str+'-',step+1);
            dfs(n+1,str+'+',step+1);
        }
    }
}
int main()
{
    int n;
    string s;
    cin>>n;
    dfs(n,s,0);
    cout<<S;
    return 0;
}
