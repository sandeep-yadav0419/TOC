
#include <stdio.h>

int main() {
    int n, m, i, j, k;
    int from[50], to[50];
    int closure[20][20] = {0};

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        printf("Enter transition (from to): ");
        scanf("%d %d", &from[i], &to[i]);
        closure[from[i]][to[i]] = 1;
    }

    for (i = 0; i < n; i++)
        closure[i][i] = 1;

    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (closure[i][k] && closure[k][j])
                    closure[i][j] = 1;

    for (i = 0; i < n; i++) {
        printf("Epsilon-closure(q%d) = { ", i);
        for (j = 0; j < n; j++)
            if (closure[i][j])
                printf("q%d ", j);
        printf("}\n");
    }

    return 0;
}
