/*
编写一个要求用户输入数字的程序。每次输入后，程序都将报告到目前为止，所有输入的累计和。
当用户输入0时，程序结束。
*/
#include <iostream>
int main()
{
    double num ;
    double result= 0.0;
    do{
        std::cout<<"please enter a number"<<std::endl;
        std::cin >>num;
        if(num != 0){
            result +=num;
            std::cout <<"The current sum is " <<result <<std::endl;
        }
    }while(num != 0);

    return 0;
}