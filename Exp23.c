
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, left = 0, right = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    while (left < len && str[left] == '0')
        left++;

    right = len - 1;

    while (right >= left && str[right] == '0')
        right--;

    if (left != len - 1 - right)
        flag = 0;

    for (i = left; i <= right; i++) {
        if (str[i] != '1')
            flag = 0;
    }

    if (flag)
        printf("String Accepted");
    else
        printf("String Rejected");

    return 0;
}
