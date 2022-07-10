#include "funciones.h"

void PlanoCartesiano(){
	glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
        glVertex2f(-16.0,0.0);
        glVertex2f(16.0,0.0);
        glVertex2f(0.0,-16.0);
        glVertex2f(0.0,16.0);
    glEnd();
}





void aleta_izquierda(){
	glColor3f(0.5f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
			glVertex2f(2,5);
			glVertex2f(3,5);
			glVertex2f(3,3);
			glVertex2f(2,3);
     glEnd();
}

void aleta_derecha(){
	glColor3f(0.5f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(5,5);
		glVertex2f(6,5);
		glVertex2f(6,3);
		glVertex2f(5,3);
	glEnd();
}

void head_nave(){
	glColor3f(0.0f, 0.5f, 0.5f);
	glBegin(GL_TRIANGLES);
		glVertex2f(4,8);
		glVertex2f(3,6);
		glVertex2f(5,6);
	glEnd();
}
void body_nave(){
	glColor3f(0.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glVertex2f(3,6);
		glVertex2f(5,6);
		glVertex2f(5,2);
		glVertex2f(3,2);
	glEnd();
}
void bot_nave(){
	glColor3f(0.0f, 0.5f, 0.5f);
		glBegin(GL_QUADS);
		glVertex2f(2,1);
		glVertex2f(3,2);
		glVertex2f(5,2);
		glVertex2f(6,1);
	glEnd();
}



void roca_uno(){
	glColor3f(0.4f, 0.0f, 0.0f);
			glBegin(GL_POLYGON);
			glVertex2f(10,11);
			glVertex2f(10,12);
			glVertex2f(11,13);
			glVertex2f(12,13);
			glVertex2f(13,12);
			glVertex2f(13,11);
			glVertex2f(12,10);
			glVertex2f(11,10);
	glEnd();
}

void roca_dos(){
	glColor3f(0.4f, 0.0f, 0.0f);
				glBegin(GL_POLYGON);
				glVertex2f(10,-11);
				glVertex2f(10,-12);
				glVertex2f(11,-13);
				glVertex2f(12,-13);
				glVertex2f(13,-12);
				glVertex2f(13,-11);
				glVertex2f(12,-10);
				glVertex2f(11,-10);
		glEnd();
}

void roca_tres(){
	glColor3f(0.4f, 0.0f, 0.0f);
					glBegin(GL_POLYGON);
					glVertex2f(-10,11);
					glVertex2f(-10,12);
					glVertex2f(-11,13);
					glVertex2f(-12,13);
					glVertex2f(-13,12);
					glVertex2f(-13,11);
					glVertex2f(-12,10);
					glVertex2f(-11,10);
			glEnd();
}

void roca_cuatro(){
	glColor3f(0.4f, 0.0f, 0.0f);
	glBegin(GL_POLYGON);
					glVertex2f(-10,-11);
					glVertex2f(-10,-12);
					glVertex2f(-11,-13);
					glVertex2f(-12,-13);
					glVertex2f(-13,-12);
					glVertex2f(-13,-11);
					glVertex2f(-12,-10);
					glVertex2f(-11,-10);
	glEnd();
}

void estrella_uno(){
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);
		glVertex2f(-7,4);
		glVertex2f(-6,5);
		glVertex2f(-5,4);
		glVertex2f(-6,3);
	glEnd();
}

void estrella_dos(){
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
		glBegin(GL_QUADS);
		glVertex2f(-5,-4);
		glVertex2f(-4,-5);
		glVertex2f(-3,-4);
		glVertex2f(-4,-3);
		glEnd();
}

void estrella_tres(){
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
		glBegin(GL_QUADS);
		glVertex2f(9,-4);
		glVertex2f(8,-5);
		glVertex2f(7,-4);
		glVertex2f(8,-3);
	glEnd();

}

void estrella_cuadro(){
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
		glBegin(GL_QUADS);
		glVertex2f(5,4);
		glVertex2f(4,5);
		glVertex2f(3,4);
		glVertex2f(4,3);
	glEnd();

}

void planeta(){
	glColor3f(0.0f, 0.6f, 0.0f);
			glBegin(GL_POLYGON);
			glVertex2f(-6,16);
			glVertex2f(-5,14);
			glVertex2f(-3,12);
			glVertex2f(3,12);
			glVertex2f(5,14);
			glVertex2f(6,16);
		glEnd();
}


