#include "Sistema.h"

Sistema::Sistema()
{

}

void swap(nat* a, nat* b)
{
	nat t = *a;
	*a = *b;
	*b = t;
}

int particion(Array<nat> arr, int inicio, int final)
{
	nat pivot = arr[final];

	int i = (inicio - 1);  

	for (int j = inicio; j <= final - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;    
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[final]);
	return (i + 1);
}

void quickSort(Array<nat> arr, int inicio, int final)
{
	if (inicio < final)
	{
		
		int pivot = particion(arr, inicio, final);
		quickSort(arr, inicio, final - 1);
		quickSort(arr, pivot + 1, final);
	}
}

  Iterador<Iterador<Puntero<ICiudad>>> Sistema::Viajero(Array<Puntero<ICiudad>> &ciudadesDelMapa, Matriz<nat> &mapa, Puntero<ICiudad> &ciudadPartida, Iterador<Puntero<ICiudad>> &ciudadesPasar, nat costoMax) 
 {
	
	return NULL; //Retorno por defecto
 }
	
 Array<nat> Sistema::Intercalar(Array<nat> &arreglo, nat i, nat m, nat d) 
 {
	 int ii = i;
	 int di = d;
	 quickSort(arreglo, ii, di);
	return arreglo;
 }


Iterador<Tupla<nat,nat>> Sistema::Laberinto(Tupla<nat,nat> &inicio, Tupla<nat,nat> &fin, Matriz<nat> &laberinto)
{
	/*
	Codigo de implementacion de la solucion
	*/
	return NULL;  //Retorno por defecto
}

Array<nat> Sistema::Degustacion(Array<Producto> productos, nat maxDinero, nat maxCalorias, nat maxAlcohol)
{
	/*
	Codigo de implementacion de la solucion
	*/
	 return Array<nat>(productos.Largo);  //Retorno por defecto
}

Tupla<TipoRetorno, Iterador<nat>> Sistema::Viajero2(Matriz<Tupla<nat, nat, nat>> relacionesCiudades, Iterador<nat> CiudadesPasar, Iterador<nat> CiudadesNoPasar)
{
	//Implementar.

	return Tupla<TipoRetorno, Iterador<nat>>();
}

Tupla<TipoRetorno,  Array<nat>> Sistema::ProteccionAnimales(Array<Accion> acciones, nat maxVeterinarios, nat maxVehiculos, nat maxDinero, nat maxVacunas, nat maxVoluntarios)
{
	//Implementar.

	return Tupla<TipoRetorno,  Array<nat>>();
}

Array<nat> Sistema::QuickSort(Array<nat> elementos)
{
	//Implementar.

	return Array<nat>();
}

Tupla<TipoRetorno, Iterador<Iterador<Tupla<int, int>>>> Sistema::CaminoCaballo(Tupla<int, int>& salida, Tupla<int, int>& destino, nat cantAPasar, nat tamTablero, Iterador<Tupla<int, int>>& pasar, Iterador<Tupla<int, int>>& noPasar)
{
	//Implementar.

	return Tupla<TipoRetorno, Iterador<Iterador<Tupla<int, int>>>>();
}

Tupla<TipoRetorno, Array<nat>> Sistema::OptimizarGranja(Array<Tupla<nat, nat, nat>>& semillas, nat dinero, nat tierra, nat agua)
{
	//Implementar.

	return Tupla<TipoRetorno, Array<nat>>();
}

Tupla<TipoRetorno, Iterador<Tupla<Cadena, bool>>> Sistema::InscribirMaterias(Iterador<Tupla<Cadena, nat, nat>> matutino, Iterador<Tupla<Cadena, nat, nat>> nocturno, nat horasM, nat horasN)
{
	//Implementar.

	return Tupla<TipoRetorno, Iterador<Tupla<Cadena, bool>>>();
}


