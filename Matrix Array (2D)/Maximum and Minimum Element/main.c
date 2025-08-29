#include <stdio.h>
int main()
{
    int n,m,i,j,max,min;
    printf ("Enter matrix row size: ");
    scanf ("%d",&n);
    printf ("Enter matrix column size: ");
    scanf ("%d",&m);
    int mat[n][m];
    printf ("Enter matrix element:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            scanf ("%d",&mat[i][j]);
        }
    }
    printf ("The matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf ("%d ",mat[i][j]);
        }
        printf ("\n");
    }
    max=mat[0][0];
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (mat[i][j]>max)
            {
                max=mat[i][j];
            }
        }
    }
    min=mat[0][0];
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (mat[i][j]<min)
            {
                min=mat[i][j];
            }
        }
    }
    printf ("\nThe maximum value of the matrix: %d",max);
    printf ("\nThe minimum value of the matrix: %d",min);
    return 0;
}
