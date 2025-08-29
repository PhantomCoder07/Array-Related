#include <stdio.h>
int main()
{
    int n,i,j,sump=0,sums=0;
    printf ("Enter matrix range: ");
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
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i==j)
            {
                sump+=mat[i][j];
            }
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if (i+j==n-1)
            {
                sums=sums+mat[i][j];
            }
        }
    }
    printf ("The sum of primary diagonal elements: %d\n",sump);
    printf ("The sum of secondary diagonal elements: %d\n",sums);
    return 0;
}
