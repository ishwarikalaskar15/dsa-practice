#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cn=0;
    int n;
    cout<<"enter the number";
    cin>>n;
    

    while(n>0)
    {
        int lastdigit= n%10;
        cn=cn+1;
        n=n/10;
    }
     cout<<" number of the digit"  << cn;
     return 0;    
}

//time complexity= o(log10(n))
