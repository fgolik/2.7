#include <iostream>//variant 3
#include <math.h>//Заданы натуральные числа m, n. Вводятся целые числа а1, ..., an. Вычислить b1 + ... + bm, где b1 = а1 + а2 + ... + an; b2 = а1 2 + а2 2 + ... + an 2 ; ... bm = а1 m + а2  m + ... + an m
using namespace std;

int main()
{
	int b_len;
	cout << " Enter m = ";
	cin >> b_len;
	int a_len;
	cout << "Enter n = ";
	cin >> a_len;

	int sum_el_b = 0;
	int el_a;

	for (int i = 0; i < a_len; ++i)
	{
		cout << "Enter quantity element a =  "<< endl;
		cin >> el_a;

		for (int n = 1; n <= b_len; ++n)
		{
			sum_el_b += pow(el_a, n);
		}
	}

	cout << sum_el_b << endl;
}