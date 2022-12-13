#include<stdio.h>
#include<GL/glut.h>

void display();
void init2();

int main2(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(450, 100);
glutInitWindowSize(900, 600);
glutCreateWindow("A Simple Triangle");
init();
glutDisplayFunc(display);
glutMainLoop();
}

void init2(){
	glClearColor(1.0, 1.0, 1.0,0.0);
	glLoadIdentity();
	gluOrtho2D(0.0,10.0,0.0,10.0);
	glColor3f(0.0,0.0,1.0);

}
void display(){
	float x,y;
	
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5.0);
	glPointSize(8.0);
	x = 1.0;
	y = 1.0;
	
	glBegin(GL_LINE_LOOP);
	
	glVertex2f(x,y);
	glVertex2f(x+2,y);	

	glVertex2f(x+2,y+8);
	glVertex2f(x,y+8);
	glEnd();
	
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	
	x = 4.0;
	y = 1.0;
	glVertex2f(x,y);
	glVertex2f(x+2,y);	

	glVertex2f(x+2,y+8);
	glVertex2f(x,y+8);
	glEnd();
	
	glColor3f(0,206,209);
	glBegin(GL_POLYGON);
	
	x = 7.0;
	y = 1.0;
	glVertex2f(x,y);
	glVertex2f(x+2,y);	

	glVertex2f(x+2,y+8);
	glVertex2f(x,y+8);
	glEnd();
	
	glFlush();
}

