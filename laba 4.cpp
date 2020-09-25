// laba 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "Header.h"

using namespace std;
int main()
{
	string autoModel;
	cout << "Enter the model of auto ";
	cin >> autoModel;
	cout <<  endl << "Enter the car mileage of auto " << endl;
	int carMileage;
	cin >> carMileage;
	int choice;
	autoClass classOfAuto = A;
	cout << "Enter the auto class 0 - A | 1 - B | 2 - C | 3 - D | 4 - S ";
	while (1) {
		cin >> choice;
		if (choice == 0) {
			classOfAuto = A;
			break;
		}
		if (choice == 1) {
			classOfAuto = B;
			break;
		}
		if (choice == 2) {
			classOfAuto = C;
			break;
		}
		if (choice == 3) {
			classOfAuto = D;
			break;
		}
		if (choice == 4) {
			classOfAuto = S;
			break;
		}
		cout << "Reenter auto class" << endl;
		cin >> choice;
	}
	truckType type = Lorry;
	cout << "Enter the truck class 0 - ClassicTruck | 1 - Lorry | 2 - AutoTrack ";
	while (1) {
		cin >> choice;
		if (choice == 0) {
			type = ClassicTruck;
			break;
		}
		if (choice == 1) {
			type = Lorry;
			break;
		}
		if (choice == 2) {
			type = AutoTrack;
			break;
		}

		cout << "Reenter truck class" << endl;
		cin >> choice;
	}
	cout << "Enter trailer ID" << endl;
	int trailerId = 77777;
	cin >> trailerId;
	int count = 108;
	AutoPark autoPark(autoModel, carMileage, classOfAuto, trailerId, type, count);
	autoPark.showInformaiton();
	cout << endl;
	cout << endl;
	std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
