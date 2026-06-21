/*
在Neutronia 王国，货币单位是tvarp，收入所得税的计算方式如下：
5000 tvarps：不收税
5001~15000 tvarps: 10%
15001~35000 tvarps: 15%
35000 tvarps 以上 : 20%
例如，收入为 38000 tvarps 时，所得税为 5000 × 0.00 + 10000 × 0.10 + 20000× 0.15 +3000× 0.20，即
4600 tvarps。请编写一个程序，使用循环来要求用户输入收入，并报告所得税。当用户输入负数或非数字
时，循环将结束。
*/
#include <iostream>
double tvarps(int salary)
{
    if(salary<=5000){
        return 0;
    }
    else if(salary>5000&&salary<=15000){
        return (salary-5000)*0.1;
    }
    else if(salary>15000&&salary<=35000){
        return 1000+(salary-15000)*0.15;
    }
    else {
        return 1000+3000+(salary-35000)*0.2;
    }
}
int main()
{
    std::cout<<"The loop will end when you enter a negative number or non-numeric input"<<std::endl;
    int salary;
    while(std::cin>>salary&&salary>=0){
        std::cout<<"The tax of your salary :"<<tvarps(salary)<<std::endl;

        std::cout<<"please enter your salary"<<std::endl;
    }
    return 0;
}
