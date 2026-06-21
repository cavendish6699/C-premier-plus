/*
编写一个程序，它使用 string 对象而不是字符数组。请在程序中包含头文
件 string，并使用关系运算符来进行比较测试，直到用户输入done 为止。
随后，该程序指出用户输入了多少个单词（不包括 done 在内)。
下面是该程序的运行情况：
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
*/
#include <iostream>
#include <string>
int main()
{
    std::string word;
    int result=0;
    std::cout<<"Enter words (to stop, type the word done):"<<std::endl;
    do{
        std::cin>>word;
        if(word == "done"){
            break;
        }
    result++;
    }while(1);
    std::cout<<"You entered a total of "<< result << " words."<<std;;endl;
    return 0;
}