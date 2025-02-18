#include <iostream>
#include <string>

using namespace std;


class Vehiculo {
private:
	string marca;
	int modelo;
	double precio;

public:
	//Constructor
	Vehiculo(string _marca, int _modelo, double _precio): marca(_marca), modelo(_modelo), precio(_precio){}

	//Metodos getters
	string getMarca() const { return marca; }
	int getModelo() const { return modelo; }
	double getPrecio() const { return precio; }

	//Metodos setters
	void setMarca(string nuevaMarca) { marca = nuevaMarca; }
	void setModelo(int nuevoModelo) { modelo = nuevoModelo; }
	void setPrecio(double nuevoPrecio) { precio = nuevoPrecio; }

	//Metodo mostrar informacion
	virtual void mostrarInformacion() const {

		cout << "Marca: " << marca << ", Modelo: " << modelo << ", Precio: Q" << precio ;
	}
};

class Sedan : public Vehiculo {
private:
	int numeroPuertas;

public:
	//Constructor
	Sedan(string _marca, int _modelo, double _precio, int _numeroPuerta) : Vehiculo(_marca, _modelo, _precio), numeroPuertas(_numeroPuerta){}

	//Metodos getters
	int getPuertas() const { return numeroPuertas; }

	//Metodo setters
	void setPuertas(int nuevoPuertas) { numeroPuertas = nuevoPuertas; }

	//Metodo mostrar informacion
	void mostrarInformacion() const override {
		Vehiculo::mostrarInformacion();
		cout << ", Puertas: " << numeroPuertas << endl;
	}
};

class Motocicleta : public Vehiculo {
private: 
	int cilindrada;

public:
	Motocicleta(string _marca, int _modelo, double _precio, int _cilindrada) : Vehiculo(_marca, _modelo, _precio), cilindrada(_cilindrada){}

	//Metodos getters
	int getCilindrada() const { return cilindrada; }

	//Metodos setters
	void setCilindrada(int nuevaCilindrad) { cilindrada = nuevaCilindrad; }

	//Metodo mostrar informacion 
	void mostrarInformacion() const override {
		Vehiculo::mostrarInformacion();
		cout << "Cilindrada: " << cilindrada << "cc" << endl;
	}
};

class Camioneta : public Vehiculo {
private:
	float capacidadCarga;
public:
	Camioneta(string _marca, int _modelo, double _precio, float _capacidadCarga) : Vehiculo(_marca, _modelo, _precio), capacidadCarga(_capacidadCarga){}

	//Metodos getters
	float getCapacidadCarga() const { return capacidadCarga; }

	//Metodo setters
	void setCapacidadCarga(float nuevaCapacidad) { capacidadCarga = nuevaCapacidad; }

	//Metodo mostrar informacion 
	void mostrarInformacion() const override {
		Vehiculo::mostrarInformacion();
		cout << ", Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
	}

};

class Cliente {
private:
	string nombre;
	int edad;

public:
	//Constructor
	Cliente(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}

	//Metodos getters
	string getNombre() const { return nombre; }
	int getEdad() const { return edad; }

	//Metodos setters
	void setNombnre(string nuevoNombre) { nombre = nuevoNombre; }
	void setEdad(int nuevaEdad) { edad = nuevaEdad; }

	//Metodo comprar un Vehiculo
	void comprarVehiculo(string vehiculo) const {
		cout << "Cliente: " << nombre << " ha comprado un " << vehiculo << endl;
	}
};

int main() {
	Sedan s1("Honda Civic", 2007, 15000, 4);
	Motocicleta m1("Pulsar Ns200", 2012, 10000, 200);
	Camioneta c1("Ford Ranger", 2020, 200000, 1.10);

	Cliente k1("Fredy", 24);

	s1.mostrarInformacion();
	m1.mostrarInformacion();
	c1.mostrarInformacion();

	k1.comprarVehiculo(c1.getMarca());

	return 0;
}