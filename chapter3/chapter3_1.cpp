/*1．编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），然后将身高转换为英尺
和英寸。该程序      使用下划线字符来指示输入位置    。另外，使用一个const 符号常量来表示转换因子。*/
#include <iostream>
using namespace std;
int main()
{
    const int K = 12;
    int height;
    std::cout<<"请输入一个整数作为您的身高(以英寸为单位)___\b\b\b";
    std::cin >> height;
    int a = height/K;
    int b = height%K;
    std::cout << "身高为" << a <<"英尺" << b <<"英寸" <<std::endl;
    return 0;
}