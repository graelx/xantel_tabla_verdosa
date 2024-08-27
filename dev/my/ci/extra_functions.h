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

void gra_portal(void) {//((pad0 & _t) == 0) && 
	if ((p_tx == ptx1 && (p_ty == pty1 || p_ty == cy1))) {
		n_pant = _n;
		p_x = ptx2*((8*2)*64);
		p_y = pty2*((8*2)*64);
		flags[GRA_FLAG_PORTAL] = 1;
	}
}/**/

/*void pantalla0(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 4, _DST_, 0, 3, 8);
		GRA_MACRO_PORTAL(_ORG_, 3, 8, _DST_, 0, 3, 4);
	}
}*/

void pantalla1(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 4, 4, _DST_, 1, 10, 8);
		GRA_MACRO_PORTAL(_ORG_, 10, 8, _DST_, 1, 4, 4);
		GRA_MACRO_PORTAL(_ORG_, 10, 4, _DST_, 1, 4, 8);
		GRA_MACRO_PORTAL(_ORG_, 4, 8, _DST_, 1, 10, 4);
	}
}

//void pantalla2(void) {}

void pantalla3(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 2, 4, _DST_, 10, 12, 8);
	}
}

void pantalla4(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 11, 3, _DST_, 15, 3, 3);
	}
}

void pantalla5(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 11, 4, _DST_, 22, 3, 8);
	}
}

////////////////////////

/*void pantalla6(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 4, _DST_, 6, 3, 8);
		GRA_MACRO_PORTAL(_ORG_, 3, 8, _DST_, 6, 3, 4);
	}
}*/

//void pantalla7(void) {}

void pantalla8(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 4, 8, _DST_, 13, 7, 8);
		GRA_MACRO_PORTAL(_ORG_, 10, 8, _DST_, 13, 3, 3);
	}
}

//void pantalla9(void) {}

void pantalla10(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 4, _DST_, 15, 7, 8);
		GRA_MACRO_PORTAL(_ORG_, 12, 8, _DST_, 3, 2, 4);
	}
}

//void pantalla11(void) {}

////////////////////////

// La pantalla que se sale por la izquierda
void pantalla12(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 3, _DST_, 19, 4, 8);
		GRA_MACRO_PORTAL(_ORG_, 7, 8, _DST_, 24, 3, 4);
	}

	// Evitar salida
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
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 7, 8, _DST_, 8, 4, 8);
		GRA_MACRO_PORTAL(_ORG_, 3, 3, _DST_, 8, 10, 8);
	}
}

// La pantalla de entrada
void pantalla14(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 3, _DST_, 21, 11, 8);
		//Salida
		if (p_tx == 7 && (p_ty == 8 || p_ty == 7)) {
			if (p_objs == GRA_OBJETOS_RECOGER) {
				success = 1;	// 0 -> Game Over; 1 -> Success
			} else {
				success = 0;	// 0 -> Game Over; 1 -> Success
				flags[GRA_FLAG_LISTILLO] = 1;
			}
			playing = 0;
		}
	}
}

void pantalla15(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 3, _DST_, 4, 11, 3);
		GRA_MACRO_PORTAL(_ORG_, 7, 8, _DST_, 10, 3, 4);
	}
}

// La pantalla que se sale por la derecha
void pantalla16(void) {
	//if ((pad0 & sp_DOWN) != 0) flags[GRA_FLAG_PORTAL] = 0;
	//if (flags[GRA_FLAG_PORTAL] == 1) return;

	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 3, _DST_, 27, 7, 4);
		GRA_MACRO_PORTAL(_ORG_, 7, 8, _DST_, 29, 11, 4);
	}

	/*if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL_SRC_2(_TX, _TY0)	//_TECLA, , _TY1
		GRA_MACRO_PORTAL_SRC_2(7, 8);//sp_DOWN, , 7
		// GRA_MACRO_PORTAL_DST_2(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST_2(29, 11, 4);
		gra_portal();

		//GRA_MACRO_PORTAL_SRC_2(7, 8);//sp_DOWN, , 7
		//GRA_MACRO_PORTAL_DST_2(29, 11, 4);
		//gra_portal();
	}
	// GRA_MACRO_PORTAL_SRC(_TECLA, _TX, _TY0, _TY1)
	if (GRA_MACRO_PORTAL_SRC(sp_DOWN, 7, 8, 7)) {
		// GRA_MACRO_PORTAL_DST(_PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL_DST(29, 11, 4);
		flags[GRA_FLAG_PORTAL] = 1;
	}
	if (((pad0 & sp_DOWN) == 0) && (p_tx == 7 && (p_ty == 8 || p_ty == 7))) {
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
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 4, 8, _DST_, 12, 3, 3);
		GRA_MACRO_PORTAL(_ORG_, 10, 8, _DST_, 26, 7, 4);
	}
}

//void pantalla20(void) {}

void pantalla21(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 11, 8, _DST_, 14, 3, 3);
	}
}

void pantalla22(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 8, _DST_, 5, 11, 4);
	}
}

//void pantalla23(void) {}

////////////////////////

void pantalla24(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 3, 4, _DST_, 12, 7, 8);
	}
}

//void pantalla25(void) {}

void pantalla26(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 7, 4, _DST_, 19, 10, 8);
	}
}

void pantalla27(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 7, 4, _DST_, 16, 3, 3);
	}
}

//oid pantalla28(void) {}

void pantalla29(void) {
	if ((pad0 & sp_DOWN) == 0) {
		// GRA_MACRO_PORTAL(#, _TX, _TY0, #, _PANT_DST, _POS_TX_DST, _POS_TY_DST)
		GRA_MACRO_PORTAL(_ORG_, 11, 4, _DST_, 16, 7, 8);
	}
}

void gra_gameover(void) {
	_t = 0x38;	//0111 1001	//0x4F;	//0100 1111
	if (flags[GRA_FLAG_LISTILLO] == 0) {
		_x = 11; _y = 20; _gp_gen = (unsigned char *)("LO INTENTO"); print_str();
		_x = 10; _y = 21; _gp_gen = (unsigned char *)("PERO NO PUDO."); print_str();
	} else {
		_x = 6; _y = 20; _gp_gen = (unsigned char *)("QUISO HACER LAS COSAS"); print_str();
		_x = 8; _y = 21; _gp_gen = (unsigned char *)("DEMASIADO RAPIDO."); print_str();
	}
	sp_UpdateNow ();
}
/*
XANTEL Q.
  JONES

     LO INTENTO 
    PERO NO PUDO.
QUISO HACER LAS COSAS 
  DEMASIADO RAPIDO.
*/



