#include<graphics.h>

int main(int argc, char** argv) {
	initwindow(800,800);//Para inicializar la ventana

	outtextxy(10, 10 + 10, "Modo Grafico");

//	putpixel(0, 0, WHITE);
//	putpixel(400, 400, WHITE);
//	putpixel(790, 400, WHITE);



	//   (x1, y1, x2, y2)
	line(400,200,400,600);
	line(200,400,600,400);


	rectangle(100,100,200,200);



	getch();//Para mantener la ventana abierta

}