#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
double maxr(double *a,int n);
int main()
{
	double a[8] = {2, 3, 4, 10, 9, 30, 10, 1};
	double r = maxr(a, 8);
	cout << "Maximum = " << r << endl;
	return 0;
}
double maxr(double *a,int n)
{
	if(n==1)
		{
			return a[0];
		}
	if(n==2)
		{
			return max(a[0],a[1]);
		}
	
	double max1 = maxr(a, n/2);
	double max2 = maxr(a + n/2, n/2);
	return max(max1, max2);
}