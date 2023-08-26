#pragma once
lista circular;
metodos;
ListaCircular(); // constructor
˜CircleList(); // destructor
const Elem& apuntado() const; // muesta el elemento al que le apunta el puntero
void avanzar(); // correr el puntero un campo
void agregar(const Elem& Elemento); // agraga un elemento
void eliminar(const Elem& Elemento); // borra un elemento
void buscar(const Elem& Elemento); //busca un elemento en la lista
void cambiar(const Elem& Elemento); //cambia de posicion a un elemento dentro de la lista