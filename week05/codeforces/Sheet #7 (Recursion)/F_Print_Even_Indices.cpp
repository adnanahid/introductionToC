#include <iostream>
using namespace std;

void evenIndices(int start, int n, int arr[]) {
    if (start > n - 1) return;
    evenIndices(start + 2, n, arr);
    cout << arr[start] << " ";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    evenIndices(0, n, arr);
    return 0;
}