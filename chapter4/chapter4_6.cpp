/*
结构 CandyBar 包含了3个成员。第一个成员存储了糖块的品牌；第二个成员存储糖块的重量（可以
有小数)；第三个成员存储了糖块的卡路里含量(整数)。请编写一个程序，创建一个包含了3个元素的
CandyBar数组，并将它们初始化为所选择的值，然后显示每个结构的内容。
*/
#include <iostream>
#include <string>
struct CandyBar{
    std::string brand;
    double weight;
    int calory;
};
int main()
{
    CandyBar snack[3]={
    {"Nike",2.4,24},
    {"Puma",2.2,2},
    {"Adidas",1.1,1}
    };
    for(int i=0;i<3;i++){
    std::cout <<snack[i].brand<<std::endl;
    std::cout <<snack[i].weight<<std::endl;
    std::cout <<snack[i].calory<<std::endl;
    std::cout<<std::endl;
    }
   
    return 0;
}