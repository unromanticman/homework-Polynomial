#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{	
	/// <summary>
	/// �h�����h���B��
	/// 20150509 �L����
	/// </summary>

	
	Polynomial x(8, 3), y(7,2),p(3,3),r;// �Y��,����
	cout << "�h�����h��" << endl;
	cout << "[����]���{���̦h�i�e��49����" << endl<<endl;
	cout << "�h����x = " << x << endl;
	cout << "�h����y = " << y << endl;
	cout << "�h����p = " << p << endl;
	cout << "���w�B��l p=x : " << (p = x) << endl;
	cout << '\n';
	cout << "x+y="<< (x+y)<<endl;
	cout << "x-y= " << (x - y) << endl;
	cout << "x*y= " << (x*y) << endl;

	cout << "\n�H�U�|����W�ӹB��᪺���G�~��B��\n" << endl;
	cout << "x+=x  :" << (x += x) << endl;
	cout << "x-=y  :" << (x -= y) << endl;

	cout << "x*=y:"  << (x *= y) << endl;
	cout << "x*x+y+y*x = " << (x*x + y + y*x)<<endl;


	system("pause");
}