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
			cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n maksimum panjang array adalah 20" << endl;
	}


	cout << "\n===================" << endl;
	cout << "\nenter array element" << endl;
	cout << "\n===================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + i);
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
void q_short(int low, int high)
{
	int pivort, i, j;
	if ((low > high) //langkah 1
		sreturn;

	//pertition the list into two part
	// one containing element lee that ar equal to pivot
	// outher containing elemnt grenthe than pivot
	i = low + 1; //langkah 3
	j = high; // langkah 4
	pivot = arr[low];//langkah 2
}