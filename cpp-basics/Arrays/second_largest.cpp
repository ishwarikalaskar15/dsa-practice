#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {3,6,3,6,9,5};

    int largest= arr[0];
    int slargest= -1;
    
    for(int i=0;i<6;i++)
    {
        if(arr[i]> largest)
        {
            slargest= largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    cout << "Second Largest Element is: "<< slargest;
    return 0;

}