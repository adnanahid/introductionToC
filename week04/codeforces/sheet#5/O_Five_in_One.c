#include <stdio.h>

int maximun(int len, int arr[]) {
    int max = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int minimun(int len, int arr[]) {
    int min = 101;
    for (int i = 0; i < len; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int prime(int len, int arr[]) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == 2)
            count++;
        if (arr[i] < 2)
            continue;
        if (arr[i] % 2 == 0)
            continue;

        int isPrime = 1;
        for (int j = 3; j * j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            count++;
    }
    return count;
}

int palindrome(int len, int arr[]) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        int theNum = arr[i], reminder = 0, reversed = 0;
        while (theNum) {
            reminder = theNum % 10;
            theNum = theNum / 10;
            reversed = reversed * 10 + reminder;
        }
        if (arr[i] == reversed)
            count++;
    }
    return count;
}

int divisor(int len, int arr[]) {
    int freqArr[len];
    for (int i = 0; i < len; i++) {
        freqArr[i] = 0;
    }

    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                freqArr[i]++;
            }
        }
    }

    int theMaxIdx;
    int max = 0;

    for (int i = 0; i < len; i++) {
        if (freqArr[i] > max) {
            max = freqArr[i];
            theMaxIdx = i;
        }
    }

    int maxvalues[len];
    for (int i = 0; i < len; i++) {
        maxvalues[i] = 0;
    }

    for (int i = 0; i < len; i++) {
        if (freqArr[i] == max) {
            maxvalues[i]++;
        }
    }

    int theMaxDivisor = 0;

    for (int i = 0; i < len; i++) {
        if (maxvalues[i] == 1 && arr[i] > theMaxDivisor)
            theMaxDivisor = arr[i];
    }

    return theMaxDivisor;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = maximun(n, arr);
    int min = minimun(n, arr);
    int prm = prime(n, arr);
    int pal = palindrome(n, arr);
    int div = divisor(n, arr);

    printf("The maximum number : %d\nThe minimum number : %d\nThe number of prime numbers : %d\nThe number of palindrome numbers : %d\nThe number that has the maximum number of divisors : %d\n", max, min, prm, pal, div);

    return 0;
}