#include <stdio.h>
#include <stdlib.h>

#include "test.c"

typedef struct gs1 {
    int r;
} gs1_typedef;

struct gs2 {
    int r;
};

typedef struct gs3 {
} gs3_typedef;

static int global_static_var = 1;

int global_var = 1;

#define DAYS_IN_YEAR 365

enum days {SUN = 1, MON, TUE, WED, THU, FRI, SAT};

void function_1();

int multi_array[2][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 0}
};

typedef int my_type;

gs1_typedef* global_function(int a, int b) {
    static int local_static_var = 1;
    gs1_typedef *local_ptr = malloc(sizeof(struct gs1));
    return 0;
}
