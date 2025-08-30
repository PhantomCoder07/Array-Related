#include <stdio.h>
int cpath (int r, int c)
{
    int i,j,max;
    int a[r][c];
    for (i=0; i<r; i++)
    {
        a[i][0]=1;
    }
    for (j=0; j<c; j++)
    {
        a[0][j]=1;
    }
    for (i=1; i<r; i++)
    {
        for (j=1; j<c; j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    return max=a[r-1][c-1];
}
int main()
{
    int r,c;
    printf("Enter row position: ");
    scanf("%d",&r);
    printf("Enter column position: ");
    scanf("%d",&c);
    printf ("Total path: %d\n",cpath(r,c));
    return 0;
}
