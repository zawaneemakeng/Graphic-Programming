#include<stdio.h>
#include<GL/glut.h>
#include <math.h>
void show();
void init();
int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(100, 80);
  glutInitWindowSize(800, 600);
  glutCreateWindow("LAB4");
  init();
  glutDisplayFunc(show);
  glutMainLoop();
}
void init() {
   glClearColor (1.0, 1.0, 1.0, 0.0);
   glLoadIdentity();
   gluOrtho2D(-7.0, 7.0, -1.0, 10.0);
   glColor3f (1.0, 0.0, 0.0);
}
void show() {
    float x,y;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(0.5,0.0,0.8);
    glVertex2f(0.0,-1.0);
    glVertex2f(0.0,10.0);
    glEnd(); 
	glBegin(GL_LINES);
    glColor3f(0.0,0.8,0.5);
    glVertex2f(-7.0,0.0);
    glVertex2f(7.0,0.0);
    glEnd(); 
    glBegin(GL_LINE_STRIP);
    glColor3f(0.5,0.7,0.0);
    for(x=-4.0; x <=4.0; x+=0.005) {
        y=(x*x*x*x)+(4*x*x*x)+(2*x*x)-(4*x)+4;
        glVertex2f(x,y);
      }
    glEnd(); 
   
    glBegin(GL_LINE_STRIP);
    glColor3f(0.1,0.0,0.0);
    for(x=-4.0; x <=4.0; x+=0.005) {
        y=(x*x*x*x)-(3*x*x*x)+(2*x*x)-x+3;
        glVertex2f(x,y);
    }
   glEnd(); 
   glFlush();
}
