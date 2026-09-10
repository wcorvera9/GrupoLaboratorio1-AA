#include <iostream>

// Declaracion de funciones
void Recargar(float &combustible, float litros);
// Función para consumir combustible (paso por puntero)
void ConsumirCombustible(double *combustible, double litros);

int main() {
    // Combustible inicial
    double combustible = 50.0;
  
    std::cout << "Cantidad inicial de combustible: " << combustible << " litros" << std::endl;
    // Demostracion 2
    Recargar (combustible, 30.0); // 30 litros de recarga
    std::cout << "Cantidad de combustible despues de recargar: " << combustible << " litros" << std::endl;

    // Demostración 3: Consumo por puntero (Casos de prueba)
    ConsumirCombustible(&combustible, -5.0);  // Error: Cantidad negativa
    ConsumirCombustible(&combustible, 90.0);  // Error: Excede el combustible disponible (80 - 90 < 0)
    ConsumirCombustible(&combustible, 45.0);  // Éxito: Disminuye a 35 L
    return 0;
};


// Consumo de combustible (paso por puntero)
void ConsumirCombustible(double *combustible, double litros)
{
    std::cout << "\n--- Intentando consumir " << litros << " L ---" << std::endl;
    
    if (combustible == nullptr) {
        std::cout << "[ERROR] Puntero no valido." << std::endl;
        return;
    }
    if (litros <= 0)
    {
        std::cout << "Error: La cantidad a consumir debe ser mayor que 0." << std::endl;
        return;
    }

    if (*combustible - litros < 0)
    {
        std::cout << "Error: No hay suficiente combustible para consumir." << std::endl;
        std::cout << "Combustible disponible: " << *combustible << " litros" << std::endl;
        return;
    }

    *combustible -= litros;
    std::cout << "Consumo exitoso. Se consumieron " << litros << " litros." << std::endl;
    std::cout << "Nivel despues de la operacion: " << *combustible << " L" << std::endl;
};

//Paso por referencia
void Recargar(float &combustible, float litros) {
    if (litros <= 0) {
        std::cout << "La cantidad de combustible debe ser mayor a 0" << std::endl;
        return;
    }
    if (combustible + litros > 100){
        std::cout << "No se puede recargar, el tanque esta lleno" << std::endl;
        return;
    } 
        combustible += litros;
        std::cout << "Se recargo " << litros << std::endl;
    


}
