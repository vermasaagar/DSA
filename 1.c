#include <stdio.h>


void heapify(int arr[], int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  // If left child is greater than root
  if (left < n && arr[left] > arr[largest]) {
    largest = left;
  }

  // If right child is greater than largest so far
  if (right < n && arr[right] > arr[largest]) {
    largest = right;
  }

  // If largest is not the root
  if (largest != i) {
    // Swap the root with the largest element
    int temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;

    // Recursively heapify the affected subtree
    heapify(arr, n, largest);
  }
}

// Function to sort the array using heap sort

void buildMaxHeap(int arr[], int n) {
  for (int i = (n - 2) / 2; i >= 0; i--) {
    heapify(arr, n, i);
  }
}






// Function to print the array
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Function to create a max heap


void heapSort(int arr[], int n) {
  buildMaxHeap(arr, n);

  for (int i = n - 1; i > 0; i--) {
    // Swap the root with the last element
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;

    // Heapify the reduced heap
    heapify(arr, i, 0);
  }
}

// Function to heapify the array at given index


int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // Create an array of n elements
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the %dth element: ", i + 1);
    scanf("%d", &arr[i]);
  }

  // Print the unsorted array
  printf("Unsorted array: ");
  printArray(arr, n);

  // Sort the array using heap sort
  heapSort(arr, n);

  // Print the sorted array
  printf("Sorted array: ");
  printArray(arr, n);

  return 0;
}
