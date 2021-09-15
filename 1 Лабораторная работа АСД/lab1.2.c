#include <stdio.h>
int main() {

    float x;
    float y;

    printf("Enter x: ");
    scanf("%f", &x);

    if ((x > 2 && x <= 12) || (x > 22 and < 32) )  {
        y =  -9 * x * -9 * x * -9 * x + 5 * x * x;
        printf("Y =%f", y);
    }
    else if(x <= 0) {
        y = -x * x - 12;
        printf("Y =%f", y);
    }
    else {
        printf("Function doesn't exist");
    }

}


