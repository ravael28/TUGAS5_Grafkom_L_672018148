#include <windows.h>
#include <stdlib.h>
#include <gl/glut.h>

void ravinit(void);
void ravtampil(void);
void keyboard(unsigned char, int, int);
void ravukuran(int, int);

int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 30);
    glutCreateWindow("Ravael Dafa Kurniawan - 672018148");
    ravinit();
    glutDisplayFunc(ravtampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ravukuran);
    glutMainLoop();
    return 0;
}

void ravinit(void)
{
    glClearColor(0.5, 0.5, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(5.0);
    glLineWidth(5.0);
}

void tanah()
{
    //tanah bawah
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(-45, -45, 45);
    glVertex3f(45, -45, 45);
    glVertex3f(45, -45, -45);
    glVertex3f(-45, -45, -45);
    glEnd();

    //tanah kiri
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(45, -45, 45);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(45, -40, 45);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(45, -40, -45);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(45, -45, -45);
    glEnd();

    //tanah kanan
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(-45, -45, 45);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-45, -40, 45);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-45, -40, -45);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(-45, -45, -45);
    glEnd();

    //tanah belakang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(-45, -45, -45);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-45, -40, -45);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(45, -40, -45);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(45, -45, -45);
    glEnd();

    //tanah depan
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(-45, -45, 45);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-45, -40, 45);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(45, -40, 45);
    glColor3f(0.1, 0.0, 0.0);
    glVertex3f(45, -45, 45);
    glEnd();

    //tanah atas
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.5, 0.0);
    glVertex3f(-45, -40, 45);
    glVertex3f(45, -40, 45);
    glVertex3f(45, -40, -45);
    glVertex3f(-45, -40, -45);
    glEnd();
}
void alas()
{
    //alas atas
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-35, -39, 35);
    glVertex3f(35, -39, 35);
    glVertex3f(35, -39, -35);
    glVertex3f(-35, -39, -35);
    glEnd();

    //alas kiri
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(35, -39, 35);
    glVertex3f(35, -39, -35);
    glVertex3f(35, -40, -35);
    glVertex3f(35, -40, 35);
    glEnd();

     //alas kanan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-35, -39, 35);
    glVertex3f(-35, -39, -35);
    glVertex3f(-35, -40, -35);
    glVertex3f(-35, -40, 35);
    glEnd();

    //alas belakang
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-35, -39, -35);
    glVertex3f(35, -39, -35);
    glVertex3f(35, -40, -35);
    glVertex3f(-35, -40, -35);
    glEnd();

      //alas depan
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);
    glVertex3f(-35, -39, 35);
    glVertex3f(35, -39, 35);
    glVertex3f(35, -40, 35);
    glVertex3f(-35, -40, 35);
    glEnd();
}
void tembok()
{
    //tembok depan kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-35, -39, 35);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, -39, 35);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(0, -1, 35);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-35, -1, 35);
    glEnd();

    //tembok depan samping
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, -39, 35);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, -39, 15);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(0, -1, 15);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(0, -1, 35);
    glEnd();

    //tembok depan kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0, -39, 15);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(35, -39, 15);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(35, -1, 15);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(0, -1, 15);
    glEnd();

    //tembok kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(35, -39, 15);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(35, -39, -35);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(35, -1, -35);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(35, -1, 15);
    glEnd();

    //tembok kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-35, -39, 35);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-35, -39, -35);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-35, -1, -35);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-35, -1, 35);
    glEnd();

    //tembok belakang
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(-35, -39, -35);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(35, -39, -35);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(35, -1, -35);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-35, -1, -35);
    glEnd();

}
void atap()
{
    //bawah
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-37, -1, 37);
    glVertex3f(37, -1, 37);
    glVertex3f(37, -1, -37);
    glVertex3f(-37, -1, -37);
    glEnd();

    //depan
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-37, -1, 37);
    glVertex3f(37, -1, 37);
    glVertex3f(37, 6, 37);
    glVertex3f(-37, 6, 37);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-37, -1, 37);
    glVertex3f(-37, -1, -37);
    glVertex3f(-37, 6, -37);
    glVertex3f(-37, 6, 37);
    glEnd();

    //kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(37, -1, 37);
    glVertex3f(37, -1, -37);
    glVertex3f(37, 6, -37);
    glVertex3f(37, 6, 37);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-37, -1, -37);
    glVertex3f(37, -1, -37);
    glVertex3f(37, 6, -37);
    glVertex3f(-37, 6, -37);
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(-37, 6, 37);
    glVertex3f(37, 6, 37);
    glVertex3f(37, 6, -37);
    glVertex3f(-37, 6, -37);
    glEnd();

}
void dekorasi()
{
    //pintu
    glBegin(GL_QUADS);
    glColor4f(0.1, 0.0, 0.0, 0.5);
    glVertex3f(10, -38.8, 15.5);
    glVertex3f(22, -38.8, 15.5);
    glVertex3f(22, -14.8, 15.5);
    glVertex3f(10, -14.8, 15.5);
    glEnd();

    //gagang pintu
    glBegin(GL_POINTS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(20, -26.8, 15.6);
    glEnd();

    //depan
    //jendela outline
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-25, -5, 35.5);
    glVertex3f(-10, -5, 35.5);
    glVertex3f(-10, -30, 35.5);
    glVertex3f(-25, -30, 35.5);
    glEnd();

    //
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-17.5, -5, 35.5);
    glVertex3f(-17.5, -30, 35.5);
    glEnd();
    //
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-25, -17.5, 35.5);
    glVertex3f(-10, -17.5, 35.5);
    glEnd();

    //jendela
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-25, -5, 35.5);
    glVertex3f(-10, -5, 35.5);
    glVertex3f(-10, -30, 35.5);
    glVertex3f(-25, -30, 35.5);
    glEnd();

    //belakang
    //jendela outline
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(25, -5, -35.5);
    glVertex3f(10, -5, -35.5);
    glVertex3f(10, -30, -35.5);
    glVertex3f(25, -30, -35.5);
    glEnd();

    //
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(17.5, -5, -35.5);
    glVertex3f(17.5, -30, -35.5);
    glEnd();
    //
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(25, -17.5, -35.5);
    glVertex3f(10, -17.5, -35.5);
    glEnd();

    //jendela
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(25, -5, -35.5);
    glVertex3f(10, -5, -35.5);
    glVertex3f(10, -30, -35.5);
    glVertex3f(25, -30, -35.5);
    glEnd();

    //kiri
    //jendela outline
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(35.5, -5, -5);
    glVertex3f(35.5, -5, 10);
    glVertex3f(35.5, -30, 10);
    glVertex3f(35.5, -30, -5);
    glEnd();

    //
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(35.5, -5, 2.5);
    glVertex3f(35.5, -30, 2.5);
    glEnd();

    //jendela
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(35.5, -5, -5);
    glVertex3f(35.5, -5, 10);
    glVertex3f(35.5, -30, 10);
    glVertex3f(35.5, -30, -5);
    glEnd();

    //kanan
    //jendela outline
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-35.5, -5, -10);
    glVertex3f(-35.5, -5, -25);
    glVertex3f(-35.5, -30, -25);
    glVertex3f(-35.5, -30, -10);
    glEnd();

    //
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-35.5, -5, -17.5);
    glVertex3f(-35.5, -30, -17.5);
    glEnd();

    //jendela
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-35.5, -5, -10);
    glVertex3f(-35.5, -5, -25);
    glVertex3f(-35.5, -30, -25);
    glVertex3f(-35.5, -30, -10);
    glEnd();
}
void furniture()
{
    //1. karpet pintu
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(12, -38.8, 23);
    glVertex3f(20, -38.8, 23);
    glVertex3f(20, -38.8, 16);
    glVertex3f(12, -38.8, 16);
    glEnd();

    //2. kasur
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-27, -38.5, 23);
    glVertex3f(-12, -38.5, 23);
    glVertex3f(-12, -33.5, 23);
    glVertex3f(-27, -33.5, 23);

    glVertex3f(-27, -33.5, 23);
    glVertex3f(-12, -33.5, 23);
    glVertex3f(-12, -33.5, 13);
    glVertex3f(-27, -33.5, 13);

    glVertex3f(-27, -33.5, 13);
    glVertex3f(-12, -33.5, 13);
    glVertex3f(-12, -38.5, 13);
    glVertex3f(-27, -38.5, 13);

    glVertex3f(-27, -38.5, 23);
    glVertex3f(-27, -33.5, 23);
    glVertex3f(-27, -33.5, 13);
    glVertex3f(-27, -38.5, 13);

    glVertex3f(-12, -38.5, 23);
    glVertex3f(-12, -33.5, 23);
    glVertex3f(-12, -33.5, 13);
    glVertex3f(-12, -38.5, 13);

    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(-12, -34, 22);
    glVertex3f(-12, -34, 14);
    glVertex3f(-5, -34, 14);
    glVertex3f(-5, -34, 22);

    glVertex3f(-5, -34, 22);
    glVertex3f(-5, -39, 22);
    glVertex3f(-12, -39, 22);
    glVertex3f(-12, -34, 22);

    glVertex3f(-5, -34, 14);
    glVertex3f(-5, -39, 14);
    glVertex3f(-12, -39, 14);
    glVertex3f(-12, -34, 14);

    glVertex3f(-5, -39, 22);
    glVertex3f(-5, -39, 14);
    glVertex3f(-5, -34, 14);
    glVertex3f(-5, -34, 22);
    glEnd();

    //3. lemari
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(0, -38.5, -25);
    glVertex3f(0, -18.5, -25);
    glVertex3f(12, -18.5, -25);
    glVertex3f(12, -38.5, -25);

    glVertex3f(0, -38.5, -25);
    glVertex3f(0, -38.5, -17);
    glVertex3f(0, -18.5, -17);
    glVertex3f(0, -18.5, -25);

    glVertex3f(12, -38.5, -25);
    glVertex3f(12, -38.5, -17);
    glVertex3f(12, -18.5, -17);
    glVertex3f(12, -18.5, -25);

    glVertex3f(0, -38.5, -17);
    glVertex3f(0, -18.5, -17);
    glVertex3f(12, -18.5, -17);
    glVertex3f(12, -38.5, -17);

    glVertex3f(0, -18.5, -17);
    glVertex3f(0, -18.5, -25);
    glVertex3f(12, -18.5, -25);
    glVertex3f(12, -18.5, -17);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0, -38.5, -17);
    glVertex3f(0, -18.5, -17);
    glVertex3f(12, -18.5, -17);
    glVertex3f(12, -38.5, -17);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(6, -38.5, -16.5);
    glVertex3f(6, -18.5, -16.5);
    glEnd();

    glBegin(GL_POINTS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(5, -28.5, -16.5);
    glVertex3f(7, -28.5, -16.5);
    glEnd();

    //4. karpet santai
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(-30, -38.5, -5);
    glColor3f(1.0, 0.5, 0.5);
    glVertex3f(-30, -38.5, -30);
    glColor3f(1.0, 0.5, 1.0);
    glVertex3f(-5, -38.5, -30);
    glColor3f(0.0, 0.5, 0.5);
    glVertex3f(-5, -38.5, -5);
    glEnd();

    //5. meja
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(30, -32, -30);
    glVertex3f(18, -32, -30);
    glVertex3f(18, -32, -15);
    glVertex3f(30, -32, -15);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(29, -32, -29);
    glVertex3f(29, -38.5, -29);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(29, -32, -16);
    glVertex3f(29, -38.5, -16);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(19, -32, -16);
    glVertex3f(19, -38.5, -16);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(19, -32, -29);
    glVertex3f(19, -38.5, -29);
    glEnd();


    //6. kursi
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(20, -35, -13);
    glVertex3f(20, -35, -8);
    glVertex3f(28, -35, -8);
    glVertex3f(28, -35, -13);

    glVertex3f(20, -35, -8);
    glVertex3f(28, -35, -8);
    glVertex3f(28, -25, -8);
    glVertex3f(20, -25, -8);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(20, -35, -8);
    glVertex3f(20, -38.5, -8);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(28, -35, -8);
    glVertex3f(28, -38.5, -8);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(20, -35, -13);
    glVertex3f(20, -38.5, -13);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 0.5);
    glVertex3f(28, -35, -13);
    glVertex3f(28, -38.5, -13);
    glEnd();
}
void pagar()
{
    //pagar depan panjang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(30, -40, 42);
    glVertex3f(32, -40, 42);
    glVertex3f(32, -25, 42);
    glVertex3f(30, -25, 42);
    glEnd();

    //pagar belakang panjang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(30, -40, 40);
    glVertex3f(32, -40, 40);
    glVertex3f(32, -25, 40);
    glVertex3f(30, -25, 40);
    glEnd();

    //pagar kiri panjang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(32, -40, 42);
    glVertex3f(32, -40, 40);
    glVertex3f(32, -25, 40);
    glVertex3f(32, -25, 42);
    glEnd();

     //pagar kanan panjang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(30, -40, 42);
    glVertex3f(30, -40, 40);
    glVertex3f(30, -25, 40);
    glVertex3f(30, -25, 42);
    glEnd();

    // pisah //

     //pagar depan panjang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(0, -40, 42);
    glVertex3f(-2, -40, 42);
    glVertex3f(-2, -25, 42);
    glVertex3f(0, -25, 42);
    glEnd();

    //pagar belakang panjang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(0, -40, 40);
    glVertex3f(-2, -40, 40);
    glVertex3f(-2, -25, 40);
    glVertex3f(0, -25, 40);
    glEnd();

    //pagar kiri panjang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(-2, -40, 42);
    glVertex3f(-2, -40, 40);
    glVertex3f(-2, -25, 40);
    glVertex3f(-2, -25, 42);
    glEnd();

     //pagar kanan panjang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(0, -40, 42);
    glVertex3f(0, -40, 40);
    glVertex3f(0, -25, 40);
    glVertex3f(0, -25, 42);
    glEnd();

    //garis depan kiri
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(32, -26, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(32, -40, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(41, -40, 41);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(41, -26, 41);
    glEnd();

    //garis samping kiri
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(41, -26, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(41, -40, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(41, -40, -41);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(41, -26, -41);
    glEnd();

    //garis samping kanan
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(-41, -26, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-41, -40, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-41, -40, -41);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(-41, -26, -41);
    glEnd();

    //garis belakang
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(41, -26, -41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(41, -40, -41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-41, -40, -41);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(-41, -26, -41);
    glEnd();

    //garis depan kanan
    glBegin(GL_QUADS);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(-41, -26, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-41, -40, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-2, -40, 41);
    glColor3f(0.1, 0.1, 0.1);
    glVertex3f(-2, -26, 41);
    glEnd();

    //pintu gerbang kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0, -40, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0, -26, 41);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(15, -24, 41);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(15, -40, 41);
    glEnd();

    //pintu gerbang kanan
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(15, -40, 41);
    glColor3f(1.0, 1.0, 0.0);
    glVertex3f(15, -24, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(30, -26, 41);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(30, -40, 41);
    glEnd();

}
void pilar()
{
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(33, -39, 33);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(30, -39, 33);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(30, -1, 33);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(33, -1, 33);
    glEnd();

    //kiri
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(33, -39, 33);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(33, -39, 30);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(33, -1, 30);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(33, -1, 33);
    glEnd();

     //kanan
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(30, -39, 33);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(30, -39, 30);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(30, -1, 30);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(30, -1, 33);
    glEnd();

    //belakang
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(33, -39, 30);
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(30, -39, 30);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(30, -1, 30);
    glColor3f(0.0, 1.0, 1.0);
    glVertex3f(33, -1, 30);
    glEnd();

}
void ravtampil(void)
{
    if (is_depth)
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    //
    tanah();
    alas();
    tembok();
    atap();
    dekorasi();
    furniture();
    pagar();
    pilar();
    //
    glPopMatrix();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 0.0);
        break;
    case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '9':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case '1':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    ravtampil();
}

void ravukuran(int lebar, int tinggi)
{
    if(tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar/tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
