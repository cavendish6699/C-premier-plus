/*
加入 Benevolent Order of Programmer 后，
在 BOP 大会上，人们便可以通过加入者的真实姓名、头衔或秘密 BOP 姓名来了解他（她）。
请编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出成员。编写该程序时，请使用下面的结构：
// Benevolent Order of Programmers name structure
struct bop {
    char fullname[stsize]; // real name
    char title[stsize];    // job title
    char bopname[stsize];  // secret BOP name
    int preference;        // 0 = fullname, 1 = title, 2 = bopname
};
该程序创建一个由上述结构组成的小型数组，并将其初始化为适当的值。另外，该程序使用一个循环，
让用户在下面的选项中进行选择：

a. display by name    b. display by title
c. display by bopname d. display by preference
q. quit

注意，“display by preference”并不意味着显示成员的偏好，而是意味着根据成员的偏好来列出成员。
例如，如果偏好号为 1，则选择 d 将显示程序员的头衔。该程序的运行情况如下：

Benevolent Order of Programmers Report
a. display by name    b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
Next choice: q
Bye!
*/
#include <iostream>
struct bop {
    char fullname[100]; // real name
    char title[100];    // job title
    char bopname[100];  // secret BOP name
    int preference;        // 0 = fullname, 1 = title, 2 = bopname
};
int main()
{
    std::cout<<"Benevolent Order of Programmers Report"<<std::endl;
    std::cout<<"a. display by name    b. display by title"<<std::endl;
    std::cout<<"c. display by bopname d. display by preference"<<std::endl;
    std::cout<<"Enter your choice: ";
    char select;
    bop information[5] = {
        {"Wimp Macho","unknown","unknown",0},
       {"Raki Rhodes","Junior Programmer","unknown",1}, 
        {"Celia Laiter","unknown","MIPS",2},
        {"Hoppy Hipman","Analyst Trainee","unkown",1},
        {"Pat Hand","unknown","LOOPY",2}
    };
    do{
        std::cin>>select;
        if(select == 'q'){
            std::cout<<"Bye!"<<std::endl;
            break;
        }
        else{
            switch(select){
                case 'a' :
                for(int i=0;i<5;i++){
                    std::cout<<information[i].fullname<<std::endl;
                }
                break;
                case 'b' :
                for(int i=0;i<5;i++){
                    std::cout<<information[i].title<<std::endl;
                }
                break;
                case 'c' :
                for(int i=0;i<5;i++){
                    std::cout<<information[i].bopname<<std::endl;
                }
                break;
                case 'd' :
                for(int i=0;i<5;i++){
                    if(information[i].preference == 0){
                        std::cout <<information[i].fullname<<std::endl;
                    }
                    else if(information[i].preference==1){
                        std::cout<<information[i].title<<std::endl;
                    }
                    else{
                        std::cout<<information[i].bopname<<std::endl;
                    }
                }
                break;
            }
        }
        if(select !='q'){
            std::cout<<"Next choice: ";
        }
    }while(1);
    return 0;
}