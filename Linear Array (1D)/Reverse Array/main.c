// Standard
#include <stdio.h>
int main()
{
    int i,n;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf ("The given numbers in reverse order: ");
    for (i=n-1; i>=0; i--)
    {
        printf ("%d ",arr[i]);
    }
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
void display (int a[], int n)
{
    for (int i=n-1; i>=0; i--)
    {
        printf ("%d ",a[i]);
    }
}
int main()
{
    int n;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers: ",n);
    input(arr,n);
    printf ("The given numbers in reverse order: ");
    display(arr,n);
    return 0;
}
// Structure
#include <stdio.h>
struct num
{
    int a;
};
int main()
{
    int i,n;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    struct num arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i].a);
    }
    printf ("The given numbers in reverse order: ");
    for (i=n-1; i>=0; i--)
    {
        printf ("%d ",arr[i]);
    }
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    file1 = fopen ("Array num.txt","w");
    file2 = fopen ("Array num.txt","r");
    int i,n;
    char ch;
    if (file1==NULL)
        printf ("The file does not exist");
    else
    {
        printf ("Enter size of array: ");
        scanf ("%d",&n);
        int arr[n];
        printf ("Enter %d numbers: ",n);
        for (i=0; i<n; i++)
        {
            scanf ("%d",&arr[i]);
        }
        fprintf (file1,"The given numbers in reverse order: ");
        for (i=n-1; i>=0; i--)
        {
            fprintf (file1,"%d ",arr[i]);
        }
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
// Pointer
#include <stdio.h>
int main()
{
    int i,n,*p;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    p=&arr[n-1];
    printf ("The given numbers in reverse order: ");
    for (i=0; i<n; i++)
    {
        printf ("%d ",*p--);
    }
    return 0;
}
// Pointer 
#include <stdio.h>
int main ()
{
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    int *p=arr;
    printf("Enter array elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    printf("Reverse array elements: ");
    for (i=n-1; i>=0; i--)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
