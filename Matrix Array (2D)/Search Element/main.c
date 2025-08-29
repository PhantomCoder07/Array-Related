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
    printf ("The matrix:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf ("%d ",mat[i][j]);
        }
        printf ("\n");
    }
    printf ("\nEnter the searched element: ");
    scanf ("%d",&s);
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            if (mat[i][j]==s)
            {
                printf ("The element is found in:\n");
                for (i=0; i<n; i++)
                {
                    for (j=0; j<m; j++)
                    {
                        if (mat[i][j]==s)
                        {
                            printf ("Row: %d\tColumn: %d\n",i+1,j+1);
                            count++;
                        }
                    }
                }
            }
        }
    }
    if (count==0)
        printf ("Element not found");
    return 0;
}
