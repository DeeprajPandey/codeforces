#include<iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int ctr = 0;
	int* arr = new int[n];

	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	for(int i=0; i<n; i++)
	{
		if(arr[i] >= arr[k-1] && arr[i] > 0)
		{
			ctr++;
		}
	}

	cout << ctr << endl;


	delete [] arr;

	return 0;
}
