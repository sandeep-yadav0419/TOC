
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, state = 0;

    printf("Enter a string containing a and b: ");
    scanf("%s", str);

    if (str[0] != 'a') {
        printf("String Rejected");
        return 0;
    }

    state = 1;

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == 'a')
            state = 2;
        else if (str[i] == 'b')
            state = 1;
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
