#include <stdio.h>

int main() {
    FILE *fp;
    int billNo, count = 0;
    float amount, totalEarning = 0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("No sales data found!\n");
        return 0;
    }

    while (fscanf(fp, "%d %f", &billNo, &amount) != EOF) {
        count++;
        totalEarning += amount;
    }

    fclose(fp);

    printf("=================================\n");
    printf("        ADMIN DAILY REPORT\n");
    printf("=================================\n");
    printf("Total Bills Today : %d\n", count);
    printf("Total Earning     : Rs. %.2f\n", totalEarning);
    printf("=================================\n");

    return 0;
}

