#include <iostream>

void Recargar(float &combustible, float litros);

int main() {
    float combustible = 50.0; //inicial

    std::cout << "Cantidad inicial de combustible: " << combustible << " litros" << std::endl;
    Recargar (combustible, 30.0); // 30 litros de recarga
    std::cout << "Cantidad de combustible despues de recargar: " << combustible << " litros" << std::endl;
    return 0;
}
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