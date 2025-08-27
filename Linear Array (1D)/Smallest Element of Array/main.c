// Standard
#include <stdio.h>
int main()
{
    int i,n,min;
    printf ("Enter the size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    min=arr[0];
    for (i=0; i<n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf ("The Smallest number: %d\n",min);
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
int find_min (int a[], int n)
{
    int min=a[0];
    for (int i=0; i<n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
}
int main()
{
    int n;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers : ",n);
    input(arr,n);
    printf ("The Smallest number: %d\n",find_min(arr,n));
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
    int i,n,min;
    printf ("Enter the size of array: ");
    scanf ("%d",&n);
    struct maximum arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i].a);
    }
    min=arr[0].a;
    for (i=0; i<n; i++)
    {
        if (arr[i].a<min)
        {
            min=arr[i].a;
        }
    }
    printf ("The Smallest number: %d\n",min);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    file1 = fopen ("Array num.txt","w");
    file2 = fopen ("Array num.txt","r");
    int i,n,min;
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
        min=arr[0];
        for (i=0; i<n; i++)
        {
            if (arr[i]<min)
            {
                min=arr[i];
            }
        }
        fprintf (file1,"The Smallest number: %d\n",min);
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
