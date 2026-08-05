#include<bits/stdc++.h>
using namespace std;
int n;
int f(int n);
int main()
{
   cout<<"enter a number";
   cin>>n;
   cout<<f(n);
}
int f( int n)
{
    if(n<=1)
    return n;

    int last=f(n-1); // multiple recursive call
    int slast=f(n-2);
    return last+slast;

}

