#include <iostream>
#include <array>
#include <cstdlib> // for rand()
#include <ctime>   // for seeding rand()
#define MAX 12
using namespace std;

// Insertion Sort for small sub arrays
void insertionSort(int *arr, int s, int e) {
    for (int i = s + 1; i <= e; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= s && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Function to randomize the pivot element
int randomizedPivot(int *arr, int s, int e) {
    srand(time(0));  // Seed the random number generator
    int randomIndex = s + rand() % (e - s + 1);
    swap(arr[s], arr[randomIndex]);  // Swap random pivot to the start
    return arr[s];
}

// Partitioning function with randomized pivot
int pivot(int *arr, int s, int e) {
    int pivotElement = randomizedPivot(arr, s, e);

    // Count how many elements are less than or equal to the pivot element
    int count = 0;
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivotElement) {
            count++;
        }
    }

    // Place the pivot at its correct position
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // Partition the array around the pivot
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= arr[pivotIndex]) i++;
        while (arr[j] > arr[pivotIndex]) j--;
        if (i < pivotIndex && j > pivotIndex) swap(arr[i], arr[j]);
    }

    return pivotIndex;
}

// Tail-recursive quicksort with optimizations
void quickSort(int *arr, int s, int e) {
    // Use insertion sort for small subarrays
    if (e - s <= 10) {
        insertionSort(arr, s, e);
        return;
    }
    if (s >= e)
    {
        return;
    }

    int p = pivot(arr,s,e);

  
    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);
    }


int main() {
    array<int, MAX> arr;
    cout << "Enter the elements of the array one by one: ";
    for (int i = 0; i < MAX; i++) {
        cin >> arr[i];
    }

    quickSort(&arr[0], 0, MAX - 1);

    cout << "Printing the sorted array by quicksort algorithm: " << endl;
    for (int i = 0; i < MAX; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
