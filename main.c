#include <stdio.h>
#include <math.h>

int main(void) {
    int kList[3] = {1,3,7};
    int p = 0;
    int steps = 10;
    int start = 1;
    int k;
    int kSqu;
    int kSum = 0;
    int kSquSum = 0;

    printf("hello world \n \n");

    while (p < 3) {
        double a = pow(10,kList[p]) + 1/3;
        double b = pow(10,kList[p]) + 1/7;

        double c;

        c=a+b;
        printf("a=%f + b=%f = c=%f\n", a, b, c);

        c=a-b;
        printf("a=%f - b=%f = c=%f\n", a, b, c);

        c= a*b;
        printf("a=%f * b=%f = c=%f\n", a, b, c);

        c=a/b;
        printf("a=%f / b=%f = c=%f\n \n", a, b, c);

        p++;
    }
    /* Ergebnisse werden von double zu float zu int ungenauer! */
    /* %f für float und double; %i für int */

    printf("n   | n*n | s(n) | q(n)\n");
    printf("----+-----+------+------\n");

    for (k=1; k < steps+start; k++) {

        kSqu = k*k;
        kSum += k;
        kSquSum += kSqu;

        if(k>=start)
            printf("%3d | %4d| %4d | %4d\n", k, kSqu, kSum, kSquSum);
    }
    return 0;
}
