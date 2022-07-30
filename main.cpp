#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float _angle1 = 0.0f;
float _move = 0.0f;
float _move2 = 0.0f;
float _move3 =0.0f;  //balloon
float _move4 =0.0f; //cloud
float _move5 =0.0f; //blimp
float _wave=0.0f;
float _wavex=0.0f;
float _crocy=0.0f;
float _crocy2=0.0f;
float _canmove=0.0f;
float _starx=0.0f;
float _ghostx=0.0f;
float _ghosty=0.0f;

void water()
{
    //water


glBegin(GL_QUADS);

glColor3ub(34, 252, 255 );
glVertex2i(0,0);

glColor3ub(34, 158, 255 );
glVertex2i(0,400);

glColor3ub(34, 158, 255 );
glVertex2i(3500,400);

glColor3ub(34, 252, 255  );
glVertex2i(3550,0);

glEnd();
//glFlush();

}

void nightwater()
{
    //water

glBegin(GL_QUADS);

glColor3ub(15, 15, 181  );
glVertex2i(0,0);

glColor3ub(34, 158, 255 );
glVertex2i(0,400);

glColor3ub(34, 158, 255 );
glVertex2i(3500,400);

glColor3ub(15, 15, 181 );
glVertex2i(3550,0);

glEnd();
//glFlush();

}




void soil()
{
    glBegin(GL_QUADS);

glColor3ub(75, 54, 0 );
glVertex2i(0,400);
glVertex2i(0,429);
glVertex2i(3500,429);
glVertex2i(3550,400);

glEnd();float _angle1 = 0.0f;
}


void bench()
{
    glPushMatrix();
    glTranslatef(250,388,0);
    glScalef(0.7,0.7,1);
    //Bench
    glColor3ub(109, 66, 17);
    glBegin(GL_QUADS);
    glVertex2i(680, 750);
    glVertex2i(680, 850);
    glVertex2i(700, 850);
    glVertex2i(700, 750);

    glBegin(GL_QUADS);
    glVertex2i(800, 750);
    glVertex2i(800, 850);
    glVertex2i(820, 850);
    glVertex2i(820, 750);

      glColor3ub(154, 81, 0);
    glBegin(GL_QUADS);
    glVertex2i(640+5, 790);
    glVertex2i(640+5, 850);
    glVertex2i(860-5, 850);
    glVertex2i(860-5, 790);

//Leg Stand
//Left Long
    glColor3ub(109, 66, 17);
    glBegin(GL_QUADS);
    glVertex2i(580+30-5, 600);
    glVertex2i(580+30-5, 700);
    glVertex2i(600+30-5, 700);
    glVertex2i(600+30-5, 600);

    glColor3ub(150, 94, 32);
    glVertex2i(600+30-5, 600);
    glVertex2i(600+30-5, 700);
    glVertex2i(610+30-5, 700);
    glVertex2i(610+30-5, 610);

//Left Short
    glColor3ub(109, 66, 17);
    glBegin(GL_QUADS);
    glVertex2i(680, 650);
    glVertex2i(680, 700);
    glVertex2i(700, 700);
    glVertex2i(700, 650);

    glColor3ub(150, 94, 32);
    glVertex2i(700, 650);
    glVertex2i(700, 700);
    glVertex2i(710, 700);
    glVertex2i(710, 660);

//Right Long
    glColor3ub(109, 66, 17);
    glBegin(GL_QUADS);
    glVertex2i(780, 600);
    glVertex2i(780, 700);
    glVertex2i(800, 700);
    glVertex2i(800, 600);

    glColor3ub(150, 94, 32);
    glVertex2i(800, 600);
    glVertex2i(800, 700);
    glVertex2i(810, 700);
    glVertex2i(810, 610);

//Right Short
    glColor3ub(109, 66, 17);
    glBegin(GL_QUADS);
    glVertex2i(840, 650);
    glVertex2i(840, 750);
    glVertex2i(860, 750);
    glVertex2i(860, 650);

    glColor3ub(150, 94, 32);
    glVertex2i(860, 650);
    glVertex2i(860, 750);
    glVertex2i(870, 750);
    glVertex2i(870, 660);

//Sit
    glColor3ub(154, 81, 0);
    glBegin(GL_QUADS);
    glVertex2i(630, 750);
    glVertex2i(870, 750);
    glVertex2i(830, 700);
    glVertex2i(580, 700);

    glColor3ub(72, 38, 1);
    glBegin(GL_QUADS);
    glVertex2i(580, 700);
    glVertex2i(830, 700);
    glVertex2i(830, 680);
    glVertex2i(580, 680);

    glBegin(GL_QUADS);
    glVertex2i(830, 680);
    glVertex2i(830, 700);
    glVertex2i(870, 750);
    glVertex2i(870, 740);

    glEnd();
    glPopMatrix();
}




void bench2()
{
 glPushMatrix();
      glTranslatef(2000.0f, 0.0f, 0.0f);
      glScalef(1,1,1);
        bench();
       glEnd();
    glPopMatrix();
}




