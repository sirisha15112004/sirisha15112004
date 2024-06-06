#include <stdio.h>
int main() {
    int num;
    
    printf("Enter the number of elements in the set: ");
    scanf("%d", &num);
    
    printf("Enter %d numbers:\n", num);
    
    for(int i = 0; i < num; i++) {
        int x;
        printf("Enter number %d: ", i+1);
        scanf("%d", &x);
        
        if(x % 2 == 0) {
            printf("%d is even.\n", x);
        } else {
            printf("%d is odd.\n", x);
        }
    }
    
    return 0;
}
