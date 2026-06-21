/*
编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和
名组合起来，并存储和显示组合结果。请使用 char 数组和头文件cstring 中的两数。下面是该程序运行时
的情形：
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip
*/
#include <iostream>
#include <cstring>
int main()
{
    char first_name[50];
    char last_name[50];
    char result[100];
    std::cout<<"Enter your first name:";
    std::cin>>first_name;
    std::cout<<"Enter your last name:";
    std::cin>>last_name;
    strcpy(result,last_name);
    strcat(result,", ");
    strcat(result,first_name);
    std::cout << "Here's the information in a single string: "
         << result << std::endl;
    return 0;
}