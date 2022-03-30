#include <iostream>

using namespace std;


int an(int n)
{
	if(n>0)
	return 2*an(n-1);
	else
	return 1;
}

int main()
{
	
	int n=9;
	cout<<an(n)<<" ";
	return 0;
}
