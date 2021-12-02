#include <stdio.h>
#include <math.h>

int main(){
    int counter = 0;
    float n;
    double resultSum;
    double resultMult = 1;
    printf("Input n:");
    scanf("%f",&n );

    for (int j = 1; j <= n ; j++) {// <=, ++
        resultMult *= 2*j + 1; // *, *, +
        resultSum += resultMult / (3*j * log(j + 1)); // +, /, *, *, log,+, jmp
        counter += 12;
    }
    printf("%.7f\n", resultSum);
    printf("counter= %d", counter);
    return 0;
}