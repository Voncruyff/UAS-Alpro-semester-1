#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Pilih pivot (elemen terakhir)
    int i = (low - 1); // Indeks elemen yang lebih kecil dari pivot

    for (int j = low; j <= high - 1; j++) {
        // Jika elemen saat ini lebih kecil dari atau sama dengan pivot
        if (arr[j] <= pivot) {
            i++; // Tukar elemen yang lebih kecil dengan elemen di indeks i
            swap(&arr[i], &arr[j]);
        }
    }
    // Tukar pivot dengan elemen di indeks i+1
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        // Partisi array dan dapatkan indeks pivot
        int pi = partition(arr, low, high);

        // Urutkan elemen sebelum dan sesudah pivot
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 77, 8, 9, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    printf("Array terurut:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
