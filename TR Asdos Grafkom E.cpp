#include <gl/freeglut.h>


float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	//glEnable(GL_LIGHTING);
	//glEnable(GL_COLOR_MATERIAL);
	//glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}
void tampil(void)
{
	GLUquadricObj *obj = gluNewQuadric();
	glLineWidth(8.0);
	if (is_depth)
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	}
	else {
		glClear(GL_COLOR_BUFFER_BIT);
	}

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f,0.0f, 1.0f, 0.0f);
	glRotatef(xrot, 1.0f, 0.0f, 0.0f);
	glRotatef(yrot, 0.0f, 1.0f, 0.0f);

	//samping
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-105.0, 15.0, 15);
	glVertex3f(-105.0, -15.0, 15);
	glVertex3f(100.0, -15.0, 15);
	glVertex3f(100.0, 15.0, 15);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-105.0, 15.0, 15);
	glVertex3f(-105.0, -15.0, 15);
	glVertex3f(-106.0, -15.0, 14);
	glVertex3f(-106.0, 15.0, 14);
	glEnd();
	//samping
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-75.0, 15.0, -50);
	glVertex3f(-75.0, -15.0, -50);
	glVertex3f(100.0, -15.0, -50);
	glVertex3f(100.0, 15.0, -50);
	glEnd();
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-73.0, -15.0, 15);
	glVertex3f(100.0, -15.0, 15);
	glVertex3f(100.0, -15.0, -50);
	glVertex3f(-73.0, -15.0, -50);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-57.0, -15.0, -39);
	glVertex3f(-65.0, -15.0, -39);
	glVertex3f(-57.0, -15.0, -25);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-65.0, -15.0, -39);
	glVertex3f(-66.0, -15.0, -39);
	glVertex3f(-65.0, -15.0, -38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-77.0, -15.0, -50);
	glVertex3f(-77.0, -15.0, -35);
	glVertex3f(-80.0, -15.0, -48);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-77.0, -15.0, -35);
	glVertex3f(-80.0, -15.0, -49);
	glVertex3f(-81.0, -15.0, -48);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-81.0, -15.0, -49);
	glVertex3f(-84.0, -15.0, -39.5);
	glVertex3f(-76.0, -15.0, -35);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-57.0, -15.0, -50);
	glVertex3f(-77.0, -15.0, -50);
	glVertex3f(-77.0, -15.0, -38);
	glVertex3f(-57.0, -15.0, -38);
	glEnd();
	//atas
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-57.0, 15.0, 15);
	glVertex3f(100.0, 15.0, 15);
	glVertex3f(100.0, 15.0, -50);
	glVertex3f(-57.0, 15.0, -50);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(100,15,-50);
	glVertex3f(105,15,-45);
	glVertex3f(100,15,-50);
	glEnd();

	//depan
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-75.0, 15.0, -50);
	glVertex3f(-75.0, -15.0, -50);
	glVertex3f(-78.0, -15.0, -49);
	glVertex3f(-78.0, 15.0, -49);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-78.0, 15.0, -49);
	glVertex3f(-78.0, -15.0, -49);
	glVertex3f(-81.0, -15.0, -48);
	glVertex3f(-81.0, 15.0, -48);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-81.0, 15.0, -48);
	glVertex3f(-81.0, -15.0, -48);
	glVertex3f(-84.0, -15.0, -40);
	glVertex3f(-84.0, 15.0, -40);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-84.0, 15.0, -40);
	glVertex3f(-84.0, -15.0, -40);
	glVertex3f(-78.0, -15.0, -36);
	glVertex3f(-78.0, 15.0, -36);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-57.0, 15.0, -50);
	glVertex3f(-77.0, 15.0, -50);
	glVertex3f(-77.0, 15.0, -38);
	glVertex3f(-57.0, 15.0, -38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-57.0, 15.0, -39);
	glVertex3f(-65.0, 15.0, -39);
	glVertex3f(-57.0, 15.0, -25);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-65.0, 15.0, -39);
	glVertex3f(-66.0, 15.0, -39);
	glVertex3f(-65.0, 15.0, -38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-77.0, 15.0, -50);
	glVertex3f(-77.0, 15.0, -35);
	glVertex3f(-80.0, 15.0, -48);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-77.0, 15.0, -35);
	glVertex3f(-80.0, 15.0, -49);
	glVertex3f(-81.0, 15.0, -48);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-81.0, 15.0, -49);
	glVertex3f(-84.0, 15.0, -39.5);
	glVertex3f(-76.0, 15.0, -35);
	glEnd();
	//belakang
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(100.0, 15.0, 15);
	glVertex3f(100.0, -15.0, 15);
	glVertex3f(100.0, -15.0, -50);
	glVertex3f(100.0, 15.0, -50);
	glEnd();

	//cylinder
	glPushMatrix();
	glColor4f(1.0,1.0,1.0,0.8);
	glTranslatef(-70,15,-25);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,13,13,30,50,50);
	glPopMatrix();
	//bawah
	glPushMatrix();
	glColor3f (0.6,0.6,0.6);
	glTranslatef(-70.0,-15.0,-25.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(13,50,50);
	glPopMatrix();


	//atas
	glPushMatrix();
	glColor4f (1.0,1.0,1.0,0.8);
	glTranslatef(-70.0,15.0,-25.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(13,50,50);
	glPopMatrix();
	glPushMatrix();
	glColor3f (0.1,0.4,0.6);
	glTranslatef(-70.0,15.001,-25.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(3,50,50);
	glPopMatrix();
	//depan cylinder2
	glPushMatrix();
	glColor4f(1.0,1.0,1.0,0.6);
	glTranslatef(-100,10,0);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,15,15,25,50,50);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.1,0.4,0.6);
	glTranslatef(-100,15,0);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,15,15,5,50,50);
	glPopMatrix();
	glPushMatrix();
	glColor4f(1.0,0.0,0.0,0.6);
	glTranslatef(-100,0,0);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,15.001,15.001,5,50,50);
	glPopMatrix();
	//bawah
	glPushMatrix();
	glColor3f (0.6,0.6,0.6);
	glTranslatef(-100.0,-15.0,0.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(15,50,50);
	glPopMatrix();


	//atas
	glPushMatrix();
	glColor3f(0.1, 0.4, 0.6);
	glTranslatef(-100.0,10.0,0.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(15,50,50);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0.1, 0.4, 0.6);
	glTranslatef(-100.0,15.0,0.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(15,50,50);
	glPopMatrix();
	

	//peghubung cylinder
	glBegin(GL_QUADS);
	glColor4f (1.0,1.0,1.0,0.8);
	glVertex3f(-78.0, 15.0, -15);
	glVertex3f(-78.0, -15.0, -15);
	glVertex3f(-86.0, -15.0, -5.5);
	glVertex3f(-86.0, 15.0, -5.5);
	glEnd();

	//test
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-57,15,-20);
	glVertex3f(-100,15,15);
	glVertex3f(-57,15,15);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-87,15,-6);
	glVertex3f(-65,15,-13);
	glVertex3f(-87,15,5);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-79,15,-14);
	glVertex3f(-67,15,-12);
	glVertex3f(-85,15,-7);
	glEnd();
	

	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-57,-15,-20);
	glVertex3f(-100,-15,15);
	glVertex3f(-57,-15,15);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-87,-15,-6);
	glVertex3f(-65,-15,-13);
	glVertex3f(-87,-15,5);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-79,-15,-14);
	glVertex3f(-67,-15,-12);
	glVertex3f(-85,-15,-7);
	glEnd();
	

	glutSwapBuffers();

}

