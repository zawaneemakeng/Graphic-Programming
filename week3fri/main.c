#include<stdio.h>
#include<GL/glut.h>
#include <math.h>
void show();
void init();
int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition (700, 80);
  glutInitWindowSize(750, 600);
  glutCreateWindow("MY CUTE CAT");
  init();
  glutDisplayFunc(show);
  glutMainLoop();
}
void init() {
   glClearColor (1.0, 1.0, 1.0, 0.0);
    glLoadIdentity();
   gluOrtho2D(-10.0, 10.0, -10.0, 10.0);
   glColor3f (1.0, 0.0, 0.0);
}
void show() {
	float x,y;
	
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5.0);
	glPointSize(8.0);
	
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	
	x = 0.5;
	y = -8.0;
	glVertex2f(x,y);
	glVertex2f(x-7,y+5);
	glVertex2f(x-7,y+11);
	glVertex2f(x-4,y+16);
	glVertex2f(x-4,y+11);
	glVertex2f(x+3,y+11);
	glVertex2f(x+3,y+16);
	glVertex2f(x+6,y+11);
	glVertex2f(x+6,y+5);
	glEnd();
	
	//left eyes
	float r = 0.6;
    float pi = 3.14159;
    float theta;
    glBegin(GL_POLYGON);
    for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
        x = r*cos(theta);
        y = r*sin(theta);
        glVertex2f(x-3.5,y+1);
      }  
    glEnd();
    //right eye
    glBegin(GL_POLYGON);
    for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
        x = r*cos(theta);
        y = r*sin(theta);
        glVertex2f(x+3.5,y+1);
    }  
    glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	
	x = 0.0;
	y = 0.0;
	
	//left 
	glVertex2f(x-5,y-1);
	glVertex2f(x-9,y+1);
	
	glVertex2f(x-5,y-1);
	glVertex2f(x-9,y-1.5);
	
	glVertex2f(x-5,y-1);
	glVertex2f(x-9,y-4);
	
	glVertex2f(x-5,y-1);
	glVertex2f(x-9,y+1);
	
	//right
	glVertex2f(x+5,y-1);
	glVertex2f(x+9,y+1);
	
	glVertex2f(x+5,y-1);
	glVertex2f(x+9,y-1.5);
	
	glVertex2f(x+5,y-1);
	glVertex2f(x+9,y-4);
	
	//mouth
	glColor3f(1.0,0.0,0.0);
	glVertex2f(x-2,y-4);
	glVertex2f(x+2,y-4);
	glEnd();
	
	glFlush();
	
}
