#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0);
	glBegin(GL_POINTS);
	
	glColor3ub(255, 255, 255);
	glVertex2f(0.0, 0.0);
	
	glColor3ub(0, 0, 255);
	glVertex2f(-0.2, 0.3);
	
	glColor3ub(255, 255, 0);
	glVertex2f(0.5, -0.3);
	
	glEnd();
	glFlush();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutCreateWindow("Cara Membuat Objek Titik dengan Warna RGB");
	glutInitWindowSize(700,400);
	glutInitWindowPosition(0,0);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	
	glMatrixMode(GL_PROJECTION);
	glOrtho(1.0, 1.0, 1.0, 1.0, -1.0, 1.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
