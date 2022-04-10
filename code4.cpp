#include <bits/stdc++.h>
using namespace std;
int m,n,arr[1005],num[1005],Max=INT_MAX;
void dfs(int k,int step)
{
    if(k==m)
    {
        int Max_n=0;
        for(int i=0;i<m;i++)
            Max_n=max(Max_n,num[i]);
        Max=min(Max_n,Max);
        return;
    }
    if(k!=m-1) {
        for (int i = step; i < n; i++) {
            for (int j = step; j <=i; j++) {
                num[k] = arr[j] + num[k];
            }
            dfs(k+1,i+1);
            num[k]=0;
        }
    }
    else{
        for(int i=step;i<n;i++)
            num[k]=num[k]+arr[i];
        dfs(k+1,n);
        num[k]=0;
    }

}
int main() {
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dfs(0,0);
    cout<<Max;
    return 0;
}

