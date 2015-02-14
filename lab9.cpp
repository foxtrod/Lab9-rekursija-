#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
double maxr(double *a,int n);
void main()
{
	double a[4]={2,20,4,10,};
	double r=maxr(a,4);
	cout << "Maximum = " << r << endl; 
}
double maxr(double *a,int n)
{
	if(n==1)
		{
			return a[0];
		}
	if(n==2)
		{
			return __max(a[0],a[1]);
		}
	double max1 = maxr(a,n/2);
	double max2 = maxr(a+n/2,n/2);
	return __max(max1,max2);
}