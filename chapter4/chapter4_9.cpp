/*
结构 CandyBar 包含了3个成员。第一个成员存储了糖块的品牌；第二个成员存储糖块的重量（可以
有小数)；第三个成员存储了糖块的卡路里含量(整数)。但使用 new 来动态分配 数组，而不是
声明一个包含3个元素的CandyBar 数组。
*/
#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    double weight;
    int calories; 
};

int main()
{
    CandyBar * snacks = new CandyBar[3]; 
    
    for (int i = 0; i < 3; i++) {
        std::cout << "--- 请输入第 " << i + 1 << " 个糖果的信息 ---\n";
        
        std::cout << "品牌名称: ";
        std::getline(std::cin, snacks[i].name); 
        
        std::cout << "重量: ";
        std::cin >> snacks[i].weight;           
        
        std::cout << "卡路里: ";
        std::cin >> snacks[i].calories;         
        
        std::cin.get(); // 吃掉换行符
        std::cout << std::endl;
    }
    std::cout << "====== 糖果信息列表 ======\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "品牌: " << snacks[i].name << "\n"
                  << "重量: " << snacks[i].weight << "\n"
                  << "卡路里: " << snacks[i].calories << "\n\n";
    }

    delete[] snacks; // 释放数组
    return 0;
}