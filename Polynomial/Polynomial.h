#pragma once
#include <iostream>
using namespace std;
class Polynomial
{
	friend ostream &operator<<(ostream &, Polynomial &);
private:
	int poly[100];//�s�Y�ơB����
	static void initPolyToZero(int*r);//�}�C����l�Ʀ�0
	static void initPolyToSortNumber(int*r);//��}�C�ন{X,0,X,1,X,2...�̦�����} X�O����Ӫ���
	static void polySort_and_Zero(int*r);//�P�ɹF����l�ơB{X,0,X,1,X,2...�̦�����}

public:
	
	Polynomial &setPoly(int z, int s);//�]�w�h�����Y�ơB����
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

