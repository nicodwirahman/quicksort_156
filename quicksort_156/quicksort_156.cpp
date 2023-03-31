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
		cout << "<" << (i + i) << ">";
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
	int pivot, i, j;
	if (low > high) //langkah 1
		return;

	//pertition the list into two part
	// one containing element lee that ar equal to pivot
	// outher containing elemnt grenthe than pivot

	 pivot= arr[low];//langkah 2
	
	i = low + 1; //langkah 3
	j = high; // langkah 4
	


	while (i <= j)  //langkah 10
	{
		//search for a elemen greather then pivot
		while ((arr[i] <= pivot) && (i <= high)) //langkah 5
		{
			i++;//langkah 6
			cmp_count++;
		}
		cmp_count++;
		if (i < j)
		//search for an element less thanor squal to pivot
		while ((arr[j] > pivot) && (j >= low))//langkah 7
		{
			j--;//langkah 8
			cmp_count++;
		}
		cmp_count++;
		if (i < j)//langkah 9
			// if greater element s on left of the element
		{
			//swap the lement at index i with the element at index j
			swap(i, j);
			mov_count++;
		}
	}
		// sort the list on the left of pivot using quick short
		q_short(low, j - 1);//langkah 12
		// sort the list on the right of pivot using quick short
		q_short(j + 1, high);//langkah 13
	}

	void display () {
		cout << "\n====================" << endl;
		cout << "Sorted Array" << endl;
		cout << "\n====================" << endl;

		for (int i = 0; i < n; i++) 
		{
			cout << arr[i] << " ";
		}

		cout << "\n\nnumber of comparison: " << cmp_count << endl;
		cout << "number of data novements:"  << mov_count << endl;
	}

	int main()
	{
		input();
		q_short(0, n - 1);
		display();
			system("pause");

		return 0;
	}