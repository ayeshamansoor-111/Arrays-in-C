#include <stdio.h> 
void Adjoint_of_A(float mat[2][2], float adjoint[2][2]); 
float Determinant(float matA[2][2]);  
float Inverse_Func(float det, float ad[2][2]); 
int main() {
    float matrix[2][2], adj[2][2], res; 
    printf("Enter the matrix A\n")
 for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("Entera%d%d: ", i + 1, j +1); 
        scanf("%f", &matrix[i][j])
    }
 }
  printf("A = |a11 a12| = |%.2f  %.2f|", matrix[0][0], matrix[0][1]); 
  printf("\n  |a21 a22| = |%.2f  %.2f|", matrix[1][0], matrix[1][1]); 
  Adjoint_of_A(matrix, adj); 
   printf("Adjoint = |a11 a12| = |%.2f  %.2f|", adj[0][0] , adj[0][1]); 
  printf("\n         |a21 a22| = |%.2f  %.2f|", adj[1][0], adj[1][1]); 
  res = Determiant(matrix[2][2]); 
  printf("Determiant of A = %f\n", res); 
  printf("The inverse of the function is:  ", Inverse_Func(res, adj[2][2])); 
    return 0; 
}
void Adjoint_of_A(float mat[2][2], float adjoint[2][2]) { 
    adjoint[0][0] = mat[1][1]; 
    adjoint[1][1] = mat[0][0]; 
    adjoint[0][1] = -mat[0][1]; 
    adjoint[1][0] = -mat[1][0]; 
}
float Determinant(float matA[2][2]) {
    int result = (matA[0][0] * matA[1][1]) - (matA[0][1] * matA[1][0]); 
    return result; 
} 