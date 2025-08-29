#include <stdio.h>
#define max 10
void make_short (int mat[max][max], int a[max][max], int n, int row, int col)
{
    int i=0,j=0;
    for (int r=0; r<n; r++)
    {
        if (r==row)
            continue;
        j=0;
        for (int c=0; c<n; c++)
        {
            if (c==col)
                continue;
            a[i][j++]=mat[r][c];
        }
        i++;
    }
}
int determinant(int mat[max][max], int n)
{
    if (n==1)
        return mat[0][0];
    if (n==2)
        return mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];
    int a[max][max];
    int det=0,sign=1;
    for (int col=0; col<n; col++)
    {
        make_short(mat,a,n,0,col);
        det+=sign*mat[0][col]*determinant(a,n-1);
        sign=-sign;
    }
    return det;
}
int main()
{
    int n;
    int mat[max][max];
    printf("Enter matrix size: ");
    scanf("%d",&n);
    printf("Enter matrix elements:\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Given matrix:\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Determinant of the matrix is: %d\n",determinant(mat,n));
    return 0;
}
