
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string containing a and b: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            printf("Invalid input");
            return 0;
        }
    }

    if (len >= 2 && str[0] == 'b' && str[len - 1] == 'a')
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
