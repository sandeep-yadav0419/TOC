
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1')
            valid = 0;
    }

    for (i = 0; i <= len - 3; i++) {
        if (str[i] == '1' &&
            str[i+1] == '0' &&
            str[i+2] == '1') {
            flag = 1;
            break;
        }
    }

    if (valid && flag)
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
