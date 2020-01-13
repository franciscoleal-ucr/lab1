
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