// SimpleCalculator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include "Calculator.h"
using namespace std;

int main()
{
    Calculator c;
    double x = 0.0;
    double y = 0.0;
    char o = '+';
    double result = 0.0;
    for (;;) {
        c.Start();
        cin >> x >> o >> y;
        if (o == '/' && y == 0) {
            cout << "被除输不能为零!\n";
            continue;
        }
        result = c.Calculate(x, o, y);
        cout << x << o << y << "的结果是: " << result << endl;
        system("pause");
        system("cls");
    }
}