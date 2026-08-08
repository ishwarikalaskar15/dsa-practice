#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,5,7,10,8};
    int largest=arr[0];

    for(int i=0;i<5;i++)
    {
        if(arr[i]>largest)
        largest= arr[i];
    }
    cout<<"largest element is " <<largest;
    return 0;
}
