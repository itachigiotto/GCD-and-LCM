#include<stdio.h>
#include<Windows.h>
int g(int n1, int n2)//GCD�����Լ������⣬����շת�����
{
	if (n1%n2 == 0)
		return n2;
	else
		return g(n2, n1%n2);
}
int l(int n1, int n2)//LCM����С����������⣬����GCD�Ľ������
{
	return (n1*n2 / g(n1, n2));
}
int main()
{
	printf("please enter two positive integers:\n");
	int a = 1, b = 1;
	scanf("%d %d", &a, &b);//��ʾ��������������
	printf("The gcd of %d and %d is %d\n", a, b, g(a, b));
	printf("The lcm of %d and %d is %d\n", a, b, l(a, b));//�������GCD��LCM
	system("pause");
	return 0;
}