#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;
	while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] > key) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1; 
}
int main() {
    int arr[] = {12, 34, 45, 67, 89, 123, 456, 789};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;
    printf("Enter the number to search:2");
    scanf("%d", &key);
    index = binarySearch(arr, size, key);
    if (index != -1) {
        printf("Number found at index %d.\n", index);
    } else {
        printf("Number not found in the array.\n");
    }
return 0;
}
