/*
3．编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。1度为
60分，1分等于60秒，请以符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
下面是该程序运行时的情况：
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/
#include <iostream>
#include <iomanip>
int main()
{
    const int MINUTE_PER_DEGREE = 60;
    const int SECOND_PER_MINUTE = 60;

    int degree,minute,second;
    std::cout<< "Enter a latitude in degrees, minutes, and seconds:"<<std::endl;
    std::cout << "First, enter the degrees:";
    std::cin>> degree;
    std::cout<< "Next, enter the minutes of arc:";
    std::cin>> minute;
    std::cout<< "Finally, enter the seconds of arc:";
    std::cin>> second;

    double a = static_cast<double>(minute)/MINUTE_PER_DEGREE;
    double b = static_cast<double>(second)/SECOND_PER_MINUTE/MINUTE_PER_DEGREE;
    double c = a+b+degree;


    std::cout<< degree<<" degrees, " 
    << minute << " minutes, " 
    << second << " seconds ="
    <<std::fixed<<std::setprecision(4)
    << c << "degrees"<<std::endl;

    //如果你想要保留 4位有效数字（Significant Digits），而不是小数点后固定4位，
    //只需要去掉 std::fixed，只保留 std::setprecision(4) 即可。
    //如果你想彻底恢复到程序刚启动时的状态（默认模式 + 默认6位精度），需要同时重置两者：
    //std::cout << std::defaultfloat << std::setprecision(6);
    return 0;
}