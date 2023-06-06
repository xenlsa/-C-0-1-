#include <iostream>
using namespace std;
int main()
{
    // 1,const修饰指针 常量指针
    int a = 10;
    int b = 10;
    const int *p = &a;
    // 指针指向的值不可以改,指针的指向可以改
    //*p=20; 错误
    p = &b; // 正确

    // 2,const修饰常量 指针常量
    // 指针的指向不可以改,指针指向的值可以改
    int *const p2 = &a;
    // p2=&b; //错误
    *p2 = 100;

    // 3,const修饰指针和常量
    const int *const p3 = &a;
    //*p3=100;
    // p3=&b;

    system("pause");
    return 0;
}