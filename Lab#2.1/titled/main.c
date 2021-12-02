#include <stdio.h>

int main() {
    int i;
    double A[8][8] = {
            {3, 10.9, 7, 9, 13.4, 23.4, 36.2, 0},
            {3, 4.8, 5.4, 5.3, 6, 20, 32.2, -3},
            {3, -3, 4, -0.2, 5.6, 7, 13.33, -3},
            {-8, -3.9, 4, -3, 5.4, 4, 12.33, -10},
            {-20, -4, 2.2, -6.4, 5.2, 4, 9.54, -25},
            {-334, -7, -2, -6.4, 5.1, 4, 7, -59},
            {-999, -9, -4, -80, 4.5, 4, 6, -70},
            {-9999, -19, -4, -85, 4, 4, 5, -73}
    };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%.2f\t", A[i][j]);
        }
        printf("\n");
    }

    for (int n = 0; n < 8; n++) {
        int L = 0;
        int R = 7;
        while ( L <= R) {
            i = ( L + R ) / 2;
            if ( A[i][n] < 0 ) R = i - 1;
            if ( A[i][n] > 5 ) L = i + 1;
            if ( A[i][n] >= 0 && A[i][n] <= 5 ) {
                printf("\n value = %.2f coords: x: %d y: %d", A[i][n], n, i);
                break;
            }
        }
    }

    return 0;
}