// MTE MK1 (la Churrera) v5.10
// Copyleft 2010-2014, 2020-2023 by the Mojon Twins

	#ifdef USE_INTER_TECLAS
		flags[INTER_TECLAS_ID] = 0;		// Desactivamos el intercambio.
	#endif

	//	if (p_objs == 0) p_objs = 8;


	// Cambiamos el valor del puntero a función
{
    switch (n_pant) { // pantallaVacia
		case 0: pantalla_ptr = pantallaVacia;	break;	//pantalla0
        case 1: pantalla_ptr = pantalla1;	break;
        case 2: pantalla_ptr = pantallaVacia;	break; //pantalla2
        case 3: pantalla_ptr = pantalla3;	break;
        case 4: pantalla_ptr = pantalla4;	break;
        case 5: pantalla_ptr = pantalla5;	break;

        case 6: pantalla_ptr = pantallaVacia;	break;	//pantalla6
        case 7: pantalla_ptr = pantallaVacia;	break; //pantalla7
        case 8: pantalla_ptr = pantalla8;	break;
        case 9: pantalla_ptr = pantallaVacia;	break; //pantalla9
        case 10: pantalla_ptr = pantalla10;	break;
        case 11: pantalla_ptr = pantallaVacia;	break; //pantalla11

        case 12: pantalla_ptr = pantalla12;	break;
        case 13: pantalla_ptr = pantalla13;	break;
        case 14: pantalla_ptr = pantalla14;	break;
        case 15: pantalla_ptr = pantalla15;	break;
        case 16: pantalla_ptr = pantalla16;	break;
        case 17: pantalla_ptr = pantallaVacia;	break; //pantalla17

        case 18: pantalla_ptr = pantallaVacia;	break; //pantalla18
        case 19: pantalla_ptr = pantalla19;	break;
        case 20: pantalla_ptr = pantallaVacia;	break; //pantalla20
        case 21: pantalla_ptr = pantalla21;	break;
        case 22: pantalla_ptr = pantalla22;	break;
        case 23: pantalla_ptr = pantallaVacia;	break; //pantalla23

        case 24: pantalla_ptr = pantalla24;	break;
        case 25: pantalla_ptr = pantallaVacia;	break; //pantalla25
        case 26: pantalla_ptr = pantalla26;	break;
        case 27: pantalla_ptr = pantalla27;	break;
        case 28: pantalla_ptr = pantallaVacia;	break; //pantalla28
        case 29: pantalla_ptr = pantalla29;	break;
    }
}


#ifdef _GRA_PIPO_
	//flags[1] = 0; // Flag de contador de daño. Cada ? se hace uno de daño.
    /*_gp_gen = 0;

    switch (n_pant) {
        case 10:
            _gp_gen = decos_10; break;
        case 14:
            _gp_gen = decos_14; break;
    }

    if (_gp_gen) draw_decorations ();*/

	// Cambiamos el valor del primer peldaño de la escalera de 8 a 4
    switch (n_pant) {
        case 6:
            map_attr[COORDS(4,8)] = 4;
            map_attr[COORDS(10,3)] = 4;
        case 7:
            map_attr[COORDS(5,8)] = 4;
        case 8:
            map_attr[COORDS(10,8)] = 4;
            map_attr[COORDS(4,3)] = 4;
        case 11:
            map_attr[COORDS(2,8)] = 4;
            /*map_attr[COORDS(3,7)] = 8;
            map_attr[COORDS(4,6)] = 8;
            map_attr[COORDS(5,5)] = 8;
            map_attr[COORDS(6,4)] = 8;*/
			break;
        case 12:
            map_attr[COORDS(6,8)] = 4;
            map_attr[COORDS(10,3)] = 4;
			break;
        case 13:
            map_attr[COORDS(10,8)] = 4;
            map_attr[COORDS(4,3)] = 4;
    }

	/*if (n_pant == 28) {
		p_objs = 9;//10;//
	}*/
#endif
