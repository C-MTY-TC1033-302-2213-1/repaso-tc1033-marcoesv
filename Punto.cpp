#include "Punto.hpp"

// constructor
Punto::Punto(){
x = 0;
y = 0;
}
Punto::Punto(double _x, double _y){
x = _x;
y = _y;
}

// setters (modificadores)
void Punto::setX(double _x){
x = _x;
}
void Punto::setY(double _y){
y = _y;
}

// getters (metodos de acceso)
double Punto::getX(){
return x;
}
double Punto::getY(){
return y;
}

// methods
double Punto::calculaDistancia(Punto p2){
return sqrt((p2.x - x) * (p2.x - x) + (p2.y - y) * (p2.y - y));
}
string Punto::str(){
return '(' + to_string(x) + ',' + to_string(y) + ')';
}


