#include <stdio.h>
#define MAX_SIZE 100
int insertElement(int arr[], int size, int element, int position) {
    if (size >= MAX_SIZE) {
        printf("Array is full. Cannot insert element.\n");
        return size;
    }
    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element;
	return size + 1; 
}
int deleteElement(int arr[], int size, int position) {
    if (size == 0) {
        printf("Array is empty. Cannot delete element.\n");
        return size;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
	return size - 1; 
}
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;
	while (1) {
        printf("\nArray Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter position to insert: ");
                scanf("%d", &position);
                size = insertElement(arr, size, element, position);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                size = deleteElement(arr, size, position);
                break;
            case 3:
                displayArray(arr, size);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
	return 0;
}
