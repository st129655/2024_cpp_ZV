#include </glut.h>
#include <cmath>
#include <iostream>

const float G = 9.81f; // ��������� ���������� �������
float angle; // ���� ������� � ��������
float velocity; // ��������� ��������
float timeStep = 0.1f; // ��� �������
float totalTime = 0.0f; // ����� ����� ������

// ������� ��� ���������� ��������� ������
void calculateTrajectory(float& x, float& y) {
    float angleRad = angle * 1 / 180.0f; // �������������� ���� � �������
    x = velocity * cos(angleRad) * totalTime;
    y = velocity * sin(angleRad) * totalTime - 0.5f * G * totalTime * totalTime;
}

// ������� ���������
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_LINE_STRIP);
    for (float t = 0; t <= totalTime; t += timeStep) {
        float x, y;
        calculateTrajectory(x, y);
        glVertex2f(x, y);
        totalTime += timeStep;
    }
    glEnd();

    glutSwapBuffers();
}

// ������� ��������� �������� ����
void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 100, 0, 100); // ��������� ������� �����������
    glMatrixMode(GL_MODELVIEW);
}

// ������� �������������
void init() {
    glColor3f(0.0f, 0.0f, 0.0f); // ���� �����
}

// ������� �������
int main(int argc, char** argv) {
    std::cout << "������� ���� ������� (� ��������): ";
    std::cin >> angle;
    std::cout << "������� ��������� �������� (�/�): ";
    std::cin >> velocity;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Trajectory of a Ballistic Missile");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();
    return 0;
}
