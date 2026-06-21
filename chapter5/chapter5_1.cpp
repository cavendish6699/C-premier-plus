/*
编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）
所有整数的和。这里假设先输入较小的整数。例如，如果用户输入的是2和9，则程序将指出 2~9之间所
有整数的和为 44。
*/
#include <iostream>
int main()
{
    int num1,num2;
    long result=0;
    std::cout << "please enter min number ";
    std::cin >> num1;
    std::cout << "please enter max number ";
    std::cin >> num2;
    for(int i=num1;i<=num2;i++){
        result +=i;
    }
    std::cout<<"The sum intergers from "
    <<num1
    <<" to "
    <<num2
    <<" is "
    <<result<<std::endl;
    return 0;
}