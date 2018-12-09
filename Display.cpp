#include<stdio.h>
#include<string.h>
#include"allegro5/allegro.h"
#include"allegro5/allegro_image.h"
#include"allegro5/allegro_primitives.h"
//This function initialize allegro and check if it is true 
int al_init_Check() {
	al_init();
	if (!al_init()) {
		printf("Failed to initialize allegro!");
		return -1;
	}
}
//This function create a display with display_width*display_length size	
ALLEGRO_DISPLAY *mainDisplay = NULL;
ALLEGRO_DISPLAY_MODE mainDisplay_data;

int display_create(int display_width,int display_length) {
	mainDisplay = al_create_display(display_length , display_width);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	if (!mainDisplay) {
		printf("Failed to initialize display!");
		return -1;
	}
	return 0;
}
//This function insert an image
//NAME is image name
// x,y are coordinates of image in display
// flag is the flag of image
ALLEGRO_BITMAP *image = NULL;
int image_Insert(char NAME[], int x = 0, int y = 0, char flag[] = 0) {
	
	
	al_init_image_addon();
	image = al_load_bitmap(NAME);
	if (!al_init_image_addon() || !image) {
		printf("Failed to load image!\n");
		return -1;
	}
	
	al_draw_bitmap(image, x, y, 0);//int(flag): It's better to change in future
	return 0;
}

//This function destroy things to free the memory
void destroy_everything() {
	al_destroy_display(mainDisplay);
	al_destroy_bitmap(image);
}
