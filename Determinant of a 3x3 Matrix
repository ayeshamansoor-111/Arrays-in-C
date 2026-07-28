#include <stdio.h> 
int main() {
    int mat[3][3]; 
    printf("Define Matrix A (3x3) "); 
    printf("\nEnter a11 >>  "); 
    scanf("%d", &mat[0][0]); 
    printf("Enter a12 >>  "); 
    scanf("%d", &mat[0][1]); 
     printf("Enter a13 >>  "); 
    scanf("%d", &mat[0][2]); 
    printf("Enter a21 >>  ");
    scanf("%d", &mat[1][0]); 
    printf("Enter a22 >>  ");  
    scanf("%d", &mat[1][1]); 
    printf("Enter a23 >>  "); 
    scanf("%d", &mat[1][2]); 
     printf("Enter a31 >>  ");
    scanf("%d", &mat[2][0]); 
    printf("Enter a32 >>  ");  
    scanf("%d", &mat[2][1]); 
    printf("Enter a33 >>  "); 
    scanf("%d", &mat[2][2]); 
    printf("A = |a11 a12 a13| =  |%d   %d  %d|", mat[0][0], mat[0][1], mat[0][2]); 
    printf("\n    |a21 a22 a23| =  |%d   %d  %d|", mat[1][0], mat[1][1], mat[1][2]); 
    printf("\n    |a31 a32 a33| =  |%d   %d  %d|", mat[2][0], mat[2][1], mat[2][2]); 
   int det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]); 
    printf("\ndet (A) = %d", det); 
     return 0; 
}


