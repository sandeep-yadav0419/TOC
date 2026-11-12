
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    if (len < 2 || str[0] != '0' || str[len-1] != '1')
        flag = 0;

    for (i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1')
            flag = 0;
    }

    if (flag)
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
