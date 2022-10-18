#include <stdio.h>
#include <math.h>

int main(){
    int A, B, alas, keliling, luas;
    scanf("%d", &A);
    scanf("%d", &B);
    alas = sqrt(pow(B,2)-pow(A,2));
    keliling = alas+A+B;
    luas = 0.5*alas*A;
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", A);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);
}