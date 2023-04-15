#include<gl/glut.h>
void DibujarPolignonos() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(461, 142);
	glVertex2i(500, 200);
	glVertex2i(428, 215);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(502, 202);
	glVertex2i(430, 217);
	glVertex2i(374, 328);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(372, 326);
	glVertex2i(428, 213);
	glVertex2i(368, 237);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(461, 140);
	glVertex2i(428, 211);
	glVertex2i(368, 235);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(370, 328);
	glVertex2i(366, 237);
	glVertex2i(320, 264);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(320, 262);
	glVertex2i(366, 235);
	glVertex2i(338, 213);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(338, 211);
	glVertex2i(330, 228);
	glVertex2i(322, 208);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(366, 326);
	glVertex2i(274, 439);
	glVertex2i(320, 268);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(272, 437);
	glVertex2i(215, 389);
	glVertex2i(318, 268);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(274, 441);
	glVertex2i(374, 328);
	glVertex2i(433, 590);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(270, 437);
	glVertex2i(213, 389);
	glVertex2i(215, 468);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(159, 457);
	glVertex2i(211, 389);
	glVertex2i(213, 468);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(212, 470);
	glVertex2i(157, 459);
	glVertex2i(182, 484);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1f, 0.1f, 0.0f);
	glVertex2i(157, 457);
	glVertex2i(182, 486);
	glVertex2i(110, 457);
	glEnd();



	glFlush();
}
void IniciarConfiguracion() {
	glClearColor(1, 0, 1, 1);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 800, 0, 600, 1, -1);
}

int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Demo 5 Poligonos");
	glutDisplayFunc(DibujarPolignonos);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}

