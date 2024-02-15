#include "inc/person/age.h" // Предполагая, что путь к файлу верен
#include <stdio.h>
#include <time.h>// Добавить эту строку для использования printf
#include <stdlib.h>// Добавить эту строку для использования srand и rand

int main() {
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 10; i++) {
        int age = generateWeightedAge();
        printf("Generated Age: %d\n", age);
    }


    return 0;
}