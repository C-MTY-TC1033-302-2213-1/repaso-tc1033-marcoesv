#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

class Punto{
private:
double x;
double y;

public:
// constructor
Punto();
Punto(double _x, double _y);

// setters (modificadores)
void setX(double _x);
void setY(double _y);

// getters (metodos de acceso)
double getX();
double getY();

// methods
double calculaDistancia(Punto p2);
string str();

};

#endif /* Punto_hpp */