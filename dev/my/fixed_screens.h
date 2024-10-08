// MTE MK1 (la Churrera) v5.10
// Copyleft 2010-2014, 2020-2023 by the Mojon Twins

#ifndef MODE_128K
	void lame_sound (void) {
		gpit = 4; do {
			beep_fx (rda);
			beep_fx (rdb);
		} while (-- gpit);
		beep_fx (9);
	}
#endif

void game_ending (void) {
	sp_UpdateNow();
	blackout ();
	#ifdef MODE_128K
		// Resource 2 = ending
		get_resource (ENDING_BIN, 16384);
	#else
		#asm
			ld hl, _s_ending
			ld de, 16384
			call depack
		#endasm
	#endif

	#ifdef MODE_128K
	#else
		rda = 7; rdb = 2;
		lame_sound ();
	#endif
	
	espera_activa (500);
}

void game_over (void) {
#ifndef USE_PANTA_GAMEOVER
	_x = 10; _y = 11; _t = 79; _gp_gen = spacer; print_str ();
	_x = 10; _y = 12; _t = 79; _gp_gen = (unsigned char *)(" GAME OVER! "); print_str ();
	_x = 10; _y = 13; _t = 79; _gp_gen = spacer; print_str ();
	sp_UpdateNow ();
#else
	sp_UpdateNow();
	blackout ();
	#ifdef MODE_128K
		// Resource X = game over
		get_resource (GAMEOVER_BIN, 16384);
	#else
		#asm
			ld hl, _s_gameover
			ld de, 16384
			call depack
		#endasm
	#endif
	gra_gameover();
#endif

#if defined(MODE_128K) && defined(GRA_MUSICA_GAMEOVER)
		STOP_SOUND();
		PLAY_MUSIC(GRA_MUSICA_GAMEOVER);
#else

	#ifdef MODE_128K
	#else
		rda = 7; rdb = 2;
		lame_sound ();
	#endif

#endif

	espera_activa (500);

	#if defined(MODE_128K) && defined(GRA_MUSICA_GAMEOVER)
		STOP_SOUND();
	#endif
}

#if defined(TIMER_ENABLE) && defined(SHOW_TIMER_OVER)
	void time_over (void) {
		_x = 10; _y = 11; _t = 79; _gp_gen = spacer; print_str ();
		_x = 10; _y = 12; _t = 79; _gp_gen = (unsigned char *)(" TIME'S UP! "); print_str ();
		_x = 10; _y = 13; _t = 79; _gp_gen = spacer; print_str ();
		sp_UpdateNowEx (0);
			
		#ifdef MODE_128K
		#else
			rda = 1; rdb = 2;
		lame_sound ();
		#endif
		
		espera_activa (250);
	}
#endif

#ifdef PAUSE_ABORT
	void pause_screen (void) {
		_x = 10; _y = 11; _t = 79; _gp_gen = spacer; print_str ();
		_x = 10; _y = 12; _t = 79; _gp_gen = (unsigned char *)("   PAUSED   "); print_str ();
		_x = 10; _y = 13; _t = 79; _gp_gen = spacer; print_str ();
		sp_UpdateNowEx (0);
	}
#endif

#ifdef COMPRESSED_LEVELS
	void zone_clear (void) {
		_x = 10; _y = 11; _t = 79; _gp_gen = spacer; print_str ();
		_x = 10; _y = 12; _t = 79; _gp_gen = (unsigned char *)(" ZONE CLEAR "); print_str ();
		_x = 10; _y = 13; _t = 79; _gp_gen = spacer; print_str ();
		sp_UpdateNowEx (0);
		espera_activa (250);			
	}
#endif
