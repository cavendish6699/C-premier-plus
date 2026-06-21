/*
编写一个程序，记录捐助给“维护合法权利团体”的资金。该程序要求用户输入 捐献者数目，然后
要求用户输入每一个捐献者的姓名和款项。这些信息被储存在一个 动态分配的结构数组中。每个结构有两
个成员：用来储存姓名的字符数组（或string对象）和用来存储款项的 double 成员。读取所有的数据后，
程序将显示所有捐款超过 10000 的捐款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐
款者是重要捐款人 （Grand Patrons)。然后，程序将列出其他的捐款者，该列表要以 Patrons 开头。如果某
种类别没有捐款者，则程序将打印单词 “none ”。该程序只显示这两种类别，而不进行排序。
*/
#include <iostream>
#include <string>

struct member {
    std::string name;
    double fund;
};

int main() {
    std::cout << "请输入捐款人数: ";
    int n;
    std::cin >> n;

    member * information = new member[n];

    std::cout << "请依次输入姓名和捐款金额（每行一个姓名 + 金额）:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> information[i].name >> information[i].fund;
    }

    // ===== Grand Patrons =====
    std::cout << "\nGrand Patrons" << std::endl;   
    bool hasGrand = false;
    for (int i = 0; i < n; i++) {
        if (information[i].fund > 10000) {
            std::cout << information[i].name << "  " << information[i].fund << std::endl;
            hasGrand = true;    
        }
    }
    if (!hasGrand) {            // 循环全部结束后再判断
        std::cout << "none" << std::endl;
    }

    // ===== Patrons =====
    std::cout << "\nPatrons" << std::endl;
    bool hasPatrons = false;    
    for (int i = 0; i < n; i++) {
        if (information[i].fund <= 10000) {   
            std::cout << information[i].name << "  " << information[i].fund << std::endl;
            hasPatrons = true;
        }
    }
    if (!hasPatrons) {
        std::cout << "none" << std::endl;
    }

    delete[] information;  

    return 0;
}