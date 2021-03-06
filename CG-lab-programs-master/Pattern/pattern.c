#include<GL/glut.h>
#include<stdio.h>

GLubyte patt[] = {
			0x01, 0x80, 0x01, 0x80,
			0x02, 0x40, 0x02, 0x40,
			0x8c, 0x61, 0x8c, 0x61,
			0x98, 0x31, 0x98, 0x31,
			0x31, 0x98, 0x31, 0x98,
			0x21, 0x8c, 0x21, 0x8c,
			0x60, 0x06, 0x60, 0x06,
			0x80, 0x81, 0x80, 0x81,
			0x01, 0x80, 0x01, 0x80,
			0x02, 0x40, 0x02, 0x40,
			0x8c, 0x61, 0x8c, 0x61,
			0x98, 0x31, 0x98, 0x31,
			0x31, 0x98, 0x31, 0x98,
			0x21, 0x8c, 0x21, 0x8c,
			0x60, 0x06, 0x60, 0x06,
			0x80, 0x81, 0x80, 0x81,
			0x01, 0x80, 0x01, 0x80,
			0x02, 0x40, 0x02, 0x40,
			0x8c, 0x61, 0x8c, 0x61,
			0x98, 0x31, 0x98, 0x31,
			0x31, 0x98, 0x31, 0x98,
			0x21, 0x8c, 0x21, 0x8c,
			0x60, 0x06, 0x60, 0x06,
			0x80, 0x81, 0x80, 0x81,
			0x01, 0x80, 0x01, 0x80,
			0x02, 0x40, 0x02, 0x40,
			0x8c, 0x61, 0x8c, 0x61,
			0x98, 0x31, 0x98, 0x31,
			0x31, 0x98, 0x31, 0x98,
			0x21, 0x8c, 0x21, 0x8c,
			0x60, 0x06, 0x60, 0x06,
			0x80, 0x81, 0x80, 0x81
			
		};

void init()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(0.0, 0.0, 0.0);
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glColor3f(0.0, 0.4, 0.5);
		glVertex2f(50, 50);
		glColor3f(0.7, 0.3, 0.0);
		glVertex2f(150, 450);
		glColor3f(0.3, 0.7, 0.2);
		glVertex2f(450, 50);
	glEnd();

	glFlush();
}

void main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Pattern");
	glEnable(GL_POLYGON_STIPPLE);
	glPolygonStipple(patt);
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}
