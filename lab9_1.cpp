#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, r, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> r;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i=1;
		

	cout << fixed << setprecision(2); 
	double newb = loan;
	double pre = loan;
	while (newb > 0){
	cout << setw(13) << left << i;
	i++ ; 
	
	cout << setw(13) << left << pre;
 	double in = pre*(r/100);
	cout << setw(13) << left << in;
	double tot = pre+in;
	cout << setw(13) << left << tot;
	if (tot < pay) pay = tot;
	cout << setw(13) << left << pay;
	newb = tot-pay;
	cout << setw(13) << left << newb;
	pre = newb;
	cout << "\n";	
	}
	return 0;
}
