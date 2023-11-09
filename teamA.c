#include <stdio.h>
int main() {
    int n;
    int count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++){
            int arrNum;
            scanf("%d", &arrNum);
            sum = sum + arrNum;
        }
        if(sum > 1){
            count ++;
        }
    }
    printf("%d", count);
    

    return 0;
}
