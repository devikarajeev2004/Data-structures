#include <stdio.h>
void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[low];  // Select the first element as the pivot
    int i = low;
    for (int j = low + 1; j <= high; j++) {
        if (array[j] < pivot) {
            i++;
            swap(array, i, j);
        }
    }
    swap(array, low, i);  // Swap the pivot with the element at i
    return i;
}

void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

void main() {
    int limit, i;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    int a[limit];
    printf("Enter the numbers to be sorted:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, limit - 1);
    printf("Sorted array: ");
    for (i = 0; i < limit; i++) {
        printf("%d ", a[i]);
    }
}
