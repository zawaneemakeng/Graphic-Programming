#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

void show();
void init();

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(450, 100);
glutInitWindowSize(650, 600);
glutCreateWindow("Pie Chart");
init();
glutDisplayFunc(show);
glutMainLoop();
}

void init(){
	glClearColor(1.0, 1.0,1.0,0.0);
	glLoadIdentity();
	gluOrtho2D(-10.0,10.0,-10.0,10.0);
}
void show(){
	
	float x,y;
	float r = 9.0;
	float pi = 3.14159;
	float theta;
	int zom = 20, tangmo =13,apple = 30, glua = 8;
	float start,stop;
	
	start = 0.0;
	stop = zom*2*pi/71;
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0.0,0.7,0.8);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0,0.0);
	for(theta = start; theta<= stop; theta +=0.0001){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	
	start = zom*2*pi/71;
	stop = zom*2*pi/71+(tangmo*2*pi/71);
	glColor3f(0.6, 0.0,0.2);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0,0.0);
	for(theta = start; theta<= stop; theta +=0.0001){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	
	start = zom*2*pi/71+(tangmo*2*pi/71);
	stop = zom*2*pi/71+(tangmo*2*pi/71)+(apple*2*pi/71);
	glColor3f(0.9,0.9,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0,0.0);
	for(theta = start; theta<= stop; theta +=0.0001){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	
	start = zom*2*pi/71+(tangmo*2*pi/71)+(apple*2*pi/71);
	stop = zom*2*pi/71+(tangmo*2*pi/71)+(apple*2*pi/71)+(glua*2*pi/71);
	glColor3f(0.5, 0.0, 1.0);;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0,0.0);
	for(theta = start; theta<= stop; theta +=0.0001){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	
	glFlush();
}
