// 1장 연습문제 5

#include <string.h>
#include <iostream>
#include <math.h>

using namespace std;

int main() {

	float pyeong;

	float squareMeter;

	cout << "평 : ";
	cin >> pyeong;

	squareMeter = pyeong * 3.3058;

	cout << endl << "평방미터 : " << squareMeter << endl;

	return 0;
}