#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    int a[10][10],b[10][10],x1,y1,pre,x2,y2;
    n=rand()%5+3;
    m=rand()%5+3;
    cout<<n<<" "<<m<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            a[i][j]=1+rand()%9;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    if(n%2==0)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(i<=n/2)
                {
                    if(j>i-2&&j<m-i+1)
                    {
                        b[i][j+1]=a[i][j];
                        x1=i;
                        y1=j+1;
                        x2=i;
                        y2=j;
                        pre=b[i][j+1];
                    }
                    else
                    {
                        if(j<=i-2)
                        {
                            b[i-1][j]=a[i][j];
                            x1=i;
                            y1=j+1;
                            x2=i;
                            y2=j;
                            pre=b[i][j+1];
                        }
                        else
                        {
                            b[i+1][j]=a[i][j];
                            x1=i;
                            y1=j+1;
                            x2=i;
                            y2=j;
                            pre=b[i][j+1];
                        }
                    }
                }
                else
                {
                    if(j>1+(n-i)&&j<=m-(n-i))
                    {
                        b[i][j-1]=a[i][j];
                        x1=i;
                        y1=j+1;
                        x2=i;
                        y2=j;
                        pre=b[i][j+1];
                    }
                    else
                    {
                        if(j<=1+(n-i))
                        {
                            b[i-1][j]=a[i][j];
                            x1=i;
                            y1=j+1;
                            x2=i;
                            y2=j;
                            pre=b[i][j+1];
                        }
                        else
                        {
                            b[i+1][j]=a[i][j];
                            x1=i;
                            y1=j+1;
                            x2=i;
                            y2=j;
                            pre=b[i][j+1];
                        }
                    }
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
