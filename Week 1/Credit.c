#include <string.h>
#include <stdio.h>

int main() {
    char lista[] = {'4', '5', '2', '3'};
    char tarjetanumero[25];
    printf("Welcome!\n");
    printf("This program shall allow you to determine if your credit card is American Express, Mastercard or Visa\n");
    printf("Enter your credit card number\n");
    do {
        scanf("%s", tarjetanumero);
        if (tarjetanumero[0] != '4' && tarjetanumero[0] != '5' && tarjetanumero[0] != '2' && tarjetanumero[0] != '3') {
        printf("INVALID\n");
     }
    }
    while (tarjetanumero[0] != '4' && tarjetanumero[0] != '5' && tarjetanumero[0] != '2' && tarjetanumero[0] != '3'); {
    }


    if (tarjetanumero[0] == '4') {
        printf("VISA\n");
    }
    else if (tarjetanumero[0] == '5' || tarjetanumero[0] == '2') {
        printf("MASTERCARD\n");
    }
    else if (tarjetanumero[0] == '3') {
        printf("AMEX\n");
    }


    return 0;
// Here until 07/4/2026
}
