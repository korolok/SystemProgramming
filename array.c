#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void random(int *);
void print(int *);
int main(int argc, char **argv) {
    srand(time(NULL));
    int arr[5];
    random(arr);
    print(arr);
    return 0;
}
void random(int *arr) {
    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 100;
    }
}
void print(int *arr) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}
