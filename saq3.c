/**
 * 简答题3
 * 
 * 组合数。题目内容：本题要求编写程序，根据公式C​n​m​​=​m!(n−m)!​​n!​​算出从n个不同元素中取出m个元素（m≤n）的组合数。
 * 建议定义和调用函数fact(n)计算n!，其中n的类型是int，函数类型是double。
 * 
 * 输入格式：输入在一行中给出两个正整数m和n（m≤n），以英文,分隔。
 * 输出格式：输出组合数计算结果，题目保证结果在类型范围内。
 * 
 * 输入样例：2,7
 * 输出样例：21
 * 
 * 时间限制：500ms内存限制：32000kb
 **/
#include<stdio.h>

/**
 * 计算n!
 **/
double fact(int n) {
    double sum=1;
    for (int i=1; i<=n; i++) sum=sum*i;
    return sum;
}

int main()
{
    int m,n;
    scanf("%d,%d", &m, &n);
    printf("%.0lf\n", fact(n)/(fact(m)*fact(n-m)));
    return 0;
}
