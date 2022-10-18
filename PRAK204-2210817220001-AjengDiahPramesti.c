#include <stdio.h>

int main()
{
    float tinggi, jarijari, volume, luas, keliling, phi;
    scanf("%f", &jarijari);
    scanf("%f", &tinggi);
    phi = 22/7;
    volume = 22*jarijari*jarijari*tinggi/7;
    luas = (2*22*jarijari/7)*(jarijari+tinggi);
    keliling = 2*22*jarijari/7;
    printf("Volume = %1.2f\n", volume);
    printf("Luas = %1.2f\n", luas);
    printf("Keliling = %1.2f\n", keliling);
}