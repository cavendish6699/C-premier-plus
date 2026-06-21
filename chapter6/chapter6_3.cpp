/*
编写一个菜单驱动程序的维形。该程序显示一个提供4 个选项的菜单--每个选项用一个字母标记。
如果用户使用有效选项之外的字母进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为止。
然后，该程序使用一条 switch 语句，根据用户的选择执行一个简单操作。该程序的运行情况如下：
Please enter one of the following choices:
c) carnivore          p) pianist
t) tree               g) game
f
Please enter a c, p, t, or g: q
Please enter a c, p, t, or g: t
A maple is a tree.
*/
#include <iostream>
int main()
{
    std::cout<< "Please enter one of the following choices:"<<std::endl;
    std::cout<<"c) carnivore "<<"       "<<" p) pianist"<<std::endl;
    std::cout<<"t) tree"<<"              "<<"g) game"<<std::endl;
    char ch;
    do{
        std::cin>>ch;
        if(ch =='c'||ch == 'p'||ch =='t'||ch =='g'){
           switch(ch){
                case 't' :
                std::cout<<"A maple is a tree."<<std::endl;
                break;
                case 'c' :
                std::cout<<"A lion is a carnivore."<<std::endl;
                break;
                case 'p' :
                std::cout<<"Mozart was a pianist"<<std::endl;
                break;
                case 'g' :
                std::cout<<"Chess is a game"<<std::endl;
                break;
            } 
            break;
        }
        else {
            std::cout << "Please enter a c, p, t, or g: ";
        }
    }while(1);
    
        
    return 0;
}