
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, count = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len && str[i] == '0'; i++)
        count++;

    if (count * 2 != len)
        flag = 0;

    for (i = count; i < len; i++) {
        if (str[i] != '1')
            flag = 0;
    }

    if (flag)
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
