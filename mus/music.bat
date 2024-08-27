@set nomMus=vacio

@echo Creando el fichero music.h
@..\utils\asm2z88dk %nomMus%.asm ..\dev\sound\music.h mk1

@pause
