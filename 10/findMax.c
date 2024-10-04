#include <stdio.h>

int maximum(int arr[], int x) {

    if (x == 1) {
        return arr[0];
    }

    int maxRest = maximum(arr, x - 1);

    if (arr[x - 1] > maxRest) {
        return arr[x - 1];
    } else {
        return maxRest;
    }
}

int main() {

    int x;
    printf("Masukkan banyak angka : ");
    scanf("%d", &x);

    int arr[x];

    printf("Masukkan angka-angka : ");
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    int max = maximum(arr, x);
    printf("Angka maksimum adalah : %d\n", max);

    return 0;
}
