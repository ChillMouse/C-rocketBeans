#include "phoenixLib.h"
#include "Lib1.h"

static int a = 12, b = 8, c = 34, d = 123;

int event1_p2();
int event1_p3();
int event1_p5();
int event1_p6();
int getAfterBinary();

int event1_p2(){
    int A = 512, B = 1024, C = 2048, D = 4096; // Локальные переменные.
    A += B + 1 + C + 1;
    A %= D;
    B /= 6;
    C += B - 1 + A;
    A++;
    D = getAfterBinary(*&B, *&C); // Арифметические операции.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p2\n\n", A, B, C, D); // Вывод

    return 0;
}

int event1_p3() {
    int A, B, C, D;
    printf("Введите значения переменных A, B, C, D:");
    scanf("%d %d %d %d", &A, &B, &C, &D); // Считывание значений из консоли, которые мы вводим.

    A += B + 1 + C + 1;
    A %= D;
    B /= 6;
    C += B - 1 + A;
    A++;
    D = getAfterBinary(*&B, *&C); // Арифметические операции.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p3\n\n", A, B, C, D); // Вывод

    return 0;
}

int event1_p5(){
    printf("Введите значения переменных A, B, C, D:");
    scanf("%d %d %d %d", &A, &B, &C, &D); // Считывание значений из консоли, которые мы вводим.

    A += B + 1 + C + 1;
    A %= D;
    B /= 6;
    C += B - 1 + A;
    A++;
    D = (B >> 1) & (C >> 1); // Арифметические операции.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p4\n", A, B, C, D); // Вывод

    return 0;
}
int event1_p6(){
    int mass[]={12,8,34,123};
    printf(" mass[0]: %d; mass[1]: %d; mass[2]: %o; mass[3]: %o; Event1_p5\n", mass[0], mass[1], mass[2], mass[3]);

    mass[0] += mass[1] + 1 + mass[2] + 1;
    mass[0] %= mass[3];
    mass[1] /= 6;
    mass[2] += mass[1] - 1 + mass[0];
    mass[0]++;
    mass[3] = (mass[1] >> 1) & (mass[2] >> 1); // Арифметические операции.

    printf(" mass[0]: %d; mass[1]: %d; mass[2]: %o; mass[3]: %o; Event1_p5\n", mass[0], mass[1], mass[2], mass[3]); // Вывод

    return 0;
}

int getAfterBinary(int B, int C){
   return ((B >> 1) & 126) & ((C >> 1) & 7);
}
