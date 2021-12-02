#include <stdio.h>
#include <math.h>


int main() {
    int n;
    double p;
    float s;
    int i,j;
    printf("Enter n: ");
    scanf("%d", &n);
    s=0;
    p=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            s += log(j+2);
        }
        p *=(3-cos(i) * cos(i)) / s;
    }
    printf("%.25lf", p);

    return 0;
}