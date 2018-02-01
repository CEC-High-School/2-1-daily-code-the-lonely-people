#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h> //helper library

int main() {
	al_init();
	al_init_primitives_addon(); //initialize helper library

	ALLEGRO_DISPLAY *display = al_create_display(500, 500);

	al_clear_to_color(al_map_rgb(255, 255, 255));  // provide top left and bottom right corner

	

	//al_draw_triangle(20, 100, 50, al_map_rgb(50, 50, 50), 5);

	//al_draw_ribbon(20, 500, al_map_rgb(1, 0, 0.5), 10);

	al_draw_arc(300, 200,60, 6, 80, al_map_rgb(695, 20, 84), 25);

	al_draw_line(60, 25, 300, 200, al_map_rgb(2, 3, 65), 30);

	al_draw_ellipse(62, 53, 32, 300, al_map_rgb(3, 59, 4), 89);

	al_flip_display();

	al_rest(30);

	al_destroy_display(display);
}
