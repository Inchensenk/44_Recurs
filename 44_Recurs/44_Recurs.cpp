// 44_Recurs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//https://www.youtube.com/watch?v=44y44mniCJ4&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=54
//Рекурсия. Факториал числа c++ рекурсивно. Рекурсия факториал. Рекурсивный алгоритм факториал.

#include <iostream>
using namespace std;

/*
N! = N * (N-1)!
*/

int fact(int N)
{
    if (N == 0)
        return 0;
    if (N == 1)
        return 1;
    return N * fact(N - 1);
}
int main()
{
    cout << fact(5)<<endl;
}

