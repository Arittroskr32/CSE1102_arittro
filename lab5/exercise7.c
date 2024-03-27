#include <stdio.h>
double powerreturn(int a, int b)
{
    int c;
    if(b<0){
        c=-b;
    }
    double k = 1, p=1;
    if (b > 0)
    {
        for (int i = 1; i <= b; i++)
        {
            k = k * a;
        }
        return k;
    }
    else{
        for (int i = 1; i <= c; i++)
        {
            k = k * a;
        }
        return (1/k);
    }
}
int main()
{
    int x, n;
    printf("Enter the two numbers: \n");
    scanf("%d %d", &x, &n);
    printf("Value of x^n is: %.4lf\n", powerreturn(x, n));
    return 0;
}