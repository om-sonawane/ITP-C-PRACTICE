//code for tables till 10
#include <stdio.h>

int main() {
    int i, j;

    //for Rows
    for (i = 1; i <= 10; i++) {
        //For Columns
        for (j = 1; j <= 10; j++) {
            printf("%3d\t", j * i);
        }
        printf("\n");  // Newline after each row
    }

    return 0;
}

