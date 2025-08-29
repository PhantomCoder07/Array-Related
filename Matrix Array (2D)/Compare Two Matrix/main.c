#include <stdio.h>
int main()
{
    int r1,r2,c1,c2;
    printf ("Enter 1st matrix's row: ");
    scanf ("%d",&r1);
    printf ("Enter 1st matrix's column: ");
    scanf ("%d",&c1);
    printf ("Enter 2nd matrix's row: ");
    scanf ("%d",&r2);
    printf ("Enter 2nd matrix's column: ");
    scanf ("%d",&c2);
    if (r1!=r2 || c1!=c2)
    {
        printf("The matrices cannot be equal.\n");
        return 0;
    }
    int mat1[r1][c2],mat2[r2][c2];
    printf ("Enter 1st matrix's element:\n");
    for (int i=0; i<r1; i++)
    {
        for (int j=0; j<c1; j++)
        {
            scanf ("%d",&mat1[i][j]);
        }
    }
    printf ("Enter 2nd matrix's element:\n");
    for (int i=0; i<r2; i++)
    {
        for (int j=0; j<c2; j++)
        {
            scanf ("%d",&mat2[i][j]);
        }
    }
    printf ("1st matrix:\n");
    for (int i=0; i<r1; i++)
    {
        for (int j=0; j<c1; j++)
        {
            printf ("%d ",mat1[i][j]);
        }
        printf ("\n");
    }
    printf ("2nd matrix:\n");
    for (int i=0; i<r2; i++)
    {
        for (int j=0; j<c2; j++)
        {
            printf ("%d ",mat2[i][j]);
        }
        printf ("\n");
    }
    int c=0;
    for (int i=0; i<r1; i++)
    {
        for (int j=0; j<c1; j++)
        {
            if (mat1[i][j]==mat2[i][j])
                c++;
        }
    }
    if (c==r1*c1)
        printf("Given matrices are equal.\n");
    else
        printf("Given matrices are not equal.\n");
    return 0;
}
