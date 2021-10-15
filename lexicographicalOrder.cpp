/*  In this problem you have to print number from 0 to n in lexicographical order
    LEXICOGRAPHICAL ORDER --> Dictionary order
*/

#include <iostream>
using namespace std;

void lexo(int n, int i) {

	if (i > n)  return;
	cout << i << endl;
	for (int j = (i == 0) ? 1 : 0 ; j <= 9; j++) {
		lexo(n, 10 * i + j);
	}
}

int main() {
	int n;
	cin >> n;
	lexo(n, 0);
	return 0;
}