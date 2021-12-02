#include <stdio.h>
#include <math.h>

int main(){
    int counter = 0;
    float n;
    double resultSum;
    double resultMult;
    printf("Input n:");
    scanf("%f",&n );
    for (int i = 1; i <= n ; i++) {
        resultMult = 1;
        for (int j = 1; j <= i; j++){
            resultMult *= 2 * j + 1;
            counter += 6;
        }
        resultSum += resultMult / (3 * i * log(i + 1));
        counter += 10;
    }
    printf("y = %f\n", resultSum);
    printf("counter = %d", counter);
    return 0;
}