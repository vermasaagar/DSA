#include <stdio.h>

void heapify(int arr[], int n, int i)
 {

    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void printMaxHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int maxHeap[] = { 10, 8, 7, 6, 5, 2, 1 };
    int size = sizeof(maxHeap) / sizeof(maxHeap[0]);

    buildMaxHeap(maxHeap, size);
    printMaxHeap(maxHeap, size);

    return 0;
}

