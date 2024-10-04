#include <stdio.h>

int searchMode(int arr[], int size) {
    if (size <= 0) {
        return -1;
    }

    int mode = arr[0];
    int modeCount = 1;

    for (int i = 0; i < size; i++) {
        int currentElement = arr[i];
        int currentCount = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[j] == currentElement) {
                currentCount++;
            }
        }

        if (currentCount > modeCount) {
            mode = currentElement;
            modeCount = currentCount;
        }
    }

    return mode;
}

int main() {
    int arr[] = {2, 4, 4, 7, 7, 4, 5, 7, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int mode = searchMode(arr, size);

    if (mode != -1) {
        printf("Mode is : %d\n", mode);
    } else {
        printf("No Mode!\n");
    }

    return 0;
}
