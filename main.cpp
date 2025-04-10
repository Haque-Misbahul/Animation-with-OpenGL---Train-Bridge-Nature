

#include <windows.h>
#include <math.h>
#include <GL/gl.h>
#include <GL/glut.h>
void body(void);
void sun(void);
void environment(void);
 void circle(float x1, float y1,double radius){
    float x2,y2;

    float angle;



    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    glFlush();
 }
void body(void){
     //glClear (GL_COLOR_BUFFER_BIT);

    //RIVER
        glColor3ub (35, 224, 205);
    glBegin(GL_POLYGON);
    glVertex2f (0, 0);
    glVertex2f (0, 20);

    glVertex2f (100,20);
    glVertex2f (100,0);

    glEnd();

    //SKY

    glBegin(GL_POLYGON);
    glColor3ub (62, 62, 201);
    glVertex2f (0, 20);
    glColor3ub (242, 125, 137);
    glVertex2f (0, 80);
    glColor3ub (252, 252, 255);

    glVertex2f (100,80);
    glColor3ub (234, 234, 234);
    glVertex2f (100,20);

    glEnd();





    //Green HILLS
            glColor3ub (16, 206, 29);
    glBegin(GL_POLYGON);
    glVertex2f (0, 20);
     glVertex2f (25,40);
      glVertex2f (50, 33);
       glVertex2f (70, 42);
        glVertex2f (90, 35);

    glVertex2f (0, 35);

    glVertex2f (100,35);
    glVertex2f (100,20);

    glEnd();

//Bridge
    glColor3ub (112, 107, 77);
    glBegin(GL_POLYGON);
    glVertex2f (0, 25);
    glVertex2f (0, 35);
    glVertex2f (100, 35);
    glVertex2f (100, 25);

    glEnd();
    //LINE
    glColor3f (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f (0, 30);
    glVertex2f (100, 30);
    //up_line
    glVertex2f (10, 35);
    glVertex2f (10, 30);
    glVertex2f (20, 35);
    glVertex2f (20, 30);
    glVertex2f (30, 35);
    glVertex2f (30, 30);
    glVertex2f (40, 35);
    glVertex2f (40, 30);
    glVertex2f (50, 35);
    glVertex2f (50, 30);
    glVertex2f (60, 35);
    glVertex2f (60, 30);
    glVertex2f (70, 35);
    glVertex2f (70, 30);
    glVertex2f (80, 35);
    glVertex2f (80, 30);
    glVertex2f (90, 35);
    glVertex2f (90, 30);

    //bottom_line
    glVertex2f (5, 30);
    glVertex2f (5, 25);
    glVertex2f (15, 30);
    glVertex2f (15, 25);
    glVertex2f (25, 30);
    glVertex2f (25, 25);
    glVertex2f (35, 30);
    glVertex2f (35, 25);
    glVertex2f (45, 30);
    glVertex2f (45, 25);
    glVertex2f (55, 30);
    glVertex2f (55, 25);
    glVertex2f (65, 30);
    glVertex2f (65, 25);
    glVertex2f (75, 30);
    glVertex2f (75, 25);
    glVertex2f (85, 30);
    glVertex2f (85, 25);

    glEnd();

    //base1
    glColor3ub (66, 45, 47);
    glBegin(GL_POLYGON);
    glVertex2f (20, 20);
    glVertex2f (10, 25);
    glVertex2f (40, 25);
    glVertex2f (30, 20);
    glVertex2f (30, 11);
    glVertex2f (20, 11);

    glEnd();

    //base2
   // glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (70, 20);
    glVertex2f (60, 25);
    glVertex2f (90, 25);
    glVertex2f (80, 20);
    glVertex2f (80, 11);
    glVertex2f (70, 11);

    glEnd();



    //Line
    glColor3ub (44, 37, 45);
    glBegin(GL_POLYGON);
    glVertex2f (0, 36);
    glVertex2f (0, 37);
    glVertex2f (100, 37);
    glVertex2f (100, 36);

    glEnd();

    //Slipper1
    glColor3ub (155, 95, 35);
    glBegin(GL_POLYGON);
    glVertex2f (5, 35);
    glVertex2f (5, 36);
    glVertex2f (10, 36);
    glVertex2f (10, 35);

    glEnd();

    //Slipper2
    //glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (20, 35);
    glVertex2f (20, 36);
    glVertex2f (25, 36);
    glVertex2f (25, 35);

    glEnd();

    //Slipper3
   // glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (35, 35);
    glVertex2f (35, 36);
    glVertex2f (40, 36);
    glVertex2f (40, 35);

    glEnd();

    //Slipper4
   // glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (50, 35);
    glVertex2f (50, 36);
    glVertex2f (55, 36);
    glVertex2f (55, 35);

    glEnd();

    //Slipper5
   // glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (65, 35);
    glVertex2f (65, 36);
    glVertex2f (70, 36);
    glVertex2f (70, 35);

    glEnd();

    //Slipper6
  //  glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (80, 35);
    glVertex2f (80, 36);
    glVertex2f (85, 36);
    glVertex2f (85, 35);

    glEnd();

    //Slipper7
  //  glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (95, 35);
    glVertex2f (95, 36);
    glVertex2f (100, 36);
    glVertex2f (100, 35);

    glEnd();



    glFlush;

}




 void sun(void){


         //  glClear (GL_COLOR_BUFFER_BIT);


//PLANE ZED
                glColor3ub (157, 54, 226);
    glBegin(GL_POLYGON);
      glVertex2f (13,62);
      glVertex2f (8,62);
      glVertex2f (11,67);
              glVertex2f (11,70);
    glVertex2f (8,75);
    glVertex2f (13,75);
       glVertex2f (16,70);
     glVertex2f (16,67);

    glEnd();


    //PLANE BODY
                    glColor3ub (191, 143, 224);
    glBegin(GL_POLYGON);
      glVertex2f (5,70);
      glVertex2f (20,70);
      glVertex2f (24,67);
              glVertex2f (3,67);
    glVertex2f (3,72);

    glEnd();
    glFlush();
 }
   void environment(void){

      // glClear (GL_COLOR_BUFFER_BIT);


       //Engine
    glColor3ub (132, 17, 17);
    glBegin(GL_POLYGON);
    glVertex2f (48, 45);
  glColor3ub (17, 173, 58);
    glVertex2f (48, 47);
    glVertex2f (64, 47);
    glVertex2f (64, 40);

    glVertex2f (45, 40);
    glColor3ub (17, 173, 58);
    glVertex2f (47, 42);
    glVertex2f (47, 45);

    glEnd();

    //Engine1
    glColor3ub (2, 58, 45);
    glBegin(GL_POLYGON);
    glVertex2f (49, 42);
    glVertex2f (49, 44);
    glVertex2f (52, 44);
    glVertex2f (52, 42);


    glEnd();

    //Engine2
   // glColor3f (1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f (59, 42);
    glVertex2f (59, 44);
    glVertex2f (62, 44);
    glVertex2f (62, 42);


    glEnd();

    //join1
    glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (64, 41);
    glVertex2f (64, 42);
    glVertex2f (67, 42);
    glVertex2f (67, 41);

    glEnd();


    //Bogi
    glColor3ub (17, 173, 58);
    glBegin(GL_POLYGON);
    glVertex2f (67, 40);
     glColor3ub (224, 33, 15);
    glVertex2f (67, 47);
     glColor3ub (224, 33, 15);

    glVertex2f (82, 47);
      glColor3ub (17, 173, 58);
    glVertex2f (82, 40);


    glEnd();

   glColor3ub (2, 58, 45);

    glBegin(GL_POLYGON);
    glVertex2f (68, 40);
    glVertex2f (68, 44);
    glVertex2f (70, 44);
    glVertex2f (70, 40);


    glEnd();

    //Bogi1- window
    glColor3ub (2, 58, 45);
    glBegin(GL_POLYGON);
    glVertex2f (71, 42);
    glVertex2f (71, 44);
    glVertex2f (78, 44);
    glVertex2f (78, 42);


    glEnd();

    //Bogi1- window-Line
    glColor3f (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f (73, 44);
    glVertex2f (73, 42);
    glVertex2f (76, 44);
    glVertex2f (76, 42);


    glEnd();

    //Bogi1- door-2
   glColor3ub (2, 58, 45);
    glBegin(GL_POLYGON);
    glVertex2f (79, 40);
    glVertex2f (79, 44);
    glVertex2f (81, 44);
    glVertex2f (81, 40);


    glEnd();



    //join2
    glColor3f (0.737, 0.561, 0.561);
    glBegin(GL_POLYGON);
    glVertex2f (82, 41);
    glVertex2f (82, 42);
    glVertex2f (85, 42);
    glVertex2f (85, 41);

    glEnd();

    //Bogi2
    glColor3ub (17, 173, 58);
    glBegin(GL_POLYGON);
    glVertex2f (85, 40);
    glColor3ub (224, 33, 15);
    glVertex2f (85, 47);
    glColor3ub (224, 33, 15);
    glVertex2f (100, 47);
    glColor3ub (17, 173, 58);
    glVertex2f (100, 40);


    glEnd();

    //Bogi2- door-1
  glColor3ub (2, 58, 45);
    glBegin(GL_POLYGON);
    glVertex2f (86, 40);
    glVertex2f (86, 44);
    glVertex2f (88, 44);
    glVertex2f (88, 40);


    glEnd();

    //Bogi2- window
   glColor3ub (2, 58, 45);
    glBegin(GL_POLYGON);
    glVertex2f (89, 42);
    glVertex2f (89, 44);
    glVertex2f (96, 44);
    glVertex2f (96, 42);


    glEnd();

    //Bogi2- window-Line
    glColor3f (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f (91, 44);
    glVertex2f (91, 42);
    glVertex2f (94, 44);
    glVertex2f (94, 42);


    glEnd();

    //Bogi2- door-2
   glColor3ub (2, 58, 45);
    glBegin(GL_POLYGON);
    glVertex2f (97, 40);
    glVertex2f (97, 44);
    glVertex2f (99, 44);
    glVertex2f (99, 40);


    glEnd();

    //Dhoa1
    glColor3ub (40, 10, 214);
    glBegin(GL_POLYGON);
    glVertex2f (50, 47);
    glVertex2f (50, 48);
    glVertex2f (52, 48);
    glVertex2f (52, 47);


    glEnd();


    //Dhoa2
    glColor3ub (53, 51, 50);
    glBegin(GL_POLYGON);
    glVertex2f (50, 48);
    glVertex2f (51, 50);
    glVertex2f (53, 51);
    glVertex2f (56, 52);
    glVertex2f (61, 52);
    glVertex2f (59, 49);
    glVertex2f (52, 48);

    glEnd();

    //Dhoa-Line
    glColor3f (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f (51, 48);
    glVertex2f (53, 50);
    glVertex2f (53, 50);
    glVertex2f (56, 51);
    glVertex2f (56, 51);
    glVertex2f (60.4, 51);
    glVertex2f (54, 49);
    glVertex2f (56, 50);
    glVertex2f (56, 50);
    glVertex2f (59.5, 50);

    glEnd();



glColor3ub (110, 108, 112);
    circle(50,38.5,1.5);
    circle(60,38.5,1.5);
    circle(70,38.5,1.5);
    circle(78,38.5,1.5);
    circle(89,38.5,1.5);
    circle(97,38.5,1.5);
    //SHIP
      //Sheep1
    glColor3ub (33, 59, 188);
    glBegin(GL_POLYGON);
    glVertex2f (85, 5);
    glVertex2f (85, 11);
    glVertex2f (98, 11);
    glVertex2f (98, 5);

    glEnd();
     //Sheep3
    glColor3ub (107, 122, 86);
    glBegin(GL_POLYGON);
    glVertex2f (89, 5);
    glVertex2f (89, 11);
    glVertex2f (90, 11);
    glVertex2f (90, 5);

    glEnd();

    //Sheep4
   // glColor3f (1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f (95, 5);
    glVertex2f (95, 11);
    glVertex2f (96, 11);
    glVertex2f (96, 5);

    glEnd();

    //Sheep2
    glColor3ub (30, 29, 29);
    glBegin(GL_POLYGON);
    glVertex2f (85, 2);
    glVertex2f (80, 6);
    glVertex2f (100, 5);
    glVertex2f (97, 2);

    glEnd();

    //Sheep5
    glColor3ub (107, 122, 86);
    glBegin(GL_POLYGON);
    glVertex2f (82, 8);
    glVertex2f (82, 9);
    glVertex2f (99, 9);
    glVertex2f (99, 8);

    glEnd();

    //Sheep6
    glColor3ub (107, 122, 86);
    glBegin(GL_POLYGON);
    glVertex2f (82, 11);
    glVertex2f (82, 12);
    glVertex2f (99, 12);
    glVertex2f (99, 11);

    glEnd();

    //Sheep7
    glColor3ub (107, 122, 86);
    glBegin(GL_POLYGON);
    glVertex2f (93, 12);
    glVertex2f (93, 14);
    glVertex2f (97, 14);
    glVertex2f (97, 12);

    glEnd();

    //Sheep8
    glColor3ub (107, 122, 86);
    glBegin(GL_POLYGON);
    glVertex2f (92, 14);
    glVertex2f (92, 15);
    glVertex2f (98, 15);
    glVertex2f (98, 14);

    glEnd();








    glFlush ();

}
void display(void)
{


    int i,j=0,k=0;
   glClear (GL_COLOR_BUFFER_BIT);
     for( i=1;i<=100;i++){
            j--;
                glClear (GL_COLOR_BUFFER_BIT);
                 body();


    glPushMatrix();
    glTranslated(i,0,0);
    sun();
    glPopMatrix();

    glPushMatrix();

    glTranslated(j,0,0);

    environment();


     glPopMatrix();
     k++;
     Sleep(150);
     if(k==100)
    {
        k=1;
        i=1;
        j=1;
    }

     }
      body();
    glEnd();


    glFlush();


 }

void init (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 80, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (10, 10);
    glutCreateWindow (" GROUP COLORS CG PROJECT");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
