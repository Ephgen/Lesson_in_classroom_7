// Lesson_in_classroom7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

//template <typename T>
//int Max(T arr[])
//{
//    int Max = arr[0];
//    for (int i = 1; i < 10; i++)
//        if (arr[i] > Max)
//            Max = arr[i];
//    return Max;
//}
//
//template <typename T>
//int Min(T arr[])
//{
//    int Min = arr[0];
//    for (int i = 0; i < 10; i++)
//        if (arr[i] < Min)
//            Min = arr[i];
//    return Min;
//}

//template <typename T>
//void vivod(T arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//        cout << arr[i] << " ";
//}
//
//template <typename T>
//void deistvie(T arr[], int size)
//{
//    T vr = arr[0];
//    for (int i = 0; i < size; i++)
//        if (vr > arr[i])
//            vr = arr[i];
//    cout << endl << " Min = " << vr;
//    vr = arr[0];
//    for (int i = 0; i < size; i++)
//        if (vr < arr[i])
//            vr = arr[i];
//    cout << " Max = " << vr;
//    cout << endl;
//    vivod(arr, size);
//}
//template <typename T>
//int LinearSearch(T array[], int size, T key)
//{
//    for (int i = 0; i < size; i++)
//        if (array[i] == key)
//            return i;
//    return -1;
//}

//int maximum(int a, int b, int c)
//{
//    if (a < b)
//        a = b;
//    if (a < c)
//        a = c;
//    return a;
//}
//template <typename T>
//T maximum(T a, T b)
//{
//    if (a < b)
//        a = b;
//    return a;
//}
//int maximum(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//        if (arr[0] < arr[i])
//            arr[0] = arr[i];
//    return arr[0];
//}
//template <typename T, typename T2>
//void maxim(T a, T2 b)
//{
//    cout << a << b;
//}
void bubbleSort(int ar[], long size)
{
    long i, j;
    int x;
    for (int i = 0; i < size; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (ar[i] > ar[j])
                swap(ar[i], ar[j]);
        }
    }    
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*  int const sizearr = 3;
      int arr[sizearr]{2,5,6};
      float arr1[sizearr]{ 2.3,4.2,5.6 };*/

      /* for (int i = 0; i < 10; i++)
       {
           arr[i] = rand() % (50 - 10) + 10;
           cout << arr[i] << " " << endl;
       }
       Max(arr);
       Min(arr);
       cout << endl << " Max = " << Max(arr);
       cout << endl <<" Min = " << Min(arr);*/
       /*  deistvie(arr1, sizearr);
         deistvie(arr, sizearr);*/

   /* const int arraySize = 100;
    int a[arraySize], searchKey, element;
    int r;
    string searchKey2;
    for (int x = 0; x < arraySize; x++)
        a[x] = 2 * x;
    const int size = 5;
    string zurnal[size]{ "Роман","Виктория","Павел","Афина","Геннадий" };
    
    cout << " Вы хотите искать по целочисленному массиву или по фамилиям ? \n1) По численным\n2) По фамилиям\n";
    cin >> r;    
    cout << " Please enter the key" << endl;
    if (r == 1)
    {
        cin >> searchKey;
        element = LinearSearch(a, arraySize, searchKey);
    }
    else
    {
        cin >> searchKey2;
        element = LinearSearch(zurnal, size, searchKey2);
    }   
    
    if (element != -1)
        cout << endl << " The key was found " << element << endl;
    else
        cout << endl << " The key is not found ";*/

    /*int const a = 3;
    int b = 4;
    int c = 5;
    int arr[a]{1,3,5};
    float aq = 1.3, qa = 3.2;
    cout << maximum(a, b, c) << endl;
    cout << maximum(a, b) << endl;
    cout << maximum(arr, a) << endl;
    cout << maximum(aq, qa) << endl;
    maxim(1, "qwe"); cout << endl;
    maxim("ads", 'd'); cout << endl;
    maxim(2.3, true); cout << endl;*/

    srand(time(NULL));
    const long size = 10;
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        ar[i] = rand() % 100;
        cout << ar[i] << "    ";
    }
    cout << endl << endl;
    bubbleSort(ar, size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << "    ";
    }
    cout << endl << endl;
}





