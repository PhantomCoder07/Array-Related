#include <stdio.h>
int main()
{
    int n,i,j;
    printf ("Enter size of the matrix: ");
    scanf ("%d",&n);
    int mat1[n][n],mat2[n][n];
    printf ("Enter matrix element:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf ("%d",&mat1[i][j]);
        }
    }
    printf ("The matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",mat1[i][j]);
        }
        printf ("\n");
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            mat2[j][i]=mat1[(n-1)-i][j];
        }
    }
    printf ("The matrix after rotation 90 degrees clockwise:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            printf ("%d ",mat2[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
