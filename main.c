#include <raylib.h> 

#define RES 60 

typedef struct {
	int x; 
	int y; 
	float r;
	Color col;  
} Circle; 

void renderCircle(Circle* cir) { 
	DrawCircle(cir->x, cir->y, cir->r, cir->col); 
}

int main() { 
	InitWindow(RES*16, RES*9, "ray tracer");

	SetTargetFPS(60); 


	Circle cir = { 
		.x = (RES*16)/2, 
	        .y = (RES*9)/2, 
		.r = 60.0f, 
		.col = ORANGE 	
	};

	while(!WindowShouldClose()) { 
		BeginDrawing();
		if(IsMouseButtonDown(0)){ 
		  Vector2 vec = GetMousePosition();
		  cir.x = vec.x; 
	          cir.y = vec.y; 
		}

		renderCircle(&cir); 
		ClearBackground(BLACK); 
		DrawFPS(20, 20); 	
		EndDrawing();


	}
	
	CloseWindow(); 
	return 0; 
}
