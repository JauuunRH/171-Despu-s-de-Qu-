#include <iostream>
#include <stdio.h>

using namespace std;

struct Saes {
    char alumno[30], correo[40];
    int boleta;
};

FILE* excel;

void captura() {
    Saes itmi; // Declarar itmi dentro de la función captura
    excel = fopen("Boleta.txt", "a");
    if (excel == NULL) {
        excel = fopen("Boleta.txt", "w");
        cout << "Se ha creado el archivo";
    }
    cout << "Nombre, Boleta, Correo: ";
    fflush(stdin);
    cin.getline(itmi.alumno, 30);
    cin >> itmi.boleta;
    fflush(stdin);
    cin.getline(itmi.correo, 40);

    fwrite(&itmi, sizeof(struct Saes), 1, excel);
    cout << "\nRegistro completado";
    system("pause>null");
    fclose(excel);
}

void mostrar() {
    Saes itmi; // Declarar itmi dentro de la función mostrar
    system("cls");
    excel = fopen("Boleta.txt", "r");
    fread(&itmi, sizeof(struct Saes), 1, excel);
    while (!feof(excel)) {
        cout << "\nNombre: " << itmi.alumno << endl;
        cout << "Correo: " << itmi.correo << endl;
        cout << "Boleta: " << itmi.boleta << endl;
        fread(&itmi, sizeof(struct Saes), 1, excel);
    }
    cout << "\nSon todos los registros";
    system("pause>null");
    fclose(excel);
}

int menu() {
    int op;
    do {
        system("cls");
        cout << "Menu\n"
             << "1. Capturar Alumno\n"
             << "2. Mostrar\n"
             << "3. Salir\n"
             << "Elige una opcion: ";
        cin >> op;
    } while (op < 1 || op > 3);
    return op;
}

int main() {
    int opcion;
    do {
        opcion = menu();
        switch (opcion) {
            case 1:
                captura();
                break;
            case 2:
                mostrar();
                break;
            default:
                cout << "Adios";
                break;
        }
    } while (opcion != 3);
}
