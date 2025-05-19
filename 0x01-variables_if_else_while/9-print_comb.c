#include <stdio.h>
/**
 * A program that prints all possible combinations of single-digit numbers separated by a ','.
 * return: 0
 */
int main() {
    int i;
    for (i = 0; i <= 9; i++) {
        putchar(i + '0');
        if (i != 9) {
            putchar(',');
            putchar(' ');
        }
    }
    return 0;
}