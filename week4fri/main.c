#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

void display();
void init();

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(450, 100);
glutInitWindowSize(650, 600);
glutCreateWindow("YinYang");
init();
glutDisplayFunc(display);
glutMainLoop();
}

void init(){
	glClearColor(1.0, 0.0, 0.0,0.0);
	glLoadIdentity();
	gluOrtho2D(-10.0,10.0,-10.0,10.0);
	glColor3f(0.0,0.0,1.0);

}
void display(){
	//Horizontal
	/*
	float x,y;
	float r = 9.0;
	float pi = 3.14159;
	float theta;
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	for(theta = 0.0; theta<= pi; theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(theta = pi; theta<= 2*pi; theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	r=4.5;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(theta = 0.0; theta<= pi; theta +=0.005){
		x = r*cos(theta) + 4.5;
		y = r*sin(theta);
		glVertex2f(x,y);
	}	
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	for(theta = pi ; theta<= 2*pi; theta +=0.005){
		x = r*cos(theta)-4.5;
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	r = 0.6;
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
        x = r*cos(theta);
        y = r*sin(theta);
        glVertex2f(x-4.5,y);
      }  
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
        x = r*cos(theta);
        y = r*sin(theta);
        glVertex2f(x+4.5,y);
      }  
    glEnd();
	glFlush();*/
	float x,y;
	float r = 9.0;
	float pi = 3.14159;
	float theta;
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	for(theta = pi/2; theta<= 3*pi/2; theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(theta = 3*pi/2; theta<= 5*pi/2; theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	
	r=4.5;
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	for(theta = pi/2; theta<= 3*pi/2; theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta)+ 4.5;
		glVertex2f(x,y);
	}	
	glEnd();
	
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	for(theta = 3*pi/2; theta<= 5*pi/2; theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta)-4.5;
		glVertex2f(x,y);
	}
	glEnd();
		r = 0.6;
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
        x = r*cos(theta);
        y = r*sin(theta);
        glVertex2f(x,y-4.5);
      }  
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    for(theta = 0.0; theta <= 2*pi; theta+=0.05) {
        x = r*cos(theta);
        y = r*sin(theta);
        glVertex2f(x,y+4.5);
      }  
    glEnd();
	glFlush();
}