void canon1()
{

glPushMatrix();

glTranslatef(_canmove, 0.0f, 0.0f);

glTranslatef(-100.0f, 170.0f, 0.0f);

glScalef(0.9,0.9,1);

glBegin(GL_POLYGON);

glColor3ub(112, 50, 0 );
glVertex2i(500,570);

glVertex2i(750,570);

glColor3ub(165, 110, 80 );
glVertex2i(750,700);
glVertex2i(500,700);


//glVertex2i(500,550);
glEnd();



glPushMatrix();

glTranslatef(550.0f, 550.0f, 0.0f);
glRotatef(_angle1,0.0f,0.0f,1);
glTranslatef(-550.0f, -550.0f, 0.0f);

glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{

glColor3ub(0,0,0  );

float pi=3.1416;

float A=(i*2*pi)/400;       //left big

float r=40;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(550+x,550+y);


}
glEnd();




glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{

glColor3ub(100, 35, 0 );         //leftsmall

float pi=3.1416;

float A=(i*2*pi)/400;

float r=25;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(550+x,550+y);


}
glEnd();

//chakalines

glBegin(GL_LINES);
//glLineWidth(0.2);
glColor3ub(255, 251, 206);
glVertex2i(520,550);
glVertex2i(580,550);
glVertex2i(550,525);
glVertex2i(550,575);
glEnd();

glPopMatrix();


glPushMatrix();

glTranslatef(700.0f, 550.0f, 0.0f);
glRotatef(_angle1,0.0f,0.0f,1);
glTranslatef(-700.0f, -550.0f, 0.0f);
glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{
                          //right big
glColor3ub(0,0,0  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=40;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(700+x,550+y);


}
glEnd();




glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{

glColor3ub(100, 35, 0);

float pi=3.1416;

float A=(i*2*pi)/400;

float r=25;                     //right small

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(700+x,550+y);


}
glEnd();

//chakalines


glBegin(GL_LINES);
glColor3ub(255, 251, 206);
glVertex2i(670,550);
glVertex2i(730,550);
glVertex2i(700,525);
glVertex2i(700,575);
glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(0, _crocy, 0);

glBegin(GL_POLYGON);

glColor3ub(86, 86, 86 );
glVertex2i(500,630);
glVertex2i(500,720);
glColor3ub(60, 59, 54 );       //canon body
glVertex2i(900,770);
glColor3ub(28, 28, 28 );
glVertex2i(900,730);

glEnd();



//glLineWidth(9.5);

glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{

glColor3ub(0,0,0);

float pi=3.1416;

float A=(i*2*pi)/400;

float r=20;                     //canon head golla

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(900+x,750+y);


}
glEnd();



glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{

glColor3ub(86, 86, 86);

float pi=3.1416;

float A=(i*2*pi)/400;

float r=45;                     //canon back golla

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(500+x,675+y);


}
glEnd();



glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{

glColor3ub(0,0,0);

float pi=3.1416;

float A=(i*2*pi)/400;

float r=10;                     //canon back choto golla

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(457+x,675+y);


}
glEnd();

glBegin(GL_POLYGON);

glColor3ub(255, 246, 136  );
glVertex2i(500,750);
glVertex2i(510,750);         //canon shuta
glVertex2i(530,700);
glVertex2i(540,700);

glEnd();
glPopMatrix();
glPopMatrix();
}

void canon2()
{
      glPushMatrix();


      glTranslatef(3600.0f, 0.0f, 0.0f);
      glScalef(-1,1,1);
       canon1();
       glEnd();
    glPopMatrix();
}


void wave()
{
      glPushMatrix();
   glTranslatef(_wavex, _wave, 0.0f);
   glTranslatef(-1000,-80,0);
glScalef(1.2,1,1);
    glLineWidth(5);

glBegin(GL_LINES);
glScalef(3,0,0);
glColor3ub(155, 229, 255);

glVertex2i(850,120);
glVertex2i(950,150);
glVertex2i(950,150);
glVertex2i(1050,120);
glVertex2i(1050,120);
glVertex2i(1150,150);
glVertex2i(1150,150);
glVertex2i(1250,120);
glVertex2i(1250,120);
glVertex2i(1350,150);
glVertex2i(1350,150);
glVertex2i(1450,120);

glEnd();






glPopMatrix();

}

void wave2 ()
{
    glPushMatrix();
       glTranslatef(760,0,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave3 ()
{
    glPushMatrix();
       glTranslatef(1850,0,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave4 ()
{
    glPushMatrix();
       glTranslatef(2650,0,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave5 ()
{
    glPushMatrix();
       glTranslatef(-30,130,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave6 ()
{
    glPushMatrix();
       glTranslatef(760,130,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave7 ()
{
    glPushMatrix();
       glTranslatef(1850,130,0);
       wave();
       glEnd();
    glPopMatrix();
}
void wave12 ()
{
    glPushMatrix();
       glTranslatef(2650,130,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave8 ()
{
    glPushMatrix();
       glTranslatef(770,280,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave9 ()
{
    glPushMatrix();
       glTranslatef(-30,280,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave10 ()
{
    glPushMatrix();
       glTranslatef(1850,280,0);
       wave();
       glEnd();
    glPopMatrix();
}

void wave11 ()
{
    glPushMatrix();
       glTranslatef(2650,280,0);
       wave();
       glEnd();
    glPopMatrix();
}


void sky()
{
    glBegin(GL_QUADS);

    glColor3ub(232, 245, 255   );
    glVertex2i(0,850);

    glColor3ub(164, 215, 255   );
    glVertex2i(0,1800);

    glColor3ub(136, 185, 251   );
    glVertex2i(3500,1800);

    glColor3ub(232, 245, 255   );
    glVertex2i(3500,850);

    glEnd();
}

void Nightsky()
{
    glBegin(GL_QUADS);

    glColor3ub(1, 6, 14 );
    glVertex2i(0,850);
    glVertex2i(0,1800);
    glVertex2i(3500,1800);
    glVertex2i(3500,850);

    glEnd();
}

void star()
{
    //Star
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
   glTranslatef(_starx, 0.0f, 0.0f);
    glTranslatef(-0, 820, 0);
    glScalef(0.5,0.5,0);
    glColor3ub(246, 227, 1);
    glBegin(GL_QUADS);
    glVertex2i(100, 1650);
    glVertex2i(150, 1620);
    glVertex2i(150, 1620);
    glVertex2i(200, 1650);
    glVertex2i(120, 1600);
    glVertex2i(130, 1650);
    glVertex2i(130, 1650);
    glVertex2i(200, 1650);
    glVertex2i(100, 1650);
    glVertex2i(160, 1650);
    glVertex2i(160, 1650);
    glVertex2i(180, 1600);
    glVertex2i(130, 1650);
    glVertex2i(150, 1680);
    glVertex2i(150, 1680);
    glVertex2i(170, 1650);
    glEnd();
    glPopMatrix();
}

void star1()
{
glPushMatrix();
glTranslatef(0,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star2()
{
glPushMatrix();
glTranslatef(0,-400,0);
    star();
    glEnd();
    glPopMatrix();
}



void star3()
{
glPushMatrix();
glTranslatef(250,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star4()
{
glPushMatrix();
glTranslatef(250,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star5()
{
glPushMatrix();
glTranslatef(250,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star6()
{
    glPushMatrix();
    glTranslatef(500,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star7()
{
    glPushMatrix();
    glTranslatef(500,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star8()
{
    glPushMatrix();
    glTranslatef(500,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star9()
{
    glPushMatrix();
    glTranslatef(750,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star10()
{
    glPushMatrix();
    glTranslatef(750,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star11()
{
    glPushMatrix();
    glTranslatef(750,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star12()
{
    glPushMatrix();
    glTranslatef(1000,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star13()
{
    glPushMatrix();
    glTranslatef(1000,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star14()
{
    glPushMatrix();
    glTranslatef(1000,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star15()
{
    glPushMatrix();
    glTranslatef(1250,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star16()
{
    glPushMatrix();
    glTranslatef(1250,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star17()
{
    glPushMatrix();
    glTranslatef(1250,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star18()
{
    glPushMatrix();
    glTranslatef(1500,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star19()
{
    glPushMatrix();
    glTranslatef(1500,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star20()
{
    glPushMatrix();
    glTranslatef(1500,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star21()
{
    glPushMatrix();
    glTranslatef(1750,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star22()
{
    glPushMatrix();
    glTranslatef(1750,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star23()
{
    glPushMatrix();
    glTranslatef(1750,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star24()
{
    glPushMatrix();
    glTranslatef(2000,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star25()
{
    glPushMatrix();
    glTranslatef(2000,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star26()
{
    glPushMatrix();
    glTranslatef(2000,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star27()
{
    glPushMatrix();
    glTranslatef(2250,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star28()
{
    glPushMatrix();
    glTranslatef(2250,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star29()
{
    glPushMatrix();
    glTranslatef(2250,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star30()
{
    glPushMatrix();
    glTranslatef(2500,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star31()
{
    glPushMatrix();
    glTranslatef(2500,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star32()
{
    glPushMatrix();
    glTranslatef(2500,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star33()
{
    glPushMatrix();
    glTranslatef(2750,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star34()
{
    glPushMatrix();
    glTranslatef(2750,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star35()
{
    glPushMatrix();
    glTranslatef(2750,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star36()
{
    glPushMatrix();
    glTranslatef(3000,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star37()
{
    glPushMatrix();
    glTranslatef(3000,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star38()
{
    glPushMatrix();
    glTranslatef(3000,-400,0);
    star();
    glEnd();
    glPopMatrix();
}

void star39()
{
    glPushMatrix();
    glTranslatef(3250,0,0);
    star();
    glEnd();
    glPopMatrix();
}

void star40()
{
    glPushMatrix();
    glTranslatef(3250,-200,0);
    star();
    glEnd();
    glPopMatrix();
}

void star41()
{
    glPushMatrix();
    glTranslatef(3250,-400,0);
    star();
    glEnd();
    glPopMatrix();
}


/////////////////////////SUN /////////
void sun()
{

    glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(255,255,0);

float pi=3.1416;

float A=(i*2*pi)/400;

float r=80;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(800+x,1550+y);


}
glEnd();


}

void moon()
{

    glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(239, 241, 147);


float pi=3.1416;

float A=(i*2*pi)/400;

float r=90;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(600+x,1650+y);


}
glEnd();
//


    glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(0, 0, 26 );


float pi=3.1416;

float A=(i*2*pi)/400;

float r=90;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(645+x,1650+y);


}
glEnd();



}

void ghost()
{
   glPushMatrix();
     glTranslatef(_ghostx, _ghosty, 0.0f);
      glTranslatef(-400,0,0);
      glScalef(0.8,0.8,1);
     glBegin(GL_POLYGON);
    glColor3ub(116, 16, 16 );
    glVertex2i(1250,1300);
    glVertex2i(1250,1280);    //lathi
    glVertex2i(650,1280);
    glVertex2i(650,1300);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255, 206, 40);
    glVertex2i(800,1300);
    glVertex2i(600,1375);
    glColor3ub(173, 133, 0 );
    glVertex2i(650,1325);
    glVertex2i(550,1350);
    glColor3ub(255, 206, 40);
    glVertex2i(600,1300);
    glVertex2i(525,1275);
    glColor3ub(173, 133, 0 );       //jharu
    glVertex2i(600,1250);
    glVertex2i(550,1200);
    glColor3ub(255, 206, 40);
    glVertex2i(650,1225);
    glVertex2i(600,1175);
    glColor3ub(173, 133, 0 );
    glVertex2i(800,1280);
    glVertex2i(800,1325);
    glEnd();


     glBegin(GL_POLYGON);

    glColor3ub(88, 0, 89  );

    glVertex2i(975,1610);

 glVertex2i(1120,1500);
     glVertex2i(1045,1500);

        glVertex2i(900,1550);

    glVertex2i(910,1450);

 glVertex2i(800,1150);

    glVertex2i(900,1200);

     glVertex2i(950,1150);

    glVertex2i(1000,1200);

    glVertex2i(1050,1150);

   glVertex2i(1100,1200);

    glVertex2i(1200,1150);

    glVertex2i(1040,1450);

    glVertex2i(1050,1550);

        glVertex2i(975,1610);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);   //mouth
    glVertex2i(1040,1450);
    glVertex2i(970,1500);
    glVertex2i(1042,1490);

    glEnd();



  glColor3ub(0, 0, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
     glVertex2i(1041,1470);
     glVertex2i(970,1500);

     glVertex2i(910,1450);
     glVertex2i(1050,1450);

    glEnd();




   glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(255,255,0);


float pi=3.1416;

float A=(i*2*pi)/400;

float r=15;            //eyeright

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(1010+x,1545+y);


}
glEnd();

glPopMatrix();

}

void hill()
{
    //1st hill
    glBegin(GL_TRIANGLES);

    glColor3ub(25, 136, 0  );
    glVertex2i(-100,900);

    glColor3ub(255, 255, 255   );
    glVertex2i(350,1250);

    glColor3ub(25, 136, 0    );
    glVertex2i(850,850);
    glEnd();

  //2nd hill
    glBegin(GL_TRIANGLES);

    glColor3ub(38, 71, 62 );
    glVertex2i(450,800);

    glColor3ub(201, 251, 108     );
    glVertex2i(1050,1300);

    glColor3ub(38, 71, 62  );
    glVertex2i(1650,800);
    glEnd();


       //3rd hill
    glBegin(GL_TRIANGLES);

    glColor3ub(38, 80, 62 );
    glVertex2i(1000,800);

    glColor3ub(201, 251, 108    );
    glVertex2i(1750,1400);

    glColor3ub(38, 80, 62   );
    glVertex2i(2500,800);
    glEnd();

     //5th hill
    glBegin(GL_TRIANGLES);

    glColor3ub(25, 136, 0  );
    glVertex2i(2650,850);

    glColor3ub(255, 255, 255   );
    glVertex2i(3100,1250);

    glColor3ub(25, 136, 0    );
    glVertex2i(3600,900);
    glEnd();


     //4th hill
    glBegin(GL_TRIANGLES);

    glColor3ub(38, 71, 62 );
    glVertex2i(1900,800);

    glColor3ub(201, 251, 108     );
    glVertex2i(2450,1300);

    glColor3ub(38, 71, 62  );
    glVertex2i(3050,800);
    glEnd();



}


void nighthill()
{
    //1st hill
    glBegin(GL_TRIANGLES);

    glColor3ub(25, 136, 0  );
    glVertex2i(-100,900);

    glColor3ub(96, 105, 94 );
    glVertex2i(350,1250);

    glColor3ub(25, 136, 0    );
    glVertex2i(850,850);
    glEnd();

  //2nd hill
    glBegin(GL_TRIANGLES);

    glColor3ub(63, 149, 46  );
    glVertex2i(450,800);

    glColor3ub(2, 74, 17     );
    glVertex2i(1050,1300);

    glColor3ub(63, 149, 46  );
    glVertex2i(1650,800);
    glEnd();


       //3rd hill
    glBegin(GL_TRIANGLES);

    glColor3ub(25, 136, 0  );
    glVertex2i(1000,800);

    glColor3ub(96, 105, 94   );
    glVertex2i(1750,1400);

    glColor3ub(25, 136, 0   );
    glVertex2i(2500,800);
    glEnd();

     //5th hill
    glBegin(GL_TRIANGLES);

    glColor3ub(25, 136, 0  );
    glVertex2i(2650,850);

    glColor3ub(96, 105, 94  );
    glVertex2i(3100,1250);

    glColor3ub(25, 136, 0    );
    glVertex2i(3600,900);
    glEnd();


     //4th hill
    glBegin(GL_TRIANGLES);

    glColor3ub(63, 149, 46  );
    glVertex2i(1900,800);

    glColor3ub(2, 74, 17   );
    glVertex2i(2450,1300);

    glColor3ub(63, 149, 46   );
    glVertex2i(3050,800);
    glEnd();



}




void grass()
{
glBegin(GL_QUADS);

glColor3ub(116, 234, 110    );
glVertex2i(0,400);
glColor3ub(68, 241, 59    );
glVertex2i(0,870);
glColor3ub(68, 241, 59    );
glVertex2i(3500,870);
glColor3ub(116, 234, 110    );
glVertex2i(3500,400);
glEnd();
}


void nightgrass()
{
glBegin(GL_QUADS);

glColor3ub(116, 234, 110    );
glVertex2i(0,400);
glColor3ub(23, 111, 42    );
glVertex2i(0,870);
glColor3ub(23, 111, 42     );
glVertex2i(3500,870);
glColor3ub(116, 234, 110    );
glVertex2i(3500,400);
glEnd();
}



void Ramp()
{
    //ramp
glBegin(GL_QUADS);
glColor3ub( 121, 54, 0 );
glVertex2i(1550,0);
glVertex2i(1550,425);
glColor3ub( 162, 73, 1 );
glVertex2i (1950,425);
glVertex2i(1950,0);
glEnd();
//glFlush();


glBegin(GL_QUADS);
glColor3ub( 79, 43, 14  );
glVertex2i(1550,25);
glVertex2i(1550,50);
glVertex2i (1950,50);
glVertex2i(1950,25);
glEnd();

glBegin(GL_QUADS);
glColor3ub( 79, 43, 14  );
glVertex2i(1550,75);
glVertex2i(1550,100);
glVertex2i (1950,100);
glVertex2i(1950,75);
glEnd();

glBegin(GL_QUADS);
glColor3ub( 79, 43, 14 );
glVertex2i(1550,125);
glVertex2i(1550,150);
glVertex2i (1950,150);
glVertex2i(1950,125);
glEnd();

glBegin(GL_QUADS);
glColor3ub( 79, 43, 14  );
glVertex2i(1550,125);
glVertex2i(1550,150);
glVertex2i (1950,150);
glVertex2i(1950,125);
glEnd();

glBegin(GL_QUADS);
glColor3ub( 79, 43, 14 );
glVertex2i(1550,175);
glVertex2i(1550,200);
glVertex2i (1950,200);
glVertex2i(1950,175);
glEnd();

glBegin(GL_QUADS);
glColor3ub( 79, 43, 14 );
glVertex2i(1550,225);
glVertex2i(1550,250);
glVertex2i (1950,250);
glVertex2i(1950,225);
glEnd();

glBegin(GL_QUADS);
glColor3ub( 79, 43, 14  );
glVertex2i(1550,275);
glVertex2i(1550,300);
glVertex2i (1950,300);
glVertex2i(1950,275);
glEnd();


glBegin(GL_QUADS);
glColor3ub( 79, 43, 14  );
glVertex2i(1550,325);
glVertex2i(1550,350);
glVertex2i (1950,350);
glVertex2i(1950,325);
glEnd();


glBegin(GL_QUADS);
glColor3ub( 79, 43, 14  );
glVertex2i(1550,375);
glVertex2i(1550,400);
glVertex2i (1950,400);
glVertex2i(1950,375);
glEnd();

glBegin(GL_QUADS);
glColor3ub(92, 50, 28 );
glVertex2i(1550,0);
glVertex2i(1550,425);
glVertex2i (1570,425);
glVertex2i(1570,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub( 92, 50, 28 );
glVertex2i(1950,0);
glVertex2i(1950,425);
glVertex2i (1930,425);
glVertex2i(1930,0);
glEnd();


}




void cloud()
 {

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

glTranslatef(_move4, 0.0f, 0.0f);

//1st cloud
glTranslatef(0, 300, 0.0f);
glScalef(0.8,0.8,0);

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(234, 236, 236   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(234, 236, 236   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1700+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(234, 236, 236 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1600+y);


}
glEnd();



glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(234, 236, 236  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(234, 236, 236  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1725+y);


}
glEnd();



//2nd cloud
glTranslatef(900, 300, 0.0f);
glScalef(-0.7,0.7,0);


glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1700+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1600+y);


}
glEnd();



glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);


for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1725+y);


}
glEnd();


//3rd cloud
glTranslatef(1200, 100, 0.0f);
glScalef(0.9,0.9,0);

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1700+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(232, 232, 232  );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1600+y);


}
glEnd();



glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1725+y);


}
glEnd();





//4th cloud
glTranslatef(-1800, 500, 0.0f);


glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1700+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(232, 232, 232  );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1600+y);


}
glEnd();



glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232 );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1725+y);


}
glEnd();



//5th cloud
glTranslatef(2200, -30, 0.0f);


glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(200+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1700+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(232, 232, 232   );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(300+x,1600+y);


}
glEnd();



glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=100;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1650+y);


}
glEnd();

glLineWidth(9.5);

glBegin(GL_POLYGON);

for(int i=0;i<400;i++)

{

glColor3ub(232, 232, 232  );

float pi=3.1416;

float A=(i*2*pi)/400;

float r=60;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(400+x,1725+y);


}
glEnd();




glPopMatrix();

}


void cloud2 ()
{
    glPushMatrix();
glTranslatef(-1500.0f, 20.0f, 0.0f);
    cloud();
glEnd();
glPopMatrix();
}

void cloud3 ()
{
    glPushMatrix();
glTranslatef(-3000.0f, 0.0f, 0.0f);
    cloud();
glEnd();
glPopMatrix();
}

void cloud4 ()
{
    glPushMatrix();
glTranslatef(-4500.0f, 0.0f, 0.0f);
    cloud();
glEnd();
glPopMatrix();
}


void cloud5 ()
{
    glPushMatrix();
glTranslatef(-6000.0f, 0.0f, 0.0f);
    cloud();
glEnd();
glPopMatrix();
}

void cloud6 ()
{
    glPushMatrix();
glTranslatef(1500.0f, 0.0f, 0.0f);
    cloud();
glEnd();
glPopMatrix();
}

void cloud7 ()
{
    glPushMatrix();
glTranslatef(3000.0f, 0.0f, 0.0f);
    cloud();
glEnd();
glPopMatrix();
}


void cloud8 ()
{
    glPushMatrix();
glTranslatef(4500.0f, 0.0f, 0.0f);
    cloud();
glEnd();
glPopMatrix();
}

void cloud9 ()
{
    glPushMatrix();
glTranslatef(6000.0f, 0.0f, 0.0f);
    cloud();
glEnd();
glPopMatrix();
}


/////////////////////////////////////////balloon//////////////////////////////////


void balloon(){


glMatrixMode(GL_MODELVIEW);
glPushMatrix();


glTranslatef(_move3, 0.0f, 0.0f);
glTranslatef(-1200, 400, 0.0f);
glScalef(0.9,0.70,0);
// balloon box part 1

glColor3ub(54, 8, 0);
glBegin(GL_QUADS);
glVertex2i(2750-2,1300);
glVertex2i(2850+2,1300);
glColor3ub(150,50,0);
glVertex2i(2850+2,1400);
glVertex2i(2750-2,1400);
glEnd();
// balloon box part 2
glColor3ub(0,0,0);
glLineWidth(2.0);
glBegin(GL_LINES);




glVertex2i(2750,1400);
glVertex2i(2700,1550);
glVertex2i(2850,1400);
glVertex2i(2900,1550);
//



glEnd();
// balloon box part 2
glColor3ub(0,0,0);
glLineWidth(2.0);
glBegin(GL_LINES);
glVertex2i(2750,1395);
glVertex2i(2750,1500);

glVertex2i(2850,1400-5);
glVertex2i(2850,1500);






glEnd();

//fire
glColor3ub(247,55,24);
glBegin(GL_POLYGON);
glVertex2i(2790,1450);
glVertex2i(2810,1450);
glVertex2i(2800,1510);
glEnd();
//
glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2i(2790,1425);
glVertex2i(2810,1425);
glVertex2i(2810,1450);
glVertex2i(2790,1450);
glEnd();
//
glColor3ub(0,0,0);
glBegin(GL_LINES);
glVertex2i(2745,1425);
glVertex2i(2855,1425);
glEnd();
//head

glBegin(GL_POLYGON);
glColor3ub(0, 0, 0 );
glVertex2i(2750,1500);

glColor3ub(2, 42, 126 ); //deep red
glVertex2i(2700,1550);
glVertex2i(2675,1600);
glVertex2i(2675,1700);


glVertex2i(2725,1775);

glColor3ub(2, 42, 126  ); //deep red
glVertex2i(2800,1800);

//
glVertex2i(2850,1500);
glVertex2i(2900,1550);
glVertex2i(2925,1600);
glVertex2i(2925,1700);
glVertex2i(2875,1775);
glVertex2i(2800,1800);
glEnd();




//glFlush();

glPopMatrix();

//glutSwapBuffers();

}





void smallgrass1()
{
glPushMatrix();

glTranslatef(0, 25, 0);
glBegin(GL_POLYGON);

glColor3ub(80, 217, 0);
glVertex2i(60,400);

glColor3ub(80, 217, 0);
glVertex2i(0,465);

glColor3ub(41, 112, 0);
glVertex2i(70,430);

glColor3ub(80, 217, 0);
glVertex2i(25,475);

glColor3ub(41, 112, 0);
glVertex2i(65,450);

glColor3ub(80, 217, 0);
glVertex2i(75,500);

glColor3ub(41, 112, 0);
glVertex2i(85,450);

glColor3ub(80, 217, 0);
glVertex2i(125,475);

glColor3ub(41, 112, 0);
glVertex2i(80,435);

glColor3ub(80, 217, 0);
glVertex2i(150,465);

glColor3ub(41, 112, 0);
glVertex2i(90,400);

glColor3ub(80, 217, 0);
glVertex2i(60,400);

    glEnd();

    glPopMatrix();

}
void smallgrass2()
{
glPushMatrix();
glTranslatef(120, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}

void smallgrass3()
{
glPushMatrix();
glTranslatef(270, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}
void smallgrass4()
{
glPushMatrix();
glTranslatef(420, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}
void smallgrass5()
{
glPushMatrix();
glTranslatef(550, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}
void smallgrass6()
{
glPushMatrix();
glTranslatef(2800, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}
void smallgrass7()
{
glPushMatrix();
glTranslatef(2920, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}
void smallgrass8()
{
glPushMatrix();
glTranslatef(3050, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}

void smallgrass9()
{
glPushMatrix();
glTranslatef(3200, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}

void smallgrass12()
{
glPushMatrix();
glTranslatef(3350, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}
void smallgrass10()
{
glPushMatrix();
glTranslatef(3500, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}
void smallgrass11()
{
glPushMatrix();
glTranslatef(3650, 0, 0);
smallgrass1();
glEnd();
glPopMatrix();
}


void wall()
{

//Long
glPushMatrix();
glTranslatef(0, 80, 0.);

    //Long
    glColor3ub(70, 25, 0 );
    glBegin(GL_QUADS);
    glVertex2i(0,750);
    glVertex2i(0,950);
    glVertex2i(50,950);
    glVertex2i(50,750);

    glVertex2i(100,750);
    glVertex2i(100,950);
    glVertex2i(150,950);
    glVertex2i(150,750);

    glVertex2i(200,750);
    glVertex2i(200,950);
    glVertex2i(250,950);
    glVertex2i(250,750);

    glVertex2i(300,750);
    glVertex2i(300,950);
    glVertex2i(350,950);
    glVertex2i(350,750);

    glVertex2i(400,750);
    glVertex2i(400,950);
    glVertex2i(450,950);
    glVertex2i(450,750);

    glVertex2i(500,750);
    glVertex2i(500,950);
    glVertex2i(550,950);
    glVertex2i(550,750);

    glVertex2i(600,750);
    glVertex2i(600,950);
    glVertex2i(650,950);
    glVertex2i(650,750);

    glVertex2i(700,750);
    glVertex2i(700,950);
    glVertex2i(750,950);
    glVertex2i(750,750);

    glVertex2i(800,750);
    glVertex2i(800,950);
    glVertex2i(850,950);
    glVertex2i(850,750);

    glVertex2i(900,750);
    glVertex2i(900,950);
    glVertex2i(950,950);
    glVertex2i(950,750);

    glVertex2i(1000,750);
    glVertex2i(1000,950);
    glVertex2i(1050,950);
    glVertex2i(1050,750);


    glVertex2i(1300,750);
    glVertex2i(1300,950);
    glVertex2i(1350,950);
    glVertex2i(1350,750);

    glVertex2i(1400,750);
    glVertex2i(1400,950);
    glVertex2i(1450,950);
    glVertex2i(1450,750);


    glVertex2i(1600,750);
    glVertex2i(1600,950);
    glVertex2i(1650,950);
    glVertex2i(1650,750);

    glVertex2i(1700,750);
    glVertex2i(1700,950);
    glVertex2i(1750,950);
    glVertex2i(1750,750);

    glVertex2i(1800,750);
    glVertex2i(1800,950);
    glVertex2i(1850,950);
    glVertex2i(1850,750);

    glVertex2i(2000,750);
    glVertex2i(2000,950);
    glVertex2i(2050,950);
    glVertex2i(2050,750);

    glVertex2i(2100,750);
    glVertex2i(2100,950);
    glVertex2i(2150,950);
    glVertex2i(2150,750);

    glVertex2i(2400,750);
    glVertex2i(2400,950);
    glVertex2i(2450,950);
    glVertex2i(2450,750);

    glVertex2i(2500,750);
    glVertex2i(2500,950);
    glVertex2i(2550,950);
    glVertex2i(2550,750);

    glVertex2i(2600,750);
    glVertex2i(2600,950);
    glVertex2i(2650,950);
    glVertex2i(2650,750);

    glVertex2i(2700,750);
    glVertex2i(2700,950);
    glVertex2i(2750,950);
    glVertex2i(2750,750);

    glVertex2i(2800,750);
    glVertex2i(2800,950);
    glVertex2i(2850,950);
    glVertex2i(2850,750);

    glVertex2i(2900,750);
    glVertex2i(2900,950);
    glVertex2i(2950,950);
    glVertex2i(2950,750);

    glVertex2i(3000,750);
    glVertex2i(3000,950);
    glVertex2i(3050,950);
    glVertex2i(3050,750);

    glVertex2i(3100,750);
    glVertex2i(3100,950);
    glVertex2i(3150,950);
    glVertex2i(3150,750);

    glVertex2i(3200,750);
    glVertex2i(3200,950);
    glVertex2i(3250,950);
    glVertex2i(3250,750);

    glVertex2i(3300,750);
    glVertex2i(3300,950);
    glVertex2i(3350,950);
    glVertex2i(3350,750);

    glVertex2i(3400,750);
    glVertex2i(3400,950);
    glVertex2i(3450,950);
    glVertex2i(3450,750);

//Small Triangle
    glColor3ub(70, 25, 0 );
    glBegin(GL_QUADS);
    glVertex2i(0,950);
    glVertex2i(25,980);
    glVertex2i(25,980);
    glVertex2i(50,950);

    glBegin(GL_QUADS);
    glVertex2i(100,950);
    glVertex2i(125,980);
    glVertex2i(125,980);
    glVertex2i(150,950);

    glBegin(GL_QUADS);
    glVertex2i(200,950);
    glVertex2i(225,980);
    glVertex2i(225,980);
    glVertex2i(250,950);

    glBegin(GL_QUADS);
    glVertex2i(300,950);
    glVertex2i(325,980);
    glVertex2i(325,980);
    glVertex2i(350,950);

    glBegin(GL_QUADS);
    glVertex2i(400,950);
    glVertex2i(425,980);
    glVertex2i(425,980);
    glVertex2i(450,950);

    glBegin(GL_QUADS);
    glVertex2i(500,950);
    glVertex2i(525,980);
    glVertex2i(525,980);
    glVertex2i(550,950);

    glBegin(GL_QUADS);
    glVertex2i(600,950);
    glVertex2i(625,980);
    glVertex2i(625,980);
    glVertex2i(650,950);

    glBegin(GL_QUADS);
    glVertex2i(700,950);
    glVertex2i(725,980);
    glVertex2i(725,980);
    glVertex2i(750,950);

    glBegin(GL_QUADS);
    glVertex2i(800,950);
    glVertex2i(825,980);
    glVertex2i(825,980);
    glVertex2i(850,950);

    glBegin(GL_QUADS);
    glVertex2i(900,950);
    glVertex2i(925,980);
    glVertex2i(925,980);
    glVertex2i(950,950);

    glBegin(GL_QUADS);
    glVertex2i(1000,950);
    glVertex2i(1025,980);
    glVertex2i(1025,980);
    glVertex2i(1050,950);



    glVertex2i(1300,950);
    glVertex2i(1325,980);
    glVertex2i(1325,980);
    glVertex2i(1350,950);

    glVertex2i(1400,950);
    glVertex2i(1425,980);
    glVertex2i(1425,980);
    glVertex2i(1450,950);



    glVertex2i(1600,950);
    glVertex2i(1625,980);
    glVertex2i(1625,980);
    glVertex2i(1650,950);

    glVertex2i(1700,950);
    glVertex2i(1725,980);
    glVertex2i(1725,980);
    glVertex2i(1750,950);

    glVertex2i(1800,950);
    glVertex2i(1825,980);
    glVertex2i(1825,980);
    glVertex2i(1850,950);


    glVertex2i(2000,950);
    glVertex2i(2025,980);
    glVertex2i(2025,980);
    glVertex2i(2050,950);

    glVertex2i(2100,950);
    glVertex2i(2125,980);
    glVertex2i(2125,980);
    glVertex2i(2150,950);


    glVertex2i(2400,950);
    glVertex2i(2425,980);
    glVertex2i(2425,980);
    glVertex2i(2450,950);

    glVertex2i(2500,950);
    glVertex2i(2525,980);
    glVertex2i(2525,980);
    glVertex2i(2550,950);

    glVertex2i(2600,950);
    glVertex2i(2625,980);
    glVertex2i(2625,980);
    glVertex2i(2650,950);

    glVertex2i(2700,950);
    glVertex2i(2725,980);
    glVertex2i(2725,980);
    glVertex2i(2750,950);

    glVertex2i(2800,950);
    glVertex2i(2825,980);
    glVertex2i(2825,980);
    glVertex2i(2850,950);

    glVertex2i(2900,950);
    glVertex2i(2925,980);
    glVertex2i(2925,980);
    glVertex2i(2950,950);

    glVertex2i(3000,950);
    glVertex2i(3025,980);
    glVertex2i(3025,980);
    glVertex2i(3050,950);

    glVertex2i(3100,950);
    glVertex2i(3125,980);
    glVertex2i(3125,980);
    glVertex2i(3150,950);

    glVertex2i(3200,950);
    glVertex2i(3225,980);
    glVertex2i(3225,980);
    glVertex2i(3250,950);

    glVertex2i(3300,950);
    glVertex2i(3325,980);
    glVertex2i(3325,980);
    glVertex2i(3350,950);

    glVertex2i(3400,950);
    glVertex2i(3425,980);
    glVertex2i(3425,980);
    glVertex2i(3450,950);

//Short
    glColor3ub(104, 38, 0  );
    glBegin(GL_QUADS);
    glVertex2i(50,750);
    glVertex2i(50,925);
    glVertex2i(100,925);
    glVertex2i(100,750);

    glBegin(GL_QUADS);
    glVertex2i(150,750);
    glVertex2i(150,925);
    glVertex2i(200,925);
    glVertex2i(200,750);

    glBegin(GL_QUADS);
    glVertex2i(250,750);
    glVertex2i(250,925);
    glVertex2i(300,925);
    glVertex2i(300,750);

    glBegin(GL_QUADS);
    glVertex2i(350,750);
    glVertex2i(350,925);
    glVertex2i(400,925);
    glVertex2i(400,750);

    glBegin(GL_QUADS);
    glVertex2i(450,750);
    glVertex2i(450,925);
    glVertex2i(500,925);
    glVertex2i(500,750);

    glBegin(GL_QUADS);
    glVertex2i(550,750);
    glVertex2i(550,925);
    glVertex2i(600,925);
    glVertex2i(600,750);

    glBegin(GL_QUADS);
    glVertex2i(650,750);
    glVertex2i(650,925);
    glVertex2i(700,925);
    glVertex2i(700,750);

    glBegin(GL_QUADS);
    glVertex2i(750,750);
    glVertex2i(750,925);
    glVertex2i(800,925);
    glVertex2i(800,750);

    glBegin(GL_QUADS);
    glVertex2i(850,750);
    glVertex2i(850,925);
    glVertex2i(900,925);
    glVertex2i(900,750);

    glBegin(GL_QUADS);
    glVertex2i(950,750);
    glVertex2i(950,925);
    glVertex2i(1000,925);
    glVertex2i(1000,750);

    glBegin(GL_QUADS);
    glVertex2i(1050,750);
    glVertex2i(1050,925);
    glVertex2i(1100,925);
    glVertex2i(1100,750);

    glBegin(GL_QUADS);
    glVertex2i(1150,750);
    glVertex2i(1150,925);
    glVertex2i(1200,925);
    glVertex2i(1200,750);

    glBegin(GL_QUADS);
    glVertex2i(1250,750);
    glVertex2i(1250,925);
    glVertex2i(1300,925);
    glVertex2i(1300,750);

    glBegin(GL_QUADS);
    glVertex2i(1350,750);
    glVertex2i(1350,925);
    glVertex2i(1400,925);
    glVertex2i(1400,750);

    glBegin(GL_QUADS);
    glVertex2i(1450,750);
    glVertex2i(1450,925);
    glVertex2i(1500,925);
    glVertex2i(1500,750);

    glBegin(GL_QUADS);
    glVertex2i(1550,750);
    glVertex2i(1550,925);
    glVertex2i(1600,925);
    glVertex2i(1600,750);

    glBegin(GL_QUADS);
    glVertex2i(1650,750);
    glVertex2i(1650,925);
    glVertex2i(1700,925);
    glVertex2i(1700,750);

    glBegin(GL_QUADS);
    glVertex2i(1750,750);
    glVertex2i(1750,925);
    glVertex2i(1800,925);
    glVertex2i(1800,750);

    glBegin(GL_QUADS);
    glVertex2i(1850,750);
    glVertex2i(1850,925);
    glVertex2i(1900,925);
    glVertex2i(1900,750);

    glBegin(GL_QUADS);
    glVertex2i(1950,750);
    glVertex2i(1950,925);
    glVertex2i(2000,925);
    glVertex2i(2000,750);

    glBegin(GL_QUADS);
    glVertex2i(2050,750);
    glVertex2i(2050,925);
    glVertex2i(2100,925);
    glVertex2i(2100,750);

    glBegin(GL_QUADS);
    glVertex2i(2150,750);
    glVertex2i(2150,925);
    glVertex2i(2200,925);
    glVertex2i(2200,750);

    glBegin(GL_QUADS);
    glVertex2i(2250,750);
    glVertex2i(2250,925);
    glVertex2i(2300,925);
    glVertex2i(2300,750);

    glBegin(GL_QUADS);
    glVertex2i(2350,750);
    glVertex2i(2350,925);
    glVertex2i(2400,925);
    glVertex2i(2400,750);

    glBegin(GL_QUADS);
    glVertex2i(2450,750);
    glVertex2i(2450,925);
    glVertex2i(2500,925);
    glVertex2i(2500,750);

    glBegin(GL_QUADS);
    glVertex2i(2550,750);
    glVertex2i(2550,925);
    glVertex2i(2600,925);
    glVertex2i(2600,750);

    glBegin(GL_QUADS);
    glVertex2i(2650,750);
    glVertex2i(2650,925);
    glVertex2i(2700,925);
    glVertex2i(2700,750);

    glBegin(GL_QUADS);
    glVertex2i(2750,750);
    glVertex2i(2750,925);
    glVertex2i(2800,925);
    glVertex2i(2800,750);

    glBegin(GL_QUADS);
    glVertex2i(2850,750);
    glVertex2i(2850,925);
    glVertex2i(2900,925);
    glVertex2i(2900,750);

    glBegin(GL_QUADS);
    glVertex2i(2950,750);
    glVertex2i(2950,925);
    glVertex2i(3000,925);
    glVertex2i(3000,750);

    glBegin(GL_QUADS);
    glVertex2i(3050,750);
    glVertex2i(3050,925);
    glVertex2i(3100,925);
    glVertex2i(3100,750);

    glBegin(GL_QUADS);
    glVertex2i(3150,750);
    glVertex2i(3150,925);
    glVertex2i(3200,925);
    glVertex2i(3200,750);

    glBegin(GL_QUADS);
    glVertex2i(3250,750);
    glVertex2i(3250,925);
    glVertex2i(3300,925);
    glVertex2i(3300,750);

    glBegin(GL_QUADS);
    glVertex2i(3350,750);
    glVertex2i(3350,925);
    glVertex2i(3400,925);
    glVertex2i(3400,750);

    glBegin(GL_QUADS);
    glVertex2i(3450,750);
    glVertex2i(3450,925);
    glVertex2i(3500,925);
    glVertex2i(3500,750);

    glEnd();

    glPopMatrix();
}



void nightcrocodile()
{

glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(0, _crocy, 0.0f);
glTranslatef(-70, 70, 0.0f);



//Crocodile
glScalef(0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(720+x,305+y);


}
glEnd();



glPopMatrix();

//glutSwapBuffers();


}

void nightcrocodile2 ()
{
    //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(0.0, _crocy, 0.0f);


glTranslatef(70, -160, 0.0f);
glScalef(0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();





//glFlush();

glPopMatrix();

//glutSwapBuffers();
}




void nightcrocodile3()  //left
{
        //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(0.0, _crocy, 0.0f);


glTranslatef(3550, 70, 0.0f);
glScalef(-0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();


//glFlush();

glPopMatrix();

//glutSwapBuffers();



}



void nightcrocodile4() //left
{
        //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(0.0, _crocy, 0.0f);


glTranslatef(3450, -160, 0.0f);
glScalef(-0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();




//glFlush();

glPopMatrix();

//glutSwapBuffers();


}




void nightcrocodile5()
{
        //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(0.0, _crocy2, 0.0f);


glTranslatef(2800, 60, 0.0f);
glScalef(-0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();



glPopMatrix();

//glutSwapBuffers();



}



void nightcrocodile6() //left
{




glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(0.0, _crocy2, 0.0f);
glTranslatef(700, 60, 0.0f);


glScalef(0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();


glPopMatrix();

//glutSwapBuffers();

}



void nightcrocodile7()  //left
{
        //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(0.0, _crocy2, 0.0f);


glTranslatef(2700, -150, 0.0f);
glScalef(-0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();



glPopMatrix();

//glutSwapBuffers();



}


void nightcrocodile8()
{




glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(0.0, _crocy2, 0.0f);
glTranslatef(800, -150, 0.0f);


glScalef(0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1


glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();


glPopMatrix();

//glutSwapBuffers();

}



void crocodile1()
{




glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move, _crocy, 0.0f);
glTranslatef(-70, 70, 0.0f);



//Crocodile
glScalef(0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(720+x,305+y);


}
glEnd();

//eye2
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(255,255,255 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=5;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(720+x,305+y);


}
glEnd();




//glFlush();







glPopMatrix();

//glutSwapBuffers();






}




void crocodile2 ()
{
    //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move, _crocy, 0.0f);


glTranslatef(500, -160, 0.0f);
glScalef(0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();

//eye2
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(255, 255, 255 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=5;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();


//glFlush();

glPopMatrix();

//glutSwapBuffers();







}

void crocodile3()  //left
{
        //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move2, _crocy, 0.0f);


glTranslatef(3500, 70, 0.0f);
glScalef(-0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();

//eye2
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(255, 255, 255 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=5;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();


//glFlush();

glPopMatrix();

//glutSwapBuffers();



}



void crocodile4() //left
{
        //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move2, _crocy, 0.0f);


glTranslatef(3000, -160, 0.0f);
glScalef(-0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();

//eye2
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(255, 255, 255 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=5;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();



//glFlush();

glPopMatrix();

//glutSwapBuffers();


}









void crocodile5()
{
        //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move2, _crocy2, 0.0f);


glTranslatef(4500, -20, 0.0f);
glScalef(-0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();

//eye2
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(255, 255, 255 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=5;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();


//glFlush();

glPopMatrix();

//glutSwapBuffers();



}



void crocodile6() //left
{




glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move, _crocy2, 0.0f);
glTranslatef(-1100, -50, 0.0f);


glScalef(0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();

//eye2
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(255, 255, 255 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=5;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();




//glFlush();







glPopMatrix();

//glutSwapBuffers();

}



void crocodile7()  //left
{
        //crocodile2
glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move2, _crocy2, 0.0f);


glTranslatef(2200, -40, 0.0f);
glScalef(-0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();

//eye2
glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(255, 255, 255 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=5;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();


//glFlush();

glPopMatrix();

//glutSwapBuffers();



}


void crocodile8()
{




glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glTranslatef(_move, _crocy2, 0.0f);
glTranslatef(1300, -30, 0.0f);


glScalef(0.9,0.9,0);
glColor3ub(37, 68, 47);
glBegin(GL_POLYGON);
glVertex2i(100,250);
glVertex2i(350,300);
glVertex2i(400,320);
glVertex2i(450,325);
glVertex2i(500,320);
glVertex2i(650,312);

glColor3ub(0, 115, 36);
glVertex2i(700,300);
glVertex2i(725,330);
glVertex2i(750,300);
glColor3ub(44, 77, 48);
glVertex2i(850,240);

glVertex2i(700,228);
glVertex2i(640,215);
glColor3ub(44, 77, 48);
glVertex2i(550,208);
glVertex2i(440,212);
glVertex2i(100,250);


glEnd();
//glFlush();


// Blades

glColor3ub(0, 0, 0);
glBegin(GL_TRIANGLES);
//1st blade
glVertex2i(350,300);
glVertex2i(370,330);
glVertex2i(385,300);
//2nd blade
glVertex2i(400,300);
glVertex2i(435,300);
glVertex2i(418,350);
//3rd blade
glVertex2i(450,300);
glVertex2i(465,350);
glVertex2i(480,300);
//4th blade
glVertex2i(500,300);
glVertex2i(520,350);
glVertex2i(530,300);
//5th blade
glVertex2i(550,300);
glVertex2i(565,350);
glVertex2i(575,300);
//6th blade
glVertex2i(585,300);
glVertex2i(600,340);
glVertex2i(615,300);

glEnd();

//eye 1


glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(0, 0,0);

float pi=3.1416;

float A=(i*2*pi)/200;

float r=13;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();

//eye2


glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(255, 255, 255 );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=5;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(725+x,300+y);


}
glEnd();




//glFlush();







glPopMatrix();

//glutSwapBuffers();






}




void castleramp()
{

    glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glScalef(1,1.1,1);

glTranslatef(0, -40, 0.0f);

//stage
glBegin(GL_QUADS);


glColor3ub(107, 106, 102 );
glVertex2i(950,585);
glVertex2i(2550,585);

glColor3ub(215, 215, 215 );
glVertex2i(2850,431);
glVertex2i(650,431);
glEnd();
//tiles line
glBegin(GL_LINES);
glLineWidth(1);
glColor3ub(59, 59, 58 );
glVertex2i(647,431);
glVertex2i(950,585);
glEnd();
glBegin(GL_LINES);
glVertex2i(2547,585);
glVertex2i(2850,431);

glEnd();

//black tiles

glBegin(GL_QUADS);
glColor3ub(83, 83, 83 );
glVertex2i(900,510);
glVertex2i(2600,510);

glColor3ub(12, 12, 12 );
glVertex2i(2600,550);
glVertex2i(900,550);
glEnd();


//black tiles2

glBegin(GL_QUADS);
glColor3ub(83, 83, 83 );
glVertex2i(1200,468);
glVertex2i(2300,468);

glColor3ub(12, 12, 12 );
glVertex2i(2300,510);
glVertex2i(1200,510);
glEnd();

//black tiles3

glBegin(GL_QUADS);
glColor3ub(83, 83, 83 );
glVertex2i(1450,430);
glVertex2i(2050,430);

glColor3ub(12, 12, 12 );
glVertex2i(2050,470);
glVertex2i(1450,470);
glEnd();
glPopMatrix();
}







void Castle() {

    glMatrixMode(GL_MODELVIEW);

glPushMatrix();


glScalef(1,1.1,1);

glTranslatef(0, -40, 0.0f);




//Left castle building 1

glBegin(GL_QUADS);

glColor3ub(31, 17, 1 );
glVertex2i(950,550);
glVertex2i(1100,550);

glColor3ub(250, 19, 0 );
glVertex2i(1100,1000);
glVertex2i(950,1000);
glEnd();

glColor3ub(55, 3, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
   glVertex2i(950,550);
   glVertex2i(950,1000);
   glVertex2i(950,1000);
   glVertex2i(1100,1000);
   glVertex2i(1100,1000);
glVertex2i(1100,550);


    glEnd();

//Left castle building 2

glBegin(GL_QUADS);
glColor3ub( 31, 17, 1 );
glVertex2i(1100,550);
glVertex2i(1300,550);
glColor3ub( 182, 18, 5 );
glVertex2i(1300,900);
glVertex2i(1100,900);
glEnd();

glColor3ub(55, 3, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
 glVertex2i(1100,550);
glVertex2i(1100,900);
glVertex2i(1100,900);
glVertex2i(1300,900);
glVertex2i(1300,900);
glVertex2i(1300,550);
glEnd();
//under roof

glBegin(GL_QUADS);

glColor3ub(83, 83, 83 );
glVertex2i(1100,900);
glVertex2i(1300,900);

glColor3ub(12, 12, 12 );
glVertex2i(1300,950);
glVertex2i(1100,950);
glEnd();

//Left castle building 3 1st stored

glBegin(GL_QUADS);
glColor3ub( 31, 17, 1 );
glVertex2i(1300,550);
glVertex2i(1500,550);
glColor3ub( 255, 0, 0  );
glVertex2i(1500,1000);
glVertex2i(1300,1000);
glEnd();

glColor3ub(55, 3, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
glVertex2i(1300,550);
glVertex2i(1300,1000);
glVertex2i(1300,1000);
glVertex2i(1500,1000);
glVertex2i(1500,1000);
glVertex2i(1500,550);
glEnd();

//2nd stored

glBegin(GL_QUADS);
glColor3ub(87, 0, 0   );
glVertex2i(1325,1000);
glVertex2i(1475,1000);

glColor3ub( 255, 0, 0  );
glVertex2i(1475,1150);
glVertex2i(1325,1150);
glEnd();

glColor3ub(55, 3, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
glVertex2i(1325,1000);
    glVertex2i(1325,1150);
    glVertex2i(1325,1150);
    glVertex2i(1475,1150);
      glVertex2i(1475,1150);
    glVertex2i(1475,1000);
glEnd();

//under roof

glBegin(GL_QUADS);
glColor3ub(83, 83, 83 );
glVertex2i(1300,950);
glVertex2i(1500,950);

glColor3ub(12, 12, 12 );
glVertex2i(1500,1000);
glVertex2i(1300,1000);
glEnd();

// roof

glBegin(GL_POLYGON);
glColor3ub(72, 69, 69   );
glVertex2i(1325,1150);

glColor3ub(0,0,0 );
glVertex2i(1400,1250);


glColor3ub(72, 69, 69  );
glVertex2i(1475,1150);
glEnd();

//flag
glLineWidth(4.0);
glBegin(GL_LINES);
glColor3ub(150,150,150);
glVertex2i(1400,1249);
glVertex2i(1400,1300);
glEnd();
//
glBegin(GL_POLYGON);
glColor3ub(0,86,233);
glVertex2i(1401,1300);
glVertex2i(1470,1300);
glVertex2i(1460,1285);
glColor3ub(0,86,233);
glVertex2i(1470,1275);
glVertex2i(1401,1275);

glEnd();

//Center castle building 1st stored

glBegin(GL_QUADS);
glColor3ub( 33, 2, 0);
glVertex2i(1500,550);
glVertex2i(2000,550);
glColor3ub( 220, 16, 2 );
glVertex2i(2000,900);
glVertex2i(1500,900);
glEnd();


//under roof

glBegin(GL_QUADS);
glColor3ub(83, 83, 83 );
glVertex2i(1500,900);
glVertex2i(2000,900);

glColor3ub(12, 12, 12 );
glVertex2i(2000,950);
glVertex2i(1500,950);
glEnd();

//2nd stored

glBegin(GL_QUADS);
glColor3ub(33, 2, 0 );
glVertex2i(1625,950);
glVertex2i(1875,950);
glColor3ub( 255,0,0 );
glVertex2i(1875,1150);
glVertex2i(1625,1150);
glEnd();

glColor3ub(55, 3, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
glVertex2i(1625,950);
glVertex2i(1625,1150);
glVertex2i(1625,1150);
glVertex2i(1875,1150);
glVertex2i(1875,1150);
glVertex2i(1875,950);
glEnd();



// roof

glBegin(GL_POLYGON);
glColor3ub(55, 52, 52 );
glVertex2i(1625,1150);
glColor3ub(55, 52, 52 );
glVertex2i(1875,1150);
glColor3ub( 0,0,0 );
glVertex2i(1750,1300);
glEnd();

//flag
glLineWidth(4.0);
glBegin(GL_LINES);
glColor3ub(150,150,150);
glVertex2i(1750,1297);
glVertex2i(1750,1400);
glEnd();
//
glBegin(GL_POLYGON);
glColor3ub(0,255,0);
glVertex2i(1751,1375);
glVertex2i(1820,1375);
glVertex2i(1810,1385);
glVertex2i(1820,1400);
glVertex2i(1751,1400);

glEnd();

//right castle building 3 1st stored

glBegin(GL_QUADS);
glColor3ub( 31, 17, 1 );
glVertex2i(2000,550);
glVertex2i(2200,550);
glColor3ub( 255,0,0 );
glVertex2i(2200,950);
glVertex2i(2000,950);
glEnd();

glColor3ub(55, 3, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(2000,550);
    glVertex2i(2000,950);
    glVertex2i(2000,950);
    glVertex2i(2200,950);
    glVertex2i(2200,950);
    glVertex2i(2200,550);

glEnd();




glColor3ub(85, 85, 85);

//2nd stored
glColor3ub(103, 39, 17);
glBegin(GL_QUADS);
glColor3ub(87, 0, 0   );
glVertex2i(2025,1000);
glVertex2i(2175,1000);
glColor3ub( 255,0,0 );
glVertex2i(2175,1150);
glVertex2i(2025,1150);
glEnd();


glColor3ub(55, 3, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(2025,1000);
  glVertex2i(2025,1150);
  glVertex2i(2025,1150);
    glVertex2i(2175,1150);
        glVertex2i(2175,1150);
    glVertex2i(2175,1000);


glEnd();

//under roof

glBegin(GL_QUADS);
glColor3ub(83, 83, 83 );
glVertex2i(2000,950);
glVertex2i(2200,950);

glColor3ub(12, 12, 12);
glVertex2i(2200,1000);
glVertex2i(2000,1000);
glEnd();

// roof

glBegin(GL_POLYGON);
glColor3ub(72, 69, 69   );
glVertex2i(2025,1150);
glColor3ub(72, 69, 69   );
glVertex2i(2175,1150);
glColor3ub(0,0,0  );
glVertex2i(2100,1250);
glEnd();

//flag
glLineWidth(4.0);
glBegin(GL_LINES);
glColor3ub(150,150,150);
glVertex2i(2100,1249);
glVertex2i(2100,1300);
glEnd();

//
glBegin(GL_POLYGON);
glColor3ub(255,165,0);
glVertex2i(2101,1300);
glVertex2i(2170,1300);
glVertex2i(2160,1285);
glVertex2i(2170,1275);
glVertex2i(2101,1275);

glEnd();

//Right castle building 2

glBegin(GL_QUADS);

glColor3ub( 31, 17, 1 );
glVertex2i(2200,550);
glVertex2i(2400,550);

glColor3ub( 182, 18, 5 );
glVertex2i(2400,900);
glVertex2i(2200,900);
glEnd();

glColor3ub(55, 3, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
glVertex2i(2200,550);
glVertex2i(2200,900);
glVertex2i(2200,900);
glVertex2i(2400,900);
glVertex2i(2400,900);
glVertex2i(2400,550);

glEnd();


glColor3ub(85, 85, 85);
glLineWidth(1.5);

//under roof

glBegin(GL_QUADS);
glColor3ub(83, 83, 83 );
glVertex2i(2200,900);
glVertex2i(2400,900);

glColor3ub(12, 12, 12 );
glVertex2i(2400,950);
glVertex2i(2200,950);
glEnd();

//Right castle building 1
glColor3ub( 31, 17, 1 );
glBegin(GL_QUADS);
glVertex2i(2400,550);
glVertex2i(2550,550);

glColor3ub(250, 19, 0 );
glVertex2i(2550,1000);
glVertex2i(2400,1000);
glEnd();


glColor3ub(55, 3, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
 glVertex2i(2400,550);
 glVertex2i(2400,1000);
 glVertex2i(2400,1000);
 glVertex2i(2550,1000);
 glVertex2i(2550,1000);
  glVertex2i(2550,550);

glEnd();




/////////Windows//////////////

//Left building 1 Window

glBegin(GL_QUADS);
glColor3ub(255,255,0 );
glVertex2i(975,850);
glVertex2i(975,900);

glColor3ub(255, 251, 224    );
glVertex2i(1075,900);
glVertex2i(1075,850);
glEnd();

//Left building 2 Window

glBegin(GL_QUADS);

glColor3ub(255,255,0  );
glVertex2i(1150,750);
glVertex2i(1150,800);

glColor3ub(255, 251, 224    );
glVertex2i(1250,800);
glVertex2i(1250,750);

glEnd();

//Left building 3 Window down

glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(1350,700);
glVertex2i(1350,750);
glColor3ub(255, 251, 224 );
glVertex2i(1450,750);
glVertex2i(1450,700);
glEnd();
//Left building 3 Window middle

glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(1350,850);
glVertex2i(1350,900);
glColor3ub(255, 251, 224 );
glVertex2i(1450,900);
glVertex2i(1450,850);
glEnd();

//Left building 3 Window up


glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(1350,1050);
glVertex2i(1350,1100);
glColor3ub(255, 251, 224 );
glVertex2i(1450,1100);
glVertex2i(1450,1050);

glEnd();

//Center building  Window down

//Center building  Window up

glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(1700,1050);
glVertex2i(1700,1100);
glColor3ub(255, 251, 224 );
glVertex2i(1800,1100);
glVertex2i(1800,1050);

glEnd();

//Right building 3 Window down

glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(2050,700);
glVertex2i(2050,750);
glColor3ub(255, 251, 224 );
glVertex2i(2150,750);
glVertex2i(2150,700);
glEnd();
//Right building 3 Window middle


glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(2050,850);
glVertex2i(2050,900);
glColor3ub(255, 251, 224 );
glVertex2i(2150,900);
glVertex2i(2150,850);

glEnd();
//Right building 3 Window up


glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(2050,1050);
glVertex2i(2050,1100);
glColor3ub(255, 251, 224 );
glVertex2i(2150,1100);
glVertex2i(2150,1050);

glEnd();

//Right building 2 Window


glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(2250,750);
glVertex2i(2250,800);
glColor3ub(255, 251, 224 );
glVertex2i(2350,800);
glVertex2i(2350,750);

glEnd();

//Right building 1 Window


glBegin(GL_QUADS);
glColor3ub(255,255,0  );
glVertex2i(2425,850);
glVertex2i(2425,900);
glColor3ub(255, 251, 224 );
glVertex2i(2525,900);
glVertex2i(2525,850);

glEnd();


//MOSAL 1
//fire
glColor3ub(255, 200, 0 );
glBegin(GL_POLYGON);
glVertex2i(1175,1025);
glVertex2i(1225,1025);
glVertex2i(1200,1100);
glEnd();
//
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(1175,1030);
glVertex2i(1225,1030);
glVertex2i(1235,1055);
glVertex2i(1165,1055);
glEnd();
//
glColor3ub(150,50,0);
glBegin(GL_QUADS);
glVertex2i(1175,950);
glVertex2i(1225,950);
glColor3ub(153, 16, 16 );
glVertex2i(1225,1030);
glVertex2i(1175,1030);
glEnd();

//MOSAL 2
glColor3ub(255, 200, 0 );
glBegin(GL_POLYGON);
glVertex2i(2275,1025);
glVertex2i(2325,1025);
glColor3ub(255, 200, 0 );
glVertex2i(2300,1100);
glEnd();
//
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(2275,1030);
glVertex2i(2325,1030);
glColor3ub(0,0,0);
glVertex2i(2335,1055);
glVertex2i(2265,1055);
glEnd();
//
glColor3ub(150,50,0);
glBegin(GL_QUADS);
glVertex2i(2275,950);
glVertex2i(2325,950);
glColor3ub(153, 16, 16);
glVertex2i(2325,1030);
glVertex2i(2275,1030);
glEnd();
//




//black box left
//Black Box left building 1 left
glColor3ub(0,0,0);
glBegin(GL_QUADS);
glVertex2i(950,1000);
glVertex2i(980,1000);
glVertex2i(980,1050);
glVertex2i(950,1050);
glEnd();

//Black Box left building 1 center
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1010,1000);
glVertex2i(1040,1000);
glVertex2i(1040,1050);
glVertex2i(1010,1050);
glEnd();
//Black Box left building 1 right
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1070,1000);
glVertex2i(1100,1000);
glVertex2i(1100,1050);
glVertex2i(1070,1050);
glEnd();

//Black Box left building 2 left
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1120,950);
glVertex2i(1150,950);
glVertex2i(1150,1000);
glVertex2i(1120,1000);
glEnd();

//Black Box left building 2 right
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1240,950);
glVertex2i(1270,950);
glVertex2i(1270,1000);
glVertex2i(1240,1000);
glEnd();

//Black Box Center
//Black Box Middle building left 1
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1525,950);
glVertex2i(1575,950);
glVertex2i(1575,1000);
glVertex2i(1525,1000);
glEnd();
//Black Box Middle building left 2
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1600,950);
glVertex2i(1650,950);
glVertex2i(1650,1000);
glVertex2i(1600,1000);
glEnd();
//Black box Middle building left 3
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1675,950);
glVertex2i(1725,950);
glVertex2i(1725,1000);
glVertex2i(1675,1000);
glEnd();
//Black box Middle building right 3
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1765,950);
glVertex2i(1815,950);
glVertex2i(1815,1000);
glVertex2i(1765,1000);
glEnd();
//Black box  Middle building right 2
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1855,950);
glVertex2i(1905,950);
glVertex2i(1905,1000);
glVertex2i(1855,1000);
glEnd();
//Black box Middle building right 1
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(1930,950);
glVertex2i(1975,950);
glVertex2i(1975,1000);
glVertex2i(1930,1000);
glEnd();

//Black Box right
//Black Box Right building 2 left
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(2225,950);
glVertex2i(2255,950);
glVertex2i(2255,1000);
glVertex2i(2225,1000);
glEnd();


//Black Box right building 2 right
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(2345,950);
glVertex2i(2375,950);
glVertex2i(2375,1000);
glVertex2i(2345,1000);
glEnd();

//Black Box right building 1 left
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(2400,1000);
glVertex2i(2430,1000);
glVertex2i(2430,1050);
glVertex2i(2400,1050);
glEnd();

//Black Box right building 1 center
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(2460,1000);
glVertex2i(2490,1000);
glVertex2i(2490,1050);
glVertex2i(2460,1050);
glEnd();

//Black Box right building 1 right
glColor3ub(0,0,00);
glBegin(GL_QUADS);
glVertex2i(2520,1000);
glVertex2i(2550,1000);
glVertex2i(2550,1050);
glVertex2i(2520,1050);
glEnd();


//Door
glColor3ub(50, 30, 10 );
glBegin(GL_POLYGON);
glVertex2i(1625,550);
glVertex2i(1875,550);
glVertex2i(1875,750);
glColor3ub(255,255,255 );
glVertex2i(1750,800);
glVertex2i(1625,750);


glEnd();


glColor3ub(55, 3, 0);
    glLineWidth(1);
    glBegin(GL_LINES);

glVertex2i(1625,550);
glVertex2i(1625,750);
glVertex2i(1875,550);
glVertex2i(1875,750);
glVertex2i(1625,750);
glVertex2i(1750,800);
glVertex2i(1750,800);
glVertex2i(1875,750);
glEnd();



glPopMatrix();
//glFlush();
}

void leftwindmill()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glTranslatef(-60, 120, 0.0f);



glBegin(GL_POLYGON);
glColor3ub(21, 22, 4  );

glVertex2i(100,450);
glVertex2i(130,480);
glVertex2i(430,480);
glVertex2i(430,430);
glVertex2i(400,400);
glVertex2i(400,450);
glVertex2i(100,450);


glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0 );

glVertex2i(100,400);
glVertex2i(100,450);
glVertex2i(400,450);
glVertex2i(400,400);
glEnd();

    //body
glBegin(GL_POLYGON);
glColor3ub(255, 112, 0);
glVertex2i(150,450);
glVertex2i(200,900);

glColor3ub(109, 5, 0);
glVertex2i(300,900);
glVertex2i(350,450);

glEnd();


 //upper bar
glBegin(GL_QUADS);
glColor3ub(0, 0, 0 );

glVertex2i(200,900);
glVertex2i(200,950);
glVertex2i(300,950);
glVertex2i(300,900);


glEnd();



glTranslatef(250.0f, 900.0f, 0.0f);
glRotatef(_angle1,0.0f,0.0f,1);
glTranslatef(-250.0f, -900.0f, 0.0f);


   //fan
glBegin(GL_POLYGON);
glColor3ub(255, 135, 0   );
glVertex2i(250,925);
glColor3ub(255, 255, 0 );
glVertex2i(50,950);
                         //leftright
glVertex2i(50,850);
glVertex2i(250,875);
glColor3ub(255, 255, 0  );
glVertex2i(450,850);
glVertex2i(450,950);


glEnd();

//Border Line (Left-Right)
    glColor3ub(220, 121, 87  );
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2i(50, 850);
    glVertex2i(50, 950);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(50, 850);
    glVertex2i(250, 875);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(50, 950);
    glVertex2i(250, 925);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(250, 875);
    glVertex2i(450, 850);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(450, 850);
    glVertex2i(450, 950);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(450, 950);
    glVertex2i(250, 925);
    glEnd();


glBegin(GL_POLYGON);
glColor3ub(255, 135, 0  );
glVertex2i(225,900);
glColor3ub(255, 255, 0  );
glVertex2i(200,1100);
                                            //updown
glVertex2i(300,1100);
glVertex2i(275,900);
glVertex2i(300,700);
glColor3ub(255, 255, 0  );
glVertex2i(200,700);
glVertex2i(225,900);
glEnd();

//Border Line (Up-Down)
    glColor3ub(220, 121, 87  );
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2i(200, 700);
    glVertex2i(300, 700);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(200, 700);
    glVertex2i(225, 900);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(300, 700);
    glVertex2i(275, 900);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(200, 1100);
    glVertex2i(300, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(225, 900);
    glVertex2i(200, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(275, 900);
    glVertex2i(300, 1100);
    glEnd();



glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(24, 6, 6  );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=35;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(250+x,900+y);


}
glEnd();
glPopMatrix();

}

void rightwindmill()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();

glTranslatef(3060, 120, 0.0f);




glBegin(GL_POLYGON);
glColor3ub(21, 22, 4  );

glVertex2i(100,450);
glVertex2i(130,480);
glVertex2i(430,480);
glVertex2i(430,430);
glVertex2i(400,400);
glVertex2i(400,450);
glVertex2i(100,450);


glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0 );

glVertex2i(100,400);
glVertex2i(100,450);
glVertex2i(400,450);
glVertex2i(400,400);
glEnd();

    //body
glBegin(GL_POLYGON);
glColor3ub(255, 112, 0);
glVertex2i(150,450);
glVertex2i(200,900);

glColor3ub(109, 5, 0);
glVertex2i(300,900);
glVertex2i(350,450);

glEnd();

 //upper bar
glBegin(GL_QUADS);
glColor3ub(0, 0, 0 );

glVertex2i(200,900);
glVertex2i(200,950);
glVertex2i(300,950);
glVertex2i(300,900);


glEnd();



glTranslatef(250.0f, 900.0f, 0.0f);
glRotatef(_angle1,0.0f,0.0f,1);
glTranslatef(-250.0f, -900.0f, 0.0f);


   //fan
glBegin(GL_POLYGON);
glColor3ub(255, 135, 0   );
glVertex2i(250,925);
glColor3ub(255, 255, 0 );
glVertex2i(50,950);
                         //leftright
glVertex2i(50,850);
glVertex2i(250,875);
glColor3ub(255, 255, 0  );
glVertex2i(450,850);
glVertex2i(450,950);


glEnd();

//Border Line (Left-Right)
    glColor3ub(220, 121, 87  );
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2i(50, 850);
    glVertex2i(50, 950);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(50, 850);
    glVertex2i(250, 875);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(50, 950);
    glVertex2i(250, 925);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(250, 875);
    glVertex2i(450, 850);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(450, 850);
    glVertex2i(450, 950);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(450, 950);
    glVertex2i(250, 925);
    glEnd();


glBegin(GL_POLYGON);
glColor3ub(255, 135, 0   );
glVertex2i(225,900);
glColor3ub(255, 255, 0  );
glVertex2i(200,1100);
                                            //updown
glVertex2i(300,1100);
glVertex2i(275,900);
glVertex2i(300,700);
glColor3ub(255, 255, 0  );
glVertex2i(200,700);
glVertex2i(225,900);
glEnd();

//Border Line (Up-Down)
    glColor3ub(220, 121, 87  );
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2i(200, 700);
    glVertex2i(300, 700);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(200, 700);
    glVertex2i(225, 900);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(300, 700);
    glVertex2i(275, 900);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(200, 1100);
    glVertex2i(300, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(225, 900);
    glVertex2i(200, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(275, 900);
    glVertex2i(300, 1100);
    glEnd();

glLineWidth(7.5);

glBegin(GL_POLYGON);

for(int i=0;i<200;i++)

{

glColor3ub(24, 6, 6  );

float pi=3.1416;

float A=(i*2*pi)/200;

float r=35;

float x = r * cos(A);

float y = r * sin(A);

glVertex2f(250+x,900+y);


}
glEnd();
glPopMatrix();

}


void watchtower()
{
    glPushMatrix();
    glTranslatef(50.0f, 230.0f, 0.0f);
     glScalef(1.0,0.9,0);
//Watch Tower
//Upper Line
    glColor3ub(13, 10, 8 );
    glBegin(GL_QUADS);
    glVertex2i(380, 950);
    glVertex2i(380, 965);
    glVertex2i(520, 965);
    glVertex2i(520, 950);

//Middle Line
    glBegin(GL_QUADS);
    glVertex2i(370, 850);
    glVertex2i(370, 865);
    glVertex2i(530, 865);
    glVertex2i(530, 850);

//Lower Line
    glBegin(GL_QUADS);
    glVertex2i(360, 750);
    glVertex2i(360, 765);
    glVertex2i(540, 765);
    glVertex2i(540, 750);

//Stands
//Left Long
    glColor3ub(13, 10, 8 );
    glBegin(GL_QUADS);
    glVertex2i(350, 650);
    glVertex2i(380, 1000);
    glVertex2i(390, 1000);
    glVertex2i(360, 650);

//Left Short
    glBegin(GL_QUADS);
    glVertex2i(400, 700);
    glVertex2i(420, 1000);
    glVertex2i(430, 1000);
    glVertex2i(410, 700);

//Right Long
    glBegin(GL_QUADS);
    glVertex2i(510, 1000);
    glVertex2i(520, 1000);
    glVertex2i(560, 650);
    glVertex2i(550, 650);

//Right Short
    glBegin(GL_QUADS);
    glVertex2i(470, 1000);
    glVertex2i(480, 1000);
    glVertex2i(510, 700);
    glVertex2i(500, 700);

//Square
    glColor3ub(255, 131, 0);
    glBegin(GL_QUADS);
    glVertex2i(380, 1000);
    glVertex2i(380, 1100);
    glVertex2i(520, 1100);
    glVertex2i(520, 1000);
    glEnd();

//Square Border Line
    glColor3ub(149, 79, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(380, 1000);
    glVertex2i(520, 1000);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(380, 1000);
    glVertex2i(380, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(380, 1100);
    glVertex2i(520, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(520, 1000);
    glVertex2i(520, 1100);
    glEnd();


//Lines
//Parallel
    glColor3ub(149, 79, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(380, 1020);
    glVertex2i(520, 1020);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(380, 1040);
    glVertex2i(520, 1040);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(380, 1060);
    glVertex2i(520, 1060);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(380, 1080);
    glVertex2i(520, 1080);
    glEnd();

//Vertical
    glBegin(GL_LINES);
    glVertex2i(400, 1000);
    glVertex2i(400, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(420, 1000);
    glVertex2i(420, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(440, 1000);
    glVertex2i(440, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(460, 1000);
    glVertex2i(460, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(480, 1000);
    glVertex2i(480, 1100);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(500, 1000);
    glVertex2i(500, 1100);
    glEnd();

//Left Stand
    glColor3ub(104, 93, 78);
    glBegin(GL_QUADS);
    glVertex2i(390, 1100);
    glVertex2i(390, 1150);
    glVertex2i(400, 1150);
    glVertex2i(400, 1100);

//Right Stand
    glBegin(GL_QUADS);
    glVertex2i(500, 1100);
    glVertex2i(500, 1150);
    glVertex2i(510, 1150);
    glVertex2i(510, 1100);

//Shade
    glColor3ub(255, 131, 0);
    glBegin(GL_QUADS);
    glVertex2i(365, 1150);
    glVertex2i(450, 1255);
    glVertex2i(450, 1255);
    glVertex2i(535, 1150);
    glEnd();

//Shade Border Line
    glColor3ub(149, 79, 0);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(365, 1150);
    glVertex2i(535, 1150);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(365, 1150);
    glVertex2i(450, 1250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(450, 1250);
    glVertex2i(535, 1150);
    glEnd();

//Shade Line
//Parallel
    glColor3ub(149, 79, 0);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(400, 1150);
    glVertex2i(400, 1175);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(425, 1150);
    glVertex2i(425, 1225);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(450, 1150);
    glVertex2i(450, 1250);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(475, 1150);
    glVertex2i(475, 1225);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(500, 1150);
    glVertex2i(500, 1175);
    glEnd();

//Vertical
    glBegin(GL_LINES);
    glVertex2i(390, 1175);
    glVertex2i(510, 1175);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(410, 1200);
    glVertex2i(490, 1200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(430, 1225);
    glVertex2i(470, 1225);
    glEnd();
    glPopMatrix();

}

void watchtower2()
{
    glPushMatrix();

glTranslatef(2500.0f, 0.0f, 0.0f);
    watchtower();
glEnd();
glPopMatrix();

}



void blimp(){

{

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();


glTranslatef(_move5 , 0.0f, 0.0f);
glTranslatef(1200, 580, 0.0f);
glScalef(-0.9,0.69,0);
//body
glLineWidth(9.5);
glColor3ub(132, 132, 432);
glBegin(GL_POLYGON);

glVertex2i(100,1650);
glVertex2i(100,1700);
glVertex2i(150,1750);
glVertex2i(300,1750);
glVertex2i(350,1700);
glVertex2i(350,1650);
glVertex2i(300,1600);
glVertex2i(150,1600);
glEnd();
//
glLineWidth(1.5);
glColor3b(100,100,100);
glBegin(GL_LINES);
glVertex2i(100,1650);
glVertex2i(350,1650);
glVertex2i(100,1700);
glVertex2i(350,1700);
glEnd();

//engine
glColor3ub(100,100,100);
glBegin(GL_QUADS);
glVertex2i(200,1575);
glVertex2i(250,1575);
glVertex2i(250,1600);
glVertex2i(200,1600);

//glass
glColor3ub(232,232,0);
glBegin(GL_QUADS);
glVertex2i(215,1585);
glVertex2i(235,1585);
glVertex2i(235,1595);
glVertex2i(215,1595);

// propeller
glColor3ub(150,150,150);
glBegin(GL_QUADS);
glVertex2i(350,1650);
glVertex2i(400,1650);
glVertex2i(400,1700);
glVertex2i(350,1700);
glEnd();
//upper
glColor3ub(150,150,150);
glBegin(GL_POLYGON);
glVertex2i(375,1700);
glVertex2i(400,1700);
glVertex2i(400,1735);
glVertex2i(385,1735);
//lower
glColor3ub(150,150,150);
glBegin(GL_POLYGON);
glVertex2i(385,1650);
glVertex2i(400,1650);
glVertex2i(400,1610);
glVertex2i(395,1610);
}
glEnd();

//glFlush();

glPopMatrix();

//glutSwapBuffers();

}

void update1(int value) {

if(_move >(3500+750)  )

{
 _move = -1600;              //left crocodile

}


 _move += 14;



glutPostRedisplay();
glutTimerFunc(20, update1, 0);
}




void update2(int value) {

if(_move2 <-(3500+750)  )

{
 _move2 = 2800;                  //right crocodile

}


 _move2 += -17;



glutPostRedisplay();
glutTimerFunc(20, update2, 0);
}


void update3(int value) {

if(_move3 >(3000)  )

{
 _move3 = -1500;              //balloon

}

_move3 += 5;



glutPostRedisplay();
glutTimerFunc(20, update3, 0);
}

void update4(int value) {

if(_move4 >(6700)  )

{
 _move4 = -2500;              //cloud

}


 _move4 += 15;



glutPostRedisplay();
glutTimerFunc(20, update4, 0);
}

void update5(int value) {

if(_wave >(60)  )

{
 _wave = -20;                //wavey

}


 _wave +=0.45;



glutPostRedisplay();
glutTimerFunc(20, update5, 0);
}


void update6(int value) {

if(_wavex >(80)  )

{
 _wavex = 40;                //waveX

}


 _wavex +=1.3;



glutPostRedisplay();
glutTimerFunc(17, update6, 0);
}

void update7(int value) {

if(_crocy >(10)  )

{
 _crocy = -10;                // crocY

}


 _crocy +=0.7;



glutPostRedisplay();
glutTimerFunc(30, update7, 0);
}

void update8(int value) {

if(_crocy2 <(-10)  )

{
 _crocy2 = 10;
                            // crocY2

}



 _crocy2 +=-0.7;



glutPostRedisplay();
glutTimerFunc(30, update8, 0);
}


void update9(int value) {

if(_canmove >(900)  )

{
 _canmove = -380;              //waveX

}


 _canmove +=6;



glutPostRedisplay();
glutTimerFunc(20, update9, 0);
}



void update10(int value) {

if(_move5 >(3500)  )

{
 _move5 = -700;                //wavey

}


 _move5 +=1;



glutPostRedisplay();
glutTimerFunc(1, update10, 0);
}


void update11(int value) {

if(_starx >(5)  )

{
 _starx = -2;                //starx

}


 _starx +=0.2;



glutPostRedisplay();
glutTimerFunc(1, update11, 0);
}

void update12(int value) {

if(_ghostx >(3100)  )

{
 _ghostx= -300;                //ghostx

}


 _ghostx+=15;



glutPostRedisplay();
glutTimerFunc(30, update12, 0);
}

void update13(int value){

if(_ghosty >(600)  )

{
 _ghosty= -500;                //ghosty

}


 _ghosty+=5.3;



glutPostRedisplay();
glutTimerFunc(10, update13, 0);
}


void spin(int value) {

    _angle1+=10.0f;

    glutPostRedisplay(); // windmill

    glutTimerFunc(20, spin, 0);
}






void display() {

sky();
sun();

cloud();
cloud2();
cloud3();
cloud4();
cloud5();
cloud6();
cloud7();
cloud8();
cloud9();
blimp();
hill();
wall();
grass();
bench();
bench2();
balloon();
watchtower();
watchtower2();
canon1();
canon2();

leftwindmill();
rightwindmill();

water();
smallgrass1();
smallgrass2();
smallgrass3();
smallgrass4();
smallgrass5();
smallgrass6();
smallgrass7();
smallgrass8();
smallgrass9();
smallgrass10();
smallgrass11();
smallgrass12();
soil();

castleramp();
Castle();
wave();
wave2();
wave3();
wave4();
wave5();
wave6();
wave7();
wave8();
wave9();
wave10();
wave11();
wave12();
crocodile8();
crocodile7();
crocodile6();
crocodile5();
crocodile4();
crocodile2();
crocodile3();
crocodile1();


Ramp();


glFlush();
glutSwapBuffers();



}

void display2()
{
     Nightsky();
       star();
     star1();
     star2();
     star3();
     star4();
     star5();
     star7();
     star8();
     star9();
     star10();
     star11();
     star12();
     star13();
     star14();
     star15();
     star16();
     star17();
     star18();
     star19();
     star20();
     star21();
     star22();
     star23();
     star24();
     star25();
     star26();
     star27();
     star28();
     star29();
     star30();
     star31();
     star32();
     star33();
     star34();
     star35();
     star36();
     star37();
     star38();
     star39();
     star40();
     star41();
moon();
cloud();
cloud2();
cloud3();
cloud4();
cloud5();
cloud6();
cloud7();
cloud8();
cloud9();
nighthill();
wall();
nightgrass();
bench();
bench2();
watchtower();
watchtower2();
canon1();
canon2();

leftwindmill();
rightwindmill();
nightwater();
smallgrass1();
smallgrass2();
smallgrass3();
smallgrass4();
smallgrass5();
smallgrass6();
smallgrass7();
smallgrass8();
smallgrass9();
smallgrass10();
smallgrass11();
smallgrass12();
soil();

castleramp();
Castle();
wave();
wave2();
wave3();
wave4();
wave5();
wave6();
wave7();
wave8();
wave9();
wave10();
wave11();
wave12();

nightcrocodile();
nightcrocodile2();
nightcrocodile3();
nightcrocodile4();
nightcrocodile5();
nightcrocodile6();
nightcrocodile7();
nightcrocodile8();


Ramp();
ghost();

glFlush();
glutSwapBuffers();

}



void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:
//do something here
glutDisplayFunc(display);
break;
case GLUT_KEY_DOWN:

 glutDisplayFunc(display2);
break;

}
glutPostRedisplay();
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
	    glutDisplayFunc(display);
			}
if (button == GLUT_RIGHT_BUTTON)
	{
	    glutDisplayFunc(display2);
	  }
glutPostRedisplay();}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key)

{
case 'd':
   glutDisplayFunc(display);
    break;
case 'n':
    glutDisplayFunc(display2);
    break;
glutPostRedisplay();
	}
}



/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {

glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Setup Test");

glutInitWindowSize(1500, 1500);
gluOrtho2D(0.0,3500,0.0,1800);
glutDisplayFunc(display);
glutTimerFunc(10, update1, 0);
glutTimerFunc(10, update2, 0);
glutTimerFunc(10, update3, 0);
glutTimerFunc(0, update4, 0);
glutTimerFunc(0, update5, 0);
glutTimerFunc(0, update6, 0);
glutTimerFunc(0, update7, 0);
glutTimerFunc(0, update8, 0);
glutTimerFunc(0, update9, 0);
glutTimerFunc(0, update10, 0);
glutTimerFunc(0, update11, 0);
glutTimerFunc(0, update12, 0);
glutTimerFunc(0, update13, 0);
glutTimerFunc(10, spin, 0);
glutSpecialFunc(SpecialInput);
glutKeyboardFunc(handleKeypress);
glutMainLoop(); // Enter the event-processing loop
return 0;
}









