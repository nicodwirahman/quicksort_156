#include <iostream>
using namespace std;

//array of integres to hold values
int arr[20];
int cmp_count = 0; //numvber of comprasion
int mov_count = 0; //number of movemnt
int n;
void input() {
	while (true)
	{
		cout << "massukan panjang element array: ";
			cin >> ;

		if (n <= 20)
			break;
		else
			cout << "\n maksimum panjang array adalah 20" << endl;
	}
}

	cout << "\n===================" << endl;
	cout << "\nenter array element" << endl;
	cout << "\n===================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + i)
			cin >> arr[i];
	}
}
//swapthe element at index x with the element at index x y
void swap(int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}