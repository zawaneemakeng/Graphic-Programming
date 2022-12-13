#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

void display();
void init1();

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(450, 100);
glutInitWindowSize(900, 600);
glutCreateWindow("A Simple Triangle");
init();
glutDisplayFunc(display);
glutMainLoop();
}

void init1(){
	
	glClearColor(1.0, 1.0, 1.0,0.0);
	glLoadIdentity();
	gluOrtho2D(0.0,10.0,0.0,10.0);
	glColor3f(0.0,0.0,1.0);

}
void display(){
	glClear(GL_COLOR_BUFFER_BIT);
	float x,y;
	float r = 7.0;
	float pi = 3.14159;
	float  theta;
	glBegin(GL_LINE_LOOP);
	
	for (theta = 0.0; theta <= 2*pi; theta +=0.1){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);	
	}
	glEnd();
	
	glFlush();
}
