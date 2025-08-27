#include <stdio.h>
int main()
{
    int i,j,n,temp;
    printf ("Enter array size: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("\nEnter array element: ");
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf ("\nThe duplicate elements: ");
    for (i=0; i<n; i++)
    {
        temp= arr[i];
        for (j=i+1; j<n; j++)
        {
            if (arr[i]==arr[j] && arr[i] != NULL)
            {
                arr[i]= NULL;
                printf ("%d ",temp);
            }
            else if (temp==arr[j])
                arr[j]=NULL;
        }
    }
    return 0;
}
