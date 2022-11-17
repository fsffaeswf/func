#include <iostream>
#include <ctime>
using namespace std;
int triangleP(int);
double triangleS(double);
double rectP(double, double, double, double);
double rectS(double, double, double, double);
int digitSum(int);
int main() {
	//Proc4.Описать 2 функции triangleP(a) и triangleS(a), вычисляющие по стороне a равностороннего треугольника его периметр P = 3·a и площадь S = a 2 · √ 3 / 4 (параметры являются вещественными).С помощью этих функций найти периметры и площади трех равносторонних треугольников с данными сторонами(стороны ввести с клавиатуры).
	/*int a;
	cin >> a;
	cout << "P=" << triangleP(a) << endl
		<< "S=" << triangleS(a);*/

	//Proc5.Описать 2 функции rectP(x1, y1, x2, y2) и rectS(x1, y1, x2, y2), вычисляющие периметр P и площадь S прямоугольника со сторонами, параллельными осям координат, по координатам(x1, y1), (x2, y2) его противоположных вершин.С помощью этих функций найти периметры и площади трех прямоугольников с данными противоположными вершинами.
	/*double x1, x2, y1, y2;
	cin >> x1 >> x2 >> y1 >> y2;
	cout << "P =" << rectP(x1, x2, y1, y2) << endl
		<< "S=" << rectS(x1, x2, y1, y2);*/

	//proc6
	int k;
	cin >>k;
	cout << digitSum(k);


}
int triangleP(int a) {
	return 3 * a;
}
double triangleS(double a) {
	return ((a * a) * sqrt(3)) / 4;
}
double rectP(double x1, double x2, double y1, double y2) {
	double a = abs(x2 - x1);
	double b = abs(y2 - y1);
	return 2 * a + 2 * b;
}
double rectS(double x1, double x2, double y1, double y2) {
	double a = abs(x2 - x1);
	double b = abs(y2 - y1);
	return a*b;
}
int digitSum(int k) {
	int sum = 0;
	while (k > 0) {
		int k1 = k % 10;
		sum += k1;
		k = k / 10;
	}
	return sum;
}


