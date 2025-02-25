#include <stdio.h>

int main() {
    int x[2][2], y[2][2], z[2][2];
    int i, j;
    int m1, m2, m3, m4, m5, m6, m7;

    // Taking input for first matrix
    printf("Enter elements of the first 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &x[i][j]);

    // Taking input for second matrix
    printf("Enter elements of the second 2x2 matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &y[i][j]);

    // Computing Strassen's 7 multiplications
    m1 = (x[0][0] + x[1][1]) * (y[0][0] + y[1][1]);
    m2 = (x[1][0] + x[1][1]) * y[0][0];
    m3 = x[0][0] * (y[0][1] - y[1][1]);
    m4 = x[1][1] * (y[1][0] - y[0][0]);
    m5 = (x[0][0] + x[0][1]) * y[1][1];
    m6 = (x[1][0] - x[0][0]) * (y[0][0] + y[0][1]);
    m7 = (x[0][1] - x[1][1]) * (y[1][0] + y[1][1]);

    // Computing final product matrix
    z[0][0] = m1 + m4 - m5 + m7;
    z[0][1] = m3 + m5;
    z[1][0] = m2 + m4;
    z[1][1] = m1 - m2 + m3 + m6;

    // Displaying the product matrix
    printf("\nProduct matrix using Strassen's algorithm:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++)
            printf("%d\t", z[i][j]);
        printf("\n");
    }

    return 0;
}
