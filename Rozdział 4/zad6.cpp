#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	struct Batonik
	{
			string marka;
			float waga;
			int kalorie;
	};
	
	Batonik snack[3] = { 
							{ "Mars", 0.25, 240 },
							{ "Snickers", 0.20, 320 },
							{ "Twix", 0.15, 120 }
						};
	cout << snack[0].marka << " , " << snack[0].waga << " , " << snack[0].kalorie << endl;
	cout << snack[1].marka << " , " << snack[1].waga << " , " << snack[1].kalorie << endl;
	cout << snack[2].marka << " , " << snack[2].waga << " , " << snack[2].kalorie << endl;
	
	cin.get();
	
	return 0;
}
