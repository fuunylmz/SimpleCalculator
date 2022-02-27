#include "../Include/Calculator.h"
// #include "./xxx.h" 表示当前目录
// #include "../xx.h" 表示当前目录的上一级目录

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
	std::cout << "计算器\n";
	std::cout << "请输入两个操作数 例: a+b|a-b|a*b|a/b|a%b \n";
}
