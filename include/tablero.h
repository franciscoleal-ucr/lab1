
/** @brief Implements a representation of a point in 3D.

    Detailed description here.
    @author Rolando Murillo Perez, Miguel, Francisco
    @date January 2019
    */
#pragma once
#include <string>
using namespace std; 

    //lo que se ocupa preguntar en otra clase tiene que retornar una variable en su metodo, variables privadas no se pueden usar entre metodos


class TableroControl{
   public:
    /** Va a setear cuantos jugadores van a jugar (max 4)*/
     void ConocerCantidadDeJugadores(int cantidad);//recibe el entero desde el main
     int cantidaddejugadores;

    /** Va a inicializar la posicion de los jugadores*/
     void IniciarPosiciones();

     /** Va a imprimir el mapa para visualizar las posiciones*/
     void ImprimirTablero();

    /** Va a establecer el orden en que los jugadores jugaran*/
     string InicializarOrdenDeTurno();//podria devolver un vector indicando el orden de los turnos

    /** Va a setear las posiciones de los jugadores respecto a sus cambios de lugar*/
     void SetearPosiciones();

    /** Va a setear de quien es el turno*/
     string PreguntarDeQuienEsElTurno(); //retorna unicamente la ficha que indica al jugador que va al turno

    /** Va a setear la cantidad de casillas que se va a mover el jugador*/
     int TirarDados();
     int dados;



   private:
    int matrixcasillas[36][36];
    int matrixjugadores[36][36];
};
