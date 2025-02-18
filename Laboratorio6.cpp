#include <iostream>
#include <string>

using namespace std;

// Clase base Vehiculo
class Vehiculo {
private:
	string marca;   // Marca del vehículo
	int modelo;     // Año del modelo
	double precio;  // Precio del vehículo en quetzales

public:
	// Constructor de la clase Vehiculo con inicialización de atributos
	Vehiculo(string _marca, int _modelo, double _precio) : marca(_marca), modelo(_modelo), precio(_precio) {}

	// Métodos Getters para obtener los valores de los atributos
	string getMarca() const { return marca; }
	int getModelo() const { return modelo; }
	double getPrecio() const { return precio; }

	// Métodos Setters para modificar los atributos
	void setMarca(string nuevaMarca) { marca = nuevaMarca; }
	void setModelo(int nuevoModelo) { modelo = nuevoModelo; }
	void setPrecio(double nuevoPrecio) { precio = nuevoPrecio; }

	// Método virtual para mostrar la información del vehículo
	virtual void mostrarInformacion() const {
		cout << "Marca: " << marca << ", Modelo: " << modelo << ", Precio: Q" << precio;
	}
};

// Clase derivada Sedan que hereda de Vehiculo
class Sedan : public Vehiculo {
private:
	int numeroPuertas; // Número de puertas del automóvil

public:
	// Constructor que llama al constructor de la clase base
	Sedan(string _marca, int _modelo, double _precio, int _numeroPuerta)
		: Vehiculo(_marca, _modelo, _precio), numeroPuertas(_numeroPuerta) {
	}

	// Getter para obtener el número de puertas
	int getPuertas() const { return numeroPuertas; }

	// Setter para modificar el número de puertas
	void setPuertas(int nuevoPuertas) { numeroPuertas = nuevoPuertas; }

	// Sobrescribimos el método mostrarInformacion para incluir las puertas
	void mostrarInformacion() const override {
		Vehiculo::mostrarInformacion();
		cout << ", Puertas: " << numeroPuertas << endl;
	}
};

// Clase derivada Motocicleta que hereda de Vehiculo
class Motocicleta : public Vehiculo {
private:
	int cilindrada; // Cilindrada del motor en cc

public:
	// Constructor que inicializa los atributos heredados y propios
	Motocicleta(string _marca, int _modelo, double _precio, int _cilindrada)
		: Vehiculo(_marca, _modelo, _precio), cilindrada(_cilindrada) {
	}

	// Getter para obtener la cilindrada
	int getCilindrada() const { return cilindrada; }

	// Setter para modificar la cilindrada
	void setCilindrada(int nuevaCilindrada) { cilindrada = nuevaCilindrada; }

	// Sobrescribimos el método mostrarInformacion para incluir la cilindrada
	void mostrarInformacion() const override {
		Vehiculo::mostrarInformacion();
		cout << ", Cilindrada: " << cilindrada << "cc" << endl;
	}
};

// Clase derivada Camioneta que hereda de Vehiculo
class Camioneta : public Vehiculo {
private:
	float capacidadCarga; // Capacidad de carga en toneladas

public:
	// Constructor que inicializa atributos heredados y propios
	Camioneta(string _marca, int _modelo, double _precio, float _capacidadCarga)
		: Vehiculo(_marca, _modelo, _precio), capacidadCarga(_capacidadCarga) {
	}

	// Getter para obtener la capacidad de carga
	float getCapacidadCarga() const { return capacidadCarga; }

	// Setter para modificar la capacidad de carga
	void setCapacidadCarga(float nuevaCapacidad) { capacidadCarga = nuevaCapacidad; }

	// Sobrescribimos el método mostrarInformacion para incluir la capacidad de carga
	void mostrarInformacion() const override {
		Vehiculo::mostrarInformacion();
		cout << ", Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
	}
};

// Clase Cliente para representar a una persona que compra un vehículo
class Cliente {
private:
	string nombre; // Nombre del cliente
	int edad;      // Edad del cliente

public:
	// Constructor para inicializar los atributos del cliente
	Cliente(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}

	// Getters para obtener los atributos del cliente
	string getNombre() const { return nombre; }
	int getEdad() const { return edad; }

	// Setters para modificar los atributos del cliente
	void setNombnre(string nuevoNombre) { nombre = nuevoNombre; }
	void setEdad(int nuevaEdad) { edad = nuevaEdad; }

	// Método para simular la compra de un vehículo
	void comprarVehiculo(string vehiculo) const {
		cout << "Cliente: " << nombre << " ha comprado un " << vehiculo << endl;
	}
};

int main() {
	// Creación de objetos de las clases derivadas
	Sedan s1("Honda Civic", 2007, 15000, 4);
	Motocicleta m1("Pulsar Ns200", 2012, 10000, 200);
	Camioneta c1("Ford Ranger", 2020, 200000, 1.10);

	// Creación de un objeto de la clase Cliente
	Cliente k1("Fredy", 24);

	// Mostrar la información de los vehículos
	s1.mostrarInformacion();
	m1.mostrarInformacion();
	c1.mostrarInformacion();

	// Simular la compra de un vehículo
	k1.comprarVehiculo(c1.getMarca());

	return 0;
}
