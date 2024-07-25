# include <iostream>
# include <cmath>

int main()
{
	double posicion_inicial = 50.0;
	double velocidad = -10.5;
	double tiempo = 4.0;

	double posicion_final = posicion_inicial + velocidad * tiempo;

	std::cout << "La posicion final del objeto es: " << posicion_final << " metros." << std::endl;

	return (0);
}
