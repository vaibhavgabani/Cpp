/*
 * P06.cpp
 *
 *  Created on: 29-Aug-2024
 *      Author: root
 */
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float pi = 3.1434567576756546;

	cout<<"Default Value : "<<pi<<endl;
	cout<<"Fixed Point format with 3 decimal : "<<setprecision(3)<<pi<<endl;
	cout<<"Fixed Point format with 3 decimal : "<<setprecision(5)<<pi<<endl;

	cout.unsetf(ios :: fixed | ios :: scientific);
	cout<<"Value after unset : "<<pi<<endl;
	cout<<"display positive value : "<<showpos<<pi<<endl;
	cout<<"Right align width 15 : "<<setw(15)<<pi<<endl;
	cout<<"Left align width 15 : "<<left<<setw(15)<<pi<<endl;
	cout<< resetiosflags(ios :: fixed | ios :: scientific) << "Defalut Value of pi : "<<pi<<endl;
	return 0;
}



