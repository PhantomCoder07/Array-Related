#include <stdio.h>
int main()
{
    int n;
    printf("Enter matrix size: ");
    scanf("%d",&n);
    int mat[n][n];
    int sum1=0,sum2=0;
    printf("Enter matrix elements:\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Boundary elements of matrix:\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==0 || j==0 || i==n-1 || j==n-1)
                printf("%d ",mat[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
