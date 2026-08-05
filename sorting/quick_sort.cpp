#include <iostream>
#include <vector>
using namespace std;

// Function to place the pivot in its correct position
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    // Base Case
    if (low >= high)
        return;

    int pIndex = partition(arr, low, high);

    // Sort left half
    quickSort(arr, low, pIndex - 1);

    // Sort right half
    quickSort(arr, pIndex + 1, high);
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}