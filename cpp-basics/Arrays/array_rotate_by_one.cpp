#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int temp = arr[0];
 //   int n;

    for(int i=0;i<6;i++){
        arr[i-1] = arr[i];
    }

    arr[6-1] = temp;

    for(int x: arr){
        cout<< x << endl;
    }

    return 0;

}