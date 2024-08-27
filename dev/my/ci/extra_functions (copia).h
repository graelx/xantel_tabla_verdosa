// MTE MK1 (la Churrera) v5.10
// Copyleft 2010-2014, 2020-2023 by the Mojon Twins


#ifdef _GRA_PIPO_
//-----------------------------------------------------------------------------
// Nombre: ()
// Descripción:
//
// Entrada:   gGraCadena: La cadena completa terminada en 0.
//			  gGraStrCont: Posición de la primera letra de la subcadena.
//			  _t: Tamaño de la subcadena.
// Salida:    _gp_gen: Con la subcadena correspondiente.
//-----------------------------------------------------------------------------
void SubString(void) {
	uchar i = 0;

	while (i < _t) {
		//_gp_gen[i] = gGraCadena[gGraStrCont+i];//-1
		gGraCadena2[i] = gGraCadena[gGraStrCont+i];//-1
		i++;
   }
   gGraCadena2[i] = '\0';
   _gp_gen = gGraCadena2;
	
}
#endif


#ifdef GRA_COLORES
// Color para el Jugador.
void PlayerColour(struct sp_CS *cs)  
{ 
	   /*if (n == 0) // Se rellena de arriba a abajo y de izquierda 
	   			   // a derecha, incluyendo partes vacias del sprite
	        cs->colour = INK_BLACK | PAPER_WHITE; 
	   else if (n == 1) 
	        cs->colour = INK_BLUE | PAPER_BLACK; 
	   else if (n == 2)*/
		 cs->colour = INK_RED | PAPER_GREEN;
	   /*else if (n == 3)
		 cs->colour = INK_YELLOW | PAPER_BLACK;
	   else if (n == 4)
		 cs->colour = INK_GREEN | PAPER_WHITE;
	   else 
	         cs->colour = TRANSPARENT; 
	   if (n > 5) 
	         cs->graphic = sp_NullSprPtr; 
	   n++; */
	   return; 
}

// Color para los enemigos.
void EnemsColour(struct sp_CS *cs)  
{ 
	   /*if (n2 == 0) // Se rellena de arriba a abajo y de izquierda 
	   			   // a derecha, incluyendo partes vacias del sprite
	        cs->colour = INK_BLACK | PAPER_WHITE; 
	   else if (n2 == 1) 
	        cs->colour = INK_BLUE | PAPER_BLACK; 
	   else if (n2 == 2)
		 cs->colour = INK_RED | PAPER_GREEN;
	   else if (n2 == 3)
		 cs->colour = INK_YELLOW | PAPER_BLACK;
	   else if (n2 == 4)*/
		 cs->colour = INK_GREEN | PAPER_WHITE;
	   /*else 
	         cs->colour = TRANSPARENT; 
	   if (n2 > 5) 
	         cs->graphic = sp_NullSprPtr; 
	   n2++; */
	   return; 
}

// Puntero a función
/*void fun(int a) { printf("Value of a is %d\n", a); }

int main() {
    // fun_ptr is a pointer to function fun()
    void (*fun_ptr)(int) = &fun;

    / * The above line is equivalent of following two
    void (*fun_ptr)(int);
    fun_ptr = &fun;
    * /

    // Invoking fun() using fun_ptr
    (*fun_ptr)(10);

    return 0;
}

int main() {
    void (*fun_ptr)(int) = fun; // & removed

    fun_ptr(10); // * removed

    return 0;
}


*/
#endif


//-----------------------------------------------------------------------------
// Nombre: ()
// Descripción: Para lo de las puertas.
//				Usará las variables globales.
//
// Entrada:   //
//			  //_t: Tamaño de la subcadena.
// Salida:    //_gp_gen: Con la subcadena correspondiente.
//-----------------------------------------------------------------------------
void pantallaVacia(void) {
	// Para pantallas sin portal
}

void pantalla0(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 3, 4, 3)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(0, 3, 8);
		flags[GRA_FLAG_PORTAL] = 1;
	}

	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 3, 8, 7)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(0, 3, 4);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

void pantalla1(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 4, 4, 3)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(1, 10, 8);
		flags[GRA_FLAG_PORTAL] = 1;
	}

	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 10, 8, 7)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(1, 4, 4);
		flags[GRA_FLAG_PORTAL] = 1;
	}

	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 10, 4, 3)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(1, 4, 8);
		flags[GRA_FLAG_PORTAL] = 1;
	}

	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 4, 8, 7)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(1, 10, 4);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

//void pantalla2(void) {}

void pantalla3(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 2, 4, 3)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(10, 12, 8);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

void pantalla4(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 11, 3, 2)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(15, 2, 3);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

void pantalla5(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 11, 4, 3)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(22, 3, 8);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

////////////////////////

void pantalla6(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 3, 4, 3)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(6, 3, 8);
		flags[GRA_FLAG_PORTAL] = 1;
	}

	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 3, 8, 7)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(6, 3, 4);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

//void pantalla7(void) {}

void pantalla8(void) {
}

//void pantalla9(void) {}

void pantalla10(void) {

	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 12, 8, 7)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(3, 2, 4);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

//void pantalla11(void) {}

////////////////////////

// La pantalla que se sale por la izquierda
void pantalla12(void) {
	if ((pad0 & sp_LEFT) == 0) flags[GRA_FLAG_SCR] = 0;
	if (flags[GRA_FLAG_SCR] == 0) {
		if (p_tx == 0 && (p_ty == 8 || p_ty == 7)) {
			n_pant = 16;
			p_x = 14*(8*2)*64;
			flags[GRA_FLAG_SCR] = 13;
		}
		//return;
	}
}

void pantalla13(void) {
}

// La pantalla de entrada
void pantalla14(void) {
}

void pantalla15(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 3, 3, 2)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(4, 11, 3);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

// La pantalla que se sale por la derecha
void pantalla16(void) {
	//if ((pad0 & sp_DOWN) != 0) flags[GRA_FLAG_PORTAL] = 0;
	//if (flags[GRA_FLAG_PORTAL] == 1) return;

	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 7, 8, 7)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(29, 11, 4);
		flags[GRA_FLAG_PORTAL] = 1;
	}
	/*if (((pad0 & sp_DOWN) == 0) && (p_tx == 7 && (p_ty == 8 || p_ty == 7))) {
		n_pant = 29;
		p_x = 11*(8*2)*64;
		p_y = 4*(8*2)*64;
	}*/

	if ((pad0 & sp_RIGHT) == 0) flags[GRA_FLAG_SCR] = 0;
	if (flags[GRA_FLAG_SCR] == 0) {
		if (p_tx == 14 && (p_ty == 8 || p_ty == 7)) {
			n_pant = 12;
			p_x = 0;
			flags[GRA_FLAG_SCR] = 1;
		}
		//return;
	}

///Talvez el fallo es por el desplazamiento dentro del sprite?????

}

//void pantalla17(void) {}

////////////////////////

//void pantalla18(void) {}

void pantalla19(void) {
}

//void pantalla20(void) {}

void pantalla21(void) {
}

void pantalla22(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 3, 8, 7)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(5, 11, 4);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

//void pantalla23(void) {}

////////////////////////

void pantalla24(void) {
}

//void pantalla25(void) {}

void pantalla26(void) {
}

void pantalla27(void) {
}

//oid pantalla28(void) {}

void pantalla29(void) {
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 11, 4, 3)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(16, 7, 8);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}

