#include "funciones.h"

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(650, 350);
    glutCreateWindow("Display 1");
    Initializar();
    glutDisplayFunc(Dibujar);
    glutSpecialFunc(traslado);
    glutMainLoop();
    return 0;
}
