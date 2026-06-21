/*
编写一个程序,让用户输入三次40米跑的成绩并显示次数和平均成绩。
请使用一个array 对象来存储数据
*/
#include <iostream>
#include <array>

int main()
{
    std::array<double, 3> marks;
    std::cout << "请输入第1次40米跑成绩: ";
    std::cin >> marks[0];
    std::cout << "请输入第2次40米跑成绩: ";
    std::cin >> marks[1];
    std::cout << "请输入第3次40米跑成绩: ";
    std::cin >> marks[2];
    double sum = marks[0] + marks[1] + marks[2];
    double average = sum / marks.size();  // marks.size() 返回 3

    std::cout << "\n--- 结果 ---" << std::endl;
    std::cout << "跑步次数: " << marks.size() << " 次" << std::endl;
    std::cout << "平均成绩: " << average << " 秒" << std::endl;

    return 0;
}