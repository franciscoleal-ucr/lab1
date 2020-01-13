
/** @brief Implements a representation of a point in 3D.

    Detailed description here.
    @author Rolando Murillo Perez, Miguel, Francisco
    @date January 2019
    */
#pragma once
#include <string>
using namespace std; 

    //lo que se ocupa preguntar en otra clase tiene que retornar una variable en su metodo, variables privadas no se pueden usar entre metodos


class Casilla{
    public:
      /** Da el nombre respectivo a la casilla*/
        void DaNombreALaCasillayNumero(string nombre, int numero);
        string nombredecasilla;
        int numero;

      /** Va a definir la casilla como que aun no tiene dueño*/
       void InicializarPropietario();
       bool propietario;

      /** Va a definir cuanto vale la casilla en particular*/
       void InicializarCosto();
       int valordepropiedad;

      /** Va a definir el valor de multa a cobrar por cada jugador que caiga en la casilla*/
       void InicializarMulta();
       int multa;/**4 casillas tienen multa SIEMPRE (las 4 casillas de impuestos)
       por las otras hay que preguntar si existe dueño, sino la multa no se aplica*/

     /** Va a definir que ahora si tiene propietario la casilla
         pasa a true la variable _Propietario */
      void AgregarPropietario();

};