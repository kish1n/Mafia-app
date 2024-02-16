#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "../../inc/person/age.h"


int ageGen() {
    double randomValue = (double)rand() / RAND_MAX;

    int age16 = 16;
    int age30 = 30;
    int age45 = 45;
    int age70 = 70;

    double weightedAge;
    if (randomValue < 0.5) {
        weightedAge = age16 + (randomValue * 2 * (age30 - age16));                   // 50% шанс быть младше 30
    } else if (randomValue < 0.7) {

        weightedAge = age30 + ((randomValue - 0.5) * 2.5 * (age45 - age30));         // Дополнительно 20% шанс быть между 30 и 45
    } else {
        weightedAge = age45 + ((randomValue - 0.7) * (age70 - age45) / 0.3);         // Оставшиеся 30% для возраста от 45 до 70
    }

    return (int)weightedAge;
}
