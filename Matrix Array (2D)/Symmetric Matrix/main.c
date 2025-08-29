#include <stdio.h>
int main()
{
    int n,i,j,count=0;
    printf ("Enter size of matrix: ");
    scanf ("%d",&n);
    int mat1[n][n],mat2[n][n],mat3[n][n];
    printf ("Enter matrix element:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf ("%d",&mat1[i][j]);
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            mat2[i][j]=mat1[j][i];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (mat1[i][j]==mat2[i][j])
                count++;
        }
    }
    printf ("Given matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",mat1[i][j]);
        }
        printf ("\n");
    }
    printf ("The transpose matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",mat2[i][j]);
        }
        printf ("\n");
    }
    if (count==n*n)
        printf ("\nThe given matrix is symmetric.");
    else
        printf ("\nThe given matrix is not symmetric.");
    return 0;
}
