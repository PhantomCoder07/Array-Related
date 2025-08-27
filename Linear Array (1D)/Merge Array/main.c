#include <stdio.h>
int main()
{
    int n1,n2,m,i,j,t;
    printf ("Enter array 1 limit: ");
    scanf ("%d",&n1);
    int arr1[n1];
    printf ("Enter %d numbers for array 1: ",n1);
    for (i=0; i<n1; i++)
    {
        scanf ("%d",&arr1[i]);
    }
    printf ("Enter array 2 limit: ");
    scanf ("%d",&n2);
    int arr2[n2];
    printf ("Enter %d numbers for array 2: ",n2);
    for (i=0; i<n2; i++)
    {
        scanf ("%d",&arr2[i]);
    }
    printf ("\n\n");
    printf ("Sorted array 1: ");
    for (i=0; i<n1; i++)
    {
        for (j=i+1; j<n1; j++)
        {
            if (arr1[i]>arr1[j])
            {
                t=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=t;
            }
        }
    }
    for (i=0; i<n1; i++)
    {
        printf ("%d ",arr1[i]);
    }
    printf ("\nSorted array 2: ");
    for (i=0; i<n2; i++)
    {
        for (j=i+1; j<n2; j++)
        {
            if (arr2[i]>arr2[j])
            {
                t=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=t;
            }
        }
    }
    for (i=0; i<n2; i++)
    {
        printf ("%d ",arr2[i]);
    }
    m=n1+n2;
    int arrm[m];
    for (i=0; i<n1; i++)
    {
        arrm[i]=arr1[i];
    }
    for (i=0; i<n2; i++)
    {
        arrm[i+n1]=arr2[i];
    }
    printf ("\n\n");
    printf ("The merged array: ");
    for (i=0; i<m; i++)
    {
        printf ("%d ",arrm[i]);
    }
    printf ("\nThe merged array in ascending order: ");
    for (i=0; i<m; i++)
    {
        for (j=i+1; j<m; j++)
        {
            if (arrm[i]>arrm[j])
            {
                t=arrm[i];
                arrm[i]=arrm[j];
                arrm[j]=t;
            }
        }
    }
    for (i=0; i<m; i++)
    {
        printf ("%d ",arrm[i]);
    }
    return 0;
}
