#include <stdio.h>
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int arr[] = {12, 34, 45, 67, 89, 123, 456, 789};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;
    printf("Enter the number to search: ");
    scanf("%d", &key);
    index = linearSearch(arr, size, key);
    if (index != -1) {
        printf("Number found at index %d.\n", index);
    } else {
        printf("Number not found in the array.\n");
    }
	return 0;
}
