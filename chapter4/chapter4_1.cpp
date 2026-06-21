/*
编写一个C++程序，如下述输出示例所示的那样请求并显示信息：
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
注意，该程序应该接受的名字包含多个单词。另外，程序将向下调整成绩，即向上调一个字母。假设
用户请求 A、B或C，所以不必担心D和F之间的空档。
*/
#include <iostream>
#include <string>
int main()
{
    std::string name,lastname;
    char grade;
    int age;

    std::cout<< "What is your first name?";
    std::getline(std::cin, name);

    std::cout<< "What is your last name?";
    std::cin >>lastname;

    std::cout<< "What letter grade do you deserve?";
    std::cin >> grade;
    grade +=1;

    std::cout<< "What is your age?";
    std::cin >>age;

    std::cout<< "Name: "
    <<lastname 
    <<", "
    <<name<<std::endl
     <<"Grade: "
    <<grade<<std::endl
    <<"Age: "
    <<age<<std::endl;
   
    return 0;
}