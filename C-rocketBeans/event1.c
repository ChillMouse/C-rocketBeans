#include "phoenixLib.h"

static int a = 12, b = 8, c = 34, d = 123;

int event1_p2();
int event1_p3();

int main(){
    translateOutput(); // Смена кодировки вывода консоли.
    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p1\n", a, b, c, d); // Вывод исходных данных

    a += b + 1 + c + 1;
    a %= d;
    b /= 6;
    c += b - 1 + a;
    a++;
    d = ((b >> 1) & 126) & ((c >> 1) & 7); // Арифметические преобразования

   printf(" A: %d; B: %d; C: %o; D: %o; Event1_p1\n", a, b, c, d); // Вывод преобразований

   a = 0; b = 0; c = 0; d = 0;
   event1_p2();
   event1_p3();
   return 0;
}

int event1_p2(){
        int a = 512, b = 1024, c = 2048, d = 4096;
        a += b + 1 + c + 1;
        a %= d;
        b /= 6;
        c += b - 1 + a;
        a++;
        d = ((b >> 1) & 126) & ((c >> 1) & 7);

        printf(" A: %d; B: %d; C: %o; D: %o; Event1_p2\n", a, b, c, d);

        return 0;
}

int event1_p3(){
    int a, b, c, d;
    printf("Введите значения переменных a, b, c, d:");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    a += b + 1 + c + 1;
    a %= d;
    b /= 6;
    c += b - 1 + a;
    a++;
    d = ((b >> 1) & 126) & ((c >> 1) & 7);

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p3\n", a, b, c, d);

    return 0;
}