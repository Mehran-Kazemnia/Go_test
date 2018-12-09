#include<stdio.h>
#include<string.h>
#include"allegro5/allegro.h"
#include"allegro5/allegro_image.h"
#include "allegro5/allegro_native_dialog.h"
const int SCREEN_WIDTH=600;
const int SCREEN_LENGTH=800;
//#include"GoGame.h"
int al_init_Check();
int display_create(int display_width, int display_length);
int image_Insert(char NAME[], int x = 0, int y = 0, char flag[] = 0);
void destroy_everything();
int main() {
	
	al_init_Check();
	display_create(SCREEN_WIDTH,SCREEN_LENGTH);
	image_Insert("Display.png", 0, 0);
	al_flip_display();
	al_rest(10.0);
	destroy_everything();
	return 0;
}