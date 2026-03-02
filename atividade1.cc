#include <iostream>
using namespace std;

int main() {
    float x, y, z;
    cout << "Digite o primeiro lado: ";
    cin >> x;
    cout << "Digite o segundo lado: ";
    cin >> y;
    cout << "Digite o terceiro lado: ";
    cin >> z;
    if(x > 0 && y > 0 && z > 0) {

        if(x + y > z && x + z > y && y + z > x) {

            if(x == y && y == z) {
                cout << "Triangulo Equilatero";
            }
            else if(x == y || x == z || y == z) {
                cout << "Triangulo Isosceles";
            }
            else {
                cout << "Triangulo Escaleno";
            }
        } else {
            cout << "Nao forma um triangulo valido";
        }
    } else {
        cout << "Valores invalidos";
    }
    return 0;
}