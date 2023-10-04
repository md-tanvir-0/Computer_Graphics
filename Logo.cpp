#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
 glClear (GL_COLOR_BUFFER_BIT);
 glBegin(GL_QUADS);
 glColor4b (0,0,0,0);
 glVertex2i(150,150);
 glVertex2i(450, 150);
 glVertex2i(450, 300);
 glVertex2i(150, 300);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub(255, 255, 0);
 glVertex2i(180,300);
 glVertex2i(420, 300);
 glVertex2i(420, 340);
 glVertex2i(180, 340);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub(0,0,128);
 glVertex2i(150,300);
 glVertex2i(180, 300);
 glVertex2i(180, 340);
 glVertex2i(150, 340);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (0,0,128);
 glVertex2i(420,300);
 glVertex2i(450, 300);
 glVertex2i(450, 340);
 glVertex2i(420, 340);
 glBegin(GL_QUADS);
 glColor3ub (218, 160, 109);
 glVertex2i(150,340);
 glVertex2i(180, 340);
 glVertex2i(180, 380);
 glVertex2i(150, 380);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (218, 160, 109);
 glVertex2i(420,340);
 glVertex2i(450, 340);
 glVertex2i(450, 380);
 glVertex2i(420, 380);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (128,128,128);
 glVertex2i(150,380);
 glVertex2i(180, 380);
 glVertex2i(180, 410);
 glVertex2i(150, 410);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (128,128,128);
 glVertex2i(450,380);
 glVertex2i(420, 380);
 glVertex2i(420, 410);
 glVertex2i(450, 410);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (128,128,128);
 glVertex2i(180,340);
 glVertex2i(420, 340);
 glVertex2i(420, 440);
 glVertex2i(180, 440);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (150, 75, 0);
 glVertex2i(200, 440);
 glVertex2i(240, 440);
 glVertex2i(240, 480);
 glVertex2i(200, 480);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (218, 160, 109);
 glVertex2i(240, 440);
 glVertex2i(400, 440);
 glVertex2i(400, 480);
 glVertex2i(240, 480);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (0,2,46);
 glVertex2i(200, 480);
 glVertex2i(240, 480);
 glVertex2i(240, 580);
 glVertex2i(200, 580);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (0,0,128);
 glVertex2i(240, 480);
 glVertex2i(400, 480);
 glVertex2i(400, 550);
 glVertex2i(240, 550);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (0,0,128);
 glVertex2i(360, 550);
 glVertex2i(400, 550);
 glVertex2i(400, 580);
 glVertex2i(360, 580);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (50,50,50);
 glVertex2i(200, 380);
 glVertex2i(400, 380);
 glVertex2i(400, 410);
 glVertex2i(200, 410);
 glEnd();
 glBegin(GL_QUADS);
 glColor3ub (25,25,112);
 glVertex2i(180, 260);
 glVertex2i(220, 260);
 glVertex2i(220, 300);
 glVertex2i(180, 300);
 glEnd();
 glFlush ();

}

void myInit (void)
{
glClearColor(255,255, 255,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 600.0, 0.0, 600.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
