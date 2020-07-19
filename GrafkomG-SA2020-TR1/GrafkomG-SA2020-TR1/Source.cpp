#include <windows.h>
#include <GL/glut.h>

int y1 = 0;
int y2 = y1 + 50;
int y3 = y2 + 5;
void init(void);
void wall(void);
void display(void);
void awan(void);
void pohon(void);
void ranting(void);
void keyboard(unsigned char, int, int);
void shape(int, int);
void Timer(int);
int xx = 0, yy = 0, zz = 0, sudut = 0;
float x_pos = 0.0f;
float deltax = 0.05f;

int is_depth;

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_MULTISAMPLE);
	glutInitWindowSize(1920, 1080);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("TSM-Bandung");
	init();
	glutDisplayFunc(display);
	glutTimerFunc(30, Timer, 1);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(shape);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POINT_SMOOTH);
	glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
	glHint(GL_POINT_SMOOTH_HINT, GL_NICEST);
	glutMainLoop();
	return 0;
}

void init(void) {
	glClearColor(255, 255, 255, 0.0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(1.0f);
	glLineWidth(3.0f);
}

void wall() {
	glColor3ub(0, 255, 0);
	//left
	glBegin(GL_POLYGON);
	glVertex3d(-77.95, y2, 20.24);
	glVertex3d(-77.95, y1, 20.24);
	glVertex3d(-77.95, y1, -38.25);
	glVertex3d(-77.95, y2, -38.25);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(-77.95, y1, 20.24);
	glVertex3d(-77.95, y2, 20.24);
	glVertex3d(-60.64, y2, 36.13);
	glVertex3d(-60.64, y1, 36.13);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(-60.64, y2, 36.13);
	glVertex3d(-60.64, y1, 36.13);
	glVertex3d(3.41, y1, 36.13);
	glVertex3d(3.41, y2, 36.13);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(3.41, y2, 36.13);
	glVertex3d(3.41, y1, 36.13);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(3.41, y2, 25.47);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(3.34, y2, -2.91);
	glVertex3d(3.34, y1, -2.91);
	glVertex3d(3.29, y1, -38.25);
	glVertex3d(3.29, y2, -38.25);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(3.29, y2, -38.25);
	glVertex3d(3.29, y1, -38.25);
	glVertex3d(-77.95, y1, -38.25);
	glVertex3d(-77.95, y2, -38.25);
	glEnd();

	glColor3ub(255, 255, 0);
	//center
	glBegin(GL_POLYGON);
	glVertex3d(3.41, y2, 25.47);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(44.70, y1, 25.47);
	glVertex3d(44.70, y2, 25.47);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(44.70, y2, 25.47);
	glVertex3d(44.70, y1, 25.47);
	glVertex3d(44.70, y1, 16.61);
	glVertex3d(44.70, y2, 16.61);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(44.70, y2, 16.61);
	glVertex3d(44.70, y1, 16.61);
	glVertex3d(55.02, y1, 16.61);
	glVertex3d(55.02, y2, 16.61);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(55.02, y2, -4.20);
	glVertex3d(55.02, y1, -4.20);
	glVertex3d(44.96, y1, -4.20);
	glVertex3d(44.96, y2, -4.20);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(44.96, y2, -4.20);
	glVertex3d(44.96, y1, -4.20);
	glVertex3d(44.96, y1, -5.78);
	glVertex3d(44.96, y2, -5.78);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(44.96, y2, -5.78);
	glVertex3d(44.96, y1, -5.78);
	glVertex3d(40.80, y1, -5.78);
	glVertex3d(40.80, y2, -5.78);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(40.80, y2, -5.78);
	glVertex3d(40.80, y1, -5.78);
	glVertex3d(40.80, y1, -8.66);
	glVertex3d(40.80, y2, -8.66);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(40.80, y2, -8.66);
	glVertex3d(40.80, y1, -8.66);
	glVertex3d(17.48, y1, -8.66);
	glVertex3d(17.48, y2, -8.66);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(17.48, y2, -8.66);
	glVertex3d(17.48, y1, -8.66);
	glVertex3d(17.48, y1, -2.91);
	glVertex3d(17.48, y2, -2.91);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(17.48, y2, -2.91);
	glVertex3d(17.48, y1, -2.91);
	glVertex3d(3.34, y1, -2.91);
	glVertex3d(3.34, y2, -2.91);
	glEnd();

	glColor3ub(255, 0, 255);
	//right
	glBegin(GL_POLYGON);
	glVertex3d(55.02, y3, 25.47);
	glVertex3d(55.02, y1, 25.47);
	glVertex3d(88.75, y1, 36.52);
	glVertex3d(88.75, y3, 36.52);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(88.75, y3, 36.52);
	glVertex3d(88.75, y1, 36.52);
	glVertex3d(99.41, y1, 8.77);
	glVertex3d(99.41, y3, 8.77);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(99.41, y3, 8.77);
	glVertex3d(99.41, y1, 8.77);
	glVertex3d(55.02, y1, -5.78);
	glVertex3d(55.02, y3, -5.78);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(55.02, y3, -5.78);
	glVertex3d(55.02, y1, -5.78);
	glVertex3d(55.02, y1, 25.47);
	glVertex3d(55.02, y3, 25.47);
	glEnd();

}

void pohon() {
	//batang
	GLUquadricObj* pObj;
	pObj = gluNewQuadric();
	gluQuadricNormals(pObj, GLU_SMOOTH);

	glPushMatrix();
	glColor3ub(104, 70, 14);
	glRotatef(270, 1, 0, 0);
	gluCylinder(pObj, 4, 0.7, 30, 25, 25);
	glPopMatrix();
}


//ranting
void ranting() {
	GLUquadricObj* pObj;
	pObj = gluNewQuadric();
	gluQuadricNormals(pObj, GLU_SMOOTH);
	glPushMatrix();
	glColor3ub(104, 70, 14);
	glTranslatef(0, 27, 0);
	glRotatef(330, 1, 0, 0);
	gluCylinder(pObj, 0.6, 0.1, 15, 25, 25);
	glPopMatrix();

	//daun
	glPushMatrix();
	glColor3ub(18, 118, 13);
	glScaled(5, 5, 5);
	glTranslatef(0, 7, 3);
	glutSolidDodecahedron();
	glPopMatrix();
}

void awan() {
	glPushMatrix();
	glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
	glColor3ub(153, 223, 255);
	glutSolidSphere(10, 50, 50);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(10, 0, 1);
	glutSolidSphere(5, 50, 50);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-2, 6, -2);
	glutSolidSphere(7, 50, 50);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-10, -3, 0);
	glutSolidSphere(7, 50, 50);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(6, -2, 2);
	glutSolidSphere(7, 50, 50);
	glPopMatrix();
}

