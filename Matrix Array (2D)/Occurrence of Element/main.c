#include <stdio.h>
int main()
{
    int n,m,i,j,s,count=0;
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
    printf ("Given matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf ("%d ",mat[i][j]);
        }
        printf ("\n");
    }
    printf ("Enter the search element: ");
    scanf ("%d",&s);
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (mat[i][j]==s)
            {
                count++;
            }
        }
    }
    if (count==0)
        printf ("The element is not found\n");
    else
        printf ("The occurrence of given element %d is: %d\n",s,count);
    return 0;
}
