#include "../Include/Calculator.h"
// #include "./xxx.h" ��ʾ��ǰĿ¼
// #include "../xx.h" ��ʾ��ǰĿ¼����һ��Ŀ¼

double Calculator::Calculate(double x, char o, double y)
{
		if (o == '+') {
			return x + y;
		}
		if (o == '-') {
			return x - y;
		}
		if (o == '*') {
			return x * y;
		}
		if (o == '/') {
			return x / y;
		}
		if (o == '%') {
			return (int)x % (int)y;
		}
	return 0.0;
}

void Calculator::Start()
{
	std::cout << "������\n";
	std::cout << "���������������� ��: a+b|a-b|a*b|a/b|a%b \n";
}
