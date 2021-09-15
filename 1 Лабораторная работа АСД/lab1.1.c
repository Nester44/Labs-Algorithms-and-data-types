#include <stdio.h>
int main() {

    float x;
    float y;

    printf("Enter x: ");
    scanf("%f", &x);

    if (x > 0){
        if (x > 2) {
            if (x <= 12) {
            y = -9 * x * -9 * x * -9 * x + 5 * x * x;
                printf("Y = %f", y);
            }
            else if (x > 22) {
                if (x < 32){
                    y = -9 * x * -9 * x * -9 * x + 5 * x * x;
                    printf("Y = %f", y);
                }
                else {
                    printf("Function doesn't exist");
                }
            }
            else {
                printf("Function doesn't exist");
            }
        }
        else {
            printf("Function doesn't exist");
        }
    }
    else {
        y = -x * x - 12;
        printf("Y = %f", y);
    }

}