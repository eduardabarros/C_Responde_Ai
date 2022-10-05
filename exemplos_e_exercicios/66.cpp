
	#include<iostream>
	#include<cmath>
	using namespace std;
	int main ()
	
	{
	
	float a=2.3, b=3.8, c=5.5, d=-2.3, e=-3.8, f=-5.5;
	char t = '\t';
	
	cout << endl << "Valor \t round \t floor \t ceil \t trunc" << endl;
	cout << "------\t------\t------\t------\t------" << endl;
	cout << a << t << round(a) << t << floor(a) << t << ceil(a) << t << trunc(a) << endl;
	cout << b << t << round(b) << t << floor(b) << t << ceil(b) << t << trunc(b) << endl;
	cout << c << t << round(c) << t << floor(c) << t << ceil(c) << t << trunc(c) << endl; 
	cout << d << t << round(d) << t << floor(d) << t << ceil(d) << t << trunc(d) << endl;
	cout << e << t << round(e) << t << floor(e) << t << ceil(e) << t << trunc(e) << endl;
	cout << f << t << round(f) << t << floor(f) << t << ceil(f) << t << trunc(f) << endl;
	
	return 0;
	
	// Fonte: Responde Aí - cmath
	
	}
