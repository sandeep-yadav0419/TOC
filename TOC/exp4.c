
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, state = 0;

    printf("Enter a binary string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1') {
            printf("Invalid input");
            return 0;
        }
    }

    if (len >= 2 && str[0] == '0' && str[len - 1] == '1')
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