void idle() {
	if (!mouseDown) {
		xrot += 0.3f;
		yrot += 0.4f;
	}
	glutPostRedisplay();
}


void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'w':
	case'W':
		glTranslatef(0.0, 0.0, 3.0);
		break;
	case'd':
	case'D':
		glTranslatef(3.0, 0.0, 0.0);
		break;
	case's':
	case'S':
		glTranslatef(0.0, 0.0, -3.0);
		break;
	case'a':
	case'A':
		glTranslatef(-3.0, 0.0, 0.0);
		break;
	case'7':
		glTranslatef(0.0, 3.0, 0.0);
		break;
	case'9':
		glTranslatef(0.0, -3.0, 0.0);
		break;
	case'2':
		glRotatef(2.0, 1.0, 0.0, 0.0);
		break;
	case'8':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;
	case'6':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;
	case'4':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;
	case'1':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;
	case'3':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;
	case'5':
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
	tampil();
}
void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else
	mouseDown = false;
}

void ukuran(int lebar, int tinggi)
{
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(100.0, lebar / tinggi, 5.0, 1000.0);
	glTranslated(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}

void mouseMotion(int x, int y)
{
	if (mouseDown)
	{
		yrot = x - xdiff;
		xrot = y + ydiff;

		glutPostRedisplay();
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("GeorgeSchumy - 672018014");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);

	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);

	glutIdleFunc(tampil);
	glutMainLoop();
	return 0;
}