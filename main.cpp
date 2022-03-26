#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(4.0);
	glBegin(GL_POINTS);
	
	//Membuat Titik Pertama
	glColor3ub(127, 127, 127); //Membuat Warna Abu - Abu
	glVertex2f(0.0, 0.5);
	
	//Membuat Titik Kedua
	glColor3ub(0, 0, 255); // Membuat Warna Biru
	glVertex2f(0.0, 0.0);
	
	//Membuat Titik Ketiga
	glColor3ub(255, 255, 0); //Membuat Warna Kuning
	glVertex2f(-0.4, 0.2);
	
	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutCreateWindow("Cara Membuat Titik");
  glutInitWindowSize(600, 400);
  glutInitWindowPosition(0, 0);
  glClearColor(0.0,0.0,0.0,0.0); //background color
  
  //inisialisasi tampilan
  glMatrixMode(GL_PROJECTION);
  glOrtho(1.0,1.0,1.0,1.0,-1.0,1.0);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
