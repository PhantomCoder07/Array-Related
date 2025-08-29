#include <stdio.h>
int main()
{
    int n,m,i,j,p,max,min,count=0;
    printf ("Enter matrix row: ");
    scanf ("%d",&n);
    printf ("Enter matrix column: ");
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
    for (i=0; i<n; i++)
    {
        p=0;
        min=mat[i][0];
        for (j=0; j<m; j++)
        {
            if (min>mat[i][j])
            {
                min=mat[i][j];
                p=j;
            }
        }
        max=0;
        for(j=0; j<m; j++)
        {
            if (max<mat[j][p])
            {
                max=mat[j][p];
            }
        }
        if (min==max)
        {
            printf("\nThe Saddle Point of the given Matrix is: %d",min);
            count++;
        }
    }
    if (count==0)
        printf("\nNo Saddle Point");
    return 0;
}
