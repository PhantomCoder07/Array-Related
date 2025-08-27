#include <stdio.h>
int main()
{
    int i,n,m,count=0;
    printf ("Enter array size: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("\nEnter array element: ");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf ("\nThe given elements: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ",arr[i]);
    }
    fflush (stdin);
    printf ("\nEnter the search element: ");
    scanf ("%d",&m);
    for (i=0; i<n; i++)
    {
        if (arr[i]==m)
            count++;
    }
    if (count==0)
        printf ("Searched element is not found.");
    else
        printf ("Occurrence of '%d' element: %d times",m,count);
    return 0;
}
