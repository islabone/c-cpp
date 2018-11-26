#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int p, g, a, b;
 	cout << "Enter modulo(p): " ;
 	cin >> p;
 	cout << "Enter primitive root of " << p << " : ";
 	cin >> g;
	cout << "Choose 1st secret no(Alice): ";
	cin >> a;
	cout << "Choose 2nd secret no(BOB): ";
	cin >> b;
	         
 
 	int A = (int)pow(g,a)%p;
 	int B = (int)pow(g,b)%p;
 
 	int S_A = (int)pow(B,a)%p;
 	int S_B =(int)pow(A,b)%p; 
 
 	if(S_A==S_B)
 	{
 		cout << "\n ALice and Bob can communicate with each other!!!\n";
 		cout << " They share a secret no = " << S_A << " .\n"; 
 	}
 	else
 	{
 		cout << "\n ALice and Bob cannot communicate with each other!!!\n";
 	}
}
