#include <display_syscalls.h>
#include <keyboard_syscalls.h>
#include <keyboard.hpp>
#include <color.h>
//#include "ColorLib.h"
#include "tools.h"
#include "game.h"

void about(){
	int key;
		MsgBoxPush(5);
    	PrintXY(3,2,"  Minecraft v0.0.1 ",TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
    	PrintXY(3,3,"  Copyright(C)2019 ",TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
    	PrintXY(3,4,"       by caillou15",TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
    	PrintXY(3,6,"     Press:[EXIT]",TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
		Bdisp_PutDisp_DD();
		GetKey(&key);	
		MsgBoxPop();
		Bdisp_PutDisp_DD();
}

void msg_jeu(){
	int key;
		MsgBoxPush(3);
		PrintXY(3,3,"    Le jeu n'a pas ",TEXT_MODE_NORMAL,TEXT_COLOR_BLACK);
		PrintXY(3,4,"      encore ete ",TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
		PrintXY(3,5,"     implemente !", TEXT_MODE_NORMAL, TEXT_COLOR_BLACK);
		Bdisp_PutDisp_DD();
		GetKey(&key);
		MsgBoxPop();
		Bdisp_PutDisp_DD();
}

void afficher_param(){
	int i=1;
	//Bdisp_AllClr_VRAM();
	while (i){
		int key;
		StatusArea_sub();
		PrintXY(1,1,"  Aucun parametre",TEXT_MODE_NORMAL,TEXT_COLOR_BLACK);
		PrintXY(1,2,"  disponible ",TEXT_MODE_NORMAL,TEXT_COLOR_BLACK);
		Bdisp_PutDisp_DD();
		GetKey(&key);
		switch (key) {
			case KEY_CTRL_EXIT: i=0; break;
		}
		Bdisp_PutDisp_DD();
	}
}

int main(void) {
	int key;
	//short bgcolor = 0;
	//char* txt = "Minecraft";
	while (1) {
		//LoadVRAM_1();
		//Bdisp_AllClr_VRAM();
		//CL_FillVRAM(bgcolor);
		StatusArea_sub();
		PrintXY(1,1,"  Minecraft",0,0);
		func_menu1();
		GetKey(&key);
		switch (key) {
			case KEY_CTRL_F1: msg_jeu(); break;
			case KEY_CTRL_F5: afficher_param(); break;
			case KEY_CTRL_F6: about(); break;
			default : break;
		}
		Bdisp_PutDisp_DD();
	}
	
	return (0);
}