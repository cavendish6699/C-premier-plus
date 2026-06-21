/*
编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入（数字除外），
同时将大写字符转换为小写，将小写字符转换为大写（别忘了 cctype 函数系列）。
*/
#include <iostream>
#include <string>
#include <cctype>
int main()
{
    char ch;
    std::cout <<"please enter something you want to wirte down"<<std::endl;
    do
    {
        std::cin.get(ch);
        if(ch == '@'){
            break;
        }
        if(std::isdigit(ch)){
            continue;
        }
        else if(std::isupper(ch)){
            ch = std::tolower(ch);
        }
        else if(std::islower(ch)){
            ch = std::toupper(ch);
        }
    std::cout<<ch;
    } while (1);
    std::cout<<std::endl;

    return 0;
}