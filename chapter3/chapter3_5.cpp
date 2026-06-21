/* 
编写一个程序，要求用户输入全球当前的人口和美国当前的人口 （或其他国家的人口）。将这些信
息存储在 long long 变量中，并让程序显示美国（或其他国家）的人口占全球人口的百分比。该程序的输出
应与下面类似：
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
*/
#include <iostream>
#include <iomanip>
int main()
{
    long long wpopulation;
    long long apopulation;

    std::cout <<"Enter the world's population:";
    std::cin >>wpopulation;
    std::cout <<"Enter the population of the US:";
    std::cin >> apopulation;

    double percentage = static_cast<double>(apopulation)/static_cast<double>(wpopulation);
    std::cout <<"The population of the US is "
    <<std::fixed<<std::setprecision(5)
    <<percentage*100
    <<"% of the world population."
    <<std::endl;

    return 0;
}