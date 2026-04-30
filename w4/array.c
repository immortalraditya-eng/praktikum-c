#include <stdio.h>

// Fungsi untuk sorting (Bubble Sort)
void sort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi menghitung mean
float mean(int arr[], int n) {
    int i;
    float sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

// Fungsi menghitung median
float median(int arr[], int n) {
    sort(arr, n); // urutkan dulu

    if(n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}

// Fungsi menghitung mode
int mode(int arr[], int n) {
    int i, j;
    int maxCount = 0, modeValue = arr[0];

    for(i = 0; i < n; i++) {
        int count = 0;
        for(j = 0; j < n; j++) {
            if(arr[j] == arr[i]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            modeValue = arr[i];
        }
    }
    return modeValue;
}

int main() {
    int n, i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int arr[n];

    printf("Masukkan %d bilangan:\n", n);
    for(i = 0; i < n; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nMean   = %.2f\n", mean(arr, n));
    printf("Median = %.2f\n", median(arr, n));
    printf("Mode   = %d\n", mode(arr, n));

    return 0;
}