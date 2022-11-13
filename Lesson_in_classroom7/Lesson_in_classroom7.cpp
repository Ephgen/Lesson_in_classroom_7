// Lesson_in_classroom7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>

using namespace std;
template <typename T>
int Max(T arr[])
{
    int Max = arr[0];
    for (int i = 1; i < 10; i++)
        if (arr[i] > Max)
            Max = arr[i];
    return Max;
}

template <typename T>
int Min(T arr[])
{
    int Min = arr[0];
    for (int i = 0; i < 10; i++)
        if (arr[i] < Min)
            Min = arr[i];
    return Min;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % (50 - 10) + 10;
        cout << arr[i] << " " << endl;
    }
    Max(arr);
    Min(arr);
    cout << endl << " Max = " << Max(arr);
    cout << endl <<" Min = " << Min(arr);
}
