#include <iostream>
using namespace std;

void Recargar(float &combustible, float litros);
void ConsultarCombustible(float combustible);

int main()
{
    float combustible = 50.0f;  // combustible inicial del auto

    ConsultarCombustible(combustible);
    Recargar(combustible, 20.0f);
    ConsultarCombustible(combustible);

    return 0;
}

void ConsultarCombustible(float combustible)
{
    cout << "Nivel de combustible: " << combustible << " litros" << endl;
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