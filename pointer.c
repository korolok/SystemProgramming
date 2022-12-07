#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void random(int *);
int main(int argc, char *argv[]) {
    srand(time(NULL));
    int var = 0;
    int *pi = 0;
    int **ppi = 0;
    pi = &var;
    ppi = &pi;
    **ppi = 5;
    printf("var = %d\n", var);
    for (int i = 0; i < 5; i++) {
        random(&var);
        printf("rand var = %d\n", var);
    }
    return 0;
}
void random(int *var) {
    *var = rand() % 100;
}