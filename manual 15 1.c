#include <stdio.h> 
int main() {
int num[6]; 
for(int i = 1; i < 6; i++) {
    printf("Enter number %d >  ", i); 
    scanf("%d", &num[i]); 
}
printf("The reverse order is:  "); 
    for (int i = 5; i >= 0; i--) {
        printf("%d", num[i]);
        if (i>0) {
            printf(", "); 
        }
    }
    printf(".");
return 0; 
}