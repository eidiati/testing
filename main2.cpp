#include<GL/glut.h>
#include<GL/glut.h>
#include <math.h>
#define DEG2RAD 3.14159/180.0

void DrawEllipse(float radiusX, float radiusY)
{
int i;

glBegin(GL_LINE_LOOP);

for(i=0;i<360;i++)
{
float rad = i*DEG2RAD;
glVertex2f(cos(rad)*radiusX,
sin(rad)*radiusY);
}

glEnd();
}

void Tampilan()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POLYGON);
glColor3ub(255,255,255);

DrawEllipse(0.5,0.8);

glEnd();
glFlush();
glutSwapBuffers();

}

int main (int argc, char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
glutInitWindowSize(500,500);
glutInitWindowPosition(300,100);
glutCreateWindow("Gambar Elips");
glutDisplayFunc(Tampilan);
glutMainLoop();
}
