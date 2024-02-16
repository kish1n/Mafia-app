#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../inc/person/sex.h"

const char* sexGen() {
    int randomNumber = rand() % 2 + 1;
    return (randomNumber == 1) ? "male" : "female";
}