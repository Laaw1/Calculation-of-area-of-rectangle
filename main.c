#include <stdio.h>
int multiplication(int l, int w);

void main()
{
    int a,b,area;
    printf("Enter the width and length:\n");
    scanf("%d%d",&a,&b);

    area = multiplication(a,b);
    printf("The Area of the rectangle is %d", area);
}
int multiplication(int l,int w)
{
    int q;
    q=l*w;
    return q;
}
