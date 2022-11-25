// Homework_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Задание 1
//#include <iostream>
//
//using namespace std;
//
//void SetRndArray2D(int** arr, int n, int m, int a = 1, int b = 9) // заполнение двумерного динамического массива
//{
//    cout << "\n------------\nРандом для int Матрицы:\n\n";
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            arr[i][j] = a + rand() % (b - a + 1);
//}
//
//void SetRndArray2D(double** arr, int n, int m, int a = 1, int b = 9) // заполнение двумерного динамического массива
//{
//    cout << "\n------------\nРандом для double Матрицы:\n\n";
//
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            arr[i][j] = a + rand() % (b - a + 1) / static_cast<double>(rand() % 10 + 1);
//}
//
//void PrintArray2D(int** arr, int n, int m) // вывод двумерного динамического массива
//{
//    cout << "\n------------\nВывод int Матрицы:\n\n";
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            cout << arr[i][j] << " ";
//        cout << endl;
//    }
//}
//
//void PrintArray2D(double** arr, int n, int m) // вывод двумерного динамического массива
//{
//
//    std::cout << "\n------------\nВывод double Матрицы:\n\n"; //для примера
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            cout << arr[i][j] << "\t";
//        cout << endl;
//    }
//}
//
//int main()
//{
//    setlocale(0, "");
//    int m = 4;
//    int n = 3;
//
//    int** a = new int* [m];
//    for (int i = 0; i < m; ++i)
//    {
//        a[i] = new int[n];
//    }
//
//    double** d = new double* [m];
//    for (int i = 0; i < m; ++i)
//    {
//        d[i] = new double[n];
//    }
//
//    SetRndArray2D(d, m, n);
//    SetRndArray2D(a, m, n);
//
//    PrintArray2D(a, m, n);
//    PrintArray2D(d, m, n);
//
//
//    for (int i = 0; i < m; ++i)
//    {
//        delete[] a[i];
//        delete[] d[i];
//    }
//
//    delete[] a;
//    delete[] d;
//
//    system("pause");
//    return 0;
//}
// Задание 2
//#include "iostream"
//#include "tchar.h"
//#include "stdio.h"
//#include "stdlib.h"
//#include "iomanip"
//using namespace std;
//const size_t N = 5;
//const size_t M = 5;
//const size_t K = 5;
//int maxarr(int n, int m, int k, int arr[N][M][K]);
//int maxarr(int n, int m, int arr[N][M]);
//int maxarr(int n, int arr[]);
//float maxarr(int n, float arr[]);
//int maxarr(int n, int m);
//int maxarr(int n, int m, int k);
//
//typedef int T[N];
//typedef float V[N];
//typedef int S[N][M];
//typedef int W[N][M][K];
//int main()
//{
//	setlocale(0, "");
//	T A = {}; V B; S C; W Q;
//	int c1, n = N, m = M, k = K;
//	int a, b, c;
//	do {
//		cout << "Введите число" << endl;
//		cin >> c1;
//	} while (c1 < 1 || c1>5);
//
//	switch (c1)
//	{
//	case 1:
//		for (int i = 0; i < N; i++)
//		{
//			A[i] = rand() % 10;
//			B[i] = (((float)(rand()) / (float)(RAND_MAX))) * 100;
//			cout << "\n" << A[i];
//		}
//		cout << endl << endl;
//		c1 = maxarr(n, A); cout << "\nМаксимальный элемент = " << c1;
//		break;
//	case 2:
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 1; j < M; j++)
//			{
//				C[i][j] = (int)((((float)(rand()) / (float)(RAND_MAX))) * 11);
//				cout << setw(5) << C[i][j];
//			}
//			cout << endl << endl;
//		}
//
//		c1 = maxarr(n, m, C); cout << "\nМаксимальный элемент = " << c1;
//		break;
//	case 3:
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				for (int q = 0; q < K; q++)
//
//				{
//					Q[i][j][q] = (int)((((float)(rand()) / (float)(RAND_MAX))) * 10);
//					cout << setw(5) << Q[i][j][q];
//				}
//				cout << endl << endl;
//			}
//			cout << endl << endl;
//		}
//		c1 = maxarr(n, m, k, Q); cout << "\nМаксимальный элемент = " << c1;
//		break;
//	case 4:
//		cout << "Введите два числа через пробел =" << endl;
//		cin >> a >> b;
//		c1 = maxarr(a, b);
//		cout << "\nМаксимальный элемент = " << c1;
//		break;
//	case 5:
//		cout << "Введите два числа через пробел =" << endl;
//		cin >> a >> b >> c;
//		c1 = maxarr(a, b, c);
//		cout << "\nМаксимальный элемент = " << c1;
//
//		break;
//
//	}
//
//
//	return 0;
//}
//int maxarr(int n, int m, int arr[N][M])
//{
//
//	int max = arr[0][0];
//	for (int i = 0; i < n; i++)
//		for (int j = 1; j < m; j++)
//			if (arr[i][j] > max) { max = arr[i][j]; }
//	return max;
//}
//
//int maxarr(int n, int arr[])
//{
//	int max = arr[0];
//	for (int i = 0; i < n; i++)
//		if (arr[i] > max) { max = arr[i]; }
//	return max;
//}
//float maxarr(int n, float arr[])
//{
//	float max = arr[0];
//	for (int i = 0; i < n; i++)
//		if (arr[i] > max) { max = arr[i]; }
//	return max;
//}
//
//int  maxarr(int n, int m, int k, int arr[N][M][K])
//{
//	int max = arr[0][0][0];
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			for (int q = 0; q < k; q++)
//				if (arr[i][j][q] > max) { max = arr[i][j][q]; }
//	return max;
//}
//int maxarr(int n, int m)
//{
//	if (n == m) { cout << "chisla ravny"; return 0; }
//	if (n > m) { return n; }
//	else
//	{
//		return m;
//	}
//}
//int maxarr(int n, int m, int k)
//{
//	int max;
//	if (n == m == k) { cout << "chisla ravny"; return 0; }
//	max = n;
//	m > max&& m > k ? max = m : k > max ? max = k : max = n;
//	return max;
//
//Задание 1

