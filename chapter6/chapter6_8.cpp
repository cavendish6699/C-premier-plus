/*
编写一个程序，它打开一个文件文件，逐个字符地读取该文件，直到到达文件末尾，然后指出该文
件中包含多少个字符。
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("chapter6_8.txt");
    if(!fin){
        cerr<< "文件打开失败,请检查文件是否存在! "<<endl;
        return 1;
    }
    char ch;
    int count =0;
    while(fin.get(ch)){
        count++;
    }
    cout << "文件总共有 " << count << " 个字符。" << endl;
    
    return 0;
}
