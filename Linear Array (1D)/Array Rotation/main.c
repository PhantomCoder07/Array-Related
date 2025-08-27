#include <stdio.h>
int main()
{
    int i,j,n,a,temp;
    char ch;
    printf ("Enter array size: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d the numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf ("The %d numbers are: ",n);
    for (i=0; i<n; i++)
    {
        printf ("%d ",arr[i]);
    }
    fflush (stdin);
    printf ("\n('l' for left & 'r' for right)");
    printf ("\nEnter the rotation side: ");
    scanf ("%c",&ch);
    printf ("Enter the rotation number: ");
    scanf ("%d",&a);
    if (ch=='l')
    {
        printf ("The left rotated array: ");
        for (j=0; j<a; j++)
        {
            temp=arr[0];
            for (i=0; i<n-1; i++)
            {
                arr[i]=arr[i+1];
            }
            arr[i]=temp;
        }
    }
    else if (ch=='r')
    {
        printf ("The right rotated array: ");
        for (j=0; j<a; j++)
        {
            temp=arr[n-1];
            for (i=n-1; i>=1; i--)
            {
                arr[i]=arr[i-1];
            }
            arr[i]=temp;
        }
    }
    for (i=0; i<n; i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}
