#include <raylib.h> 

int main() { 
	InitWindow(600, 400, "ray tracer");

	SetTargetFPS(60); 

	while(!WindowShouldClose()) { 
		BeginDrawing();
	       		ClearBackground(BLACK); 
			DrawFPS(20, 20); 	
		EndDrawing(); 
	}
	
	CloseWindow(); 
	return 0; 
}
