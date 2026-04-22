// add a value at a specific index in an array and shift the elements to the right
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n + 1];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int index, value;
//     scanf("%d %d", &index, &value);

//     for (int i = n; i > index; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[index] = value;

//     for (int i = 0; i < n + 1; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     printf("size of the array: %d", sizeof(arr));

//     return 0;
// }

// remove a value at a specific index in an array and shift the elements to the left
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int index;
//     scanf("%d", &index);

//     for (int i = index; i < n - 1; i++) {
//         arr[i] = arr[i + 1];
//     }
//     for (int i = 0; i < n - 1; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// reverse an array
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int middle = n / 2;
    for (int i = 0; i < middle; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}