
/** @brief Implements a representation of a point in 3D.

    Detailed description here.
    @author Rolando Murillo Perez, Miguel, Francisco
    @date January 2019
    */
#pragma once
#include <string>
using namespace std; 

    //lo que se ocupa preguntar en otra clase tiene que retornar una variable en su metodo, variables privadas no se pueden usar entre metodos
class Jugador{
    public:
        /** Incribe a un jugador al juego*/
        void InscribeJugador(string nombre);
        string Nombre;//nombre del jugador Jugador.Nombre

        /** inscribe la ficha del jugador, este sera su distintivo durante el juego*/
        void InscribirFicha(string Ficha);//asegurarse de que tienen fichas distintas
        string ficha;

        /**  Le da al jugador el monto de dinero con el que va a iniciar*/
        void DarDineroInicial();

        /** Rebaja un monto de dinero al jugador por haber caido en una casilla con dueño*/
        void RebajarDineroPorMulta(int multa);

        /** Rebaja el monto que vale la casilla al jugador que decidio comprar */
        /** Devuelve si el jugador esta o no endeudado, si esta enduedado pierde y se elimina del tablero*/
        /** si devuelve 1 significa que puede comprar
            si devuelve 2 significa que no le alcanza para comprar  */
        void RebajarDineroPorCompra(int valorpropiedad);

        /** Suma el dinero que le cobra al usuario multado*/
        void SumarDineroCobrado(int ganancia1);

       /** Suma cierto monto por motivos de que pasa por el inicio nuevamente */
        void SumarDineroPorPasarPorInicio();

        /** Permite conocer la posicion del jugador en el tablero*/
        /** Devuelve el numero de casilla en el que resultara despues de sumarle a su posicion el valordelImpuesto
        de los dados*/
        void CambiarPosicion(int dados);
        int Posicion;//posicion del jugador en el tablero

    private:
        int _CuentaDeDinero;//cantidad de dinero que posee el Jugador


};

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
