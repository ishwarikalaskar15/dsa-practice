#include<bits/stdc++.h>
using namespace std;

void func(int n);

 int main() 
 {
    int n;
    cin>>n;
    func(n);
    return 0;
 }
    void func(int n)
    {
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for( int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
         
        cout<<endl;
    }
}


  