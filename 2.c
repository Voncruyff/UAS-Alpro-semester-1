#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Data ditemukan pada indeks mid
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Data tidak ditemukan
}

int main() {
    int n;
    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &n);

    int nilai[n];
    for (int i = 0; i < n; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    int target;
    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &target);

    int posisi = binarySearch(nilai, n, target);
    if (posisi != -1) {
        printf("Data dengan nilai %d ditemukan pada indeks %d.\n", target, posisi);
    } else {
        printf("Data dengan nilai %d tidak ditemukan.\n", target);
    }

    return 0;
}
