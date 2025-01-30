// C++ program to demonstrate working of fill()
#include <bits/stdc++.h>
using namespace std;

int main()
{
	list<int> ml = { 10, 20, 30 };

	fill(ml.begin(), ml.end(), 4);

	for (int x : ml){
		cout << x << " ";
    }

    int arr[10];
 
    // calling fill to initialize values in the
    // range to 4
    fill(arr, arr + 10, 4);
 
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

	return 0;
}
