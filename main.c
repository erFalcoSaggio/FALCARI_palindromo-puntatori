#include <stdio.h>
#include <stdio.h>

int main(void) {
    char stringa[] = "i topi non avevano nipoti";
    char *p1 = stringa;
    char *p2 = stringa;

    //sposto p2 all'ultimo char
    while (*p2 != '\0') {
        p2++;
    }
    p2--; //punta all'ultimo

    int palindromo = 1;
    while (p1 < p2) {
        //ignora gli spazi
        if (*p1 == ' ') {
            p1++;
            continue;
        }
        if (*p2 == ' ') {
            p2--;
            continue;
        }

        if (*p1 != *p2) {
            palindromo = 0; //nel caso non fosse palindroma
            break;
        }
        p1++;
        p2--;
    }

    if (palindromo) {
        printf("Palindromo\n");
    } else {
        printf("Non palindromo\n");
    }

    return 0;
}
