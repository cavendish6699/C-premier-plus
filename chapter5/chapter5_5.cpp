/*
假设要销售《C++ For Fools》一书。请编写一个程序，输入全年中每个月的销售量（图书数量，而
不是销售额)。程序通过循环，使用初始化为月份字符串的char * 数组（或string 对象数组）逐月进行提示，
并将输入的数据储存在一个 int 数组中。然后，程序计算数组中各元素的总数，并报告这一年的销售情况。
*/
#include <iostream>
#include <string>
int main()
{
    const std::string months[12] = {
        "January","February","March","April","May","June","July","August",
        "September","October","November","December"

    };
    int sales[12];
    int total=0;
    for(int i=0;i<12;i++){
        std::cout<<months[i]<<" : ";
        std::cin >> sales[i];

        total +=sales[i];
    }
    std::cout <<"The sum of sales is : "<<std::endl;
    for(int i=0;i<12;i++){
        std::cout << months[i] << " : " <<sales[i] <<std::endl;
    }
    std::cout << "the total is " << total <<std::endl;
    return 0;
}