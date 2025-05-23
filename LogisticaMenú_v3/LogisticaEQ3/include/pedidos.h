#ifndef PEDIDOS_H
#define PEDIDOS_H

#include "bitacora.h"
#include "usuarios.h"

//JENNIFER BARRIOS COORD EQ 3
//9959-24-10016
//MAYO 2025

 class Pedidos {
 public:
     std::string getId() const;
     std::string getDetalles() const;
     void gestionPedidos();
     void crearPedido();
     void consultarPedidos();
     void modificarPedido();
     void cancelarPedido();
 };

#endif // PEDIDOS_H
