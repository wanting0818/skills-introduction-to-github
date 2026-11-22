#include<stdio.h>
#include<time.h>/*一个新的库函数，来记录命令行里面的时间*/
long long  f(int);
int main()
{
    int n;
    long long result;
    scanf("%d",&n);
    clock_t start=clock();
    result=f(n);
    clock_t end=clock();
    double use=(double)(end-start)/CLOCKS_PER_SEC;
    printf("%lld",result);
    printf("%f",use);
    return 0;
}
/*int f(int n)
{
    int y;
    if(n==1||n==2)
        y=1;
    else y=f(n-1)+f(n-2);
    return y;
}*/
long long f(int n)
{
    int i;
    long long y,a=1,b=1;;
    if(n<=2)
        y=1;
    for(i=3;i<=n;i++)
    {
        y=a+b;
        b=a;
        a=y;
    }
        return y;
}
/*动态规划 迭代法*/
/*还有一个用数组做备忘录的*/
/*很有意思的训练*/
