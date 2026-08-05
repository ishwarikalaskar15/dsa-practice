#include <bits/stdc++.h>
using namespace std;

/*void f(int arr[], int l, int r);

int main()
{
    int n;
    cout << "Enter number of array elements: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    f(arr, 0, n - 1);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void f(int arr[], int l, int r)
{
    if(l >= r)
        return;

    swap(arr[l], arr[r]);
    f(arr, l + 1, r - 1);
}*/

//without using two vaiables
void f(int arr[], int n, int i);

int main()
{
    int n;
    cout << "Enter number of array elements: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    f(arr, n, 0);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void f(int arr[], int n, int i)
{
    if(i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    f(arr, n, i + 1);
}




