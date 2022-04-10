#include<bits/stdc++.h>
using namespace std;
bool pd(int x)
{
    if(x==1)
        return false;
    if(x==2)
        return true;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,x1,flag=0;//利用哥德巴赫猜想：可拆分为三个素数之和
    cin>>n;
    if(n==2)
        cout<<2<<" = "<<2;
    else if(n==3)
        cout<<3<<" = "<<3;
    else if(n==4)
        cout<<2<<" = "<<2<<" + "<<2;
    else if(n==5)
        cout<<5<<" = "<<2<<" + "<<3;
    else
        for(int i=2;i<=n/3;i++) {
            if (pd(i)) {
                for (int j = 2; j <=(n - i)/2; j++) {
                    if(pd(j)&&pd(n-i-j))
                    {
                        flag=1;
                        cout<<n<<" = "<<i<<" + "<<j<<" + "<<n-i-j;
                        break;
                    }
                }
            }
            {
                if(flag==1)
                    break;
            }
        }
    return 0;
}
