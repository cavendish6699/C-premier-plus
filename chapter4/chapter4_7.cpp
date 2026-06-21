/*
William Wingate 从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
披萨饼公司的名称，可以有多个单词组成。
披萨饼的直径。
披萨饼的重量。
请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上
述信息，然后显示这些信息。请使用cin（或它的方法）和 cout。
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
    information pizza;
    std::string pizza_name;
    double pizza_diameter;
    double pizza_weight;
    std::cout<<"please enter pizza's name!";
    std::getline(std::cin,pizza_name);
    std::cout <<"please enter pizza's diameter!";
    std::cin >> pizza_diameter;
    std::cout << "please enter pizza's weight!";
    std::cin >> pizza_weight;
    pizza.name = pizza_name;
    pizza.diameter = pizza_diameter;
    pizza.weight = pizza_weight;
    std::cout << pizza.name<<std::endl;
    std::cout <<pizza.diameter<<std::endl;
    std::cout <<pizza.weight <<std::endl;

    return 0;
}