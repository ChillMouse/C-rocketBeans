#include "../../../phoenixLib.h/phoenixLib.h"
#include "additionalVariables.h"

static int a = 12, b = 8, c = 34, d = 123;

int event1_p2();
int event1_p3();
int event1_p5();
int event1_p6();
int getAfterBinary();

int main(){
    translateOutput(); // Смена кодировки вывода консоли.
    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p1\n\n", *&a, *&b, *&c, *&d); // Вывод исходных данных

    a += b + 1 + c + 1;
    a %= d;
    b /= 6;
    c += b - 1 + a;
    a++;
    d = getAfterBinary(*&b, *&c); // Арифметические преобразования с обращением по указателю.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p1\n\n", *&a, *&b, *&c, *&d); // Вывод преобразований

    a = 0; b = 0; c = 0; d = 0;
    event1_p2(); // Задача 2. Денис
    event1_p3(); // Задача 3. Денис
                 // Задача 4. Геля
    event1_p5(); // Задача 5. Макс
    event1_p6(); // Задача 6. Макс
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
    scanf("%d,%d,%d,%d", &A, &B, &C, &D); // Считывание значений из консоли, которые мы вводим.

    A += B + 1 + C + 1;
    A %= D;
    B /= 6;
    C += B - 1 + A;
    A++;
    D = getAfterBinary(*&B, *&C); // Арифметические операции.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p3\n\n", *&A, *&B, *&C, *&D); // Вывод

    return 0;
}

int event1_p5(){
    printf("Введите значения переменных A, B, C, D:");
    scanf("%d %d %d %d", &addit_A, &addit_B, &addit_C, &addit_D); // Считывание значений из консоли, которые мы вводим.

    addit_A += addit_B + 1 + addit_C + 1;
    addit_A %= addit_D;
    addit_B /= 6;
    addit_C += addit_B - 1 + addit_A;
    addit_A++;
    addit_D = getAfterBinary(*&addit_B, *&addit_C); // Арифметические операции.

    printf(" A: %d; B: %d; C: %o; D: %o; Event1_p4\n\n", *&addit_A, *&addit_B, *&addit_C, *&addit_D); // Вывод

    return 0;
}
int event1_p6(){
    int arrayWithIntegers[] = {12, 8, 34, 123};
    printf(" arrayWithIntegers[0]: %d; arrayWithIntegers[1]: %d; arrayWithIntegers[2]: %o; arrayWithIntegers[3]: %o; Event1_p5\n\n", arrayWithIntegers[0], arrayWithIntegers[1], arrayWithIntegers[2], arrayWithIntegers[3]);

    arrayWithIntegers[0] += arrayWithIntegers[1] + 1 + arrayWithIntegers[2] + 1;
    arrayWithIntegers[0] %= arrayWithIntegers[3];
    arrayWithIntegers[1] /= 6;
    arrayWithIntegers[2] += arrayWithIntegers[1] - 1 + arrayWithIntegers[0];
    arrayWithIntegers[0]++;
    arrayWithIntegers[3] = (arrayWithIntegers[1] >> 1) & (arrayWithIntegers[2] >> 1); // Арифметические операции.

    printf(" arrayWithIntegers[0]: %d; arrayWithIntegers[1]: %d; arrayWithIntegers[2]: %o; arrayWithIntegers[3]: %o; Event1_p5\n\n", arrayWithIntegers[0], arrayWithIntegers[1], arrayWithIntegers[2], arrayWithIntegers[3]); // Вывод

    return 0;
}

int getAfterBinary(int B, int C){ // Нахождение арифметического &
   return ((*&B >> 1) & 126) & ((*&C >> 1) & 7);
}
