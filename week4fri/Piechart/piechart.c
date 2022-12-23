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
	glClearColor(1.0, 0.0, 0.0,0.0);
	glLoadIdentity();
	gluOrtho2D(-10.0,10.0,-10.0,10.0);
	glColor3f(0.0,0.0,1.0);

}
void show(){
	
	float x,y;
	float r = 9.0;
	float pi = 3.14159;
	float theta;
	int yala = 50;
	int pattani =40;
	int nara = 25;

	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0,0.0);//start
	for(theta = 0.0; theta<= yala*2*pi/115; theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0,0.0);//start
	for(theta = yala*2*pi/115; theta<= yala*2*pi/115+(pattani*2*pi/115); theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(0.0,0.0);//start
	for(theta = yala*2*pi/115+(pattani*2*pi/115); theta<= yala*2*pi/115+(pattani*2*pi/115)+(nara*2*pi/115); theta +=0.005){
		x = r*cos(theta);
		y = r*sin(theta);
		glVertex2f(x,y);
	}
	glEnd();
	
	glFlush();
	
}
