// MTE MK1 (la Churrera) v5.10
// Copyleft 2010-2014, 2020-2023 by the Mojon Twins

// Pantallas.h
// Carga las pantallas fijas
// Copyleft 2010 The Mojon Twins

#ifndef MODE_128K
	extern unsigned char s_title [];
	extern unsigned char s_marco [];
	extern unsigned char s_ending [];
	#ifdef USE_PANTA_GAMEOVER
		extern unsigned char s_gameover[];
	#endif

	#asm
		._s_title
			BINARY "../bin/title.bin"
		._s_marco
	#endasm
	#ifndef DIRECT_TO_PLAY
		#asm
				BINARY "../bin/marco.bin"
		#endasm
	#endif
	#asm
		._s_ending
			BINARY "../bin/ending.bin"
	#endasm
	#ifdef USE_PANTA_GAMEOVER
		#asm
			._s_gameover
				BINARY "..\bin\gameover.bin"
		#endasm
	#endif
#endif

void blackout (void) {
	#asm
		ld hl, 22528
		ld (hl), 0
		push hl
		pop de
		inc de
		ld bc, 767
		ldir
	#endasm
}
