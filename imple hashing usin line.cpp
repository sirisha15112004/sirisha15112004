#include <stdio.h>
#define SIZE 10

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int hashTable[], int key) {
    int index = hashFunction(key);
    int i = 0;
    while (hashTable[(index + i) % SIZE] != -1) {
        i++;
        if (i == SIZE) {
            printf("HashTable is full. Cannot insert key: %d\n", key);
            return;
        }
    }
    hashTable[(index + i) % SIZE] = key;
}

void display(int hashTable[]) {
    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d : %d\n", i, hashTable[i]);
    }
}

int main() {
    int hashTable[SIZE];
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1; // initialize hash table slots to -1
    }
    
    insert(hashTable, 5);
    insert(hashTable, 25);
    insert(hashTable, 15);
    insert(hashTable, 35);
    insert(hashTable, 45);
    insert(hashTable, 55);
    insert(hashTable, 65);
    insert(hashTable, 75);
    insert(hashTable, 85);
    insert(hashTable, 95);
    insert(hashTable, 105); // this should not insert, as table is full
    
    display(hashTable);
    
    return 0;
}
