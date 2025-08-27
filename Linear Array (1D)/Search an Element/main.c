// Standard
#include <stdio.h>
int main()
{
    int i,n,s,count=0;
    printf ("Enter the size: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d elements: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    fflush (stdin);
    printf ("Enter the element to search: ");
    scanf ("%d",&s);
    for (i=0; i<n; i++)
    {
        if (arr[i]==s)
        {
            printf ("The element is found: %d\n", arr[i]);
            printf ("Position of the number: ");
            for (i=0; i<n; i++)
            {
                if (arr[i]==s)
                {
                    printf ("%d ",i+1);
                    count++;
                }
            }
        }
    }
    if (count==0)
        printf ("The element is not found\n");
    return 0;
}
// Function
#include <stdio.h>
void find (int a[], int n, int s)
{
    for (int i=0; i<n; i++)
    {
        if (a[i]==s)
        {
            printf ("The element is found: %d\n", a[i]);
            printf ("First position: %d\n",i+1);
            break;
        }
    }
}
int main()
{
    int i,n,s,count=0;
    printf ("Enter the size: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d elements: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
    }
    printf ("Enter the element to search: ");
    scanf ("%d",&s);
    find(arr,n,s);
    return 0;
}
// Structure
#include <stdio.h>
struct search
{
    int a;
};
int main()
{
    int i,n,s,count=0;
    printf ("Enter the size: ");
    scanf ("%d",&n);
    struct search arr[n];
    printf ("Enter %d elements: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i].a);
    }
    fflush (stdin);
    printf ("Enter the element to search: ");
    scanf ("%d",&s);
    for (i=0; i<n; i++)
    {
        if (arr[i].a==s)
        {
            printf ("The element is found: %d\n", arr[i].a);
            printf ("Position of the number: ");
            for (i=0; i<n; i++)
            {
                if (arr[i].a==s)
                {
                    printf ("%d ",i+1);
                    count++;
                }
            }
        }
    }
    if (count==0)
        printf ("The element is not found\n");
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    file1 = fopen ("Array num.txt","w");
    file2 = fopen ("Array num.txt","r");
    int i,n,s,count=0;
    char ch;
    if (file1==NULL)
        printf ("The file does not exist");
    else
    {
        printf ("Enter the size: ");
        scanf ("%d",&n);
        int arr[n];
        printf ("Enter %d elements: ",n);
        for (i=0; i<n; i++)
        {
            scanf ("%d",&arr[i]);
        }
        fflush (stdin);
        printf ("Enter the element to search: ");
        scanf ("%d",&s);
        for (i=0; i<n; i++)
        {
            if (arr[i]==s)
            {
                fprintf (file1,"The element is found: %d\n", arr[i]);
                fprintf (file1,"Position of the number: ");
                for (i=0; i<n; i++)
                {
                    if (arr[i]==s)
                    {
                        fprintf (file1,"%d ",i+1);
                        count++;
                    }
                }
            }
        }
        if (count==0)
            fprintf (file1,"The element is not found\n");
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
