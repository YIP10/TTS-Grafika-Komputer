#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>

void segi () {
	glBegin (GL_POLYGON) ;

	glVertex2f (-10,50) ; //garis bawahan,depan garis kiri
	glVertex2f (25,120) ; //garis bawahan
	glVertex2f (60,50) ; //garis pucukan,depan garis kanan
	glVertex2f (25,-20) ;//garis pucukan
	glEnd ();

}


void tupat (){

	glBegin (GL_QUADS) ;

	glVertex2f (0,50) ; //garis bawahan,depan garis kiri
	glVertex2f (25,100) ; //garis bawahan
	glVertex2f (50,50) ; //garis pucukan,depan garis kanan
	glVertex2f (25,0) ;//garis pucukan
	glEnd ();

}


void render (){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (0.5,0.5,0.8);
    segi ();
    glTranslatef (50,0,0);
    segi ();
    glTranslatef (50,0,0);
    segi ();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (0,0,0);
    glColor3f(0,0.5,0.7);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-25,90,0);
    glColor3f (0,1,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glTranslatef (50,0,0);
    segi();
    glColor3f (0,0.5,0.9);
    glTranslatef (0,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();
    glTranslatef (-50,0,0);
    tupat();



    glFlush ();

}

int main (int argc, char **argv)
	{
	glutInit (&argc , argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowPosition (100,100);
	glutInitWindowSize (640,480) ; //ukuran dari jendela
	glutCreateWindow ("TUGAS Grafkom 672018219") ;
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
	glutDisplayFunc (render) ; //yang dirender
	glutMainLoop () ;
	}
