/*
Daphne 以 10%的单利投资了 100 美元。也就是说，每一年的利润都是投资额的 10%，即每年10 美元：
                        利息=0.10×原始存款
而 Cleo 以 5%的复利投资了100 美元。也就是说，利息是当前存款（包括获得的利息）的5%，：
                        利息=0.05×当前存款
Cleo 在第一年投资100 美元的盈利是 5%—-得到了105 美元。下一年的盈利是 105 美元的 5%---
-即5.25 美元，依此类推。请编写一个程序，计算多少年后，Cleo 的投资价值才能超过 Daphne 的投资价值，
并显示此时两个人的投资价值。
*/
#include <iostream>
int main()
{
    double Dinvest =100;
    double Cinvest =100;
    int year =0;
    do{
        Dinvest = Dinvest+10;
        Cinvest = Cinvest +Cinvest*0.05;
        year++;
    }while(Cinvest<=Dinvest);
    std::cout << "经过 " << year << " 年后,Cleo 的投资价值超过了 Daphne!" << std::endl;
    std::cout << "Daphne's value: " << Dinvest << std::endl;
    std::cout << "Cleo's value:   " << Cinvest << std::endl;
    return 0;
}