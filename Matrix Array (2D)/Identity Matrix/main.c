#include <stdio.h>
int main()
{
    int n,i,j,count1=0,count2=0;
    printf ("Enter the size of matrix: ");
    scanf ("%d",&n);
    int mat[n][n];
    printf ("Enter matrix element:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf ("%d",&mat[i][j]);
        }
    }
    printf ("Given matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",mat[i][j]);
        }
        printf ("\n");
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (mat[i][j]==1)
                count1++;
            else if (mat[i][j]==0)
                count2++;
        }
    }
    if (count1==n && count2==(n*n)-n)
        printf ("The given matrix is an identity matrix\n");
    else
        printf ("The given matrix is not an identity matrix\n");
    return 0;
}
