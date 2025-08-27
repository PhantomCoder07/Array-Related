// Standard
#include <stdio.h>
int main()
{
    int i,sum=0,n;
    float avg;
    printf ("Enter array size: ");
    scanf ("%d",&n);
    int arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf ("\nThe sum of numbers: %d",sum);
    avg= (float) sum/n;
    printf ("\nThe average numbers: %.2f",avg);
    return 0;
}
// Function
#include <stdio.h>
float input (float a[], float n)
{
    float sum=0;
    for (int i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int n;
    float add,avg;
    printf ("Enter size of array: ");
    scanf ("%d",&n);
    float arr[n];
    printf ("Enter %d numbers : ",n);
    add=input(arr,n);
    printf ("The sum of numbers : %.2f\n",add);
    avg=add/n;
    printf ("The average numbers: %.2f\n",avg);
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
    int i,n,sum;
    float avg;
    printf ("Enter array size: ");
    scanf ("%d",&n);
    struct num arr[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%d",&arr[i].a);
        sum+=arr[i].a;
    }
    printf ("The sum of numbers: %d",sum);
    avg=(float)sum/n;
    printf ("\nThe average numbers: %.2f",avg);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    file1 = fopen ("Array num.txt","w");
    file2 = fopen ("Array num.txt","r");
    int i,sum=0,n;
    float avg;
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
            sum=sum+arr[i];
        }
        fprintf (file1,"The sum of numbers: %d",sum);
        avg=(float)sum/n;
        fprintf (file1,"\nThe average numbers: %.2f",avg);
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
