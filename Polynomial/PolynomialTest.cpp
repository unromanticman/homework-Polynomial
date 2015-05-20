#include <iostream>
#include "Polynomial.h"
using namespace std;

int main()
{	
	/// <summary>
	/// 多項式多載運算
	/// 20150509 林郁翔
	/// </summary>

	
	Polynomial x(8, 3), y(7,2),p(3,3),r;// 係數,次方
	cout << "多項式多載" << endl;
	cout << "[提示]此程式最多可容納49次方" << endl<<endl;
	cout << "多項式x = " << x << endl;
	cout << "多項式y = " << y << endl;
	cout << "多項式p = " << p << endl;
	cout << "指定運算子 p=x : " << (p = x) << endl;
	cout << '\n';
	cout << "x+y="<< (x+y)<<endl;
	cout << "x-y= " << (x - y) << endl;
	cout << "x*y= " << (x*y) << endl;

	cout << "\n以下會延續上個運算後的結果繼續運算\n" << endl;
	cout << "x+=x  :" << (x += x) << endl;
	cout << "x-=y  :" << (x -= y) << endl;

	cout << "x*=y:"  << (x *= y) << endl;
	cout << "x*x+y+y*x = " << (x*x + y + y*x)<<endl;


	system("pause");
}