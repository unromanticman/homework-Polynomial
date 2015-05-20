#pragma once
#include <iostream>
using namespace std;
class Polynomial
{
	friend ostream &operator<<(ostream &, Polynomial &);
private:
	int poly[100];//存係數、次方
	static void initPolyToZero(int*r);//陣列全初始化成0
	static void initPolyToSortNumber(int*r);//把陣列轉成{X,0,X,1,X,2...依此類推} X保持原來的值
	static void polySort_and_Zero(int*r);//同時達成初始化、{X,0,X,1,X,2...依此類推}

public:
	
	Polynomial &setPoly(int z, int s);//設定多項式係數、次方
	Polynomial(int s, int z);
	Polynomial();
	~Polynomial();
	Polynomial operator+(Polynomial&);
	Polynomial operator-(Polynomial&);
	Polynomial &operator=(Polynomial&);
	Polynomial operator*(Polynomial&);
	Polynomial &operator+=(Polynomial&);
	Polynomial &operator-=(Polynomial&);
	Polynomial &operator*=(Polynomial&);
	
};

