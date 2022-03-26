#include<GL/glut.h>
#include<GL/glut.h>
void garis();
main (int argc, char** argv) {
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(850,850); 
	glutInitWindowPosition(0, 0); 
	glutCreateWindow("Membuat Garis");
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0); 
	glutDisplayFunc(garis);
	glutMainLoop();
}
void garis() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINES); 
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 1.0);
	glVertex2f(0.1, 0.2);
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 1.0); 
	glVertex2f(0.2, 0.2);
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 0.9);
	glVertex2f(0.3, 0.2);
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 0.8);
	glVertex2f(0.4, 0.2);
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 0.7);
	glVertex2f(0.5, 0.2);
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 0.6);
	glVertex2f(0.6, 0.2);

	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 0.5);
	glVertex2f(0.7, 0.2);
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 0.4);
	glVertex2f(0.8, 0.2);
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 0.3);
	glVertex2f(0.9, 0.2);
	glColor3ub(255, 0, 0);
	glVertex2f(0.1, 0.2);
	glVertex2f(1.0, 0.2);
	glPointSize(50.0f); 
	glEnd(); 
	glFlush(); 
}
