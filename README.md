# 🚗 Laboratorio 6: Programación Orientada a Objetos en C++

## 📌 Descripción
Este proyecto es una simulación de un sistema para una concesionaria de autos, en el que se modelan distintos tipos de vehículos y clientes utilizando **Programación Orientada a Objetos (POO)** en **C++**. 

Se implementan conceptos fundamentales como **herencia**, **encapsulamiento** y **polimorfismo**, permitiendo la reutilización y estructuración eficiente del código.

## 🎯 Objetivos
- Practicar la creación de clases con atributos y métodos.
- Implementar **constructores** para inicializar objetos.
- Aplicar el **concepto de herencia** entre clases.
- Utilizar **encapsulamiento** para proteger los datos privados.
- Instanciar y manipular objetos dentro de un programa principal.

## 🛠️ Estructura del Código
### 🔹 **Clase Base: `Vehiculo`**
- Representa la estructura principal de todos los vehículos.
- **Atributos privados**:
  - `marca`: Nombre del fabricante.
  - `modelo`: Año del modelo.
  - `precio`: Costo del vehículo.
- **Métodos**:
  - `getters` y `setters` para acceder y modificar los atributos.
  - `mostrarInformacion()`: Método virtual que imprime los detalles del vehículo.

### 🔹 **Clases Derivadas**
Cada una hereda de `Vehiculo` y añade un atributo específico:

1. **`Sedan`**:
   - **Atributo:** `numeroPuertas` (cantidad de puertas).
   - **Método sobrescrito:** `mostrarInformacion()` muestra el número de puertas.

2. **`Motocicleta`**:
   - **Atributo:** `cilindrada` (capacidad del motor en cc).
   - **Método sobrescrito:** `mostrarInformacion()` muestra la cilindrada.

3. **`Camioneta`**:
   - **Atributo:** `capacidadCarga` (capacidad de carga en toneladas).
   - **Método sobrescrito:** `mostrarInformacion()` muestra la capacidad de carga.

### 🔹 **Clase `Cliente`**
- Representa a una persona que compra un vehículo.
- **Atributos**:
  - `nombre`: Nombre del cliente.
  - `edad`: Edad del cliente.
- **Métodos**:
  - `comprarVehiculo(string vehiculo)`: Imprime un mensaje indicando que el cliente ha comprado un vehículo.

## 🖥️ Implementación
1. Se crean instancias de diferentes vehículos (`Sedan`, `Motocicleta`, `Camioneta`).
2. Se crea una instancia de `Cliente`.
3. Se muestra la información de los vehículos.
4. Se simula la compra de un vehículo por parte del cliente.

## 🏗️ Instalación y ejecución
Para ejecutar este proyecto en **Visual Studio Community**:

1. **Clonar el repositorio**:
   ```bash
   git clone https://github.com/FredyGus/Laboratorio6.git
   cd Laboratorio6
