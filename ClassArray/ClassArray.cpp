// ClassArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    Array arr(20);
    arr.Print();
    arr.SetRandomValues(18);
    arr.Print();
    arr.PrintCounts();
    arr.SetRandomValues(5);
    arr.Print();
    cout << arr.Sum() << endl;
    cout << arr.Avg() << endl;
    arr.OutputFile("test.txt");
    arr.Clear();
    arr.ReadFile("test.txt");
    arr.Print();
}