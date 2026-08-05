#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the name";
    cin>>n;

    int rev=0;
    while(n>0)
    {
        int lastdigit= n%10;
        rev=(rev*10)+lastdigit;
        n=n/10;
    }
    cout<<"reverse number of the given number is"<<rev;

    return 0;
}
