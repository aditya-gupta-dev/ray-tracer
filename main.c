#include <raylib.h> 

#define RES 60 

int main() { 
	InitWindow(RES*16, RES*9, "ray tracer");

	SetTargetFPS(60); 

	int x = (RES*16) / 2; 
	int y = (RES*9) / 2;
        float r = 10.0f; 	
	while(!WindowShouldClose()) { 
		BeginDrawing();
	       	DrawCircle(x,y,r,ORANGE);	
		
		ClearBackground(BLACK); 
		DrawFPS(20, 20); 	
		EndDrawing(); 

		r += 15 * GetFrameTime();
	}
	
	CloseWindow(); 
	return 0; 
}
