/* Zadanie 1
������ ���������!
10*x+42*y+c =
10*x^2+67y+c =
10*x^3-98*y+c =
��� x,y,c �������� �������������.*/

#include <iostream>
using namespace std;

int main() {
    int x, y, c, equation1, equation2, equation3;
    setlocale(LC_ALL, "");
    cout << "������� ������������� x,y,c ��� ������� ���������" << endl << "10*x+42*y+c = " << endl << "10*x^2+67y+c = " << endl << "10*x^3-98*y+c = " << endl;
    cout << "x = ";
    cin >> x;
    cout  << "y = ";
    cin >> y;
    cout << "c = ";
    cin >> c;
    equation1 = 10 * x + 42 * y + c;
    equation2 = 10 * x ^ 2 + 67*y + c;
    equation3 = 10 * x ^ 3 - 98 * y + c;
    cout << "����� � ��������� 1 = " << equation1 << endl << "����� � ��������� 2 = " << equation2 << endl << "����� � ��������� 3 = " << equation3 << endl;
    return 0;
}