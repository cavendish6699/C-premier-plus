/*
编程练习6:
编写一个程序，记录捐助给“维护合法权利团体”的资金。该程序要求用户输入 捐献者数目，然后
要求用户输入每一个捐献者的姓名和款项。这些信息被储存在一个 动态分配的结构数组中。每个结构有两
个成员：用来储存姓名的字符数组（或string对象）和用来存储款项的 double 成员。读取所有的数据后，
程序将显示所有捐款超过 10000 的捐款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐
款者是重要捐款人 （Grand Patrons)。然后，程序将列出其他的捐款者，该列表要以 Patrons 开头。如果某
种类别没有捐款者，则程序将打印单词 “none ”。该程序只显示这两种类别，而不进行排序。

完成编程练习6，但从文件中读取所需的信息。该文件的第一项应为捐款人数，剩下的内容应为成对的行。
在每一对中，第一行为捐款人姓名，第二行为捐款数额。即该文件类似于下面：
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000
*/
#include <iostream>
#include <fstream>   // 文件输入流
#include <string>
#include <cstdlib>   // exit()
struct member {
    std::string name;
    double fund;
};
int main() {
    // 1. 让用户输入文件名
    std::string filename;
    std::cout << "请输入捐款信息文件名: ";
    std::cin >> filename;

    std::ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open()) {
        std::cerr << "无法打开文件 " << filename << std::endl;
        exit(EXIT_FAILURE);
    }

    // 2. 读取捐款人数
    int n;
    inFile >> n;
    inFile.get();   // 吃掉第一行末尾的换行符

    // 3. 动态分配结构数组
    member * information = new member[n];

    // 4. 依次读取每一个人：姓名（可能含空格） + 款项
    for (int i = 0; i < n; i++) {
        std::getline(inFile, information[i].name); // 读一整行姓名
        inFile >> information[i].fund;             // 读款项
        inFile.get(); // 吃掉款项后的换行符，为下一次 getline 做准备
    }
    inFile.close();

    // ===== Grand Patrons =====
    std::cout << "\nGrand Patrons" << std::endl;   
    bool hasGrand = false;
    for (int i = 0; i < n; i++) {
        if (information[i].fund > 10000) {
            std::cout << information[i].name << "  " << information[i].fund << std::endl;
            hasGrand = true;    
        }
    }
    if (!hasGrand) {
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