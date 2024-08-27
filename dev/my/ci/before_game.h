// MTE MK1 (la Churrera) v5.10
// Copyleft 2010-2014, 2020-2023 by the Mojon Twins

	// Cambiamos el valor del puntero a función para apuntar a la función que se quiere
	pantalla_ptr = &pantalla14;

	// No acaba de entrar en las pantallas señaladas
	// 0 Quiere decir que testea
	// Otro valor es el valor de p_tx aon el que poner a 0 otra vez el flag.
	// Puede ser que esto último no haga falta, solo que sea distinto de 0.
	flags[GRA_FLAG_SCR] = 0;

	// Tecla requiere que se suelte al entrar por el portal
	flags[GRA_FLAG_PORTAL] = 0;

	// Queria salir sin todas la piezas
	// 0 -> GAME OVER por muerte
	// 1 -> No piezas
	flags[GRA_FLAG_LISTILLO] = 0;



