/*******************************************************************************
 UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
 Asignatura: Estructuras de Datos
 Nombre: Juan Pablo Pinza Armijos
 Fecha de creacion: 17/05/23 21:39
 Fecha de modificacion: 22/05/23 03:09
 Enunciado General: Deber 4 Matrices Dinámicas
 *******************************************************************************/ 
#ifndef VALIDADOR_H
#define VALIDADOR_H

class Validador
{
public:
  static float ingresarFlotante();
  static int ingresarEntero();
  static int ingresarOpcionMenu(int min, int max);
};

#endif