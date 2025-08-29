#include <stdio.h>
int main()
{
    int n,m,i,j,sumr=0,sumc=0;
    printf ("Enter matrix row size: ");
    scanf ("%d",&n);
    printf ("Enter matrix column size: ");
    scanf ("%d",&m);
    int mat[n][m];
    printf ("\nEnter matrix element:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf ("%d",&mat[i][j]);
        }
    }
    printf ("Given matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf ("%d ",mat[i][j]);
        }
        printf ("\n");
    }
    printf ("\nSum of each row & column:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            sumr+=mat[i][j];
        }
        printf ("Sum of row%d is: %d\n",i+1,sumr);
        sumr=0;
    }
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            sumc+=mat[j][i];
        }
        printf ("Sum of column%d is: %d\n",i+1,sumc);
        sumc=0;
    }
    return 0;
}
