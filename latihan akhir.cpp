#include <stdio.h>
#include <string.h>
#include <conio.h>

main() {
    int pembelian;
    char bonus[100];
  
    printf("Harga pembelian : "); scanf("%d", &pembelian);
    printf("\n");
  
    if (pembelian<=100000 && pembelian<200000) {
        strcpy (bonus, "Discount 5%");
    }
    else if (pembelian<=200000 && pembelian<300000) {
        strcpy (bonus, "Tiket ke Yogya");
    }
    else if (pembelian<=300000 && pembelian<400000) {
        strcpy (bonus, "Tiket ke Bali");
    }
    else if (pembelian<=400000 && pembelian<500000) {
        strcpy (bonus, "Jam Tangan Rolex");
    }
    else if (pembelian>=500000) {
        strcpy (bonus, "Tiket ke Swiss");
    }
  
    printf("Pembelian : %d\n", pembelian);
    printf("Bonus : %s\n", bonus);
}
