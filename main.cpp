#include<windows.h>
#include<mmsystem.h>
#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>

#define PI 3.1416

GLint i, j, k,x=0,y=0,speed=0,alt=0,n1=1000,n2=1100,s1=0,s2=1,s3=1;
GLfloat sun_spin=0, sun_x=0, sun_y=0,reduce=10;
GLfloat ax=0,bx=0,cx=0,dx=0,str=500.0,mn=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;
GLfloat spin = 0.0;

bool condition=false;
GLfloat position = 0.0f;
GLfloat _move =5.0f;
GLfloat position1 = 0.0f;
GLfloat _move1 =3.0f;
GLfloat position2 = 900.0f;
GLfloat _move2 =3.0f;

//Adding Circle For Circular Tree
void circle()
{
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.07;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
}

void circle2()
{
    glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }


	glEnd();
}



void init(void)
{
	glClearColor(.40, .110, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1000.0, 0.0, 700.0);
}

float r(int a){

return x=4,y=8;


}


float r(int a,int b){


    return x=0,y=0;

}



void updatey(int value) {

        y= 8.0f;


    glutPostRedisplay();
    glutTimerFunc(100, updatey, 0);
}



void updatex(int value) {

        x=4.0f;


    glutPostRedisplay();
    glutTimerFunc(100, updatex, 0);
}
void brown_hill()
{
    glColor3f(0.50196, 0.25098, 0.0);


     glPushMatrix();
    glTranslatef(0,-220,0);
glScaled(0.8,0.76,0);
    glBegin(GL_POLYGON);





    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




    glPopMatrix();


glEnd();

}


///============================================================================================================///

///=================///
///*** All_Model ***///
///=================///


/*void sound()
{

    PlaySound(TEXT("fire.wav"), NULL, SND_ASYNC|SND_FILENAME);


}*/

///*** Circle_Model***///



void circle(GLdouble rad)
{
   glBegin(GL_POLYGON);
    {
      	for(int i=0;i<50;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/50;
            float r=rad;
            float x = r * cos(A);

            float y = r * sin(A);
            glVertex2f(x,y );
        }
    }
    glEnd();
}





void circle1(GLdouble rad)
{

    glBegin(GL_POLYGON);
    {
      	for(int i=0;i<200;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=rad;
            float x = r * cos(A);

            float y = r+10 * sin(A);
            glVertex2f(x,y );
        }
    }
    glEnd();
}

void fire(){
	glBegin(GL_POLYGON);

	glVertex2f(13.5,0.0);
	glVertex2f(8,10);
	glVertex2f(15,4);

glVertex2f(17, 10);
	glVertex2f(19,4);
	glVertex2f(26.0,10);
glVertex2f(20.5, 0.0);


glEnd();
}


/// *** Sun_Model **///
void Sun_Model(){

    glPushMatrix();
    glTranslatef(600,1100,0);
    circle(33);
    glPopMatrix();

}

