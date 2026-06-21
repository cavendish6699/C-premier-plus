/*
编写一个程序，最多将10个 donation 值读入到一个double数组中（如果您愿意，也可使用模板
类array）。程序遇到非数字输入时将结束输入，并报告这些数字的平均值以及数组中有多少个数字大于
平均值。
*/
#include <iostream>
#include <array>

int main() {
    const int MAX =10;
    std::array<double, MAX>donation;
    double sum =0 ;
    int count =0;
    std::cout << "Enter up to " << MAX << " numbers.\n"
    << "Type any letter and Enter to finish.\n";

    while(count<MAX&&std::cin>>donation[count]){
        sum +=donation[count];
        count++;
        
    }
    if(count==0){
        std::cout<< "No number entered" <<std::endl;
        return 0;
    }
    double average = sum/count;
    int a=0;
    for(int i=0;i<count;i++){
        if(donation[i]>average){
            a++;
        }
    }
    std::cout<<average<<std::endl;
    std::cout<<a<<std::endl;

    return 0;
}