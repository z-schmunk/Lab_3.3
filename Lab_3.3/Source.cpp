#include <iostream>
using namespace std;

int main() {
	int eggtot;
	int eggcar;
	int extra;
	cout << " How many eggs do you have? " << endl;
	cin >> eggtot;
	cout << " You have " << eggtot / 12 << " cartons. " << endl;
	cout << " You have " << eggtot % 12 << " extra." << endl;

}