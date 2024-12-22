#include <stdio.h>

/*

8) Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex:
Digite uma distância em metros: 185.72
A distância de 85.7m corresponde a:
0.18572Km
1.8572Hm
18.572Dam
1857.2dm
18572.0cm
185720.0mm

*/

int main() {
    float metros = 0, km = 0, hm = 0, dam = 0, dm = 0, cm = 0, mm = 0;

    printf("Digite uma distancia em metros: \n"); 
    scanf("%f", &metros);

    km = metros / 1000;
    hm = metros / 100;
    dam = metros / 10;
    dm = metros * 10;
    cm = metros * 100;
    mm = metros * 1000;

    printf("A distancia de %.2f metros corresponde a: \n", metros);
    printf("%.2f km \n", km);
    printf("%.2f hm \n", hm);
    printf("%.2f dam \n", dam);
    printf("%.2f dm \n", dm);
    printf("%.2f cm \n", cm);
    printf("%.2f mm \n", mm);
    system("pause");
}