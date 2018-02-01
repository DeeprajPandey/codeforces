#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int ctr;
	int* arr = new int[n];

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	for(int i=0; i<n; i++)
	{
		if(arr[i] != k)
		{
			ctr++;
		}
		else
		{
			break;
		}
	}

	cout << ctr << endl;


	delete [] arr;

	return 0;
}
