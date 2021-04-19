#include <cstdio>
#include <vector>
#include <string>
#include<iostream>
void q1()
{
    int c = 3;
    char d = 'A';
    printf("c is %d and d is %c", c, d);//c is 3 and d is A

}
void q2()
{
    std::vector<int> v(22);
    bool b = (v[6]);
    printf("%d", !b);//1
}
int get_length(std::string str)
{
    int count = 0;
    while (str[count++]);
    return count - 1;
}
void q3()
{
    std::string str = "Saikat";
    printf("%d", get_length(str));
}
void q4()
{
    int x = 5, y = 2;
    if (x & y)
        printf("Saikat");
    else
    { printf("Bishal ");
        std::cout << (x & y);
    }
}
void q5()
{
    int8_t a = 200;
    uint8_t b = 100;
    if (a > b)
        std::cout << "greater";
    else
        std::cout << "less";

}
void q6()
{
    // for(int i:{1,2,3,4,5,6,7,8,9})
    //     std::cout << i << std::endl;
    // std::cout << std::endl;
    int i = 1;
    // do{
    //     std::cout << i++ << std::endl;
    // } while (i < 10);
    while(i<10)//different answer
    {
        std::cout << ++i << std::endl;
    }   

}
void q7()
{
    char c = 255;
    if (c > 10)
        printf("c = %i which is greater than 10", c);
    else
        printf("c = %i, which is less than 10", c);//c = -1, which is less than 10
}
void q8()
{

    float g = 5.0;
    void *ptr = &g;
    float f = *(float *)ptr;
    printf("%f\n", f);
}
void q9()
{
    int i = 0;
    printf("%d", i++);
    printf("%d", i--);
    printf("%d", ++i);
    printf("%d", --i);

}
void q10()
{
int x = 10, y = 20;
    std::cout << x++ << --y<<std::endl;
    std::cout << x-- << ++y<<std::endl;
    void *ptr;
    std::cout << ptr;
    //10 19
    //11 20
}
int main()
{
//     //printf("1/2 = %f", (float)(1 / 2));
//     /* 1/2 = 0.000000 */
//     bool x = true, y = false;
//     if (~x || y)
//     {
//         std::cout << "sakat ";
//         std::cout << (~x || y)<<" ";
//         std::cout << ~x<<" ";
//         std::cout << y;
// //this part gets executed because ~x is not zero, meaning true
//     }
//     else
//         std::cout << "bishal";
//         return 0;
int x = 5, y = 2;
if(x&y)
    std::cout << "A";
else
    std::cout << "B";
}