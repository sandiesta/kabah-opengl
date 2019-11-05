#include <Windows.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <gl\glut.h>
#include <math.h>
#include <stdio.h>

double rotate_x = 0;
double rotate_y = 0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glRotatef(rotate_x, 1.0, 0.0, 0.0);
    glRotatef(rotate_y, 0.0, 1.0, 0.0);

    //belakang
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(0.5, 0.5, -1);
    glVertex3f(0.5, -0.5, -1);
    glVertex3f(-0.5, -0.5, -1);
    glVertex3f(-0.5, 0.5, -1);
    glEnd();

    //kiri
    glBegin(GL_POLYGON);
    glColor3ub(82, 78, 78);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(-0.5, -0.5, -1.0);
    glVertex3f(-0.5, 0.5, -1.0);
    glVertex3f(-0.5, 0.5, 0.0);
    glEnd();

    //bawah
    glBegin(GL_POLYGON);
    glColor3ub(128, 119, 119);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(-0.5, -0.5, -1.0);
    glVertex3f(0.5, -0.5, -1.0);
    glVertex3f(0.5, -0.5, 0.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(235, 198, 52);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(0.5, -0.5, 0.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(235, 198, 52);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(-0.5, -0.5, -1.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(235, 198, 52);
    glVertex3f(0.5, 0.5, 0.0);
    glVertex3f(0.5, 0.5, -1.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(235, 198, 52);
    glVertex3f(-0.5, -0.5, -1.0);
    glVertex3f(0.5, -0.5, -1.0);
    glEnd();

    //depan
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    glVertex3f(0.5, 0.5, 0.0);
    glVertex3f(0.5, -0.5, 0.0);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(-0.5, 0.5, 0.0);
    glEnd();

    //atas
    glBegin(GL_POLYGON);
    glColor3ub(128, 119, 119);
    glVertex3f(-0.5, 0.5, 0.0);
    glVertex3f(-0.5, 0.5, -1.0);
    glVertex3f(0.5, 0.5, -1.0);
    glVertex3f(0.5, 0.5, 0.0);
    glEnd();

    //kanan
    glBegin(GL_POLYGON);
    glColor3ub(82, 78, 78);
    glVertex3f(0.5, 0.5, 0.0);
    glVertex3f(0.5, 0.5, -1.0);
    glVertex3f(0.5, -0.5, -1.0);
    glVertex3f(0.5, -0.5, 0.0);
    glEnd();

    //hiasan

        //atas
        glBegin(GL_POLYGON);
        glColor3ub(235, 198, 52);
        glVertex3f(0.5, 0.3, 0.0);
        glVertex3f(0.5, 0.3, -1.0);
        glVertex3f(0.5, 0.25, -1.0);
        glVertex3f(0.5, 0.25, 0.0);
        glVertex3f(-0.5, 0.25, 0.0);
        glVertex3f(-0.5, 0.3, 0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(-0.5, 0.3, -1.0);
        glVertex3f(-0.5, 0.3, 0.0);
        glVertex3f(-0.5, 0.25, 0.0);
        glVertex3f(-0.5, 0.25, -1.0);
        glVertex3f(0.5, 0.25, -1.0);
        glVertex3f(0.5, 0.3, -1.0);
        glEnd();

        //depan
        glBegin(GL_POLYGON);
        glVertex3f(-0.44, 0.15, 0.0);
        glVertex3f(-0.47, 0.125, 0.0);
        glVertex3f(-0.44, 0.1, 0.0);
        glVertex3f(-0.41, 0.125, 0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.01, 0.15, 0.0);
        glVertex3f(0.04, 0.125, 0.0);
        glVertex3f(0.01, 0.1, 0.0);
        glVertex3f(-0.02, 0.125, 0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.08, 0.15, 0.0);
        glVertex3f(0.41, 0.15, 0.0);
        glVertex3f(0.41, 0.1, 0.0);
        glVertex3f(0.08, 0.1, 0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.47, 0.15, 0.0);
        glVertex3f(0.5, 0.125, 0.0);
        glVertex3f(0.47, 0.1, 0.0);
        glVertex3f(0.44, 0.125, 0.0);
        glEnd();

        //kanan
        glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.1, -0.06);
        glVertex3f(0.5, 0.125, -0.09);
        glVertex3f(0.5, 0.15, -0.06);
        glVertex3f(0.5, 0.125, -0.03);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.15, -0.12);
        glVertex3f(0.5, 0.15, -0.45);
        glVertex3f(0.5, 0.1, -0.45);
        glVertex3f(0.5, 0.1, -0.12);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.1, -0.51);
        glVertex3f(0.5, 0.125, -0.54);
        glVertex3f(0.5, 0.15, -0.51);
        glVertex3f(0.5, 0.125, -0.48);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.15, -0.57);
        glVertex3f(0.5, 0.15, -0.9);
        glVertex3f(0.5, 0.1, -0.9);
        glVertex3f(0.5, 0.1, -0.57);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.5, 0.1, -0.93);
        glVertex3f(0.5, 0.125, -0.99);
        glVertex3f(0.5, 0.15, -0.96);
        glVertex3f(0.5, 0.125, -0.93);
        glEnd();

        //kiri
        glBegin(GL_POLYGON);
        glVertex3f(-0.5, 0.1, -0.06);
        glVertex3f(-0.5, 0.125, -0.09);
        glVertex3f(-0.5, 0.15, -0.06);
        glVertex3f(-0.5, 0.125, -0.03);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(-0.5, 0.15, -0.12);
        glVertex3f(-0.5, 0.15, -0.45);
        glVertex3f(-0.5, 0.1, -0.45);
        glVertex3f(-0.5, 0.1, -0.12);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(-0.5, 0.1, -0.51);
        glVertex3f(-0.5, 0.125, -0.54);
        glVertex3f(-0.5, 0.15, -0.51);
        glVertex3f(-0.5, 0.125, -0.48);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(-0.5, 0.15, -0.57);
        glVertex3f(-0.5, 0.15, -0.9);
        glVertex3f(-0.5, 0.1, -0.9);
        glVertex3f(-0.5, 0.1, -0.57);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(-0.5, 0.1, -0.93);
        glVertex3f(-0.5, 0.125, -0.99);
        glVertex3f(-0.5, 0.15, -0.96);
        glVertex3f(-0.5, 0.125, -0.93);
        glEnd();

        //belakang
        glBegin(GL_POLYGON);
        glVertex3f(-0.44, 0.15, -1.0);
        glVertex3f(-0.47, 0.125, -1.0);
        glVertex3f(-0.44, 0.1, -1.0);
        glVertex3f(-0.41, 0.125, -1.0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(-0.05, 0.15, -1.0);
        glVertex3f(-0.38, 0.15, -1.0);
        glVertex3f(-0.38, 0.1, -1.0);
        glVertex3f(-0.05, 0.1, -1.0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.01, 0.15, -1.0);
        glVertex3f(0.04, 0.125, -1.0);
        glVertex3f(0.01, 0.1, -1.0);
        glVertex3f(-0.02, 0.125, -1.0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.08, 0.15, -1.0);
        glVertex3f(0.41, 0.15, -1.0);
        glVertex3f(0.41, 0.1, -1.0);
        glVertex3f(0.08, 0.1, -1.0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex3f(0.47, 0.15, -1.0);
        glVertex3f(0.5, 0.125, -1.0);
        glVertex3f(0.47, 0.1, -1.0);
        glVertex3f(0.44, 0.125, -1.0);
        glEnd();


    //pintu
    glBegin(GL_POLYGON);
    glColor3ub(235, 198, 52);
    glVertex3f(-0.38, -0.38, 0.0);
    glVertex3f(-0.38, 0.15, 0.0);
    glVertex3f(-0.05, 0.15, 0.0);
    glVertex3f(-0.05, -0.38, 0.0);
    glEnd();

    //hiasan bawah kabah
            glBegin(GL_LINES);
            glColor3ub(235, 198, 52);
            glVertex3f(-0.5, -0.38, 0.0);
            glVertex3f(0.5, -0.38, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, 0.0);
            glVertex3f(0.5, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, 0.0);
            glVertex3f(0.5, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, 0.0);
            glVertex3f(0.5, -0.38, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.42, 0.0);
            glVertex3f(0.5, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, 0.0);
            glVertex3f(0.5, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -1.0);
            glVertex3f(0.5, -0.38, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -1.0);
            glVertex3f(0.5, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -1.0);
            glVertex3f(0.5, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, 0.0);
            glVertex3f(-0.5, -0.38, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, 0.0);
            glVertex3f(-0.5, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, 0.0);
            glVertex3f(-0.5, -0.46, -1.0);
            glEnd();

            //garis2
            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, 0.0);
            glVertex3f(-0.5, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.4, -0.38, 0.0);
            glVertex3f(-0.4, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.3, -0.38, 0.0);
            glVertex3f(-0.3, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.2, -0.38, 0.0);
            glVertex3f(-0.2, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.1, -0.38, 0.0);
            glVertex3f(-0.1, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.0, -0.38, 0.0);
            glVertex3f(0.0, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, 0.0);
            glVertex3f(0.5, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.4, -0.38, 0.0);
            glVertex3f(0.4, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.3, -0.38, 0.0);
            glVertex3f(0.3, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.2, -0.38, 0.0);
            glVertex3f(0.2, -0.42, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.1, -0.38, 0.0);
            glVertex3f(0.1, -0.42, 0.0);
            glEnd();

            //garis3
            glBegin(GL_LINES);
            glVertex3f(-0.45, -0.42, 0.0);
            glVertex3f(-0.45, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.35, -0.42, 0.0);
            glVertex3f(-0.35, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.25, -0.42, 0.0);
            glVertex3f(-0.25, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.15, -0.42, 0.0);
            glVertex3f(-0.15, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.05, -0.42, 0.0);
            glVertex3f(-0.05, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.45, -0.42, 0.0);
            glVertex3f(0.45, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.35, -0.42, 0.0);
            glVertex3f(0.35, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.25, -0.42, 0.0);
            glVertex3f(0.25, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.15, -0.42, 0.0);
            glVertex3f(0.15, -0.46, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.05, -0.42, 0.0);
            glVertex3f(0.05, -0.46, 0.0);
            glEnd();

            //garis4
            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, 0.0);
            glVertex3f(-0.5, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.4, -0.46, 0.0);
            glVertex3f(-0.4, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.3, -0.46, 0.0);
            glVertex3f(-0.3, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.2, -0.46, 0.0);
            glVertex3f(-0.2, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.1, -0.46, 0.0);
            glVertex3f(-0.1, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.0, -0.46, 0.0);
            glVertex3f(0.0, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, 0.0);
            glVertex3f(0.5, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.4, -0.46, 0.0);
            glVertex3f(0.4, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.3, -0.46, 0.0);
            glVertex3f(0.3, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.2, -0.46, 0.0);
            glVertex3f(0.2, -0.5, 0.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.1, -0.46, 0.0);
            glVertex3f(0.1, -0.5, 0.0);
            glEnd();



            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -1.0);
            glVertex3f(-0.5, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.4, -0.38, -1.0);
            glVertex3f(-0.4, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.3, -0.38, -1.0);
            glVertex3f(-0.3, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.2, -0.38, -1.0);
            glVertex3f(-0.2, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.1, -0.38, -1.0);
            glVertex3f(-0.1, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.0, -0.38, -1.0);
            glVertex3f(0.0, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -1.0);
            glVertex3f(0.5, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.4, -0.38, -1.0);
            glVertex3f(0.4, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.3, -0.38, -1.0);
            glVertex3f(0.3, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.2, -0.38, -1.0);
            glVertex3f(0.2, -0.42, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.1, -0.38, -1.0);
            glVertex3f(0.1, -0.42, -1.0);
            glEnd();

            //garis3
            glBegin(GL_LINES);
            glVertex3f(-0.45, -0.42, -1.0);
            glVertex3f(-0.45, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.35, -0.42, -1.0);
            glVertex3f(-0.35, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.25, -0.42, -1.0);
            glVertex3f(-0.25, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.15, -0.42, -1.0);
            glVertex3f(-0.15, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.05, -0.42, -1.0);
            glVertex3f(-0.05, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.45, -0.42, -1.0);
            glVertex3f(0.45, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.35, -0.42, -1.0);
            glVertex3f(0.35, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.25, -0.42, -1.0);
            glVertex3f(0.25, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.15, -0.42, -1.0);
            glVertex3f(0.15, -0.46, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.05, -0.42, -1.0);
            glVertex3f(0.05, -0.46, -1.0);
            glEnd();

            //garis4
            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -1.0);
            glVertex3f(-0.5, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.4, -0.46, -1.0);
            glVertex3f(-0.4, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.3, -0.46, -1.0);
            glVertex3f(-0.3, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.2, -0.46, -1.0);
            glVertex3f(-0.2, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.1, -0.46, -1.0);
            glVertex3f(-0.1, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.0, -0.46, -1.0);
            glVertex3f(0.0, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -1.0);
            glVertex3f(0.5, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.4, -0.46, -1.0);
            glVertex3f(0.4, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.3, -0.46, -1.0);
            glVertex3f(0.3, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.2, -0.46, -1.0);
            glVertex3f(0.2, -0.5, -1.0);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.1, -0.46, -1.0);
            glVertex3f(0.1, -0.5, -1.0);
            glEnd();

        //garis5
            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.1);
            glVertex3f(0.5, -0.42, -0.1);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.2);
            glVertex3f(0.5, -0.42, -0.2);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.3);
            glVertex3f(0.5, -0.42, -0.3);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.4);
            glVertex3f(0.5, -0.42, -0.4);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.5);
            glVertex3f(0.5, -0.42, -0.5);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.6);
            glVertex3f(0.5, -0.42, -0.6);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.7);
            glVertex3f(0.5, -0.42, -0.7);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.8);
            glVertex3f(0.5, -0.42, -0.8);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -0.9);
            glVertex3f(0.5, -0.42, -0.9);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.38, -1.0);
            glVertex3f(0.5, -0.42, -1.0);
            glEnd();

            //gariss72
            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.15);
            glVertex3f(0.5, -0.42, -0.15);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.25);
            glVertex3f(0.5, -0.42, -0.25);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.35);
            glVertex3f(0.5, -0.42, -0.35);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.45);
            glVertex3f(0.5, -0.42, -0.45);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.55);
            glVertex3f(0.5, -0.42, -0.55);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.65);
            glVertex3f(0.5, -0.42, -0.65);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.75);
            glVertex3f(0.5, -0.42, -0.75);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.85);
            glVertex3f(0.5, -0.42, -0.85);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.95);
            glVertex3f(0.5, -0.42, -0.95);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.42, -0.05);
            glVertex3f(0.5, -0.46, -0.05);
            glEnd();

            //garis666
            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.1);
            glVertex3f(0.5, -0.5, -0.1);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.2);
            glVertex3f(0.5, -0.5, -0.2);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.3);
            glVertex3f(0.5, -0.5, -0.3);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.4);
            glVertex3f(0.5, -0.5, -0.4);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.5);
            glVertex3f(0.5, -0.5, -0.5);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.6);
            glVertex3f(0.5, -0.5, -0.6);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.7);
            glVertex3f(0.5, -0.5, -0.7);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.8);
            glVertex3f(0.5, -0.5, -0.8);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -0.9);
            glVertex3f(0.5, -0.5, -0.9);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(0.5, -0.46, -1.0);
            glVertex3f(0.5, -0.5, -1.0);
            glEnd();

            //garis5
            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.1);
            glVertex3f(-0.5, -0.42, -0.1);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.2);
            glVertex3f(-0.5, -0.42, -0.2);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.3);
            glVertex3f(-0.5, -0.42, -0.3);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.4);
            glVertex3f(-0.5, -0.42, -0.4);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.5);
            glVertex3f(-0.5, -0.42, -0.5);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.6);
            glVertex3f(-0.5, -0.42, -0.6);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.7);
            glVertex3f(-0.5, -0.42, -0.7);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.8);
            glVertex3f(-0.5, -0.42, -0.8);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -0.9);
            glVertex3f(-0.5, -0.42, -0.9);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.38, -1.0);
            glVertex3f(-0.5, -0.42, -1.0);
            glEnd();

            //garis5

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.05);
            glVertex3f(-0.5, -0.46, -0.05);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.25);
            glVertex3f(-0.5, -0.46, -0.25);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.35);
            glVertex3f(-0.5, -0.46, -0.35);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.45);
            glVertex3f(-0.5, -0.46, -0.45);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.55);
            glVertex3f(-0.5, -0.46, -0.55);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.65);
            glVertex3f(-0.5, -0.46, -0.65);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.75);
            glVertex3f(-0.5, -0.46, -0.75);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.85);
            glVertex3f(-0.5, -0.46, -0.85);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.95);
            glVertex3f(-0.5, -0.46, -0.95);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.15);
            glVertex3f(-0.5, -0.46, -0.15);
            glEnd();

            //garis5
            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -0.1);
            glVertex3f(-0.5, -0.50, -0.1);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -0.2);
            glVertex3f(-0.5, -0.50, -0.2);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -0.3);
            glVertex3f(-0.5, -0.50, -0.3);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.42, -0.4);
            glVertex3f(-0.5, -0.46, -0.4);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -0.5);
            glVertex3f(-0.5, -0.50, -0.5);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -0.6);
            glVertex3f(-0.5, -0.50, -0.6);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -0.7);
            glVertex3f(-0.5, -0.50, -0.7);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -0.8);
            glVertex3f(-0.5, -0.50, -0.8);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -0.9);
            glVertex3f(-0.5, -0.50, -0.9);
            glEnd();

            glBegin(GL_LINES);
            glVertex3f(-0.5, -0.46, -1.0);
            glVertex3f(-0.5, -0.50, -1.0);
            glEnd();



    //makam
        //persegi1
        glBegin(GL_POLYGON);
        glColor3ub(204, 209, 217);
        glVertex3f(-0.3, -0.5, 0.7);
        glVertex3f(-0.4, -0.5, 0.7);
        glVertex3f(-0.4, -0.4, 0.7);
        glVertex3f(-0.3, -0.4, 0.7);
        glEnd();
        glFlush();

        //persegi2
        glBegin(GL_POLYGON);
        glColor3ub(204, 209, 217);
        glVertex3f(-0.4, -0.5, 0.7);
        glVertex3f(-0.45, -0.5, 0.8);
        glVertex3f(-0.45, -0.4, 0.8);
        glVertex3f(-0.4, -0.4, 0.7);
        glEnd();
        glFlush();

        //persegi3
        glBegin(GL_POLYGON);
        glColor3ub(204, 209, 217);
        glVertex3f(-0.45, -0.5, 0.8);
        glVertex3f(-0.4, -0.5, 0.9);
        glVertex3f(-0.4, -0.4, 0.9);
        glVertex3f(-0.45, -0.4, 0.8);
        glEnd();
        glFlush();

        //persegi4
        glBegin(GL_POLYGON);
        glColor3ub(204, 209, 217);
        glVertex3f(-0.3, -0.5, 0.9);
        glVertex3f(-0.4, -0.5, 0.9);
        glVertex3f(-0.4, -0.4, 0.9);
        glVertex3f(-0.3, -0.4, 0.9);
        glEnd();
        glFlush();

        //persegi5
        glBegin(GL_POLYGON);
        glColor3ub(204, 209, 217);
        glVertex3f(-0.25, -0.5, 0.8);
        glVertex3f(-0.3, -0.5, 0.9);
        glVertex3f(-0.3, -0.4, 0.9);
        glVertex3f(-0.25, -0.4, 0.8);
        glEnd();
        glFlush();

        //persegi6
        glBegin(GL_POLYGON);
        glColor3ub(204, 209, 217);
        glVertex3f(-0.3, -0.5, 0.7);
        glVertex3f(-0.25, -0.5, 0.8);
        glVertex3f(-0.25, -0.4, 0.8);
        glVertex3f(-0.3, -0.4, 0.7);
        glEnd();
        glFlush();

        //segi6 atas
        glBegin(GL_POLYGON);
        glColor3ub(204, 209, 217);
        glVertex3f(-0.3, -0.4, 0.7);
        glVertex3f(-0.4, -0.4, 0.7);
        glVertex3f(-0.45, -0.4, 0.8);
        glVertex3f(-0.4, -0.4, 0.9);
        glVertex3f(-0.3, -0.4, 0.9);
        glVertex3f(-0.25, -0.4, 0.8);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(235, 198, 52);
        glVertex3f(-0.3, -0.4, 0.73);
        glVertex3f(-0.3, -0.1, 0.73);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(235, 198, 52);
        glVertex3f(-0.4, -0.4, 0.73);
        glVertex3f(-0.4, -0.1, 0.73);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(235, 198, 52);
        glVertex3f(-0.43, -0.4, 0.8);
        glVertex3f(-0.43, -0.1, 0.8);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(235, 198, 52);
        glVertex3f(-0.4, -0.4, 0.88);
        glVertex3f(-0.4, -0.1, 0.88);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(235, 198, 52);
        glVertex3f(-0.3, -0.4, 0.88);
        glVertex3f(-0.3, -0.1, 0.88);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(235, 198, 52);
        glVertex3f(-0.27, -0.4, 0.8);
        glVertex3f(-0.27, -0.1, 0.8);
        glEnd();


        //atas garis
        //segi6 atas
        glBegin(GL_POLYGON);
        glColor3ub(235, 198, 52);
        glVertex3f(-0.3, -0.1, 0.73);
        glVertex3f(-0.4, -0.1, 0.73);
        glVertex3f(-0.43, -0.1, 0.8);
        glVertex3f(-0.4, -0.1, 0.88);
        glVertex3f(-0.3, -0.1, 0.88);
        glVertex3f(-0.27, -0.1, 0.8);
        glEnd();

        //segi6 atasnya lagi
        glBegin(GL_POLYGON);
        glColor3ub(235, 198, 52);
        glVertex3f(-0.3, -0.1, 0.73);
        glVertex3f(-0.4, -0.1, 0.73);
        glVertex3f(-0.43, -0.1, 0.8);
        glVertex3f(-0.4, -0.1, 0.88);
        glVertex3f(-0.3, -0.1, 0.88);
        glVertex3f(-0.27, -0.1, 0.8);
        glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(235, 198, 52);
            glVertex3f(-0.3, -0.1, 0.73);
            glVertex3f(-0.4, -0.1, 0.73);
            glVertex3f(-0.4, -0.05, 0.78);
            glVertex3f(-0.3, -0.05, 0.78);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(235, 198, 52);
            glVertex3f(-0.3, -0.1, 0.88);
            glVertex3f(-0.4, -0.1, 0.88);
            glVertex3f(-0.4, -0.05, 0.83);
            glVertex3f(-0.3, -0.05, 0.83);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3ub(235, 1, 5);
            glVertex3f(-0.4, -0.1, 0.73);
            glVertex3f(-0.43, -0.1, 0.8);
            glVertex3f(-0.4, -0.05, 0.8);
            glVertex3f(-0.4, -0.05, 0.78);
            glEnd();

    glFlush();
}

void reshape(GLsizei width, GLsizei height)
{
    if (height == 0)
        height = 1;

    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glScalef(0.7, 0.7, 0.7);
    // gluPerspective(45.0f, aspect, 0.1f, 100.0f);
}

void specialKeys(int key, int x, int y)
{

  //  Right arrow - increase rotation by 5 degree
  if (key == GLUT_KEY_RIGHT)
    rotate_y += 0.5;

  //  Left arrow - decrease rotation by 5 degree
  else if (key == GLUT_KEY_LEFT)
    rotate_y -= 0.5;

  else if (key == GLUT_KEY_UP)
    rotate_x += 0.5;

  else if (key == GLUT_KEY_DOWN)
    rotate_x -= 0.5;

  //  Request display update
  glutPostRedisplay();
}

int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize(600,600);
glutInitWindowPosition(100,100);
glutCreateWindow("ka'bah 3d grafkom");
glutDisplayFunc(display);//fungsi dari display object yang menggabungkan kubus lighting material dan kamera
glutSpecialFunc(specialKeys);
//glutReshapeFunc(reshape);
glClearColor(1.0f,1.0f,1.0f,0.0f);
glViewport(0,0,640,480);
glutMainLoop();
}
