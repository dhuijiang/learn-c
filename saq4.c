/**
 * 爬楼梯。题目内容：可爱的小明特别喜欢爬楼梯，他有的时候一次爬一个台阶，
 * 有的时候一次爬两个台阶，有的时候一次爬三个台阶。
 * 如果这个楼梯有n个台阶，小明一共有多少种爬法呢？n值从键盘输入。
 * 
 * 
 * 输入格式：输入一个整数n,(1<=n<46)。
 * 输出格式：输出当楼梯阶数是n时的上楼方式总数。
 * 
 * 输入样例：1
 * 输出样例：1
 * 
 * 
 * 输入样例：4
 * 输出样例：7
 * 
 * 
 * 输入样例：24
 * 输出样例：1389537
 * 时间限制：500ms内存限制：32000kb
 **/
#include<stdio.h>

/**
 * 爬楼梯
 **/
int palouti(int n) {
    if (n<=1) return 1;
    if (n==2) return 2;
    if (n==3) return 4;
    return palouti(n-1) + palouti(n-2) + palouti(n-3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", palouti(n));
    return 0;
}