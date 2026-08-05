#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int rev=0;
    cout<<"enter the number";
    cin>>n;
    int x=n;

    while(x>0)
    {
        int ld=x%10;
        rev=(rev*10)+ld;
        x=x/10;
    }
    cout<<" the original number is " <<n<<endl;
    cout<<" reverse of the given number is" << rev<<endl;
    if(n==rev)
    {
        cout<<"given number is palindrome"<<endl;
    }
    else
    {
        cout<<"given number is not palindrome"<<endl;
    }
    return 0;
}
