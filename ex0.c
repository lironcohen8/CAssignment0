#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int charToDec(char c) {
    int d;
    d = (int)c;
    if (d >= 48 && d <= 57)
        return d - 48;
    else
        return d - 87;
}

int main(void) {
    int a,b,d;
    char c;

    printf("Please enter the numbers base:\n");
    scanf("%d", &a);
    if (a<2 || a>16)
        printf("Invalid input base\n");
    assert(a >= 2 && a <= 16);

    printf("Please enter the desired base:\n");
    scanf("%d", &b);
    if (b<2 || b>16)
        printf("Invalid desired base\n");
    assert(b >= 2 && b <= 16);
    
    getchar();
    printf("Please enter a number in base %d:\n" , a);
    while ((c = getchar()) != '\n') {
        d = charToDec(c);
        if (d < 0 || d >= a) 
            printf("Invalid number!\n");
        assert(d >= 0 && d < a);
    }
    printf("end");

    return 0;
}