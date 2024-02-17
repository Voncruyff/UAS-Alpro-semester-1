#include <stdio.h>

#define MAX_SIZE 100 

void findThreeLargest(int arr[], int n) {
    int first, second, third;
    first = second = third = -2147483647; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] < second) {
            third = arr[i];
        }
    }

    printf("Tiga elemen terbesar adalah: %d, %d, %d\n", first, second, third);
}

int main() {
    int arr[MAX_SIZE] = {10, 4, 30, 8, 12, 25, 6};
    int n = 7;

    findThreeLargest(arr, n);

    return 0;
}
