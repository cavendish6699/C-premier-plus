//修改程序清单4.4，使用 C++ string 类而不是char 数组。
/*
程序清单 4.4 instr2.cpp
// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main ()
{
using namespace std;
const int ArSize = 20 ;
char name [ArSize];
char dessert [ArSize];
cout << "Enter your name: \n";
cin.getline (name, ArSize); // reads through newline
cout << "Enter your favorite dessert: \n";
cin.getline (dessert, ArSize);
cout << "I have some delicious " << dessert;
cout << " for you, " << name << ". In";
return 0;
}
*/
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    string name ;
    string dessert;
    cout << "Enter your name: \n";
    getline(cin,name);
    cout << "Enter your favorite dessert: \n";
    getline(cin,dessert);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}