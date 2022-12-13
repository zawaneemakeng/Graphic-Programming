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
  glutCreateWindow("A Simple Triangle");
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
   float r = 7.0;
   float pi = 3.14159;
   float theta;
   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_LINE_LOOP);
      for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
         x = r*cos(theta);
         y = r*sin(theta);
         glVertex2f(x,y);
      }
   glEnd();
    r = 5.0;
   glBegin(GL_LINE_LOOP);
      for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
         x = r*cos(theta);
         y = r*sin(theta);
         glVertex2f(x,y);
      }
   glEnd();
    r = 3.0;
   glBegin(GL_POLYGON);
      for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
         x = r*cos(theta);
         y = r*sin(theta);
         glVertex2f(x,y);
      }
   glEnd();
  glFlush();
}
