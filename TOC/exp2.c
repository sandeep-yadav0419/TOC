
#include <stdio.h>

int main() {
    char str[100];
    int i, state = 0;

    printf("Enter a binary string: ");
    scanf("%99s", str);

    if (str[0] != '0') {
        printf("String Rejected");
        return 0;
    }

    state = 1;

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == '0')
            state = 1;
        else if (str[i] == '1')
            state = 2;
        else {
            printf("Invalid input");
            return 0;
        }
    }

    if (state == 2)
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
