#include <iostream>
#include <valarray>
#include <vector>
#include <algorithm>

int main()
{
	using namespace std;
	vector<double> data;
	double temp;
	
	cout << "Podaj liczby (0<=, aby zakonczyc):\n";
	while (cin >> temp && temp > 0)
		data.push_back(temp);
	sort(data.begin(), data.end());
	int size = data.size();
	valarray<double> numbers(size);
	int i;
	for (i = 0; i < size; i++)
		numbers[i] = data[i];
	valarray<double> sq_rts(size);
	sq_rts = sqrt(numbers);
	valarray<double> result(size);
	result = numbers + 2.0 * sq_rts;
	cout.setf(ios_base::fixed);
	cout.precision(4);
	for (i = 0; i < size; i++)
	{
		cout.width(8);
		cout << numbers[i] << ": ";
		cout.width(8);
		cout << result[i] << endl;
	}
	cout << "koniec\n";
	 
	return 0;
}
