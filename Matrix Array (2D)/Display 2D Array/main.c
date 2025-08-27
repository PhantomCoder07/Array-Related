#include <stdio.h>
int main()
{
    int r,c;
    printf ("Enter matrix row: ");
    scanf ("%d",&r);
    printf ("Enter matrix column: ");
    scanf ("%d",&c);
    int arr[r][c];
    printf ("Enter matrix element:\n");
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    printf ("Given matrix:\n");
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf ("%d ",arr[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
