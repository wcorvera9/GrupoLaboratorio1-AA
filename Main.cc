#include <iostream>
using namespace std;

void Recargar(float &combustible, float litros);

int main()
{
    float combustible = 50.0f;  // combustible inicial del auto

    // Aquí va el código que use las funciones

    Recargar(combustible, 20.0f);
    return 0;
}

void Recargar(float &combustible, float litros)
{
    const float kCapacidadMaxima = 100.0f;

    cout << "Combustible antes de repostar: " << combustible << " litros" << endl;

    if (litros < 0)
    {
        cout << "Error: no se pueden repostar cantidades negativas." << endl;
        return;
    }

    if (combustible + litros > kCapacidadMaxima)
    {
        cout << "Error: la recarga excede la capacidad maxima del tanque ("
             << kCapacidadMaxima << " litros)." << endl;
        return;
    }

    combustible += litros;
    cout << "Recarga realizada correctamente." << endl;
    cout << "Combustible despues de recargar: " << combustible << " litros" << endl;
}