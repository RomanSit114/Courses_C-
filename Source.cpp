/* Zadanie 1
Решить уравнение!
10*x+42*y+c =
10*x^2+67y+c =
10*x^3-98*y+c =
где x,y,c вводятся пользователем.*/

#include <iostream>
using namespace std;

int main() {
    int x, y, c, equation1, equation2, equation3;
    setlocale(LC_ALL, "");
    cout << "Введите целочисленные x,y,c для решения уравнений" << endl << "10*x+42*y+c = " << endl << "10*x^2+67y+c = " << endl << "10*x^3-98*y+c = " << endl;
    cout << "x = ";
    cin >> x;
    cout  << "y = ";
    cin >> y;
    cout << "c = ";
    cin >> c;
    equation1 = 10 * x + 42 * y + c;
    equation2 = 10 * x ^ 2 + 67*y + c;
    equation3 = 10 * x ^ 3 - 98 * y + c;
    cout << "Ответ к уравнению 1 = " << equation1 << endl << "Ответ к уравнению 2 = " << equation2 << endl << "Ответ к уравнению 3 = " << equation3 << endl;
    return 0;
}