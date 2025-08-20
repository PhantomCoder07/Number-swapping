// Standard
#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: %d %d\n",a,b);
    int temp = a;
    a = b;
    b = temp;
    printf("Number after swapping: %d %d\n",a,b);
    return 0;
}
// Pointer
#include <stdio.h>
int main()
{
    int a,b;
    int *x = &a;
    int *y = &b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: %d %d\n",a,b);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("Numbers after swapping: %d %d\n",a,b);
    return 0;
}
// Bitwise
#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: %d %d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("Number after swapping: %d %d\n",a,b);
    return 0;
}
// Function
#include <stdio.h>
void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Numbers before swapping: %d %d\n",a,b);
    swap(&a,&b);
    printf("Numbers after swapping: %d %d\n",a,b);
    return 0;
}
