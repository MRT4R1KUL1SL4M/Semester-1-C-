#include<stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (i = 0; i < n; i++) 
    {
    for (j = 0; j < m; j++) 
    {
        scanf("%d", &a[i][j]);
    }
    }
    if (n != m) {
    printf("NO\n");
    } else {
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++)
        {
        if ((i == j || i + j == n - 1) && a[i][j] != 1)  
        {
        printf("NO\n");
        return 0;
        }
        if (i != j && i + j != n - 1 && a[i][j] != 0) 
        {
        printf("NO\n");
        return 0;
        }
    }
    }
    printf("YES\n");
}
    return 0;
} 
