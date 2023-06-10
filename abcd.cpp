#include<stdio.h>
using namespace std;
int main(){
	
	double m;
	scanf(" %d",&m);
	double A=0.01;
	double B=0.02;
	double C=0.02;
	double Pa=A/m;
	double Pb=B/m;
	double Pc=C/m;
	double D= Pa*Pb;
	double total= Pc*D;
	double E= 1-total;
	printf("%d",E);
	
	
	
	
}
