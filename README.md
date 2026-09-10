# GrupoLaboratorio1-AA
Consultar combustible, consulta el nivel de combustible utilizando paso por valor.
Repostar, realiza una recarga real, modificando el combustible mediante referencia.
Consumir combustible, disminuye el combustible real del auto, modificando el valor mediante puntero.

Requisitos del sistema

El programa deberá desarrollarse utilizando C++.

La función main() deberá encargarse de crear y manejar el nivel de combustible del auto.

El combustible inicial del auto debe ser de 50 litros.

La función ConsultarCombustible(float combustible) deberá mostrar el combustible recibido, sin modificar el combustible original.

La función Recargar(float &combustible, float litros) deberá aumentar el combustible, modificando el valor mediante referencia.

La función *ConsumirCombustible(double combustible, double litros) deberá disminuir el combustible, modificando el valor mediante puntero.

No se permiten cantidades negativas en las operaciones de repostaje o consumo.

El combustible no puede ser menor que 0 litros.

El combustible no puede superar la capacidad máxima del tanque, establecida en 100 litros.

Se deberán implementar validaciones mediante if para controlar las condiciones anteriores.

Cada operación deberá mostrar un mensaje claro indicando si fue realizada correctamente o si se produjo un error.

El programa deberá mostrar el nivel de combustible antes y después de cada operación.

El programa deberá demostrar el funcionamiento de las tres funciones utilizando datos quemados (hardcoded) dentro de la función main() o solicitarlos al usuario.