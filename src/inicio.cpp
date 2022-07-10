#include "funciones.h"

float mover_x = 0.0;
float mover_y = 0.0;

void Initializar(){
	glClearColor(0.0,0.0,0.0,0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-16.0,16.0,-16.0,16.0,-16.0,16.0);
}

void Dibujar(){
    glClear(GL_COLOR_BUFFER_BIT);
    PlanoCartesiano();
    roca_uno();
    roca_dos();
    roca_tres();
    roca_cuatro();
    estrella_uno();
    estrella_dos();
    estrella_tres();
    estrella_cuadro();
    planeta();
    glPushMatrix();
    glTranslatef(mover_x,mover_y,0.0);

    head_nave();
    body_nave();
    bot_nave();
    aleta_izquierda();
    aleta_derecha();
    glPushMatrix();
    glPopMatrix();
    glFlush();
}

void traslado(int key ,int x, int y){
    switch(key){
        case GLUT_KEY_UP:
            mover_y ++;
            break;
        case GLUT_KEY_DOWN:
            mover_y --;
            break;
        case GLUT_KEY_LEFT:
            mover_x --;
            break;
        case GLUT_KEY_RIGHT:
            mover_x ++;
            break;
    }
    glutPostRedisplay();
}
