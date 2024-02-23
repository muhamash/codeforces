#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char prev, curr;
    int counter = 0;

    scanf(" %c", &prev); 
    
    for (int i = 1; i < n; i++) {
        scanf(" %c", &curr);
        
        if (curr == prev) {
            counter++;
        }
        
        prev = curr;
    }

    printf("%d\n", counter);

    return 0;
}