#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
        total += data[i];
    }

    float rataRata = (float)total / n;

    printf("Jumlah data: %d\n", total);
    printf("Rata-rata: %.2f\n", rataRata);

    // Urutkan data (gunakan algoritma quicksort)
    // ...

    // Cari nilai tengah (median)
    // ...

    return 0;
}
