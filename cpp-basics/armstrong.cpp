#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"enter a number";
    cin>>n;
    int x=n;
    while(x>0)
    {
        int ld=x%10;
        sum=sum+(ld*ld*ld);
        x=x/10;

    }
    if(n==sum) cout<<"is armstrong number";
    else cout<<" not armstrong number";

    return 0;

}