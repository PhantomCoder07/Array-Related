#include <stdio.h>
#define MAX 10
int determinant(int mat[MAX][MAX], int n)
{
    int det=0;
    int submat[MAX][MAX];
    if (n==1)
    {
        return mat[0][0];
    }
    else if (n==2)
    {
        return (mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0]);
    }
    else
    {
        for (int x=0; x<n; x++)
        {
            int subi=0;
            for (int i=1; i<n; i++)
            {
                int subj=0;
                for (int j=0; j<n; j++)
                {
                    if (j==x)
                        continue;
                    submat[subi][subj]=mat[i][j];
                    subj++;
                }
                subi++;
            }
            det+=((x%2==0?1:-1)*mat[0][x]*determinant(submat,n-1));
        }
    }
    return det;
}
int main()
{
    int mat[MAX][MAX];
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Determinant of the matrix is: %d\n", determinant(mat,n));
    return 0;
}
