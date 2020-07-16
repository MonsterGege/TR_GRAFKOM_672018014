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
	glViewport(0.0,0.0,800,500);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

void jendelakiri(void)
{
	glBegin(GL_QUADS);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(90,-25,-50.001);
	glVertex3f(75,-25,-50.001);
	glVertex3f(75,22,-50.001);
	glVertex3f(90,22,-50.001);
	glEnd();

}


void tampil(void)
{
	GLUquadricObj *obj = gluNewQuadric();
	glLineWidth(4.0);
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

	//samping kanan
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-85.0, 25.0, 15);
	glVertex3f(-85.0, -25.0, 15);
	glVertex3f(100.0, -25.0, 15);
	glVertex3f(100.0, 25.0, 15);
	glEnd();

	//jendela kanan

	glBegin(GL_QUADS);
	glColor4f(1.0, 1.0, 0.5,0.95);
	glVertex3f(45.0, 15.0, 15.001);
	glVertex3f(45.0, 10.0, 15.001);
	glVertex3f(75.0, 10.0, 15.001);
	glVertex3f(75.0, 15.0, 15.001);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.4, 0.4);
	glVertex3f(45.0, 10.0, 15.001);
	glVertex3f(45.0, 10.0, 19.001);
	glVertex3f(95.0, 10.0, 19.001);
	glVertex3f(95.0, 10.0, 15.001);
	glEnd();

	//pintu kanan

	glBegin(GL_QUADS);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(20.0, 25, 15.001);
	glVertex3f(20.0, -25.0, 15.001);
	glVertex3f(35.0, -25.0, 15.001);
	glVertex3f(35.0, 25, 15.001);
	glEnd();

	glBegin(GL_QUADS);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(-10.0, 25, 15.001);
	glVertex3f(-10.0, -25.0, 15.001);
	glVertex3f(-30.0, -25.0, 15.001);
	glVertex3f(-30.0, 25, 15.001);
	glEnd();
	glBegin(GL_QUADS);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(-10.0, 25, 15.001);
	glVertex3f(-10.0, 25, 18.001);
	glVertex3f(-30.0, 25, 18.001);
	glVertex3f(-30.0, 25, 15.001);
	glEnd();

	glBegin(GL_QUADS);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(-40.0, 25, 15.001);
	glVertex3f(-40.0, 15, 15.001);
	glVertex3f(-75.0, 15, 15.001);
	glVertex3f(-75.0, 25, 15.001);
	glBegin(GL_QUADS);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-40.0, 25, 15.001);
	glVertex3f(-40.0, 25, 20.001);
	glVertex3f(-51.0, 25, 20.001);
	glVertex3f(-51.0, 25, 15.001);
	glBegin(GL_QUADS);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-52.0, 25, 15.001);
	glVertex3f(-52.0, 25, 20.001);
	glVertex3f(-62.0, 25, 20.001);
	glVertex3f(-62.0, 25, 15.001);
	glBegin(GL_QUADS);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-63.0, 25, 15.001);
	glVertex3f(-63.0, 25, 20.001);
	glVertex3f(-75.0, 25, 20.001);
	glVertex3f(-75.0, 25, 15.001);
	glBegin(GL_QUADS);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-40.0, 15, 15.001);
	glVertex3f(-40.0, 15, 20.001);
	glVertex3f(-51.0, 15, 20.001);
	glVertex3f(-51.0, 15, 15.001);
	glBegin(GL_QUADS);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-52.0, 15, 15.001);
	glVertex3f(-52.0, 15, 20.001);
	glVertex3f(-62.0, 15, 20.001);
	glVertex3f(-62.0, 15, 15.001);
	glBegin(GL_QUADS);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-63.0, 15, 15.001);
	glVertex3f(-63.0, 15, 20.001);
	glVertex3f(-75.0, 15, 20.001);
	glVertex3f(-75.0, 15, 15.001);
	//samping kiri
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-75.0, 25.0, -50);
	glVertex3f(-75.0, -25.0, -50);
	glVertex3f(100.0, -25.0, -50);
	glVertex3f(100.0, 25.0, -50);
	glEnd();

	//jendela kiri
	glPushMatrix();
	jendelakiri();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-20,0,0);
	jendelakiri();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-40,0,0);
	jendelakiri();
	glPopMatrix();
	glBegin(GL_QUADS);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(25,-25,-50.001);
	glVertex3f(0,-25,-50.001);
	glVertex3f(0,22,-50.001);
	glVertex3f(25,22,-50.001);
	glEnd();
	glBegin(GL_QUADS);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(-5,-25,-50.001);
	glVertex3f(-25,-25,-50.001);
	glVertex3f(-25,22,-50.001);
	glVertex3f(-5,22,-50.001);
	glEnd();
	glBegin(GL_QUADS);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(-35,-25,-50.001);
	glVertex3f(-55,-25,-50.001);
	glVertex3f(-55,22,-50.001);
	glVertex3f(-35,22,-50.001);
	glEnd();
	
	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-73.0, -25.0, 15);
	glVertex3f(100.0, -25.0, 15);
	glVertex3f(100.0, -25.0, -50);
	glVertex3f(-73.0, -25.0, -50);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-57.0, -25.0, -39);
	glVertex3f(-65.0, -25.0, -39);
	glVertex3f(-57.0, -25.0, -25);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-65.0, -25.0, -39);
	glVertex3f(-66.0, -25.0, -39);
	glVertex3f(-65.0, -25.0, -38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-77.0, -25.0, -50);
	glVertex3f(-77.0, -25.0, -35);
	glVertex3f(-80.0, -25.0, -48);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-77.0, -25.0, -35);
	glVertex3f(-80.0, -25.0, -49);
	glVertex3f(-81.0, -25.0, -48);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-81.0, -25.0, -49);
	glVertex3f(-84.0, -25.0, -39.5);
	glVertex3f(-76.0, -25.0, -35);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6, 0.6, 0.6);
	glVertex3f(-57.0, -25.0, -50);
	glVertex3f(-77.0, -25.0, -50);
	glVertex3f(-77.0, -25.0, -38);
	glVertex3f(-57.0, -25.0, -38);
	glEnd();
	//atas
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-57.0, 25.0, 15);
	glVertex3f(100.0, 25.0, 15);
	glVertex3f(100.0, 25.0, -50);
	glVertex3f(-57.0, 25.0, -50);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(100,25,-50);
	glVertex3f(105,25,-45);
	glVertex3f(100,25,-50);
	glEnd();

	//depan
	glBegin(GL_QUADS);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-75.0, 25.0, -50);
	glVertex3f(-75.0, -25.0, -50);
	glVertex3f(-78.0, -25.0, -49);
	glVertex3f(-78.0, 25.0, -49);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-78.0, 25.0, -49);
	glVertex3f(-78.0, -25.0, -49);
	glVertex3f(-81.0, -25.0, -48);
	glVertex3f(-81.0, 25.0, -48);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-81.0, 25.0, -48);
	glVertex3f(-81.0, -25.0, -48);
	glVertex3f(-84.0, -25.0, -40);
	glVertex3f(-84.0, 25.0, -40);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-84.0, 25.0, -40);
	glVertex3f(-84.0, -25.0, -40);
	glVertex3f(-78.0, -25.0, -36);
	glVertex3f(-78.0, 25.0, -36);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-57.0, 25.0, -50);
	glVertex3f(-77.0, 25.0, -50);
	glVertex3f(-77.0, 25.0, -38);
	glVertex3f(-57.0, 25.0, -38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-57.0, 25.0, -39);
	glVertex3f(-65.0, 25.0, -39);
	glVertex3f(-57.0, 25.0, -25);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-65.0, 25.0, -39);
	glVertex3f(-66.0, 25.0, -39);
	glVertex3f(-65.0, 25.0, -38);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-77.0, 25.0, -50);
	glVertex3f(-77.0, 25.0, -35);
	glVertex3f(-80.0, 25.0, -48);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-77.0, 25.0, -35);
	glVertex3f(-80.0, 25.0, -49);
	glVertex3f(-81.0, 25.0, -48);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.4, 0.6);
	glVertex3f(-81.0, 25.0, -49);
	glVertex3f(-84.0, 25.0, -39.5);
	glVertex3f(-76.0, 25.0, -35);
	glEnd();
	//belakang
	glBegin(GL_QUADS);
	glColor4f(1.0, 1.0, 0.6,0.95);
	glVertex3f(100.0, 25.0, 15);
	glVertex3f(100.0, -25.0, 15);
	glVertex3f(100.0, -25.0, -50);
	glVertex3f(100.0, 25.0, -50);
	glEnd();

	//cylinder
	glPushMatrix();
	glColor4f(1.0, 1.0, 0.5,0.8);
	glTranslatef(-70,25,-25);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,13,13,50,50,50);
	glPopMatrix();
	//bawah
	glPushMatrix();
	glColor3f (0.6,0.6,0.6);
	glTranslatef(-70.0,-25.0,-25.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(13,50,50);
	glPopMatrix();


	//atas
	glPushMatrix();
	glColor4f(1.0, 1.0, 0.5,0.95);
	glTranslatef(-70.0,25.0,-25.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(13,50,50);
	glPopMatrix();
	glPushMatrix();
	glColor3f (0.1,0.4,0.6);
	glTranslatef(-70.0,25.001,-25.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(3,50,50);
	glPopMatrix();
	//depan cylinder2
	glPushMatrix();
	glColor4f(1.0,1.0,1.0,0.9);
	glTranslatef(-88,20,-1);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,17,17,45,50,50);
	glPopMatrix();
	glPushMatrix();
	glColor3f(0.1,0.4,0.6);
	glTranslatef(-88,25,-1);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,17,17,5,50,50);
	glPopMatrix();
	glPushMatrix();
	glColor4f(1.0,0.0,0.0,0.6);
	glTranslatef(-88,0,-1);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,17.001,17.001,5,50,50);
	glPopMatrix();
	//bawah
	glPushMatrix();
	glColor3f (0.6,0.6,0.6);
	glTranslatef(-88.0,-25.0,-1);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(17,50,50);
	glPopMatrix();


	//atas
	glPushMatrix();
	glColor3f(0.1, 0.4, 0.6);
	glTranslatef(-88.0,25.0,-1.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(17,50,50);
	glPopMatrix();
	
	glPushMatrix();
	glColor3f(0.1, 0.4, 0.6);
	glTranslatef(-88.0,25.0,-1.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(17,50,50);
	glPopMatrix();
	
	//test
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-57,25,-20);
	glVertex3f(-85,25,15);
	glVertex3f(-57,25,15);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-87,25,-6);
	glVertex3f(-65,25,-13);
	glVertex3f(-87,25,5);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-79,25,-14);
	glVertex3f(-67,25,-12);
	glVertex3f(-85,25,-7);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(-74,25.001,-10);
	glVertex3f(-62,25.001,-14);
	glVertex3f(-72,25.001,-1);
	glEnd();
	
	

	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-57,-25,-20);
	glVertex3f(-85,-25,15);
	glVertex3f(-57,-25,15);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-87,-25,-6);
	glVertex3f(-65,-25,-13);
	glVertex3f(-87,-25,5);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-79,-25,-14);
	glVertex3f(-67,-25,-12);
	glVertex3f(-85,-25,-7);
	glEnd();
	
	//Desain Struktur Bangunan Atas
	glBegin(GL_POLYGON);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(-30,25.002,-6);
	glVertex3f(-50,25.002,-20);
	glVertex3f(-50,25.002,-12);
	glVertex3f(-30,25.002,2);
	glEnd();
	glBegin(GL_POLYGON);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(-30,25.002,-45);
	glVertex3f(-50,25.002,-35);
	glVertex3f(-50,25.002,-27);
	glVertex3f(-30,25.002,-38);
	glEnd();


	glBegin(GL_POLYGON);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(0,25.002,-20);
	glVertex3f(-20,25.002,-6);
	glVertex3f(-20,25.002,2);
	glVertex3f(0,25.002,-12);
	glEnd();
	glBegin(GL_POLYGON);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(0,25.002,-35);
	glVertex3f(-20,25.002,-45);
	glVertex3f(-20,25.002,-38);
	glVertex3f(0,25.002,-27);
	glEnd();

	glBegin(GL_POLYGON);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(50,25.002,-25);
	glVertex3f(26,25.002,-11);
	glVertex3f(26,25.002,-3);
	glVertex3f(50,25.002,-17);
	glEnd();
	glBegin(GL_POLYGON);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(50,25.002,-30);
	glVertex3f(26,25.002,-40);
	glVertex3f(26,25.002,-33);
	glVertex3f(50,25.002,-22);
	glEnd();


	//segitiga atas
	glBegin(GL_TRIANGLES);
	glColor4f(1.0,1.0,0.5,0.8);
	glVertex3f(5,25.002,-23);
	glVertex3f(25,25.002,-5);
	glVertex3f(25,25.002,-38);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0.1,0.4,0.6);
	glVertex3f(8,25.004,-23);
	glVertex3f(23,25.004,-13);
	glVertex3f(23,25.004,-31);
	glEnd();

	//lingkarankecil
	glPushMatrix();
	glColor4f(1.0,1.0,0.5,0.8);
	glTranslatef(-25.0,25.001,-22.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(4,50,50);
	glPopMatrix();
	
	glPushMatrix();
	glColor4f(1.0,1.0,0.5,0.8);
	glTranslatef(-25.0,25.001,-43.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(2,50,50);
	glPopMatrix();
	
	glPushMatrix();
	glColor4f(1.0,1.0,0.5,0.8);
	glTranslatef(-25.0,25.001,-2.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(2,50,50);
	glPopMatrix();

	glPushMatrix();
	glColor4f(1.0,1.0,0.5,0.8);
	glTranslatef(57.0,25.001,-23.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(7,50,50);
	glPopMatrix();


	glPushMatrix();
	glColor4f (1.0,1.0,0.5,0.8);
	glTranslatef(85.0,25.001,-15.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(6,50,50);
	glPopMatrix();

	glPushMatrix();
	glColor3f (0.1,0.4,0.6);
	glTranslatef(85.0,25.002,-15.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(3,50,50);
	glPopMatrix();

	glPushMatrix();
	glColor4f (1.0,1.0,0.5,0.8);
	glTranslatef(73.0,25.001,-5.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(5,50,50);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0.1,0.4,0.6);
	glTranslatef(73.0,25.002,-5.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(3,50,50);
	glPopMatrix();

	//Bagian Dalam Mall

	//Aquarium
	glPushMatrix();
	glColor4f(0.4, 0.4, 1.0,0.8);
	glTranslatef(70,0,-20);
	glRotatef(90,0.1,0,0);
	gluCylinder(obj,13,13,25,50,50);
	glPopMatrix();
	glPushMatrix();
	glColor4f(0.4, 0.4, 1.0,0.8);
	glTranslatef(70.0,-25.0,-20.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	
	glutSolidSphere(13,50,50);
	glPopMatrix();


	//atas
	glPushMatrix();
	glColor3f(0.7, 0.7, 0.7);
	glTranslatef(70.0,0.0,-20.0);
	glRotatef(90,0.1,0,0);
	glScalef(1.0,1.0,0.0);
	glutSolidSphere(13,50,50);
	glPopMatrix();

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