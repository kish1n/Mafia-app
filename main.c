#include <stdio.h>
#include <time.h>// Добавить эту строку для использования printf
#include <stdlib.h>// Добавить эту строку для использования srand и rand

#include "inc/person/age.h"
#include "inc/person/sex.h"

int main() {
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 10; i++) {
        int age = ageGen();
        const char* sex = sexGen();
        printf("%d - %d - %s\n", i + 1, age, sex);
    }

    return 0;
}