#include <iostream>
using namespace std;
int main() {
	int levels;
	cout << "請輸入層數(1 - 8):";
	cin >> levels;
	if (levels > 8 || levels < 0) {
		cout <<"輸入錯誤";
		return 0;
	}
	
	for (int i = 0; i < levels; i++) {
		for (int j = 0; j < (levels - i); j++) {
			cout << " ";
		}
		for (int j = 0; j <= i; j++) {
			cout << "#";
		}
		cout << " ";
		for (int j = 0; j <= i; j++) {
			cout << "#";
		}
		if (i != (levels - 1))
			cout << endl;
	}
	
	return 0;
}