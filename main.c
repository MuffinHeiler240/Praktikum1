#include <stdio.h>
#include <math.h>

int main(void) {
    printf("hello world \n \n");

    int kList[3] = {1, 3, 6};
    int p = 0;
    while (p < 3) {
        double a = pow(10,kList[p]) + 1/3;
        double b = pow(10,kList[p]) + 1/7;
        p++;

        double c=a+b;
        printf("a=%f + b=%f = c=%f\n", a, b, c);

        c=a-b;
        printf("a=%f - b=%f = c=%f\n", a, b, c);

        c= a*b;
        printf("a=%f * b=%f = c=%f\n", a, b, c);

        c=a/b;
        printf("a=%f / b=%f = c=%f\n \n", a, b, c);
    }
    /* Ergebnisse werden von double zu float zu int ungenauer! */
    /* %f für float und double; %i für int */

    int n = 10;
    int start = 2;

    int Numbers[n][3];

    int i = 0;

    while(i < n+start-1) {
        int num = i+1;
        Numbers[i][0] = num;
        Numbers[i][1] = num * num;
        if(i != 0) {
            Numbers[i][2] = num + Numbers[i-1][2];
            Numbers[i][3] = num * num + Numbers[i-1][3];
        }
        else {
            Numbers[i][2] = 1;
            Numbers[i][3] = 1;
        }
        i++;
    }

    printf("n   | n*n | s(n) | q(n)\n");
    printf("----+-----+------+------\n");

    int k = start-1;
    for (; k < n+start-1; k++) {
        printf("%3d | %4d| %4d | %4d\n", Numbers[k][0], Numbers[k][1], Numbers[k][2], Numbers[k][3]);
    }
    return 0;
}