void update2(int value) {

    //position2 -= 5;
    if(position2 <-1.3)
    {
        position2 -= _move2;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
}








///*** Cloud_Model***///
void cloud_model_one(){

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(360,210,0);
    circle(16);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(355,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305,204,0);
    circle(10);
    glPopMatrix();

    ///****Fill End****

}

void cloud_model_Two(){
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(305,205,0);
    circle(10);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(334,207,0);
    circle(10);
    glPopMatrix();

    ///Bottom_Part
    glPushMatrix();
    glTranslatef(320,207,0);
    circle(10);
    glPopMatrix();



}

void cloud_model_Three(){
    glColor3f(1.25, 0.924, 0.930);

    ///Left_Part
    glPushMatrix();
    glTranslatef(300,200,0);
    circle(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glTranslatef(340,220,0);
    circle(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glTranslatef(360,210,0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(380,200,0);
    circle(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glTranslatef(360,190,0);
    circle(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glTranslatef(320,190,0);
    circle(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glTranslatef(340,190,0);
    circle(20);
    glPopMatrix();




    ///****Fill End****

}
///*** Hill_Model***///
void hill_big1(){


 glColor3ub(231,76,60);
    glPushMatrix();
    glTranslatef(200,150,0);
    circle1(34);
    glPopMatrix();
/*
 glColor3f(1, 0, 0);
    glPushMatrix();
    glTranslatef(63,187,0);
glScaled(8.0,8.0,0);
    fire();
    glPopMatrix();*/
	///Hill_BODY
    glBegin(GL_POLYGON);
    glColor3ub(151.0, 154.0, 154.0);
    glVertex2i(330, 70);

	glVertex2i(200, 170);
	glVertex2i(230, 190);
	glVertex2i(220, 180);
	glVertex2i(200, 190);
	glVertex2i(190, 180);
	glVertex2i(170, 190);
glVertex2i(70, 70);
	glEnd();

}
void hill_big2(){

    ///Hill
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2i(70, 70);
	glVertex2i(200, 225);
	glVertex2i(330, 70);

	glEnd();

	///Hill_Snow
    glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);

	glVertex2i(200, 225);
	glVertex2i(230, 190);
	glVertex2i(220, 180);
	glVertex2i(200, 190);
	glVertex2i(190, 180);
	glVertex2i(170, 190);

	glEnd();

}

void hill_small(){
    ///Hill_Small
	glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
	glVertex2i(250, 100);
	glVertex2i(310, 175);
	glVertex2i(370, 100);

	glEnd();

    ///Hill_Small_Snow
	glBegin(GL_POLYGON);
    glColor3f(1.25, 0.924, 0.930);
    glVertex2i(290, 150);
	glVertex2i(310, 175);
	glVertex2i(330, 150);
	glVertex2i(325, 140);
	glVertex2i(310, 150);
	glVertex2i(300, 140);


	glEnd();
}
///*** Tilla_Model ***///
void Tilla_One_Model(){
    ///Tilla
	glBegin(GL_POLYGON);
	glColor3ub(34.0, 153.0, 84.0);
	glVertex2i(125, 70);
	glVertex2i(150, 80);
	glVertex2i(160, 90);
	glVertex2i(170, 90);
	glVertex2i(180, 100);
	glVertex2i(190, 105);
	glVertex2i(200, 108);
	glVertex2i(300, 110);
	glVertex2i(300, 70);

	glEnd();

}

void Tilla_Two_Model(){

	glColor3ub(34.0, 153.0, 84.0);
    /// Left_Part
    glPushMatrix();
    glTranslatef(430,90,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(420,87,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(410,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(390,70,0);
    circle(30);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(445,80,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(455,75,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(465,70,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(470,65,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(480,60,0);
    circle(30);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(485,55,0);
    circle(20);
    glPopMatrix();



}
///*** House_Model ***///
void house(){
    ///House_Roof
	glBegin(GL_POLYGON);
    glColor3ub(44.0, 62.0, 80.0);
	glVertex2i(285, 105);
	glVertex2i(285, 130);
	glVertex2i(380, 115);
	glVertex2i(380, 105);

	glEnd();

  ///House_Roof_Shadow
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(285, 105);
	glVertex2i(285, 120);
	glVertex2i(380, 105);
	glVertex2i(380, 105);

	glEnd();

    ///House_Fence
	glBegin(GL_POLYGON);
    glColor3f(255.0, 0.0, 0.0);
	glVertex2i(290, 70);
	glVertex2i(290, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);

	glEnd();

    ///House_Fence_Shadow
	glBegin(GL_POLYGON);
    glColor3f(255.0, 0.0, 0.0);
	glVertex2i(310, 70);
	glVertex2i(350, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);

	glEnd();

    ///House_Door
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.41, 0.36);
	glVertex2i(330, 70);
	glVertex2i(330, 100);
	glVertex2i(350, 100);
	glVertex2i(350, 70);

	glEnd();

    ///House_Window1
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(295, 75);
	glVertex2i(295, 90);
	glVertex2i(310, 90);
	glVertex2i(310, 75);

	glEnd();

    ///House_Window2
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(312, 75);
	glVertex2i(312, 90);
	glVertex2i(327, 90);
	glVertex2i(327, 75);

	glEnd();

    ///House_Window3
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(355, 75);
	glVertex2i(355, 90);
	glVertex2i(370, 90);
	glVertex2i(370, 75);

	glEnd();

    ///House_Small_Roof
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(250, 90);
	glVertex2i(257, 104);
	glVertex2i(290, 104);
	glVertex2i(290, 90);

	glEnd();

    ///House_Small_Fence
	glBegin(GL_POLYGON);
    glColor3ub(243.0, 156.0, 18.0);
	glVertex2i(255, 70);
	glVertex2i(255, 90);
	glVertex2i(290, 90);
	glVertex2i(290, 70);

	glEnd();

    ///House_Small_Door
	glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
	glVertex2i(260, 70);
	glVertex2i(260, 80);
	glVertex2i(285, 80);
	glVertex2i(285, 70);

	glEnd();


}



void house1(){
    ///House_Roof
	glBegin(GL_POLYGON);
     glColor3ub(243.0, 156.0, 18.0);
	glVertex2i(285, 105);
	glVertex2i(285, 130);
	glVertex2i(380, 115);
	glVertex2i(380, 105);

	glEnd();

    ///House_Roof_Shadow
	glBegin(GL_POLYGON);
    glColor3ub(245.0, 176.0, 65.0);
	glVertex2i(285, 105);
	glVertex2i(285, 120);
	glVertex2i(380, 105);
	glVertex2i(380, 105);

	glEnd();

    ///House_Fence
	glBegin(GL_POLYGON);
    glColor3f(255.0, 0.0, 0.0);
	glVertex2i(290, 70);
	glVertex2i(290, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);

	glEnd();

    ///House_Fence_Shadow
	glBegin(GL_POLYGON);
    glColor3f(255.0, 0.0, 0.0);
	glVertex2i(310, 70);
	glVertex2i(350, 104);
	glVertex2i(375, 104);
	glVertex2i(375, 70);

	glEnd();

    ///House_Door
	glBegin(GL_POLYGON);
    glColor3ub(19, 141.0, 117.0);
	glVertex2i(330, 70);
	glVertex2i(330, 100);
	glVertex2i(350, 100);
	glVertex2i(350, 70);

	glEnd();

    ///House_Window1
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(295, 75);
	glVertex2i(295, 90);
	glVertex2i(310, 90);
	glVertex2i(310, 75);

	glEnd();

    ///House_Window2
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(312, 75);
	glVertex2i(312, 90);
	glVertex2i(327, 90);
	glVertex2i(327, 75);

	glEnd();

    ///House_Window3
	glBegin(GL_POLYGON);
    glColor3f(0.38, 0.21, 0.26);
	glVertex2i(355, 75);
	glVertex2i(355, 90);
	glVertex2i(370, 90);
	glVertex2i(370, 75);

	glEnd();

    ///House_Small_Fence
	glBegin(GL_POLYGON);
    glColor3ub(160.0, 64.0, 0.0);
	glVertex2i(290, 70);
	glVertex2i(290, 140);
	glVertex2i(270, 140);

	glVertex2i(270, 70);

	glEnd();


	  ///House_somewall side
	glBegin(GL_POLYGON);
   glColor3ub(160.0, 64.0, 0.0);
	glVertex2i(265, 90);
	glVertex2i(265, 160);
	glVertex2i(270, 140);
	glVertex2i(270, 70);

	glEnd();

  ///House_somewall top
	  ///House_Small_Roof
	glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2i(265, 160);
	glVertex2i(270, 140);
	glVertex2i(290, 140);
	glVertex2i(285, 160);
glEnd();



    ///*House_Small_Door
	glBegin(GL_POLYGON);
    glColor3f(0.11, 0.23, 0.36);
	glVertex2i(260, 70);
	glVertex2i(260, 80);
	glVertex2i(285, 80);
	glVertex2i(285, 70);

	glEnd();


}

void house2(){

    glPushMatrix();
    glTranslatef(690, 250,0);
    glScalef(0.18,0.35,0);



glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0.0f, 128.0f, 128.0f); // Red
	glVertex2f(150.0f, 30.0f);    // x, y
	glVertex2f(150.0f, 200.0f);    // x, y
	glVertex2f(450.0f, 200.0f);
	glVertex2f(450.0f, 30.0f);
	glEnd();


glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3ub(165.0f, 42.0f, 42.0f); // Red
	glVertex2f(100.0f, 200.0f);    // x, y
	glVertex2f(300.0f, 300.0f);    // x, y
	glVertex2f(500.0f, 200.0f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(128.0f, 0.0f, 0.0f); // Red
	glVertex2f(250.0f, 30.0f);    // x, y
	glVertex2f(250.0f, 120.0f);    // x, y
	glVertex2f(320.0f, 120.0f);
	glVertex2f(320.0f, 30.0f);
	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(128.0f, 0.0f, 0.0f); // Red
	glVertex2f(350.0f, 120.0f);    // x, y
	glVertex2f(350.0f, 145.0f);    // x, y
	glVertex2f(395.0f, 145.0f);
	glVertex2f(395.0f, 120.0f);
	glEnd();



	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(128.0f, 0.0f, 0.0f); // Red
	glVertex2f(175.0f, 120.0f);    // x, y
	glVertex2f(175.0f, 145.0f);    // x, y
	glVertex2f(220.0f, 145.0f);
	glVertex2f(220.0f, 120.0f);
	glEnd();






glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(185.0f, 119.0f, 14.0f); // Red
	glVertex2f(450.0f, 30.0f);    // x, y
	glVertex2f(450.0f, 150.0f);    // x, y
	glVertex2f(800.0f, 150.0f);
	glVertex2f(800.0f, 30.0f);
	glEnd();



		glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(128.0f, 0.0f, 0.0f); // Red
	glVertex2f(500.0f, 80.0f);    // x, y
	glVertex2f(500.0f, 110.0f);    // x, y
	glVertex2f(570.0f, 110.0f);
	glVertex2f(570.0f, 80.0f);
	glEnd();



		glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(128.0f, 0.0f, 0.0f); // Red
	glVertex2f(600.0f, 80.0f);    // x, y
	glVertex2f(600.0f, 110.0f);    // x, y
	glVertex2f(670.0f, 110.0f);
	glVertex2f(670.0f, 80.0f);
	glEnd();


		glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(128.0f, 0.0f, 0.0f); // Red
	glVertex2f(700.0f, 80.0f);    // x, y
	glVertex2f(700.0f, 110.0f);    // x, y
	glVertex2f(770.0f, 110.0f);
	glVertex2f(770.0f, 80.0f);
	glEnd();
	glPopMatrix();


}









///*** Field_Model ***///
void field(){
    ///Field


	glBegin(GL_POLYGON);
    glColor3ub(90, 153, 51);
	glVertex2i(0, 250);
	glVertex2i(0,270);
	glVertex2i(1000, 270);
	glVertex2i(1000, 250);

	glEnd();


    ///Field_Shadow
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2i(0, 230);
	glVertex2i(0, 250);
	glVertex2i(1000, 250);
	glVertex2i(1000, 200);

	glEnd();




	 ///river0.7/0.4/0.4


	glBegin(GL_POLYGON);
    glColor3ub(0, 143, 179);
	glVertex2i(0,0);
	glVertex2i(0,230);
	glVertex2i(600,225);
	glVertex2i(600,0);



	glEnd();

    ///river curve
	glBegin(GL_POLYGON);
	glColor3ub(0, 143, 179);
	glVertex2i(600,0);
	glVertex2i(600, 225);
	glVertex2i(1000, 245);
	glVertex2i(1000,0);


	glEnd();


	 ///Field_2
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2i(0, 00);
	glVertex2i(0, 80);
	glVertex2i(600,50);
	glVertex2i(640, 0);

	glEnd();




		 ///Field_Shadow2
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2i(0, 00);
	glVertex2i(0, 50);
	glVertex2i(600,50);
	glVertex2i(600, 0);

	glEnd();

	///Field_Shadow3
	glBegin(GL_POLYGON);
	glColor3ub(0, 153, 51);
	glVertex2i(600,0);
	glVertex2i(600, 50);
	glVertex2i(1000,30);
	glVertex2i(1000,0);

	glEnd();

}
                  ///Boat///////////////*****************
void Boat(){


        glPushMatrix();
    glTranslatef(position,0.0f,0.0f);
        glTranslatef(-70,40.0f,0.0f);

glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(200,50);
	glVertex2i(100, 100);
	glVertex2i(400,100);
	glVertex2i(300,50);


glEnd();


glBegin(GL_POLYGON);
	glColor3ub(165.0, 42.0, 42.0);
	glVertex2i(180,100);
	glVertex2i(180, 150);
	glVertex2i(320,150);
	glVertex2i(320,100);


glEnd();



glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(360,140);
	glVertex2i(350, 80);
	glVertex2i(360,50);



glEnd();

    glPopMatrix();

}
/* void Boat2(){

///boat1
    glColor3f(1,0,1);
    glBegin(GL_POLYGON);


    //glVertex3i(240,150,0);
    //glVertex3i(150+50,150,0);
    //glVertex3i(120+50,100,0);
    //glVertex3i(30,100,0);
    //glEnd();
 glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(80,600,0);
    glVertex3i(230,600,0);
    glVertex3i(150,220,0);
    glVertex3i(50,220,0);
    glEnd();


 /*   ///boat2
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10+200,150+50,0);
    glVertex3i(150+50+200,150+50,0);
    glVertex3i(120+50+200,100+50,0);
    glVertex3i(30+200,100+50,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50+200,150+50,0);
    glVertex3i(150+200,150+50,0);
    glVertex3i(150+200,220+50,0);
    glVertex3i(50+200,220+50,0);
    glEnd();
}
*/


void update(int value) {


    if(position <-300.0)
        position = 1500.0f;

    position -= _move;

	glutPostRedisplay();


	glutTimerFunc(50, update, 0);
}









///*** Tree_Model ***///
void Tree_Model_One(){


    glPushMatrix();
    glTranslatef(110,110,0);
    circle(15);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110,100,0);
    circle(15);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(27.0, 38,49);
	glVertex2f(109, 70);
	glVertex2f(109, 90);
	glVertex2f(111, 90);
	glVertex2f(111, 70);

    glEnd();

}
void Tree_Model_Two(){

    glPushMatrix();
    glTranslatef(130,130,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125,126,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(135,126,0);
    circle(5);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130,125,0);
    circle(5);
    glPopMatrix();

    glBegin(GL_POLYGON);
    glColor3ub(27, 38, 49);
	glVertex2f(129, 110);
	glVertex2f(129, 124);
	glVertex2f(131, 124);
	glVertex2f(131, 110);

    glEnd();
}

void Tree_Model_Three(){


    glBegin(GL_POLYGON);

	glVertex2f(125, 123);
	glVertex2f(133, 145);
	glVertex2f(141, 123);

	glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(27, 38, 49);
	glVertex2f(132, 110);
	glVertex2f(132, 124);
	glVertex2f(134, 124);
	glVertex2f(134, 110);

    glEnd();
}

void Boat_Stand()
{




       ///boat stand left
   /// glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(110,230);
	glVertex2i(110, 270);
	glVertex2i(120, 270);
	glVertex2i(120,230);

	glEnd();


	///boat stand right
	glPushMatrix();
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(210,230);
	glVertex2i(210, 270);
	glVertex2i(220, 270);
	glVertex2i(220,230);

	glEnd();


	///boat stand straight plank
	glPushMatrix();
	glColor3f(0, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2i(110,230);
	glVertex2i(110, 240);
	glVertex2i(220, 230);
	glVertex2i(220,240);

	glEnd();
	glPopMatrix();
}
///Boats in stands
void Stand_Boat()
{




       ///stand boat
    glPushMatrix();
	glColor3f(0, 0, 0);
	glBegin(GL_TRIANGLES);
	glVertex3f(190,250,0);
	glVertex3f(120, 250,0);
	glVertex3f(150, 220,0);


	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(165.0, 42.0, 42.0);
	glVertex2i(130,250);
	glVertex2i(130, 270);
	glVertex2i(180,250);
	glVertex2i(180,270);
	glEnd();


	glPopMatrix();
}



//Adding Fruits
void fruits()
{
glPushMatrix();
glColor3f(1,0,0);
	glTranslatef(125, 123, 120);
    circle2();
glPopMatrix();


}

/// *** Windmill_Stand_Model ***///
void Windmill_Stand_Model(){

    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2i(375, 100);
    glVertex2i(380, 240);
    glVertex2i(384, 240);
    glVertex2i(390, 100);
    glEnd();
}

///*** Windmill_Blades_Model ***///

void Windmill_Blade(){

    ///Blade_One
    glPushMatrix();
    glRotatef(spin,0,0,90);
    glBegin(GL_POLYGON);
    glVertex2i(-5, 0);
    glVertex2i(-85, -36);
    glVertex2i(-83, -37);
    glVertex2i(-3, -8);
    glEnd();
    glPopMatrix();

    ///Blade_Two
    glPushMatrix();
    glRotatef(spin,0,0,90);
    glBegin(GL_POLYGON);
    glVertex2i(0, 5);
    glVertex2i(45, 70);
    glVertex2i(50, 73);
    glVertex2i(5, 0);
    glEnd();
    glPopMatrix();

    ///Blade_Three
    glPushMatrix();
    glRotatef(spin,0,0,90);
    glBegin(GL_POLYGON);
    glVertex2i(68, -78);
    glVertex2i(0,0);
    glVertex2i(5, 5);
    glVertex2i(70, -77);
    glEnd();
    glPopMatrix();

}
///*** Windmill_Final_Model ***///
void Windmill(){



        ///Windmill_Stand
    glColor3f(0.38, 0.41, 0.36);
    glPushMatrix();
    Windmill_Stand_Model();
    glPopMatrix();

    ///Windmill_Motor
   glColor3ub(208, 211, 212);
    glPushMatrix();
    glTranslatef(380,250,0);
    circle(10);
    glPopMatrix();

    ///Windmill_Rotary_Blades
    glColor3ub(208, 211, 212);
    glPushMatrix();
    glTranslatef(380,251,0);
    Windmill_Blade();
    glPopMatrix();




}
  ///plane//

void plane(){


        glPushMatrix();
   // glTranslatef(position,0.0f,0.0f);
glBegin(GL_POLYGON);//1t

	//glColor3ub(247, 249, 249);


	glVertex2f(20.0f, 20.0f);
		glVertex2f(25.0f, 20.0f);
	glVertex2f(25.0f,21.0f);

	glVertex2f(22.0f, 21.0f);


	glEnd();






glBegin(GL_POLYGON);//1t

	glColor3f(255.0f, 0.0f, 0.0f);

	glVertex2f(25.0f,22.0f);
glVertex2f(24.0f, 21.0f);

		glVertex2f(25.0f, 21.0f);

	glEnd();



glBegin(GL_POLYGON);// window1

glColor3f(255.0f, 0.0f, 0.0f);
	glVertex2f(23.7f, 20.2f);
		glVertex2f(24.2f, 20.2f);
	glVertex2f(24.2f,20.7f);

	glVertex2f(23.7f, 20.7f);

	glEnd();

glBegin(GL_POLYGON);// door

glColor3f(255.0f, 0.0f, 0.0f);
	glVertex2f(21.8f, 20.0f);
		glVertex2f(22.2f, 20.0f);
	glVertex2f(22.2f,20.6f);

	glVertex2f(21.8f, 20.6f);

	glEnd();

glBegin(GL_POLYGON);// window2

	glColor3f(255.0f, 0.0f, 0.0f);
	glVertex2f(22.8f, 20.2f);
		glVertex2f(23.3f, 20.2f);
	glVertex2f(23.3f,20.7f);

	glVertex2f(22.8f, 20.7f);

	glEnd();


	 glPopMatrix();


}
///School

void school(){

	glColor3ub(173, 151, 9);   //BODY
    glBegin(GL_QUADS);
    glVertex2i(575, 350);
    glVertex2i(575, 425);
	glVertex2i(825, 425);
	glVertex2i(825, 350);
	glEnd();

	glColor3ub(77, 77, 219);   //ROOF
    glBegin(GL_QUADS);
    glVertex2i(550, 425);
    glVertex2i(600, 460);
	glVertex2i(800, 460);
	glVertex2i(850, 425);
	glEnd();

	glColor3ub(139, 137, 143);    //STAIR
    glBegin(GL_QUADS);
    glVertex2i(565, 340);
    glVertex2i(565, 350);
	glVertex2i(835, 350);
	glVertex2i(835, 340);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);   //DOOR
    glBegin(GL_QUADS);
    glVertex2i(690, 350);
    glVertex2i(690, 400);
	glVertex2i(710, 400);
	glVertex2i(710, 350);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);  //Left Windows
    glBegin(GL_QUADS);
    glVertex2i(595, 375);
    glVertex2i(595, 400);
	glVertex2i(615, 400);
	glVertex2i(615, 375);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(635, 375);
    glVertex2i(635, 400);
	glVertex2i(655, 400);
	glVertex2i(655, 375);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);  //Right Windows
    glBegin(GL_QUADS);
    glVertex2i(805, 375);
    glVertex2i(805, 400);
	glVertex2i(785, 400);
	glVertex2i(785, 375);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(765, 400);
	glVertex2i(745, 400);
	glVertex2i(745, 375);
	glVertex2i(765, 375);
	glEnd();

//text school
    glColor3f(1.0, 1.0, 1.0);    //QUAD
    glBegin(GL_QUADS);
    glVertex2i(675, 455);
    glVertex2i(725, 455);
	glVertex2i(725, 435);
	glVertex2i(675, 435);
	glEnd();


	glColor3f (0.0, 0.0, 0.0);
        glRasterPos2f(685, 440);
        char *string = "SCHOOL";

      while(*string){
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *string++);
      }




    glPushMatrix();
    glTranslatef(680, 478, 0);
///    Sprint(1.0,0,text);
    glPopMatrix();
}

void grass(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(15, 30 );
	glVertex2f(5, 30);
	glVertex2f(10, 20);

	glEnd();}

	void grass2(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(55, 30 );
	glVertex2f(45, 30);
	glVertex2f(50, 20);

	glEnd();}

	void grass3(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(85, 30 );
	glVertex2f(75, 30);
	glVertex2f(80, 20);

	glEnd();}

	void grass4(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(115, 50 );
	glVertex2f(105, 50);
	glVertex2f(110, 40);

	glEnd();}

	void grass5(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(135, 50 );
	glVertex2f(125, 50);
	glVertex2f(130, 40);

	glEnd();}

	void grass6(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(235, 50 );
	glVertex2f(225, 50);
	glVertex2f(230, 40);

	glEnd();}

	void grass7(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(255, 50 );
	glVertex2f(245, 50);
	glVertex2f(250, 40);

	glEnd();}

	void grass8(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(185, 50 );
	glVertex2f(175, 50);
	glVertex2f(180, 40);

	glEnd();}

	void grass9(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(145, 50 );
	glVertex2f(135, 50);
	glVertex2f(140, 40);

	glEnd();}

	void grass10(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(145, 40 );
	glVertex2f(135, 40);
	glVertex2f(140, 30);

	glEnd();}

	void grass11(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(175, 40 );
	glVertex2f(165, 40);
	glVertex2f(170, 30);

	glEnd();}

	void grass12(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(215, 30 );
	glVertex2f(205, 30);
	glVertex2f(210, 20);

	glEnd();}

	void grass13(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(315, 30 );
	glVertex2f(305, 30);
	glVertex2f(310, 20);

	glEnd();}

	void grass14(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(415, 30 );
	glVertex2f(405, 30);
	glVertex2f(410, 20);

	glEnd();}

	void grass15(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(515, 30 );
	glVertex2f(505, 30);
	glVertex2f(510, 20);

	glEnd();}

	void grass16(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(515, 40 );
	glVertex2f(505, 40);
	glVertex2f(510, 30);

	glEnd();}

	void grass17(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(415, 40 );
	glVertex2f(405, 40);
	glVertex2f(410, 30);

	glEnd();}

	void grass18(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(315, 40 );
	glVertex2f(305, 40);
	glVertex2f(310, 30);

	glEnd();}

	void grass19(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(615, 40 );
	glVertex2f(605, 40);
	glVertex2f(610, 30);

	glEnd();}

	void grass20(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(615, 50 );
	glVertex2f(605, 50);
	glVertex2f(610, 40);

	glEnd();}

	void grass21(){
    glBegin(GL_TRIANGLES);
	glColor3f(0.5f, 0.35f, 0.05f);
	glVertex2f(655, 40 );
	glVertex2f(645, 40);
	glVertex2f(650, 30);

	glEnd();}



void update1(int value) {


    if(position1 <-400.0)
        position1 = 1200.0f;

    position1 -= _move1;

	glutPostRedisplay();


	glutTimerFunc(22, update1, 0);
}




///Model_End
///=======================================================================================================///


///=================///
///***   Object  ***///
///=================///


///*** plane ***///
void plane1(){
    glColor3ub(241, 196, 15);
    glPushMatrix();

glTranslatef(position1,0,0);
  glTranslatef(0,360,0);
   glScaled(10.0f,10.0f,0.0f);
    plane();
    glPopMatrix();
}

void plane2(){
    glColor3ub(247, 249, 249);
    glPushMatrix();
    glTranslatef(position1,0,0);
    glTranslatef(100,320,0);
   glScaled(10.0f,10.0f,0.0f);
    plane();
    glPopMatrix();
}



///*** Sun ***///
void Sun(){
    glColor3f(s3, s2,s1);
    glPushMatrix();
     Sun_Model();
    glPopMatrix();
}




///*** Cloud_One_Model_One ***///
void cloud_one(){
    glPushMatrix();
    glTranslatef(cx,225,0);//-40
    cloud_model_one();
    glPopMatrix();

}

void star(){
if ( condition==true)

{
  glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
    glColor3ub(247, 249, 249); // Red
           glVertex2f(500.1f, 500.3f);    // x, y
        glVertex2f( 550.1f, 504.0f);


            glVertex2f( 150.1f, 504.0f);

             glVertex2f( 310.1f, 504.0f);

            glVertex2f( 261.0f, 505.0f);

            glVertex2f( 453.1f, 506.0f);

            glVertex2f( 616.1f, 507.0f);

            glVertex2f( 763.1f, 508.0f);

             glVertex2f( 587.1f, 524.0f);

             glVertex2f( 954.1f, 574.0f);

            glVertex2f( 231.1f, 585.0f);

            glVertex2f( 275.1f, 566.0f);

            glVertex2f( 852.1f, 557.0f);

            glVertex2f( 476.1f, 548.0f);




            glVertex2f( 140.1f, 509.0f);
            glVertex2f( 350.1f, 510.0f);

            glVertex2f( 061.1f, 511.0f);

            glVertex2f( 463.1f, 512.0f);

            glVertex2f( 822.1f, 513.0f);

            glVertex2f( 110.1f, 514.0f);

            glVertex2f( 966.1f, 515.0f);

            glVertex2f( 211.1f, 516.0f);

            glVertex2f( 313.1f, 517.0f);

            glVertex2f( 869.1f, 518.0f);

            glVertex2f( 639.1f, 519.0f);

            glVertex2f( 106.1f, 520.0f);





            glVertex2f( 140.1f, 709.0f);
            glVertex2f( 350.1f, 810.0f);

            glVertex2f( 061.1f, 911.0f);

            glVertex2f( 463.1f, 412.0f);
            glVertex2f( 822.1f, 713.0f);

            glVertex2f( 110.1f, 614.0f);

            glVertex2f( 966.1f, 815.0f);

            glVertex2f( 211.1f, 916.0f);

            glVertex2f( 313.1f, 1017.0f);

            glVertex2f( 869.1f, 718.0f);

            glVertex2f( 639.1f, 919.0f);

            glVertex2f( 106.1f, 902.0f);
             glVertex2f( 106.1f, 908.0f);
 glVertex2f( 106.1f, 620.0f);
 glVertex2f( 250.1f, 630.0f);
 glVertex2f( 106.1f, 906.0f);
 glVertex2f( 116.1f, 530.0f);
 glVertex2f( 980.1f, 980.0f);
  glVertex2f( 900.1f, 930.0f);
 glVertex2f( 858.1f, 666.0f);
 glVertex2f( 845.1f, 642.0f);
 glVertex2f( 900.1f, 900.0f);
 glVertex2f( 910.1f, 903.0f);
 glVertex2f( 915.1f, 908.0f);
 glVertex2f( 919.1f, 920.0f);
 glVertex2f( 930.1f, 903.0f);
 glVertex2f( 935.1f, 905.0f);
 glVertex2f( 940.1f, 905.0f);
  glVertex2f( 945.1f, 910.0f);






glVertex2f( 600.1f, 525.0f);



    glVertex2f( 650.1f, 535.0f);

    glVertex2f( 690.1f, 490.0f);
glVertex2f( 550.1f, 600.0f);
glVertex2f( 500.1f, 600.0f);





    glEnd();

}




}

bool con(){
return condition=true;
}

float updatex() {





  return   n1=-700,s1=241,s2=240,s3=236;




}
float updatex1() {





  return   n1=1000,s1=0,s2=1,s3=1;


}





void night(){

glColor3f(.0, 0.0, 0.0);


     glPushMatrix();


    glBegin(GL_POLYGON);





    glVertex3i(0,n1,0);
    glVertex3i(0,1000, 0);
    glVertex3i(1200,1000, 0);
    glVertex3i(1200,n1, 0);
    glPopMatrix();


glEnd();

}


///*** Cloud_Two_Model_one ***///

void cloud_two(){
    glPushMatrix();
    glTranslatef(bx+100,290,0);
    cloud_model_one();
    glPopMatrix();

}

///*** Cloud_Three_Model_Two ***///

void cloud_three(){
    glPushMatrix();
    glTranslatef(ax-80,230,0);
    cloud_model_Two();
    glPopMatrix();

}
///*** Cloud_Four_Model_Two ***///

void cloud_four(){
    glPushMatrix();
    glTranslatef(dx+300,275,0);
    cloud_model_Two();
    glPopMatrix();

}
///*** Cloud_Five_Model_Three ***///
void cloud_five(){

    glPushMatrix();
    glTranslatef(ax+-300,310,0);
    cloud_model_Three();
    glPopMatrix();
}
///*** Cloud_Six_Model_Three ***///
void cloud_six(){

    glPushMatrix();
    glTranslatef(cx+-500,390,0);
    cloud_model_Three();
    glPopMatrix();
}

///*** House_One ***///
void house_one(){
    glPushMatrix();
    glTranslatef(0,200,0);
    house1();
    glPopMatrix();
}



///*** House_Two ***///
/*
void house_two(){
    glPushMatrix();
    glTranslatef(450,200,0);
    house();
    glPopMatrix();
}
*/
///*** House_Two ***///
void house_three(){
    glPushMatrix();
    glTranslatef(320, 237,0);
    house();
    glPopMatrix();
}


///*** school ***///
void school_one(){
    glPushMatrix();
    glTranslatef(-170, -100,0);
    school();
    glPopMatrix();
}



///*** Hill_volkano***///
void hill_volkano(){
    glPushMatrix();
    glTranslatef(0,200,0);
    hill_big1();
    glPopMatrix();
}
///*** Hill_big_Two ***///
void Hill_Big_Two(){
    glPushMatrix();
    glTranslatef(550,180,0);//-20
    hill_big2();
    glPopMatrix();
}
///*** Hill_Small_One ***///
void Hill_Small_One(){
    glPushMatrix();
    glTranslatef(0,200,0);
    hill_small();
    glPopMatrix();

}
/// *** Tilla_One_Model_One ***///

void Tilla_One(){

    glPushMatrix();
    glTranslatef(0,200,0);
    Tilla_One_Model();
    glPopMatrix();

}
/// *** Tilla_Two_Model_Two ***///
void Tilla_Two(){

    glPushMatrix();
    glTranslatef(0,200,0);
    Tilla_Two_Model();
    glPopMatrix();


}
/// *** Tilla_Three_Model_Two ***///
void Tilla_Three(){

    glPushMatrix();
    glTranslatef(400,200,0);
    Tilla_Two_Model();
    glPopMatrix();


}
/// *** Tilla_Four_Model_One ***///
void Tilla_Four(){

    glColor3f(0.833, 1., 0.0);
    glPushMatrix();
    glTranslatef(380,200,0);
    Tilla_One_Model();
    glPopMatrix();


}
///*** Tree_1 ***///
void Tree_One(){
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(0,200,0);
    Tree_Model_One();
    glPopMatrix();
}

///*** Tree_2 ***///
void Tree_Two(){
     glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(540,200,0);
    Tree_Model_One();
    glPopMatrix();
}

///*** Tree_3 ***///
void Tree_Three(){
 glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(750,200,0);
    Tree_Model_One();
    glPopMatrix();
}
///*** Tree_4 ***///
void Tree_Four(){
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(292,240,0);
    Tree_Model_One();
    glPopMatrix();
}

///*** Tree_5 ***///
void Tree_Five(){
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(30,180,0);//-20
    Tree_Model_Two();
    glPopMatrix();
}

///*** Tree_6 ***///
void Tree_Six(){
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(50,190,0);//-10
    Tree_Model_Two();
    glPopMatrix();
}
///*** Tree_7 ***///
void Tree_Seven(){
     glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(322,200,0);
    Tree_Model_Two();
    glPopMatrix();
}

///*** Tree_8 ***///
void Tree_Eight(){
     glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(350,185,0);//-15
    Tree_Model_Two();
    glPopMatrix();
}

///*** Tree_9 ***///
void Tree_Nine(){
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(760,125,0);//-75
    Tree_Model_Two();
    glPopMatrix();
}

///*** Tree_10 ***///
void Tree_Ten(){
     glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(90,198,0);//-2
    Tree_Model_Three();
    glPopMatrix();
}

///*** Tree_11 ***///
void Tree_Eleven(){
     glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(125,200,0);
    Tree_Model_Three();
    glPopMatrix();
}

///*** Tree_12 ***///
void Tree_Twelve(){
     glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(408,178,0);//-22
    Tree_Model_Three();
    glPopMatrix();
}

///*** Tree_13 ***///
void Tree_Thirteen(){
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(-30,200,0);
    Tree_Model_One();
    glPopMatrix();
}

///*** Tree_14 ***///
void Tree_Fourteen(){
    glColor3ub(46, 204, 13.0);
    glPushMatrix();
    glTranslatef(-60,180,0);
    Tree_Model_One();
    glPopMatrix();
}



/// *** Windmill ***///
void Windmill_One(){
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(0,190,0);//-10
    Windmill();
    glPopMatrix();

}

void Windmill_Two(){
    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(508,130,0);//-70
    Windmill();
    glPopMatrix();

}
void tree(){


    glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(-120,-110,0);//-90
    Windmill();
    glPopMatrix();

}
void fire2(){

 glColor3f(1,1, 0);
    glPushMatrix();
    glTranslatef(130,390,0);
glScaled(x,x,0);
    fire();

    glPopMatrix();



}

void fire1(){

glColor3f(0.7, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(63,390,0);
glScaled(y,y,0);
    fire();


    glPopMatrix();



}



///Boat Stand 1
/*
void Boat_Stand1(){
     glColor3ub(1, 0, 0);
    glPushMatrix();
   ///glTranslatef(100,200,0);
    Boat_Stand();
    glPopMatrix();
}
*/




///Object_End
///=========================================================================================================///


///========================///
///*** Display Function ***///
///========================///

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);

    night();
    star();
    brown_hill();




    Sun();
 plane1();
 plane2();

  fire1();
    fire2();
tree();


    hill_volkano();
    Tilla_Four();

    house_three();

    Hill_Big_Two();
    Hill_Small_One();

    cloud_three();
    cloud_four();

    Windmill_One();
    Windmill_Two();


    Tilla_One();
    Tilla_Two();
    Tilla_Three();


    house_one();
    cloud_one();
    house2();


    Tree_One();
    Tree_Two();
    Tree_Three();
    Tree_Four();
    Tree_Five();
    Tree_Six();
    Tree_Seven();
    Tree_Eight();
    Tree_Nine();
    Tree_Ten();
    Tree_Eleven();
    Tree_Twelve();
    Tree_Thirteen();
    Tree_Fourteen();





    cloud_two();
    cloud_five();
    cloud_six();
    field();
    Boat();
    Boat_Stand();
    school_one();
    Tree_Fourteen();
//    Boat2();
    //circulartree&fruits
fruits();

Stand_Boat();
grass();
grass2();
grass3();
grass4();
grass5();
grass7();
grass8();
grass9();
grass10();
grass11();
grass12();
grass13();
grass14();
grass15();
grass16();
grass17();
grass18();
grass19();
grass20();
	glFlush();
}
///========================///
///*** Speed & Movement ***///
///========================///
///*** Sun_Move ***///

void move_right(){

   // sun_move();

    spin = spin +.1;
    ax = ax + .05;
    bx = bx + .08;
    cx = cx + .10;
    dx = dx + .15;

    if(cx>1000){
        cx = -300;
    }
    if(bx>1000){
            bx= -400;

    }
    if(cx>1000){
            cx= -400;

    }
    if(dx>1000){
            dx= -500;

    }


    glutPostRedisplay();
}



void mouse(int key, int state, int x, int y){
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(move_right);
        }
        break;
    case GLUT_MIDDLE_BUTTON:
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);
        }
        break;
    default:
        break;
    }

}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'f':
  r(1);
//sound();
break;
case 'g':

r(1,1);
break;



case 'i':
    _move = 0.0f;

    break;
case 'o':
    _move = 5.0f;
    break;

    case 'k':
    _move1 = 0.0f;
    break;
case 'l':
    _move1 = 3.0f;

    break;

case 'n':

     updatex();
 condition=true;
    break;

  case 'd':
updatex1();
 condition=false;
    break;

glutPostRedisplay();
	}


	}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(1800, 900);
	glutCreateWindow("Mountain Side Village");
	init();
	glutDisplayFunc(display);
	glutTimerFunc(20, update, 0);
	glutTimerFunc(20, update1, 0);
	glutTimerFunc(20, update2, 0);

 //glutTimerFunc(100, updatey, 0);
    //glutTimerFunc(100, updatex, 0);
    glutMouseFunc(mouse);
 glutKeyboardFunc(handleKeypress);
	glutMainLoop();
}


