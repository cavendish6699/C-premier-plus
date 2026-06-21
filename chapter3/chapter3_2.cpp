/*
编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用 3个
变量来存储这些信息。）该程序报告其 BMI (Body Mass Index，体重指数）。为了计算BM，该程序以英寸
的方式指出用户的身高（1英尺为 12 英寸），并将以英寸为单位的身高转换为以米为单位的身高（1英寸
=0.0254 米）。然后，将以磅为单位的体重转换为以千克为单位的体重（1千克=2.2磅)。最后，计算相应的
BMI—体重（千克）除以身高（米）的平方。用符号常量表示各种转换因子。
*/
#include <iostream>
int main()
{
    // 符号常量：见名知意
    const int INCHES_PER_FOOT = 12;
    const double METERS_PER_INCH = 0.0254;
    const double POUNDS_PER_KG = 2.2;

    // 3个变量存储输入（体重用double避免精度丢失）
    int feet, inches;
    double pounds;

    // 规范的输入提示（先英尺后英寸，带单位和下划线指示）
    std::cout << "请输入您的身高:" << std::endl;
    std::cout << "  英尺: ___\b\b\b";
    std::cin >> feet;
    std::cout << "  英寸: ___\b\b\b";
    std::cin >> inches;
    std::cout << "请输入您的体重（磅）: ___\b\b\b";
    std::cin >> pounds;

    // 单位转换
    int total_inches = feet * INCHES_PER_FOOT + inches;
    double height_meters = total_inches * METERS_PER_INCH;
    double weight_kg = pounds / POUNDS_PER_KG;

    // 计算BMI（直接相乘代替pow）
    double bmi = weight_kg / (height_meters * height_meters);

    // 完整的输出报告
    std::cout << "\n===== BMI 计算结果 =====" << std::endl;
    std::cout << "身高: " << feet << " 英尺 " << inches << " 英寸 ("
              << height_meters << " 米)" << std::endl;
    std::cout << "体重: " << pounds << " 磅 (" << weight_kg << " 千克)" << std::endl;
    std::cout << "BMI: " << bmi << std::endl;

    return 0;
}