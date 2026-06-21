/*
编写一个程序，要求用户以整数方式输入秒数（使用 long 或long long 变量存储），然后以天、小
时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟
有多少秒。该程序的输出应与下面类似：
Enter the number of seconds : 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
#include <iostream>

int main()
{
    const int HOUR_PER_DAY      = 24;
    const int MINUTE_PER_HOUR   = 60;
    const int SECOND_PER_MINUTE = 60;

    const long long SECOND_PER_HOUR = (long long)MINUTE_PER_HOUR * SECOND_PER_MINUTE; // 3600
    const long long SECOND_PER_DAY  = SECOND_PER_HOUR * HOUR_PER_DAY;                 // 86400

    long long second;
    std::cout << "Enter the number of seconds: ";
    std::cin >> second;

    long long day     = second / SECOND_PER_DAY;
    long long remain  = second % SECOND_PER_DAY;

    long long hour    = remain / SECOND_PER_HOUR;
    remain           %= SECOND_PER_HOUR;

    long long minute  = remain / SECOND_PER_MINUTE;
    long long second3 = remain % SECOND_PER_MINUTE;

    std::cout << second << " seconds = "
              << day << " days, "
              << hour << " hours, "
              << minute << " minutes, "
              << second3 << " seconds"
              << std::endl;

    return 0;
}

