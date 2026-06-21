/*
编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为一
加仑的里程。如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后
指出欧洲风格的结果一即每100 公里的耗油量（升）。
*/
#include <iostream>
int main() {
    int mode;
    
    std::cout << "请选择计算模式:\n";
    std::cout << "1 - 美制 (英里/加仑, MPG)\n";
    std::cout << "2 - 欧制 (升/100公里, L/100km)\n";
    std::cout << "请输入选项 (1 或 2): ";
    std::cin >> mode;
    
    if (mode == 1) {
        double miles, gallons;
        std::cout << "请输入驱车里程 (英里): ";
        std::cin >> miles;
        std::cout << "请输入使用汽油量 (加仑): ";
        std::cin >> gallons;
        
        if (gallons == 0) {
            std::cout << "错误: 汽油量不能为零!\n";
        } else {
            double mpg = miles / gallons;
            std::cout << "汽车耗油量: " << mpg << " 英里/加仑 (MPG)\n";
        }
    } 
    else if (mode == 2) {
        double km, liters;
        std::cout << "请输入驱车距离 (公里): ";
        std::cin >> km;
        std::cout << "请输入使用汽油量 (升): ";
        std::cin >> liters;
        
        if (km == 0) {
            std::cout << "错误: 行驶距离不能为零!\n";
        } else {
            double consumption = (liters / km) * 100.0;
            std::cout << "汽车耗油量: " << consumption << " 升/100公里\n";
        }
    } 
    else {
        std::cout << "无效选项，请输入 1 或 2。\n";
    }
    
    return 0;
}