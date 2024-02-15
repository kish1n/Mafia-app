#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "../../inc/person/age.h"

typedef struct {
    int (*generateWeightedAge)();
} age;


int generateWeightedAge() {

double randomValue = (double)rand() / RAND_MAX;

int minAge = 16;
int maxAge = 80;
int midAge1 = 30; // 50% шанс быть меньше этого возраста
int midAge2 = 45; // 70% шанс быть меньше этого возраста

double weight1 = 0.50; // Вероятностные веса для возрастов
double weight2 = 0.70;


double p = (randomValue < weight1) ? (randomValue / weight1) : // Вероятностная функция
           (randomValue < weight2) ? 1 - ((randomValue - weight1) / (weight2 - weight1)) :
           ((1 - randomValue) / (1 - weight2));


p = p * p; // Квадратичная корректировка


int age = minAge + (int)(p * (maxAge - minAge)); // Вычисление возраста

// Корректировка для создания "холма" вероятности около midAge1
if (age > midAge1 && age < midAge2) {
    double correctionFactor = (double)(age - midAge1) / (midAge2 - midAge1);
    correctionFactor = 4 * correctionFactor * (1 - correctionFactor);
    age = midAge1 + (int)(correctionFactor * (midAge2 - midAge1));
}

return age;
}

