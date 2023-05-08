#include <iostream>
#include <cmath>
using namespace std;

double calcularVolumen(double h) {
double r = 14.0; // radio de la base del cilindro
double R = 4.0; // radio de la base inferior del cono truncado
double H = 6.0; // altura total del depósito
double Hc = 3.0; // altura del cono truncado
double Vc = 1.0/3.0 * M_PI * Hc * (pow(R, 2) + R*r + pow(r, 2)); // volumen del cono truncado
    double Vcorte = M_PI * pow(r, 2) * (H - h); // volumen del corte superior del cilindro
    double Vcilindro = M_PI * pow(r, 2) * (H - Hc) - Vcorte; // volumen del cilindro sin el corte superior
    double Vagua = Vcilindro + Vc * (h - (H - Hc)); // volumen de agua
    return Vagua;
}

int main() {
    double h;
    cout << "Ingrese la altura de la boya en metros: ";
    cin >> h;
    double Vagua = calcularVolumen(h);
    cout << "El volumen de agua en el deposito es: " << Vagua << " m^3" << endl;
    return 0;
}
