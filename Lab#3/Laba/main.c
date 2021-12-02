#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main() {
    srand(time(NULL));
    float a,b;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    if (n <= 0) {
        printf('N cannot be less than 0');
    }
    else{
        float Y[n];
        float Z[n];
        float R = 0;
        int powI = -1;
        float result;
        for (int i = 0; i < n; i++) {
            if (rand() % 2 == 0) {
                Y[i] = -(float)rand() / RAND_MAX * 70;
            }
            else {
                Y[i] = (float)rand() / RAND_MAX * 70;
            }
            printf("%.3f ",Y[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++) {
            if(Y[i] > -50 && Y[i] < 0) {
                Z[i] = 10 * a - Y[i];
            }
            else {
                Z[i] = 1 + Y[i] * Y[i];
            }
            printf("%.3f ",Z[i]);
        }
        printf("\n");
        for (int i = 0; i < n; i++) {
            result = powI * b + Z[i];
            powI *= -1;
            printf("%.3f ",result);
            if (result > R) {
                R = result;
            }
        }
        printf("\n");
        printf("R = %.3f\n",R);
    }
    return 0;
}