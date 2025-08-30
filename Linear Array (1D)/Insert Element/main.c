#include <stdio.h>
int main()
{
    int i,n,m;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf("Enter the position where element will insert: ");
    scanf("%d",&i);
    printf("Enter the element that will be inserted: ");
    scanf("%d",&m);
    arr[i-1]=m;
    printf ("Elements after operation: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}
