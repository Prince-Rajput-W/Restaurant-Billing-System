#include <stdio.h>

int main() {
    int choice, qty;
    float price = 0, total = 0, gst, finalAmount;
    char more;
    int billNo;
    FILE *fp;

    // Read last bill number
    fp = fopen("billno.txt", "r");
    if (fp == NULL) {
        billNo = 1;
    } else {
        fscanf(fp, "%d", &billNo);
        fclose(fp);
        billNo++;
    }

    // Save new bill number
    fp = fopen("billno.txt", "w");
    fprintf(fp, "%d", billNo);
    fclose(fp);

    printf("====================================\n");
    printf("       RESTAURANT BILLING SYSTEM\n");
    printf("            Bill No: %d\n", billNo);
    printf("====================================\n");

    do {
        printf("\nMenu:\n");
        printf("1. Burger - 100\n2. Pizza - 200\n3. Pasta - 150\n");
        printf("4. Coffee - 80\n5. Sandwich - 120\n");
        printf("6. Fries - 90\n7. Momos - 140\n");
        printf("8. Noodles - 160\n9. Cold Drink - 60\n");
        printf("10. Ice Cream - 70\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        switch(choice) {
            case 1: price = 100; break;
            case 2: price = 200; break;
            case 3: price = 150; break;
            case 4: price = 80; break;
            case 5: price = 120; break;
            case 6: price = 90; break;
            case 7: price = 140; break;
            case 8: price = 160; break;
            case 9: price = 60; break;
            case 10: price = 70; break;
            default: price = 0;
        }

        total += price * qty;

        printf("Order more? (y/n): ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y');

    gst = total * 0.05;          // 5% GST
    finalAmount = total + gst;  // Total with GST

    printf("\n------------- BILL -------------\n");
    printf("Total Amount : Rs. %.2f\n", total);
    printf("GST (5%%)     : Rs. %.2f\n", gst);
    printf("Final Amount : Rs. %.2f\n", finalAmount);
    printf("--------------------------------\n");

    // Save bill record (FINAL amount only)
    fp = fopen("sales.txt", "a");
    fprintf(fp, "%d %.2f\n", billNo, finalAmount);
    fclose(fp);

    printf("\nThank You! Visit Again.\n");

    return 0;
}

