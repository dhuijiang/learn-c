/**
 * 简答题1
 * 
 * 最大公约数与最小公倍数。题目内容：编写两个函数，分别求两个整数的最大公约数和最小公倍数，
 * 并用主函数调用这两个函数，然后输出结果。两个整数由键盘输入。
 * 约定最大公约数为正整数，两数里有负的则最小公倍数就为负的。
 * 
 * 输入格式：输入均不为0的整数n和m(n与m的乘积还在整数范围内)（两数之间用英文,隔开）
 * 输出格式：输出这两个整数的最大公约数和最小公倍数（两结果之间用英文,隔开）
 * 
 * 输入样例：24,36
 * 输出样例：12,72
 * 
 * 
 * 输入样例：-48,128
 * 输出样例：16,-384
 * 时间限制：500ms内存限制：32000kb
 **/
#include<stdio.h>

/**
 * 求两个数的最大公约数
 **/
int gcd(int a, int b) {
    int c, i;
    if (a<0) a = -a;
    if (b<0) b = -b;
    c = a;
    if (c>b) c = b;
    for (i=c; i>0; i--) {
        if (a%i==0 && b%i==0) break;
    }
    return i;
}

/**
 * 求两个数的最小公倍数
 **/
int lcm(int a, int b) {
    int c, i, minus = 0;
    if (a<0) {
        a = -a;
        minus = -1;
    }
    if (b<0) {
        b = -b;
        minus = -1;
    }
    c = a;
    if (c<b) c = b;
    for (i=c; i>0; i++) {
        if (i%a==0 && i%b==0) break;
    }
    if (minus != 0) i = -i;
    return i;
}

int main() {
    int a, b;
    scanf("%d,%d", &a, &b);
    printf("%d,%d\n", gcd(a,b), lcm(a,b));
    return 0;
}