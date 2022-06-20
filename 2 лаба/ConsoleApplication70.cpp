// ConsoleApplication70.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int X = 54697, Y = 12799, Z = 21845;
    int L = Y, R = 0,R1=0,count=0;
    X--;
    int f = 207;
    for (int i = 0; i < 3; i++)
    {
        L = L + X;
    }
    unsigned int M = X | Z;
    if (M > 4328)
    {
        R = M - 8479;
    }
    else
    {
        R = M + 464;
    }
    R1 = R & 255;
    count = 0;
    std::string op1;
    while (R1 != 0) 
    {
        op1 = (R1 % 2 == 0 ? "0" : "1") + op1; 
        R1 /= 2;
    }
    for (int i = 0; strlen(op1.c_str()) >= i; i++)
    {
        if (op1[i]=='1')
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        R = R / 2;
    }
    else
    {
        R = R xor 3985;
    }
}


