#pragma once
#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

enum autoClass
{
	A,
	B,
	C,
	D,
	S
};

enum truckType {
	ClassicTruck,
	Lorry,
	AutoTrack,
};
class Auto
{
protected:
	string autoModel;
public:
	Auto()
	{
		int chance;
		chance = rand() % 3;
		this->autoModel = "Car3001";
		if (chance == 0)
			this->autoModel = "Audi";
		if (chance == 1)
			this->autoModel = "BMW";
		if (chance == 2)
			this->autoModel = "Bentley";
	}
	Auto(string autoModel)
	{
		this->autoModel = autoModel;
	}
	virtual void showInformaiton()
	{
		cout << "Model of this auto is " << autoModel << endl;
	}
	~Auto()
	{

	}
};

class WithTrailer :virtual public Auto
{
protected:
	int trailerId;
public:
	WithTrailer()
	{
		this->trailerId = 123333;
	}
	WithTrailer(string autoModel, int trailerId)
	{
		this->autoModel = autoModel;
		this->trailerId = trailerId;
	}

	void showInformaiton()
	{
		cout << "Model of this auto is " << autoModel << endl;
		cout << "Trailer ID is " << trailerId << endl;
	}
	~WithTrailer()
	{

	}
};

class WithoutTrailer :virtual public Auto
{
protected:
	int carMileage;
public:
	WithoutTrailer()
	{
		this->carMileage = 77777;
	}
	WithoutTrailer(string autoModel, int carMileage)
	{
		this->autoModel = autoModel;
		this->carMileage = carMileage;
	}

	void showInformaiton()
	{
		cout << "Model of this auto is " << autoModel << endl;
		cout << "Car mileage is about " << carMileage << endl;
	}
	~WithoutTrailer()
	{

	}
};

class PassengerCar : virtual public WithoutTrailer {
protected:
	autoClass classOfAuto;
public:
	PassengerCar()
	{
		this->classOfAuto = A;
	}
	PassengerCar(string autoModel, int carMileage, autoClass classOfAuto)
	{
		this->autoModel = autoModel;
		this->carMileage = carMileage;
		this->classOfAuto = classOfAuto;
	}
	void showInformaiton()
	{
		cout << "Model of this auto is " << autoModel << endl;
		cout << "Car mileage is about " << carMileage << endl;
		cout << "It`s auto of ";
		if (classOfAuto == 0) cout << "A";
		if (classOfAuto == 1) cout << "B";
		if (classOfAuto == 2) cout << "C";
		if (classOfAuto == 3) cout << "D";
		if (classOfAuto == 4) cout << "S";
		cout << " class" << endl;
	}
	~PassengerCar()
	{

	}
};
class Truck :virtual public WithTrailer
{
protected:
	truckType type;
public:
	Truck()
	{
		this->trailerId = ClassicTruck;
	}
	Truck(string autoModel, int trailerId, truckType type)
	{
		this->autoModel = autoModel;
		this->trailerId = trailerId;
		this->type = type;
	}

	void showInformaiton()
	{
		cout << "Model of this auto is " << autoModel << endl;
		cout << "Trailer ID is " << trailerId << endl;
		cout << "It`s ";
		if (this->type == 0) cout << "Classic Truck";
		if (this->type == 1) cout << "Lorry";
		if (this->type == 2) cout << "AutoTrack";
		cout << " type truck" << endl;

	}
	~Truck()
	{

	}
};

class AutoPark : virtual public Truck, virtual public PassengerCar {
protected:
	int count;
public:
	AutoPark()
	{
		this->count = 90;
	}
	AutoPark(string autoModel, int carMileage, autoClass classOfAuto, int trailerId, truckType type, int speed) {
		this->autoModel = autoModel;
		this->trailerId = trailerId;
		this->type = type;
		this->carMileage = carMileage;
		this->classOfAuto = classOfAuto;
		this->count = speed;
	}
	void showInformaiton() {
		cout << "Model of this auto is " << autoModel << endl;
		cout << "Trailer ID is " << trailerId << endl;
		cout << "It`s ";
		if (this->type == 0) cout << "Classic Truck";
		if (this->type == 1) cout << "Lorry";
		if (this->type == 2) cout << "AutoTrack";
		cout << " type truck" << endl;
		cout << "Car mileage is about " << carMileage << endl;
		cout << "It`s auto of ";
		if (classOfAuto == 0) cout << "A";
		if (classOfAuto == 1) cout << "B";
		if (classOfAuto == 2) cout << "C";
		if (classOfAuto == 3) cout << "D";
		if (classOfAuto == 4) cout << "S";
		cout << " class" << endl;
		cout << "Total amount of cars : " << count << endl;
	}
	~AutoPark() {

	}
};
