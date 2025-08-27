#include <stdio.h>
int main()
{
    int n,s;
    printf ("Enter array limit: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter array element: ");
    for (int i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    int cpy[n];
    for (int i=0; i<n; i++)
    {
        cpy[i]=arr[i];
    }
    printf ("The copied array: ");
    for (int i=0; i<n; i++)
    {
        printf ("%d ",cpy[i]);
    }
    return 0;
}
