#include "phoenixLib.h"

static int a = 12, b = 8, c = 34, d = 123;

int event1_p2();
int event1_p3();
int getAfterBinary();

int main(){
    translateOutput(); // Смена кодировки вывода консоли.
    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p1\n\n", a, b, c, d); // Вывод исходных данных

    a += b + 1 + c + 1;
    a %= d;
    b /= 6;
    c += b - 1 + a;
    a++;
    d = getAfterBinary(*&b, *&c); // Арифметические преобразования с обращением по указателю.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p1\n\n", a, b, c, d); // Вывод преобразований

    a = 0; b = 0; c = 0; d = 0;
    event1_p2(); // Задача 2.
    event1_p3(); // Задача 3.
    return 0;
}

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

int getAfterBinary(int B, int C){
   return ((B >> 1) & 126) & ((C >> 1) & 7);
}