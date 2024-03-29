/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  ismae
 * Modified: martes, 5 de enero de 2021 16:56:22
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getSig()
// Purpose:    Implementation of Nodo::getSig()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo Nodo::getSig(void)
{
   return Sig;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setSig(Nodo newSig)
// Purpose:    Implementation of Nodo::setSig()
// Parameters:
// - newSig
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setSig(Nodo newSig)
{
   Sig = newSig;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDato()
// Purpose:    Implementation of Nodo::getDato()
// Return:     Persona
////////////////////////////////////////////////////////////////////////

Persona Nodo::getDato(void)
{
   return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDato(Persona newDato)
// Purpose:    Implementation of Nodo::setDato()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setDato(Persona newDato)
{
   dato = newDato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo()
// Purpose:    Implementation of Nodo::Nodo()
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::Nodo()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::~Nodo()
// Purpose:    Implementation of Nodo::~Nodo()
// Return:     
////////////////////////////////////////////////////////////////////////

Nodo::~Nodo()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getAtras()
// Purpose:    Implementation of Nodo::getAtras()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

Nodo Nodo::getAtras(void)
{
   return Atras;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setAtras(Nodo newAtras)
// Purpose:    Implementation of Nodo::setAtras()
// Parameters:
// - newAtras
// Return:     void
////////////////////////////////////////////////////////////////////////

void Nodo::setAtras(Nodo newAtras)
{
   Atras = newAtras;
}