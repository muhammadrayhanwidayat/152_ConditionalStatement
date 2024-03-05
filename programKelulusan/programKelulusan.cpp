#include <iostream>
using namespace std;

int main()
{
	int nilaiMatematika, nilaiFisika, rerata;
	string status;
	cout << "masukan nilai matematika :";
	cin >> nilaiMatematika;
	cout << "masukan nilai fisika: ";
	cin >> nilaiFisika;

	rerata = (nilaiFisika + nilaiMatematika) / 2;

	if (rerata > 60 || nilaiMatematika > 70) {
		status = "Lulus";
	}
	else {
		status = "Tidak lulus";
	}
	cout << "Nilai MTK :" << nilaiMatematika << endl;
	cout << "Nilai fisika :" << nilaiFisika << endl;
	cout << "reratanya adalah :" << rerata << endl;
	cout << "statusnya adalah :" << status << endl;
	return 0;
}