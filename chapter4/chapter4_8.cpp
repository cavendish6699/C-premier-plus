/*
William Wingate 从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
披萨饼公司的名称，可以有多个单词组成。
披萨饼的直径。
披萨饼的重量。
使用 new 来为结构分配内存，而不是声明一个结构变量。另外，让程序在请求
输入比萨饼公司名称之前输入比萨饼的直径。
*/
#include <iostream>
#include <string>
struct information{
    std::string name;
    double diameter;
    double weight;
};
int main()
{
    information * pizza = new information;
    std::cout <<"please enter diameter!";
    std::cin >> pizza ->diameter;
    
    // 3. 吃掉换行符（关键！）
    std::cin.get();
    
    std::cout <<"please enter name!";
    std::getline(std::cin,pizza ->name);
    std::cout<<"please enter weight!";
    std::cin >> pizza ->weight;

    std::cout << "公司名称: " << pizza->name << std::endl;
    std::cout << "直径: " << pizza->diameter << std::endl;
    std::cout << "重量: " << pizza->weight << std::endl;
    delete pizza;
    return 0;
}