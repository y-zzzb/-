#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,total=0;
    string str="";
    cin>>n;
    while(n!=1)
    {
        if(n%2!=0)
        {
            n--;
            total++;
            str=str+'-';
        }
        else
        {
            n=n/2;
            total++;
            str=str+'^';
        }
    }
    cout<<total<<endl;
    cout<<str;
    return 0;
}
