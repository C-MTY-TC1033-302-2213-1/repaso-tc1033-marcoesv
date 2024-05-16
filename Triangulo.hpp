#ifndef Triangulo_hpp
#define Triangulo_hpp

#include <stdio.h>
#include <string>
#include "Punto.hpp"


class Triangulo{
private:
Punto v1, v2, v3;

public:
// constructor
Triangulo();
Triangulo(Punto _v1, Punto _v2, Punto _v3);

// setters
void setV1(Punto _v1);
void setV2(Punto _v2);
void setV3(Punto _v3);

// getters
Punto getV1();
Punto getV2();
Punto getV3();

// methods
double perimetro();
double area();
string str();
};

#endif /* Triangulo_hpp */