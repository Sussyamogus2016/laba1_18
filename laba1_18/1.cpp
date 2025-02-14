#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(0, "rus");
	float z, sq_tri, tri_height,sq;
    while (true) {
        cout << "Введите сторону правильного пятиугольника: ";
        cin >> z;
        if (cin.fail() or z <= 0) {
            cin.clear(); 
            cin.ignore(1000, '\n');  
            cout << "Ошибка! Попробуйте еще раз.\n";
        }
        else {
            cin.ignore(1000, '\n'); 
            break;  
        }
    }
    tri_height = (z/2) / tan(36* 3.14 / 180.0);
    sq_tri = 0.5 * tri_height * z;
    sq = 5 * sq_tri;
    cout << "Площадь правильного пятиугольника со стороной " << z << " равна " << sq;
	return 0;
}