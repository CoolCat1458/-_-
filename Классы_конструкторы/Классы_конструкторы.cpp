#include <iostream>
#include<string>
#include<windows.h>
using namespace std;



class Cats
{
protected:
	string jc{ "Если вы это видите, то вы получили доступ к базовому классу" };
private:
	//создание полей класса
	string colour;
	string poroda;
	int age;
	int hage;
	string f;
	string i;
	string o;
public:

	Cats() //конструктор 1 (по умолчанию)
	{
		colour = "None";
		poroda = "None";
	}

	Cats(string valueC, string valueP, int valueA) //конструктор 2 (с вводимыми значениями)
	{
		colour = valueC;
		poroda = valueP;
		age = valueA;
	}

	Cats(int valueA) //конструктор 3
	{
		age = valueA;
		if (age >= 15)
			cout << "Кошка уже не молода, увы" << "\n";
		else
			cout << "считай еще котенок" << "\n";
	}
	string GetC() { return colour; }
	void SetC(string valueC) { colour = valueC; }
	string GetP() { return poroda; }
	void SetP(string valueP) { poroda = valueP; }
	int GetA() { return age; }
	void SetA(int valueA) { age = valueA; }


	void SetF(string valueF) { f = valueF; }
	string GetI() { return i; }
	void SetI(string valueI) { i = valueI; }
	string GetF() { return f; }
	void SetO(string valueO) { o = valueO; }
	string GetO() { return o; }

	void vvod() //функция ввода
	{
		cout << "Введите цвет кошки: ";
		cin >> colour;
		cout << "Введите породу кошки: ";
		cin >> poroda;
		cout << "Введите возраст кошки: ";
		cin >> age;
	}
	string vvod(string x, string y, string z)
	{
		string c = "Кота зовут: " + y + " " + x + " " + z;
		return c;
	} //перегрузка функции
	void print() { cout << "Цвет кошки: " << colour << "\tПорода: " << poroda << "\tВозраст: " << age << "\n"; } //функция вывода
	void rom(int x) //функция принимающаяя и возвращающая значения
	{
		if (x == 1)
			cout << "кошке в пересчет на человеческий возраст: 15" << endl;
		else if (x == 2)
			cout << "кошке в пересчет на человеческий возраст: 24" << endl;
		else
			cout << "кошке в пересчет на человеческий возраст: " << round(24 + (x - 2) * 5) << endl;
	}
};
class AlCat : public Cats //новый класс
{
private:
	int lenr;
public:
	int GetL() { return lenr; }
	void SetL(int valueL) { lenr = valueL; }
	AlCat(int lenr) { cout << lenr; }
	void seze(int x)
	{
		if (x < 60)
			cout << "Кошка маленькая";
		else if (x > 60)
			cout << "Кошка большая";
		else if (x == 60)
			cout << "Кошка нормального размера";
	}
	void checkout(string x) { cout << x; }
};


int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	Cats pus1; //конструктор №1
	//сеттер и геттер для поля цвета colour и poroda
	pus1.SetC("белый");
	cout << pus1.GetC() << "\n";
	pus1.SetP("британская");
	cout << pus1.GetP() << "\n";
	cout << "----------------------------------------------------------" << "\n";
	//функции класса
	Cats pus2("серый", "сиамская", 15); //конструктор №2
	pus2.vvod();
	pus2.print();
	cout << "----------------------------------------------------------" << "\n";
	Cats pus3(42); //конструктор №3
	cout << "----------------------------------------------------------" << "\n";
	pus3.rom(pus3.GetA());
	cout << "----------------------------------------------------------" << "\n";
	Cats pus4;
	pus4.SetI("Котофей");
	pus4.SetF("Муркин");
	pus4.SetO("Барсикович");
	pus4.vvod(pus4.GetI(), pus4.GetF(), pus4.GetO());
}