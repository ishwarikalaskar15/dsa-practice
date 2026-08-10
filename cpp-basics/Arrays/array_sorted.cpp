#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[6] = {1, 2, 1, 4, 5, 6};

    bool sorted = true;

    for (int i = 1; i < 6; i++) {
        if (a[i] < a[i - 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Given array is sorted";
    else
        cout << "Given array is not sorted";

    return 0;
}