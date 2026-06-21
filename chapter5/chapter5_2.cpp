/*
使用array 对象（而不是数组）和long double(而不是long long）重新编写程序清单 5.4，并计算
100!的值。
程序清单 5.4 formore.cpp
#include <iostream>
const int ArSize = 16;
int main (){
long long factorials [ArSize];
factorials [1]= factorials [0] = 1LL;
for (int i = 2; i < ArSize; i++)
factorials[i] =i* factorials [i-1];
for (int i = 0; i < ArSize; i++)
std::cout << i <<" ! = " <<factorials[i] <<std::endl;
return 0;
}
*/
#include <iostream>
#include <array>
#include <iomanip>
int main()
{
    std::array<long double,101>factorials;
    factorials [1] = factorials[0] =1.0L;//1.0L为long double ;1LL为long long 
    for(int i=2;i<=100;i++){
        factorials[i] = i* factorials[i-1];
    }

    // 设置输出格式：科学计数法，保留 6 位有效数字
    std::cout << std::scientific << std::setprecision(6);

    for(int i=0;i<=100;i++){
        std::cout <<i << "! = " <<factorials[i] <<std::endl;
    }

    return 0;
}