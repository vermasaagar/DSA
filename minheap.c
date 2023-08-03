#include <stdio.h>

void heapify(int arr[], int n, int i) 

{
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] < arr[smallest]) {
        smallest = left;
    }

    if (right < n && arr[right] < arr[smallest]) {
        smallest = right;
    }

    if(smallest != i) {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
        heapify(arr, n, smallest);                  
    }
}

void buildMinHeap(int arr[], int n) {
    for(int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void printMinHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int minHeap[] = { 10, 20, 50, 60, 70, 80, 100 };
    int size = sizeof(minHeap) / sizeof(minHeap[0]);

    buildMinHeap(minHeap, size);
    printMinHeap(minHeap, size);

    return 0;
}