//#include <iostream>
//#include <iomanip>
//#include <ctime>
//using namespace std;
//
//void bubbleSort(int*, int); // прототип функции сортировки пузырьком
//
//int main(int argc, char* argv[])
//{
//    srand(time(NULL));
//    setlocale(LC_ALL, "rus");
//    cout << "Введите размер массива: ";
//    int size_array; // длинна массива
//    cin >> size_array;
//
//    int* sorted_array = new int[size_array]; // одномерный динамический массив
//    for (int counter = 0; counter < size_array; counter++)
//    {
//        sorted_array[counter] = rand() % 100; // заполняем массив случайными числами
//        cout << setw(2) << sorted_array[counter] << "  "; // вывод массива на экран
//    }
//    cout << "\n\n";
//
//    bubbleSort(sorted_array, size_array); // вызов функции сортировки пузырьком
//
//    for (int counter = 0; counter < size_array; counter++)
//    {
//        cout << setw(2) << sorted_array[counter] << "  "; // печать отсортированного массива
//    }
//    cout << "\n";
//
//    system("pause");
//    return 0;
//}
//
//void bubbleSort(int* arrayPtr, int length_array) // сортировка пузырьком
//{
//    int temp = 0; // временная переменная для хранения элемента массива
//    bool exit = false; // болевая переменная для выхода из цикла, если массив отсортирован
//
//    while (!exit) // пока массив не отсортирован
//    {
//        exit = true;
//        for (int int_counter = 0; int_counter < (length_array - 1); int_counter++) // внутренний цикл
//            //сортировка пузырьком по возрастанию - знак >
//            //сортировка пузырьком по убыванию - знак <
//            if (arrayPtr[int_counter] > arrayPtr[int_counter + 1]) // сравниваем два соседних элемента
//            {
//                // выполняем перестановку элементов массива
//                temp = arrayPtr[int_counter];
//                arrayPtr[int_counter] = arrayPtr[int_counter + 1];
//                arrayPtr[int_counter + 1] = temp;
//                exit = false; // на очередной итерации была произведена перестановка элементов
//            }
//    }
//}
// Задание 2
//#include <iostream>
//using namespace std;
//int i, j, key = 0, temp = 0;
//void InsertSort(int* mas, int n) //сортировка вставками
//{
//	for (i = 0; i < n - 1; i++)
//	{
//		key = i + 1;
//		temp = mas[key];
//		for (j = i + 1; j > 0; j--)
//		{
//			if (temp < mas[j - 1])
//			{
//				mas[j] = mas[j - 1];
//				key = j - 1;
//			}
//		}
//		mas[key] = temp;
//	}
//	cout << endl << "Результирующий массив: ";
//	for (i = 0; i < n; i++) //вывод массива
//		cout << mas[i] << " ";
//}
////главная функция
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int n;
//	cout << "Количество элементов в массиве > "; cin >> n;
//	int* mas = new int[n];
//	for (i = 0; i < n; i++) //ввод массива
//	{
//		cout << i + 1 << " элемент > "; cin >> mas[i];
//	}
//	InsertSort(mas, n); //вызов функции
//	delete[] mas;
//	system("pause>>void");
//}