void display(void) {
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);

	glColor3ub(0, 255, 255);

	glBegin(GL_POLYGON);
	glVertex3d(-77.95, y1, 20.24);
	glVertex3d(-60.64, y1, 36.13);
	glVertex3d(3.41, y1, 36.13);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(3.34, y1, -2.91);
	glVertex3d(3.29, y1, -38.25);
	glVertex3d(-77.95, y1, -38.25);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(17.48, y1, 25.47);
	glVertex3d(17.48, y1, -2.91);
	glVertex3d(3.34, y1, -2.91);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(17.48, y1, 25.47);
	glVertex3d(44.70, y1, 25.47);
	glVertex3d(44.70, y1, 16.61);
	glVertex3d(55.02, y1, 16.61);
	glVertex3d(55.02, y1, -4.20);
	glVertex3d(44.96, y1, -4.20);
	glVertex3d(44.96, y1, -5.78);
	glVertex3d(40.80, y1, -5.78);
	glVertex3d(40.80, y1, -8.66);
	glVertex3d(17.48, y1, -8.66);
	glVertex3d(17.48, y1, -2.91);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(55.02, y1, 25.47);
	glVertex3d(88.75, y1, 36.52);
	glVertex3d(99.41, y1, 8.77);
	glVertex3d(55.02, y1, -5.78);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex3d(-77.95, y2, 20.24);
	glVertex3d(-60.64, y2, 36.13);
	glVertex3d(3.41, y2, 36.13);
	glVertex3d(3.41, y2, 25.47);
	glVertex3d(3.34, y2, -2.91);
	glVertex3d(3.29, y2, -38.25);
	glVertex3d(-77.95, y2, -38.25);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(3.41, y2, 25.47);
	glVertex3d(17.48, y2, 25.47);
	glVertex3d(17.48, y2, -2.91);
	glVertex3d(3.34, y2, -2.91);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(17.48, y2, 25.47);
	glVertex3d(44.70, y2, 25.47);
	glVertex3d(44.70, y2, 16.61);
	glVertex3d(55.02, y2, 16.61);
	glVertex3d(55.02, y2, -4.20);
	glVertex3d(44.96, y2, -4.20);
	glVertex3d(44.96, y2, -5.78);
	glVertex3d(40.80, y2, -5.78);
	glVertex3d(40.80, y2, -8.66);
	glVertex3d(17.48, y2, -8.66);
	glVertex3d(17.48, y2, -2.91);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(55.02, y3, 25.47);
	glVertex3d(88.75, y3, 36.52);
	glVertex3d(99.41, y3, 8.77);
	glVertex3d(55.02, y3, -5.78);
	glEnd();

	wall();

	glPushMatrix(); // matahari
	glEnable(GL_COLOR_MATERIAL);
	glTranslatef(-150 + x_pos, 160, 10);
	glRotatef(sudut, xx, yy, zz);
	glColor3f(1, 1, 0);
	glutSolidSphere(2, 20, 20);
	glDisable(GL_COLOR_MATERIAL);
	glPopMatrix();

	glBegin(GL_LINES); // garis hitam bak sampah
	glColor3d(0, 0, 0);
	glVertex3d(7.20, y1, 34.13);
	glVertex3d(7.20, y1 + 8, 34.13);
	glVertex3d(3.41, y1, 34.13);
	glVertex3d(3.41, y1 + 8, 34.13);
	glVertex3d(3.41, y1, 34.13);
	glVertex3d(7.20, y1, 34.13);
	glVertex3d(7.20, y1 + 8, 34.13);
	glVertex3d(3.41, y1 + 8, 34.13);
	glVertex3d(7.20, y1, 25.47);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(3.41, y1 + 8, 25.47);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(7.20, y1, 25.47);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(3.41, y1 + 8, 25.47);
	glVertex3d(3.41, y1, 34.13);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(3.41, y1 + 8, 25.47);
	glVertex3d(3.41, y1 + 8, 34.13);
	glVertex3d(7.20, y1, 34.13);
	glVertex3d(7.20, y1, 25.47);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8, 34.13);
	glEnd();

	glBegin(GL_POLYGON); // badan bak sampah
	glColor3d(0, 0.5, 0);
	glVertex3d(3.41, y1, 34.13);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(7.20, y1, 25.47);
	glVertex3d(7.20, y1, 34.13);// bawah bak sampah

	glVertex3d(3.41, y1, 34.13);
	glVertex3d(3.41, y1, 25.47);
	glVertex3d(3.41, y1 + 8, 25.47);
	glVertex3d(3.41, y1 + 8, 34.13); // tembok

	glVertex3d(3.41, y1, 34.13);
	glVertex3d(7.20, y1, 34.13);
	glVertex3d(7.20, y1 + 8, 34.13);
	glVertex3d(3.41, y1 + 8, 34.13);// depan bak sampah

	glVertex3d(7.20, y1, 34.13); // tembok
	glVertex3d(7.20, y1, 25.47);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8, 34.13);

	glVertex3d(3.41, y1, 25.47); // belakang
	glVertex3d(7.20, y1, 25.47);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(3.41, y1 + 8, 25.47);

	glVertex3d(3.41, y1 + 8, 34.13); // atas
	glVertex3d(3.41, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8, 34.13);
	glEnd();

	////// TUTUP BAK SAMPAH
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);
	glVertex3d(3.41, y1 + 8, 34.13);
	glVertex3d(3.41, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8, 34.13);

	glVertex3d(3.41, y1 + 8, 34.13);
	glVertex3d(3.41, y1 + 8, 25.47);
	glVertex3d(3.41, y1 + 8.5, 25.47);
	glVertex3d(3.41, y1 + 8.5, 34.13);

	glVertex3d(3.41, y1 + 8, 34.13);
	glVertex3d(7.20, y1 + 8, 34.13);
	glVertex3d(7.20, y1 + 8.5, 34.13);
	glVertex3d(3.41, y1 + 8.5, 34.13);

	glVertex3d(7.20, y1 + 8, 34.13);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8.5, 25.47);
	glVertex3d(7.20, y1 + 8.5, 34.13);

	glVertex3d(3.41, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8, 25.47);
	glVertex3d(7.20, y1 + 8.5, 25.47);
	glVertex3d(3.41, y1 + 8.5, 25.47);

	glVertex3d(3.41, y1 + 8.5, 34.13);
	glVertex3d(3.41, y1 + 8.5, 25.47);
	glVertex3d(7.20, y1 + 8.5, 25.47);
	glVertex3d(7.20, y1 + 8.5, 34.13);
	glEnd();

	glBegin(GL_POLYGON); // Motif bak sampah
	glColor3d(0, 0.5, 0);
	glVertex3d(3.61, y1 + 8.5, 34.13); // atas
	glVertex3d(3.61, y1 + 8.5, 30.77);
	glVertex3d(7.00, y1 + 8.5, 30.77);
	glVertex3d(7.00, y1 + 8.5, 34.13);

	glVertex3d(3.61, y1 + 8.5, 34.13);
	glVertex3d(3.61, y1 + 8.5, 30.77);
	glVertex3d(3.61, y1 + 8.7, 30.77);
	glVertex3d(3.61, y1 + 8.7, 34.13);

	glVertex3d(3.61, y1 + 8.5, 34.13);
	glVertex3d(7.00, y1 + 8.5, 34.13);
	glVertex3d(7.00, y1 + 8.7, 34.13);
	glVertex3d(3.61, y1 + 8.7, 34.13);

	glVertex3d(7.00, y1 + 8.5, 34.13);
	glVertex3d(7.00, y1 + 8.5, 30.77);
	glVertex3d(7.00, y1 + 8.7, 30.77);
	glVertex3d(7.00, y1 + 8.7, 34.13);

	glVertex3d(3.61, y1 + 8.5, 30.77);
	glVertex3d(7.00, y1 + 8.5, 30.77);
	glVertex3d(7.00, y1 + 8.7, 30.77);
	glVertex3d(3.61, y1 + 8.7, 30.77);

	glVertex3d(3.61, y1 + 8.7, 34.13);
	glVertex3d(3.61, y1 + 8.7, 30.77);
	glVertex3d(7.00, y1 + 8.7, 30.77);
	glVertex3d(7.00, y1 + 8.7, 34.13);
	glEnd();

	glBegin(GL_POLYGON); // Motif bak sampah
	glColor3d(0, 0.5, 0);
	glVertex3d(3.61, y1 + 8.5, 28.77); // atas
	glVertex3d(3.61, y1 + 8.5, 26.00);
	glVertex3d(7.00, y1 + 8.5, 26.00);
	glVertex3d(7.00, y1 + 8.5, 28.77);

	glVertex3d(3.61, y1 + 8.5, 28.77);
	glVertex3d(3.61, y1 + 8.5, 26.00);
	glVertex3d(3.61, y1 + 8.7, 26.00);
	glVertex3d(3.61, y1 + 8.7, 28.77);

	glVertex3d(3.61, y1 + 8.5, 28.77);
	glVertex3d(7.00, y1 + 8.5, 28.77);
	glVertex3d(7.00, y1 + 8.7, 28.77);
	glVertex3d(3.61, y1 + 8.7, 28.77);

	glVertex3d(7.00, y1 + 8.5, 28.77);
	glVertex3d(7.00, y1 + 8.5, 26.00);
	glVertex3d(7.00, y1 + 8.7, 26.00);
	glVertex3d(7.00, y1 + 8.7, 28.77);

	glVertex3d(3.61, y1 + 8.5, 26.00);
	glVertex3d(7.00, y1 + 8.5, 26.00);
	glVertex3d(7.00, y1 + 8.7, 26.00);
	glVertex3d(3.61, y1 + 8.7, 26.00);

	glVertex3d(3.61, y1 + 8.7, 28.77);
	glVertex3d(3.61, y1 + 8.7, 26.00);
	glVertex3d(7.00, y1 + 8.7, 26.00);
	glVertex3d(7.00, y1 + 8.7, 28.77);
	glEnd();

	//pohon1
	glPushMatrix();
	glTranslatef(-50, 0, 50);
	glScalef(0.2, 0.2, 0.2);
	glRotatef(90, 0, 1, 0);
	pohon();
	//ranting1
	ranting();
	//ranting2
	glPushMatrix();
	glScalef(1.5, 1.5, 1.5);
	glTranslatef(0, 25, 25);
	glRotatef(250, 1, 0, 0);
	ranting();
	glPopMatrix();
	//ranting3
	glPushMatrix();
	glScalef(1.8, 1.8, 1.8);
	glTranslatef(0, -6, 21.5);
	glRotatef(-55, 1, 0, 0);
	ranting();
	glPopMatrix();
	glPopMatrix();

	//pohon2
	glPushMatrix();
	glTranslatef(-80, 0, 50);
	glScalef(0.2, 0.2, 0.2);
	glRotatef(90, 0, 1, 0);
	pohon();
	//ranting1
	ranting();
	//ranting2
	glPushMatrix();
	glScalef(1.5, 1.5, 1.5);
	glTranslatef(0, 25, 25);
	glRotatef(250, 1, 0, 0);
	ranting();
	glPopMatrix();
	//ranting3
	glPushMatrix();
	glScalef(1.8, 1.8, 1.8);
	glTranslatef(0, -6, 21.5);
	glRotatef(-55, 1, 0, 0);
	ranting();
	glPopMatrix();
	glPopMatrix();

	//pohon3
	glPushMatrix();
	glTranslatef(-20, 0, 50);
	glScalef(0.2, 0.2, 0.2);
	glRotatef(90, 0, 1, 0);
	pohon();
	//ranting1
	ranting();
	//ranting2
	glPushMatrix();
	glScalef(1.5, 1.5, 1.5);
	glTranslatef(0, 25, 25);
	glRotatef(250, 1, 0, 0);
	ranting();
	glPopMatrix();
	//ranting3
	glPushMatrix();
	glScalef(1.8, 1.8, 1.8);
	glTranslatef(0, -6, 21.5);
	glRotatef(-55, 1, 0, 0);
	ranting();
	glPopMatrix();
	glPopMatrix();

	//pohon4
	glPushMatrix();
	glTranslatef(10, 0, 50);
	glScalef(0.2, 0.2, 0.2);
	glRotatef(90, 0, 1, 0);
	pohon();
	//ranting1
	ranting();
	//ranting2
	glPushMatrix();
	glScalef(1.5, 1.5, 1.5);
	glTranslatef(0, 25, 25);
	glRotatef(250, 1, 0, 0);
	ranting();
	glPopMatrix();
	//ranting3
	glPushMatrix();
	glScalef(1.8, 1.8, 1.8);
	glTranslatef(0, -6, 21.5);
	glRotatef(-55, 1, 0, 0);
	ranting();
	glPopMatrix();
	glPopMatrix();

	//pohon5
	glPushMatrix();
	glTranslatef(40, 0, 50);
	glScalef(0.2, 0.2, 0.2);
	glRotatef(90, 0, 1, 0);
	pohon();
	//ranting1
	ranting();
	//ranting2
	glPushMatrix();
	glScalef(1.5, 1.5, 1.5);
	glTranslatef(0, 25, 25);
	glRotatef(250, 1, 0, 0);
	ranting();
	glPopMatrix();
	//ranting3
	glPushMatrix();
	glScalef(1.8, 1.8, 1.8);
	glTranslatef(0, -6, 21.5);
	glRotatef(-55, 1, 0, 0);
	ranting();
	glPopMatrix();
	glPopMatrix();

	//pohon6
	glPushMatrix();
	glTranslatef(70, 0, 50);
	glScalef(0.2, 0.2, 0.2);
	glRotatef(90, 0, 1, 0);
	pohon();
	//ranting1
	ranting();
	//ranting2
	glPushMatrix();
	glScalef(1.5, 1.5, 1.5);
	glTranslatef(0, 25, 25);
	glRotatef(250, 1, 0, 0);
	ranting();
	glPopMatrix();
	//ranting3
	glPushMatrix();
	glScalef(1.8, 1.8, 1.8);
	glTranslatef(0, -6, 21.5);
	glRotatef(-55, 1, 0, 0);
	ranting();
	glPopMatrix();
	glPopMatrix();

	//pohon7
	glPushMatrix();
	glTranslatef(100, 0, 50);
	glScalef(0.2, 0.2, 0.2);
	glRotatef(90, 0, 1, 0);
	pohon();
	//ranting1
	ranting();
	//ranting2
	glPushMatrix();
	glScalef(1.5, 1.5, 1.5);
	glTranslatef(0, 25, 25);
	glRotatef(250, 1, 0, 0);
	ranting();
	glPopMatrix();
	//ranting3
	glPushMatrix();
	glScalef(1.8, 1.8, 1.8);
	glTranslatef(0, -6, 21.5);
	glRotatef(-55, 1, 0, 0);
	ranting();
	glPopMatrix();
	glPopMatrix();

	//awan
	glPushMatrix();
	glTranslatef(-130 + x_pos, 140, 35);
	glScalef(0.2, 0.2, 1.0);
	awan();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-105 + x_pos, 160, 30);
	glScalef(0.2, 0.2, 1.0);
	awan();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-150 + x_pos, 136, 25);
	glScalef(0.2, 0.2, 1.0);
	awan();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-160 + x_pos, 145, 45);
	glScalef(0.2, 0.2, 1.0);
	awan();
	glPopMatrix();

	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
	case '3':
		glTranslatef(3.0, 0.0, 0.0);
		break;
	case '1':
		glTranslatef(-3.0, 0.0, 0.0);
		break;

	case 's':
	case 'S':
		glRotatef(2.0, 1.0, 0.0, 0.0);
		break;
	case 'x':
	case 'X':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;
	case 'd':
	case 'D':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;
	case 'c':
	case 'C':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;
	case 'a':
	case 'A':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;
	case 'z':
	case 'Z':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;


	case 'q':
	case 'Q':
		glScalef(0.8, 0.8, 0.8f);
		break;
	case 'e':
	case 'E':
		glScalef(1.2, 1.2, 1.2f);
		break;
	}
	display();
}


void shape(int width, int height) {
	if (height == 0) height = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, width / height, 5.0, 1000.0);
	glTranslatef(0.0, -5.0, -400.0);
	glMatrixMode(GL_MODELVIEW);
}

void Timer(int) {
	glutPostRedisplay();
	glutTimerFunc(30, Timer, 1);

	x_pos += deltax;

}