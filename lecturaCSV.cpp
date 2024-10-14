//
// Created by Matias on 13-Oct-24.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    ifstream archivo("Base_Datos_COMA.csv"); // Nombre del archivo CSV
    string linea;

    if (!archivo) {
        cerr << "El archivo no existe o no se pudo abrir." << endl;
        return 1;
    }

    // Verificar si hay BOM al inicio del archivo
    char bom[3];
    archivo.read(bom, 3);
    if (!(bom[0] == char(0xEF) && bom[1] == char(0xBB) && bom[2] == char(0xBF))) {
        // Si no hay BOM, retroceder al inicio del archivo
        archivo.seekg(0);
    }

    // Leer línea por línea
    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string dato;
        vector<std::string> fila;

        // Leer cada valor separado por comas
        while (getline(ss, dato, ',')) {
            fila.push_back(dato);
        }

        // Imprimir la fila leída
        for (const auto& valor : fila) {
            cout << valor << " ";
        }
        cout << std::endl;
    }

    archivo.close();
    return 0;
}
