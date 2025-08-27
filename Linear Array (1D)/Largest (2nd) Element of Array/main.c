// Standard
#include <stdio.h>
int main()
{
    int i,n,max1,max2=0;
    printf ("Enter array size: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    max1=arr[0];
    for (i=1; i<n; i++)
    {
        if (arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i]>max2 && arr[i]<max1)
            max2=arr[i];
    }
    printf ("The 1st largest: %d\n",max1);
    printf ("The 2nd largest: %d",max2);
    return 0;
}
// Function
#include <stdio.h>
void input (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}
int find_max (int a[], int n)
{
    int max1=a[0];
    int max2=0;
    for (int i=1; i<n; i++)
    {
        if (a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if (a[i]>max2 && a[i]<max1)
            max2=a[i];
    }
    return max2;
}
int main()
{
    int n;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers : ",n);
    input(arr,n);
    printf ("The 2nd Largest number: %d.",find_max(arr,n));
    return 0;
}
// Structure
#include <stdio.h>
struct maximum
{
    int a;
};
int main()
{
    int i,n,max1,max2=0;
    printf ("Enter array size: ");
    scanf ("%d",&n);
    struct maximum arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i].a);
    }
    max1=arr[0].a;
    for (i=1; i<n; i++)
    {
        if (arr[i].a>max1)
        {
            max2=max1;
            max1=arr[i].a;
        }
        else if (arr[i].a>max2 && arr[i].a<max1)
            max2=arr[i].a;
    }
    printf ("The 1st largest: %d\n",max1);
    printf ("The 2nd largest: %d",max2);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    file1 = fopen ("Array num.txt","w");
    file2 = fopen ("Array num.txt","r");
    int i,n,max1,max2=0;
    char ch;
    if (file1==NULL)
        printf ("The file does not exist");
    else
    {
        printf ("Enter array size: ");
        scanf ("%d",&n);
        int arr[n];
        printf ("Enter %d numbers: ",n);
        for (i=0; i<n; i++)
        {
            scanf ("%d",&arr[i]);
        }
        max1=arr[0];
        for (i=1; i<n; i++)
        {
            if (arr[i]>max1)
            {
                max2=max1;
                max1=arr[i];
            }
            else if (arr[i]>max2 && arr[i]<max1)
                max2=arr[i];
        }
        fprintf (file1,"The 1st largest: %d\nThe 2nd largest: %d",max1,max2);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("The file does not exist");
    else
    {
        while (!feof(file2))
        {
            ch = fgetc (file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}
