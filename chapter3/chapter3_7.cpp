/*
编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100 公里消耗的汽油量（升）），
然后将其转换为美国风格的耗油量——每加仑多少英里。注意，除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（燃料/距离）
相反。100公里等于62.14 英里，1加仑等于3.875升。
因此，19mpg 大约合 12.4//100km， 27mpg 大约合 8.71/100km。
*/
#include <iostream>
int main()
{
    const double KM_TO_MILE = 0.6214;
    const double GALLON_TO_L =3.875; 
    
    double L;
    std::cout << "用户按欧洲风格输入汽车的耗油量(每100 公里消耗的汽油量（升））"<<std::endl;
    std::cin >> L;
    double gallon = L/GALLON_TO_L;
    double mile = 100*KM_TO_MILE;
    double mpg = mile/gallon;
    std::cout << "美国风格的耗油量——每加仑多少英里为" << mpg <<std::endl;
    return 0;
}