#include<stdio.h>
#include<Windows.h>
int g(int n1, int n2)//GCD，最大公约数的求解，利用辗转相除法
{
	if (n1%n2 == 0)
		return n2;
	else
		return g(n2, n1%n2);
}
int l(int n1, int n2)//LCM，最小公倍数的求解，利用GCD的结果计算
{
	return (n1*n2 / g(n1, n2));
}
int main()
{
	printf("please enter two positive integers:\n");
	int a = 1, b = 1;
	scanf("%d %d", &a, &b);//提示输入两个正整数
	printf("The gcd of %d and %d is %d\n", a, b, g(a, b));
	printf("The lcm of %d and %d is %d\n", a, b, l(a, b));//依次输出GCD和LCM
	system("pause");
	return 0;
}