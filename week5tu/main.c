#include<stdio.h>
#include<GL/glut.h>

void show();
void init();

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(450, 100);
glutInitWindowSize(650, 600);
glutCreateWindow("LAB4");
init();
glutDisplayFunc(show);
glutMainLoop();
}

void init(){
	glClearColor(0.1,0.0,0.2,0.0);
	glLoadIdentity();
	gluOrtho2D(0.0,25.0,0.0,25.0);
	glColor3f(1.0,0.0,0.0);
}
void show(){
	
	int i;
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES);
	for(i=25;i>=1;i--){
		glVertex2i(0,i);
		glVertex2i(25-i+1,0);
	}
	glEnd();
	
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_LINES);
	for(i=25;i>=1;i--){
		glVertex2i(25-i+1,0);
		glVertex2i(25,25-i+1);
	}
	glEnd();
	
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_LINES);
	for(i=25;i>=1;i--){
		glVertex2i(25,i);
		glVertex2i(25-i+1,25);
	}
	glEnd();
	
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_LINES);
	for(i=25;i>=1;i--){
		glVertex2i(0,25-i+1);
		glVertex2i(25-i+1,25);
	}
	glEnd();
	
	glFlush();
}
