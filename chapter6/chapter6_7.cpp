/*
编写一个程序，每次读取一个单词，直到用户只输入q。该程序应指出有多少个单词以元音打头，
有多少个单词以辅音打头，还有多少个单词属于其他类别（如以数字或标点符号打头）。
可以将单词分为这三类，然后使用 switch 语句处理这三种情况。可以使用 isalpha() 函数来区分以字母打头
和其他情况的单词。运行该程序时，情况将如下所示：
Enter words (q to quit):
The 12 awesome oxen ambled
quietly across 15 meters of lawn. q
5 words beginning with vowels
4 words beginning with consonants
2 others
*/
#include <iostream>
#include <cctype>
#include <string>
int main()
{
    std::string word;
    int consonant=0;
    int vowel = 0;
    int other =0;
    std::cout<<"Enter words (q to quit):"<<std::endl;
    while(std::cin>>word){
        if(word =="q"){
            break;
        }
        char first = word[0];
        if(std::isalpha(first)){
            char lower = std::tolower(first);
            switch(lower){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                vowel++;
                break;
                default :
                consonant++;
                break;
            }
        }
        else{
            other++;
        }
    }
    std::cout<< vowel <<" words beginning with vowels"<<std::endl;
    std::cout<< consonant <<" words beginning with consonants"<<std::endl;
    std::cout << other <<" others"<<std::endl;
    return 0;
}