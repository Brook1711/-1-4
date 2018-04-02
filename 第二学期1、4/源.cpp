#include<iostream>
using namespace std;
int main()
{
	int N = 1;
	cin >> N;
	int*p = new int[N];
	for (int i = 0; i<N; i++)
		cin >> p[i];
	int temp = 0;
	for (int i = 0; i<N; i++)
	{
		temp ^= p[i];
	}
	cout << temp;
	delete[]p;
	return 0;
}