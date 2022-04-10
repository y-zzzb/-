#include <bits/stdc++.h>
using namespace std;
char zh(char a)
{
    if(a>='a'&&a<='z')
    {
        if(a<='x')
        {
            a=a-'a'+'A'+2;
        }
        else if(a=='y')
            a='A';
        else
            a='B';
    }
    else
    {
        if(a<='Y')
            a=a-'A'+'a'+1;
        else
            a='a';
    }
    return a;
}
int main() {
    int n,total=0;
    char str[100][85];
    int flag[100][2];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        for(int j=0;j< strlen(str[i]);j++)
        {
            if(str[i][j]=='.') {
                flag[i][0]=1;
                flag[i][1]=j;
                total++;
                break;
            }
        }
    }
    cout<<total;
    for(int i=0;i<n;i++)
    {
        if(flag[i][0]==1)
        {
                if(str[i][1]>='0'&&str[i][1]<='9')
                {
                    cout<<str[i][0]<<str[i][1];
                    printf("%.02d",flag[i][1]-2);
                    for(int j=2;j<flag[i][1];j++)
                    {
                        cout<<zh(str[i][j]);
                    }
                }
                else
                {
                    cout<<'0'<<str[i][0];
                    printf("%.02d",flag[i][1]-1);
                    for(int j=1;j<flag[i][1];j++)
                    {
                        cout<<zh(str[i][j]);
                    }
                }
        }
    }
    cout<<'.';

    return 0;
}

