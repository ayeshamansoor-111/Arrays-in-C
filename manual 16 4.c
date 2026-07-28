#include <stdio.h> 
void multiply(float A[2][3], float B[3][2], float D[2][2]) {
    for(int i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            D[i][j] += A[i][k] * B[k][k]; 
        }
    }
}
int main() {
    float matA[2][3], matB[3][2], matD[2][2]; 
        printf("Enter 2x3 matrix:"); 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) { 
            printf("Enter element[%d][%d]: ", i+1, j+1); 
            scanf("%f", &mat[i][j]); 
        }
    }
    printf("\nMatrix A = \n"); 
     for (int i = 0; i < 2; i++) {
         printf("|"); 
         for (int j = 0; j < 3; j++) { 
             printf(" %.1f ", mat[i][j]); }
             printf("|\n"); 
            } 
             printf("Enter 3x2 matrix:"); 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { 
            printf("Enter element[%d][%d]: ", i+1, j+1); 
            scanf("%f", &mat[i][j]); 
        }
    }
    printf("\nMatrix A = \n"); 
     for (int i = 0; i < 3; i++) {
         printf("|"); 
         for (int j = 0; j < 2; j++) { 
             printf(" %.1f ", mat[i][j]); }
             printf("|\n"); 
            } 
           printf("Result D = A x B\n"); 
           printf("(2 x 2): ") 
           printf("|%d  %d|", )
           multiply(matA, matB, matD); 
           return 0; 

}