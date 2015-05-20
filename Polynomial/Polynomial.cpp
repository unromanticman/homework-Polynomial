#include "Polynomial.h"
#include <string>
#include <iostream>
void  Polynomial::polySort_and_Zero(int*r){
	Polynomial::initPolyToZero(r);
	Polynomial::initPolyToSortNumber(r);
}
void Polynomial::initPolyToSortNumber(int*r){

	//給次方排序0~50
	for (int i = 0, j = 0; i < 100; i++)
	{
		if (i % 2 != 0)
			r[i] = j++;
	}

}
void Polynomial::initPolyToZero(int * r){
	
	for (int i = 0; i < 100; i++)
	{
		r[i] = 0;
	}
}
Polynomial &Polynomial::operator+=(Polynomial&right){
	
	*this = *this + right;
	return  *this;
}

 ostream &operator<<(ostream & output, Polynomial & a){
	 bool flag = true; //check first
	 for (int i = 0; i < 99; i += 2)
	 {
		 if (a.poly[i] != 0)
		 {
			 if (a.poly[i] < 0)
			 {
				 if (flag)
				 {
					 output << a.poly[i] << "x^" << a.poly[i + 1];
					 flag=!flag;
		
				 }
				 else
				 {
					 output << a.poly[i] << "x^" << a.poly[i + 1];
				 }
				
			 }
			 else
			 {
				 if (flag)
				 {
					 output << a.poly[i] << "x^" << a.poly[i + 1];
					 flag = !flag;
				 }
				 else
				 {

					 output << '+' << a.poly[i] << "x^" << a.poly[i + 1];
				 }
				
			 }

		 }

	 }
	 return output;
}

Polynomial &Polynomial::operator-=(Polynomial&right){
	*this = *this - right;
	return  *this;
}
Polynomial &Polynomial::operator*=(Polynomial&right){
	*this = *this * right;
	return  *this;
}
Polynomial Polynomial::operator*(Polynomial&right){

	Polynomial output;
	Polynomial::polySort_and_Zero(output.poly);
	

	for (int i = 0; i < 100; i+=2)
	{
		for (int j = 0; j < 100; j+=2)
		{
			if ((i+j)<100)
			output.poly[i + j] += poly[i] * right.poly[j];
		}
	}
	
	return output;
}

Polynomial &Polynomial::operator=(Polynomial&right){
	for (int i = 0; i < 100; i++)
	{
		poly[i] = right.poly[i];
	}
	return *this;
}
Polynomial::Polynomial(){

}
Polynomial Polynomial::operator-(Polynomial&right){

	Polynomial*output = new Polynomial();
	Polynomial::polySort_and_Zero(output->poly);

	for (int i = 0; i < 100; i++)
	{
		if ((i % 2 == 0) && (poly[i] != 0 || right.poly[i] != 0))
		{
			output->poly[i] = poly[i] - right.poly[i];
		}
	}
	return *output;
}
Polynomial Polynomial::operator+(Polynomial&right){

	Polynomial*output = new Polynomial();

	Polynomial::polySort_and_Zero(output->poly);


	for (int i = 0; i < 100; i++)
	{
		if ((i % 2 == 0) && (poly[i] != 0 || right.poly[i] != 0))
		{
			output->poly[i] = poly[i] + right.poly[i];
		}
	}
	return *output;
}
Polynomial &Polynomial::setPoly(int z, int s){
	
	for (int i = 0; i < 100; i++)
	{
		//加入此 z 係數,其餘全給0
		poly[i] = i == ((s + 1) * 2 - 2) ? z : 0;
	}
	//加入次方遞增排序{X,0,X,1,X,2...}
	Polynomial::initPolyToSortNumber(poly);
	return *this;
}
Polynomial::Polynomial(int z, int s)
{
	setPoly(z, s);
}


Polynomial::~Polynomial()
{

}
