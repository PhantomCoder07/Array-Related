// Standard
#include <stdio.h>
int main()
{
    int i,n,max;
    printf ("Enter the size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    max=arr[0];
    for (i=0; i<n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf ("The Largest number: %d.",max);
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
    int max=a[0];
    for (int i=0; i<n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int n;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers : ",n);
    input(arr,n);
    printf ("The Largest number: %d\n",find_max(arr,n));
    return 0;
}
// Structure
#include <stdio.h>
struct maximum
{
    int arr[1000];
    int max;
};
int main()
{
    struct maximum a;
    int i,n;
    printf ("Enter the size of array: ");
    scanf ("%d",&n);
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&a.arr[i]);
    }
    a.max=a.arr[0];
    for (i=0; i<n; i++)
    {
        if (a.arr[i]>a.max)
        {
            a.max=a.arr[i];
        }
    }
    printf ("The Largest number: %d\n",a.max);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    file1 = fopen ("Array num.txt","w");
    file2 = fopen ("Array num.txt","r");
    int i,n,max;
    char ch;
    if (file1==NULL)
        printf ("The file does not exist");
    else
    {
        printf ("Enter the size of array: ");
        scanf ("%d",&n);
        int arr[n];
        printf ("Enter %d numbers: ",n);
        for (i=0; i<n; i++)
        {
            scanf ("%d",&arr[i]);
        }
        max=arr[0];
        for (i=0; i<n; i++)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }
        }
        fprintf (file1,"The Largest number: %d.",max);
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
