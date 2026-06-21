/*
编写一个程序，它使用一个char 数组和循环来每次读取一个单词，直到用户输入done 为止。随后，
该程序指出用户输入了多少个单词（不包括 done 在内)。下面是该程序的运行情况：
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
您应在程序中包含头文件 cstring，并使用两数 strcmp()来进行比较测试。
*/
#include <iostream>
#include <cstring>
int main()
{
    char word[1000];
    int total =0;
    std::cout <<"Enter words (to stop, type the word done):"<<std::endl;
    do{
        std::cin >> word;
        int result = strcmp(word,"done");
        if(result == 0){
            break;
        }
    total++;
    }while(1);
    std::cout<<"You entered a total of "<< total <<" words."<<std::endl;

    return 0;
}