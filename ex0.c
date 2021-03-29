#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main(void) {
    int a,b;
    char c;

    printf("Please enter the numbers base:\n");
    scanf("%d\n", &a);
    if (a<2 || a>16)
        printf("Invalid input base\n");
    assert(a >= 2 && a <= 16);

    printf("Please enter the desired base:\n");
    scanf("%d\n", &b);
    if (b<2 || b>16)
        printf("Invalid desired base\n");
    assert(b >= 2 && b <= 16);
    
    printf("Please enter a number in base %d:\n" , a);
    while ((c = getchar()) != '\n') {
        if (a >= 2 && a <= 10)
            assert(atoi(&c) >= 0 && atoi(&c) < a);
    }
    printf("end");

    return 0;
}