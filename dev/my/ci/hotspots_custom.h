// MTE MK1 (la Churrera) v5.10
// Copyleft 2010-2014, 2020-2023 by the Mojon Twins


#ifdef _GRA_PIPO_
    case 6:	// Bomba horizontal
        rda = hotspots [n_pant].tipo;

		p_objs++;
        wyz_play_sound(5);
        /*++ flags [0];
        flags [rda] = 1;
        wyz_play_sound (7);

        _x = (rda << 1) + 16; _y = 0; _t = 16 + rda;
        draw_coloured_tile ();
        invalidate_tile ();*/
        break;
#endif

