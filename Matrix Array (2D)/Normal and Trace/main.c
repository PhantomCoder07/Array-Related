#include <stdio.h>
#include <math.h>
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
    printf("Given matrix:\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i==j)
                sum1+=mat[i][j];
            sum2+=(mat[i][j]*mat[i][j]);
        }
    }
    int ans=sqrt(sum2);
    printf("The normal of matrix : %d\n",ans);
    printf("The trace of matrix  : %d\n",sum1);
    return 0;
}
