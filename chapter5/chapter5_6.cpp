/*
假设要销售《C++ For Fools》一书。请编写一个程序，输入全年中每个月的销售量（图书数量，而
不是销售额)。程序通过循环，使用初始化为月份字符串的char * 数组（或string 对象数组）逐月进行提示，
但这一次使用一个二维数组来存储输入——3年中每个月的销售量。程序将报告每年销售量以及三年的总销售量。
*/
#include <iostream>
int main()
{
    const std::string months[12] = {
        "January","February","March","April","May","June","July","August",
        "September","October","November","December"

    };
    int a[3][12];
    int sum[3] = {0};
    int result = 0;
    for(int i=0;i<3;i++){
        std::cout <<"第" <<i+1 <<"年"<<std::endl;
        for(int j=0;j<12;j++){
            std::cout<<months[j]<<" : ";
            std::cin >>a[i][j];
            sum[i] +=a[i][j];
        }
    }
    result = sum[0]+sum[1]+sum[2];
    for(int i=0;i<3;i++){
        std::cout<<"第"<<i+1<<"年的销售量为"<<std::endl;
        std::cout<<sum[i]<<std::endl;
    }
    std::cout<<"三年的总销售量为"<<std::endl;
    std::cout <<result<<std::endl;

    return 0;
}