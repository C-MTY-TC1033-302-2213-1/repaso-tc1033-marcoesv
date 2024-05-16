#include "Triangulo.hpp"

// constructor
Triangulo::Triangulo(){
v1 = Punto();
v2 = Punto();
v3 = Punto();
}
Triangulo::Triangulo(Punto _v1, Punto _v2, Punto _v3){
v1 = _v1;
v2 = _v2;
v3 = _v3;
}

// setters
void Triangulo::setV1(Punto _v1){
v1 = _v1;
}
void Triangulo::setV2(Punto _v2){
v2 = _v2;
}
void Triangulo::setV3(Punto _v3){
v3 = _v3;
}

// getters
Punto Triangulo::getV1(){
return v1;
}
Punto Triangulo::getV2(){
return v2;
}
Punto Triangulo::getV3(){
return v3;
}

// methods
double Triangulo::perimetro(){
return v2.calculaDistancia(v1) + v3.calculaDistancia(v2) + v1.calculaDistancia(v3);
}
double Triangulo::area(){
return 0.5 * ((v1.getX() * v2.getY()) + (v2.getX() * v3.getY()) + (v3.getX() * v1.getY())- ((v1.getX() * v3.getY()) + (v3.getX() * v2.getY())+ (v2.getX() * v1.getY())) );
}
string Triangulo::str(){
return v1.str() + ','+ v2.str() + ',' + v3.str();
}
