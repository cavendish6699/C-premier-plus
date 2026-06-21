/*
7．设计一个名为car 的结构，用它存储下述有关汽车的信息：生产商（存储在字符数组或 string 对象
中的宇符串)、生产年份（整数）。编写一个程序，向用户询问有名少辆汽车。随后，程序使用 new 来创建
一个由相应数量的 car 结构组成的动态数组。接下来，程序提示用户输入每辆车的生产商（可能由多个单
词组成）和年份信息。请注意，这需要特别小心，因为它将交替读取数值和字符串（参见第4章）。最后，
程序将显示每个结构的内容。该程序的运行情况如下：
How many cars do you wish to catalog? 2
Car #1:
Please enter the make: Hudson Hornet
Please enter the year made: 1952
Car #2:
Please enter the make: Kaiser
Please enter the year made: 1951
Here is your collection:
1952 Hudson Hornet
1951 Kaiser
*/
//cin.get();
#include <iostream>
#include <string>
struct car{
    std::string brand;
    int age;
};
int main()
{
    int n;
    std::cout <<"How many cars do you wish to catalog? ";
    std::cin >>n;
    car * information = new car[n];

    std::cin.get();

    for(int i=0;i<n;i++){
        std::cout <<"Car #"<<i+1<<":"<<std::endl;
        std::cout<<"Please enter the make: ";
        std::getline(std::cin,information[i].brand);
        std::cout<<"Please enter the year made: ";
        std::cin>>information[i].age;
        
        std::cin.get();
    }
    std::cout<<"Here is your collection:"<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<information[i].age<<" "<<information[i].brand<<std::endl;
    }
    delete[] information;
    return 0;
}