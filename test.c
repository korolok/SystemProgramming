#include <stdio.h>
#include <locale.h>
int main(int argc, char *argv[]) {
    int x = 0, y = 0, d = 0;
    float tmp;
    print();
    printf("Vvedite deistvie: ");
    scanf("%d", &d);
    printf("Vvedite x and y: ");
    scanf("%d%d", &x, &y);
    switch(d) {
        case 1:
            printf("Sum x + y = %d\n", x + y);
        break;
        case 2:
            printf("Diff x - y = %d\n", x - y);
        break;
        case 3:
            printf("Mult x * y = %d\n", x * y);
        break;
        case 4:
            tmp = (float)x / y;
            if (y != 0) {
            printf("Split x / y = %.3f", tmp);
            } else printf("a/n");
            break;
        default:
        break;
    }
    return 0;
}