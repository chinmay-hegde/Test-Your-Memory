#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
void sleep1();
//char s1[]={'enters'};
int j,h=0,status_count1=0,m=0,k=0,count=0,stat=0,f=0,i=0,flg=0,flg1=1,r,fp=0,re=0,start=0,jx,xz;
int arr[25];
int x=0,y=0,p1=1;
GLfloat cube[8][3]={ {10,10,-10},{10,10,10},{-10,10,-10},{-10,10,10},{-10,-10,-10},{-10,-10,10},{10,-10,-10},{10,-10,10}};
int x1=100,yl=-100,x2=100,y2=-60,x3=60,y3=-60,x4=60,y4=-100,enters=0;
int status=1,ct=0;
int found[21]={0};
char chr1[]={"Memory Status:-EXCELLENT"};
char chr2[]={"Memory Status:-GOOD"};
char chr3[]={"Memory Status:-AVERAGE"};
char chr4[]={"Memory Status:-NORMAL"};
char char2[]={"4.Press Space to continue...."};
char char3[]={"1.Use Arrow Keys for Navigation.."};
char char1[]={"TEST YOUR MEMORY"};
char char4[]={"Help:-"};
char char5[]={"2.Press Enter To Choose Blocks"};
char char6[]={"8.Press ESC Anytime To exit"};
char char6a[]={"Press 'ESC' to exit....."};
char chr10[]={"REPORT:-"};
char fst1[]={"OpenGL Mini Project On"};
char fst2[]={"Submitted by:-"};
char fst3[]={"Under the Guidence Of:-"};
char fst4[]={"1.Chinmay Shripad Hegde"};
char fst5[]={"2.Danesh G."};
char fst6[]={"11GAEC8015"};
char fst6a[]={"V SEM CSE"};
char fst7[]={"11GAEC8016"};
char fst7a[]={"V SEM CSE"};
char fst8[]={"Desai Sejal Jayantilal"};
char fst9[]={"Research Scholar"};
char fst10[]={"Dept. Of CSE"};
char fst11[]={"UVCE"};
char fst12[]={"V SEM CSE"};
char fst13[]={"$ Press 'Tab' For Help "};
char fst14[]={"$ Press ''SPACE'' to TEST YOUR MEMORY "};
char sec1[]={"Memory is the process in which information is"};
char sec2[]={"is encoded, stored, and retrieved."};
char sec3[]={"Short-term memory allows recall for a period of"};
char chr11[]={"Congratulations,you have completed"};
char sec4[]={"several seconds."};
char sec5[]={"In this application we are going "};
char sec6[]={"to test your short term memory."};
char sec7[]={"Instructions:-"};
char sec8[]={"1.The game contains 20 blocks."};
char sec9[]={"Each block contains its own inner pattern."};
char sec10[]={"pattern. Your task is to find two"};
char sec11[]={"blocks with same pattern."};
char sec12[]={"2.Use 'ARROW' keys for navigation."};
char sec13[]={"3.Press 'ENTER' to select "};
char sec13a[]={"inner pattern."};
char sec14[]={"4.Remember the inner pattern."};
char sec15[]={"5.Whenever you find similar blocks "};
char sec15a[]={"swap them."};
char sec16[]={"6.Play as long as all the blocks "};
char sec16a[]={"disappeared."};
char sec17[]={"7.After, Memory status and steps"};
char sec17a[]={"taken will be displayed."};
char sec18[]={"About:-"};
  void randm()
   {

		   for(i=1;i<=20;i++)
		   {
			   arr[i]=i;
		   }

   }


  void selects() //to select image
   {


       switch(r)
       {
        case 1:glColor3f(1,1,1);glutSolidSphere(10,30,30);break;//white sphere

        case 2:glColor3f(1,1,0);glutSolidCube(10);break;//yellow cube

        case 3:glColor3f(0.5,0.3,0);glutSolidCube(10);break;//black cube

        case 4:glColor3f(1,0,1);glutSolidCube(10);break;//purple cube

        case 5:glColor3f(0,0,1);glutSolidTorus(2.0,4.0,5,5);break;//blue torus

        case 6:glColor3f(1,1,1);glutSolidSphere(10,30,30);break;//white sphere

        case 7:glColor3f(1,1,1);glutSolidCube(10);break;//white cube

        case 8:glColor3f(1,1,0);glutSolidTorus(2.0,4.0,5,5);break;//yellow torus

        case 9:glColor3f(0,0.3,0.5);glutSolidSphere(10,30,30);break;//black Sphere

        case 10:glColor3f(1,1,0);glutSolidCube(10);break;//yellow cube

        case 11:glColor3f(1,0,1);glutSolidCube(10);break;//purple cube

        case 12:glColor3f(1,1,1);glutSolidTorus(2.0,4.0,5,5);// sky blue torus

        case 13:glColor3f(0,0,1);glutSolidTorus(2.0,4.0,5,5);break;//blue torus

        case 14:glColor3f(0,1,0);glutSolidSphere(10.0,30,30);break;//green sphere

        case 15:glColor3f(0.5,0.3,0);glutSolidCube(10);break;//black cube

        case 16:glColor3f(1,1,1);glutSolidCube(10);break;//white cube

        case 17:glColor3f(1,1,0);glutSolidTorus(2.0,4.0,5,5);break;//yellow torus

        case 18:glColor3f(0,0.3,0.5);glutSolidSphere(10,30,30);break;//black Sphere

        case 19:glColor3f(0,1,0);glutSolidSphere(10.0,30,30);break;//green sphere

        case 20:glColor3f(1,1,1);glutSolidTorus(2.0,4.0,5,5);// sky blue torus

        }
  }

  void first_page()

  {
			glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
			//glClearColor(0.3,1.8,0.5,0);
			glColor3f(1,1,1);
			glRasterPos3f(30,-90,0);
			for(j=0;j<fst1[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fst1[j]);
			//glClearColor(0,0,0,0);
			glColor3f(1.5,0.3,0.8);
			glRasterPos3f(30,-60,0);
			for(j=0;j<char1[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,char1[j]);
			glColor3f(1.5,1.3,0.8);
			glRasterPos3f(30,-20,0);
			for(j=0;j<fst2[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst2[j]);
			glColor3f(0.5,1.3,0.8);
			glRasterPos3f(30,0,0);
			for(j=0;j<fst4[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst4[j]);
			glColor3f(0.5,1.3,0.8);
			glRasterPos3f(30,15,0);
			for(j=0;j<fst5[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst5[j]);

			glColor3f(0.5,1.3,0.8);
			glRasterPos3f(-30,0,0);
			for(j=0;j<fst6[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst6[j]);

			glColor3f(1.5,0.3,0.8);
			glRasterPos3f(-60,0,0);
			for(j=0;j<fst6a[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst6a[j]);
			glColor3f(0.5,1.3,0.8);
			glRasterPos3f(-30,15,0);
			for(j=0;j<fst7[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst7[j]);
			glColor3f(1.5,0.3,0.8);
			glRasterPos3f(-60,15,0);
			for(j=0;j<fst7a[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst7a[j]);

			glColor3f(1.5,1.3,0.8);
			glRasterPos3f(30,35,0);
			for(j=0;j<fst3[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst3[j]);
			glColor3f(0.5,1.3,0.8);
			glRasterPos3f(30,50,0);
			for(j=0;j<fst8[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst8[j]);
			glColor3f(0.5,1.3,0.8);
			glRasterPos3f(30,60,0);
			for(j=0;j<fst9[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst9[j]);
			glColor3f(0.5,1.3,0.8);
			glRasterPos3f(30,70,0);
			for(j=0;j<fst10[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst10[j]);
			glColor3f(0.5,1.3,1.8);
			glRasterPos3f(30,80,0);
			for(j=0;j<fst11[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,fst11[j]);
			glFlush();
			glEnd();
			for(i=0;i<100;i++){
			sleep1();
			glClearColor(0,0,0,0);
			glColor3f(1,0,0);
			glRasterPos3f(-10,90,0);
			for(j=0;j<fst13[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fst13[j]);
			glColor3f(0,0,1);
			glRasterPos3f(-10,100,0);
			for(j=0;j<fst14[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fst14[j]);

			}

			glFlush();
  }
  void sleep1()
  {
	  for(xz=0;xz<1000;xz++)
		  for(jx=0;jx<1000;jx++);
  }
  void second_page()
  {
	        //p1=0;
			//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	        glClearColor(0,0,0,0);
			glColor3f(1.5,5.3,0.5);
			glRasterPos3f(30,-100,0);
			for(j=0;j<char1[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,char1[j]);

			glColor3f(1.2,0.6,0.9);
			glRasterPos3f(100,-80,0);
			for(j=0;j<sec18[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,sec18[j]);
			glColor3f(1.5,0.3,0.5);
			glRasterPos3f(100,-70,0);
			for(j=0;j<sec1[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec1[j]);
			glColor3f(1.5,0.3,0.5);
			glRasterPos3f(30,-70,0);
			for(j=0;j<sec2[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec2[j]);
			glColor3f(1.5,0.3,0.5);
			glRasterPos3f(-27,-70,0);
			for(j=0;j<sec3[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec3[j]);
			glColor3f(1.5,0.3,0.5);
			glRasterPos3f(100,-60,0);
			for(j=0;j<sec4[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec4[j]);
			glColor3f(1.5,0.3,0.5);
			glRasterPos3f(68,-60,0);
			for(j=0;j<sec5[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec5[j]);
			glColor3f(1.5,0.3,0.5);
			glRasterPos3f(13,-60,0);
			for(j=0;j<sec6[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec6[j]);
			glColor3f(0.5,0.3,1.5);
			glRasterPos3f(100,-40,0);
			for(j=0;j<sec7[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,sec7[j]);

			glColor3f(0.5,1.3,1.5);
			glRasterPos3f(90,-30,0);
			for(j=0;j<sec8[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec8[j]);

			glColor3f(0.5,1.3,1.5);
			glRasterPos3f(40,-30,0);
			for(j=0;j<sec9[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec9[j]);

			glColor3f(0.5,1.3,1.5);
			glRasterPos3f(-15,-30,0);
			for(j=0;j<sec10[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec10[j]);


			glColor3f(0.5,1.3,1.5);
			glRasterPos3f(86,-20,0);
			for(j=0;j<sec11[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec11[j]);

			glColor3f(1.5,0.3,1.5);
			glRasterPos3f(90,-10,0);
			for(j=0;j<sec12[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec12[j]);

			glColor3f(0.5,0.3,1.5);
			glRasterPos3f(90,0,0);
			for(j=0;j<sec13[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec13[j]);
			glColor3f(0.5,0.3,1.5);
			glRasterPos3f(45,0,0);
			for(j=0;j<sec13a[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec13a[j]);

			glColor3f(1.5,0.3,0.5);
			glRasterPos3f(90,10,0);
			for(j=0;j<sec14[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec14[j]);

			glColor3f(1.5,2.3,0);
			glRasterPos3f(90,20,0);
			for(j=0;j<sec15[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec15[j]);

			glColor3f(1.5,2.3,0);
			glRasterPos3f(33,20,0);
			for(j=0;j<sec15a[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec15a[j]);

			glColor3f(0.5,0.3,1.1);
			glRasterPos3f(90,30,0);
			for(j=0;j<sec16[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec16[j]);
			glColor3f(0.5,0.3,1.1);
			glRasterPos3f(35,30,0);
			for(j=0;j<sec16a[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec16a[j]);

			glColor3f(1.5,0.8,0.4);
			glRasterPos3f(90,40,0);
			for(j=0;j<sec17[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec17[j]);
			glColor3f(1.5,0.8,0.4);
			glRasterPos3f(35,40,0);
			for(j=0;j<sec17a[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,sec17a[j]);

			glColor3f(0.5,1.8,0.4);
			glRasterPos3f(90,50,0);
			for(j=0;j<char6[j]!='\0';j++)
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15,char6[j]);

			glColor3f(1,0,1);
			glRasterPos3f(10,84,0);
			for(j=0;j<fst14[j]!='\0';j++)
				glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,fst14[j]);


			glFlush();
		    glEnd();



  }



   void rectangle(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4) // draw rectangle
    {
	glBegin(GL_LINE_LOOP);
	glVertex2f(x1,y1);
	glVertex2f(x2,y2);
	glVertex2f(x3,y3);
	glVertex2f(x4,y4);
	glEnd();
    }
   void score_calculation()
   {
	   //char score1[]={'0','0','0','0','\0'};
	   int score,scor[]={0,0,0,0};
	  int rem=0;
	  char score1[]={'0','0','0','0','\0'};
	  char text8[]={"No of Steps taken:- "};

	   int res;
	   res=enters*8;
	   glColor3f(1,0,1);
	   glRasterPos3f(20,-80,0);
	   for(j=0;j<chr10[j]!='\0';j++)
		   glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, chr10[j]);
	   glColor3f(1,0.5,0.5);
	   glRasterPos3f(20,-50,0);
	   for(j=0;j<chr11[j]!='\0';j++)
		   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, chr11[j]);

	   if(res<200){
		 glColor3f(1,1,0);
	   glRasterPos3f(20,-30,0);
	   for(j=0;j<chr1[j]!='\0';j++)
		   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, chr1[j]);
	   }
	   else if(res<300)
	   {
		   glColor3f(1,1,0);
	   glRasterPos3f(20,-30,0);
	   for(j=0;j<chr2[j]!='\0';j++)
		   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, chr2[j]);

	   }
	   else if(res<450)
			{
				glColor3f(1,1,0);
	   glRasterPos3f(20,-30,0);
	   for(j=0;j<chr3[j]!='\0';j++)
		   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, chr3[j]);
			}
	   else{
		   glColor3f(1,1,0);
	   glRasterPos3f(20,-30,0);
	   for(j=0;j<chr4[j]!='\0';j++)
		   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, chr4[j]);
	   }


	  score=enters;
	  j=3;
	  while(score!=0)
	  {
	    rem=score%10;
	    scor[j--]=rem;
	    score=score/10;
	  }
	   for(j=0;j<4;j++)
	   score1[j]=(scor[j]+48);

           glColor3f(1,0,1);


	   glRasterPos3f(20,-10,0);
	   for(j=0;text8[j]!='\0';j++)
	   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text8[j]);

	   for(j=0;score1[j]!='\0';j++)
	   glutBitmapCharacter(GLUT_BITMAP_9_BY_15, score1[j]);

	   glFlush();
	   glColor3f(1,0.5,0.2);
		glRasterPos3f(-20,50,0);
	   for(j=0;char6a[j]!='\0';j++)
	   glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, char6a[j]);



   		glFlush();

   }




  void disp()     //print selects
   {

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	if((status==1||status_count1==1))
	{
	glTranslatef(80,-80,0);
	r=arr[1];
	selects();
	glTranslatef(-80,80,0);
	}

	if((status==2||status_count1==2))
	{
	glTranslatef(40,-80,0);
	r=arr[2];
	selects();
	glTranslatef(-40,80,0);
	}

	if((status==3||status_count1==3))
	{
	glTranslatef(0,-80,0);
	r=arr[3];
	selects();
	glTranslatef(0,80,0);
	}
	if((status==4||status_count1==4))
	{

	glTranslatef(-40,-80,0);
	r=arr[4];
	selects();
	glTranslatef(40,80,0);
	}

	if((status==6||status_count1==6))
	{
	glTranslatef(80,-40,0);
	r=arr[6];
	selects();
	glTranslatef(-80,40,0);
	}

	if((status==7||status_count1==7))
	{
	glTranslatef(40,-40,0);
	r=arr[7];
	selects();
	glTranslatef(-40,40,0);
	}


	if((status==8||status_count1==8))
	{
	glTranslatef(0,-40,0);
	r=arr[8];
	selects();
	glTranslatef(0,40,0);
	}


	if((status==9||status_count1==9))

	{
	glTranslatef(-40,-40,0);
	r=arr[9];
	selects();
	glTranslatef(40,40,0);
	}


	if(status==11||status_count1==11)
	{
	glTranslatef(80,0,0);
	r=arr[11];
	selects();
	glTranslatef(-80,0,0);
	}


	if(status==12||status_count1==12)

	{
	glTranslatef(40,0,0);
	r=arr[12];
	selects();
	glTranslatef(-40,0,0);
	}


	if(status==13||status_count1==13)
	{

	glTranslatef(0,0,0);
	r=arr[13];
	selects();
	glTranslatef(0,0,0);
	}



	if(status==5||status_count1==5)
	{

	glTranslatef(-80,-80,0);
	r=arr[5];
	selects();
	glTranslatef(80,80,0);
	}
	if(status==10||status_count1==10)
	{

	glTranslatef(-80,-40,0);
	r=arr[10];
	selects();
	glTranslatef(80,40,0);
	}
	if(status==14||status_count1==14)
	{

	glTranslatef(-40,0,0);
	r=arr[14];
	selects();
	glTranslatef(40,0,0);
	}
	if(status==15||status_count1==15)
	{

	glTranslatef(-80,0,0);
	r=arr[15];
	selects();
	glTranslatef(80,0,0);
	}
	if(status==16|status_count1==16)
	{

	glTranslatef(80,40,0);
	r=arr[16];
	selects();
	glTranslatef(-80,-40,0);
	}
	if(status==17||status_count1==17)
	{

	glTranslatef(40,40,0);
	r=arr[17];
	selects();
	glTranslatef(-40,-40,0);
	}
	if(status==18||status_count1==18)
	{

	glTranslatef(0,40,0);
	r=arr[18];
	selects();
	glTranslatef(0,-40,0);
	}
	if(status==19||status_count1==19)
	{

	glTranslatef(-40,40,0);
	r=arr[19];
	selects();
	glTranslatef(40,-40,0);
	}
	if(status==20||status_count1==20)
	{

	glTranslatef(-80,40,0);
	r=arr[20];
	selects();
	glTranslatef(80,-40,0);
	}




	glColor3f(0.0,1.0,1.5);
	rectangle(x1,yl,x2,y2,x3,y3,x4,y4);
	glFlush();
  }




  void display(void)    //display function

    {
		//enters=56;
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

		//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glClearColor(0,0,0,0);

		if(p1==1)
		{
			first_page();
			p1=0;
		}
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		//glClearColor(1,1,1,1);
		if(start==1)
		{
			second_page();start=0;
			//glFlush();
		}

		if(fp==1)
		{


		 if(f==0)
		   {
			       glClearColor(0,1,1,0);
			      // glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);


	if(found[1]!=1)
		 {
			    glTranslatef(80,-80,0);
				glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(-80,80,0);
		 }
	if(found[2]!=1)
		 {
			    glTranslatef(40,-80,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(-40,80,0);
		 }
	if(found[3]!=1)
				 {
			    glTranslatef(0,-80,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(0,80,0);
		 }

	if(found[4]!=1)			 {
		 	   glTranslatef(-40,-80,0);
			  glColor3f(1,0,1);
			    glutSolidCube(20);
			   glTranslatef(40,80,0);
		 }

	if(found[5]!=1)			 {
		 	   glTranslatef(-80,-80,0);
			  glColor3f(1,0,1);
			    glutSolidCube(20);
			   glTranslatef(80,80,0);
		 }
	if(found[6]!=1)
		 {
			    glTranslatef(80,-40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(-80,40,0);
		 }

	if(found[7]!=1)
		 {

			    glTranslatef(40,-40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(-40,40,0);
		 }

	if(found[8]!=1)
	     {
			    glTranslatef(0,-40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(0,40,0);
		 }

		if(found[9]!=1)
		 {

			  glTranslatef(-40,-40,0);
			  glColor3f(1,0,1);
			    glutSolidCube(20);
			  glTranslatef(40,40,0);
		 }
	if(found[10]!=1)

		 {
			    glTranslatef(-80,-40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(80,40,0);
		 }
	if(found[11]!=1)

		 {
			    glTranslatef(80,-0,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(-80,0,0);
		 }
if(found[12]!=1)
		 {
			    glTranslatef(40,0,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(-40,0,0);
		 }
if(found[13]!=1)
		 {
			    glTranslatef(0,0,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(0,0,0);

		 }
if(found[14]!=1)

		 {
			    glTranslatef(-40,0,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(40,0,0);
	 	 }
if(found[15]!=1)

		 {
			    glTranslatef(-80,0,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(80,0,0);
	 	 }
if(found[16]!=1)

		 {
			    glTranslatef(80,40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(-80,-40,0);
	 	 }
if(found[17]!=1)

		 {
			    glTranslatef(40,40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(-40,-40,0);
	 	 }
if(found[18]!=1)

		 {
			    glTranslatef(0,40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(0,-40,0);
	 	 }
if(found[19]!=1)

		 {
			    glTranslatef(-40,40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(40,-40,0);
	 	 }
if(found[20]!=1)

		 {
			    glTranslatef(-80,40,0);
			    glColor3f(1,0,1);
			    glutSolidCube(20);
			    glTranslatef(80,-40,0);
	 	 }


		glColor3f(1.0,0.0,0.0);
		rectangle(x1,yl,x2,y2,x3,y3,x4,y4);
		glFlush();

	       }

	      else
		{
		  disp();
		  f=0;

		 }
		  if(status==6&&status_count1==1||status==1&&status_count1==6)
		 {
		 found[1]=1;found[6]=1;
		 }

		 if(status==2&&status_count1==10||status==10&&status_count1==2)
		 {
		 found[2]=1;found[10]=1;
		 }

		 if(status==3&&status_count1==15||status==15&&status_count1==3)
		 {
		 found[3]=1;found[15]=1;
		 }

		 if(status==4&&status_count1==11||status==11&&status_count1==4)
		 {
		 found[4]=1;found[11]=1;
		 }

		 if(status==5&&status_count1==13||status==13&&status_count1==5)
		 {
		 found[13]=1;found[5]=1;
		 }

		 if(status==7&&status_count1==16||status==16&&status_count1==7)
		 {
		 found[7]=1;found[16]=1;
		 }
		 if(status==8&&status_count1==17||status==17&&status_count1==8)
		 {
		 found[8]=1;found[17]=1;
		 }
		 if(status==9&&status_count1==18||status==18&&status_count1==9)
		 {
		 found[9]=1;found[18]=1;
		 }
		 if(status==12&&status_count1==20||status==20&&status_count1==12)
		 {
		 found[12]=1;found[20]=1;
		 }
		 if(status==14&&status_count1==19||status==19&&status_count1==14)
		 {
		 found[19]=1;found[14]=1;
		 }
		 if(found[1]==1&&found[2]==1&&found[3]==1&&found[4]==1&&found[5]==1&&found[6]==1&&found[7]==1&&found[8]==1&&found[9]==1&&found[10]==1&&found[11]==1&&found[12]==1&&found[13]==1&&found[14]==1&&found[15]==1&&found[16]==1&&found[17]==1&&found[18]==1&&found[19]==1&&found[20]==1)
		 {
     	 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		score_calculation();
		glFlush();
		 }


		}
	    }




   void mykey(unsigned char key,int x,int y) //function to handle "normal" key presses
	     {

	     switch(key)
	      {

		 case 9:start=1;
			 glutPostRedisplay();
			 break;
		 case 32:fp=1;
			 glutPostRedisplay();
				break;

		case 27:  exit(0);

		case 13:
			    f=1;

			    if(count==0)
			     {
				enters++;
				count++;
				status_count1=status;
				//stat=1;
			     }

				else if(count==1)
				count++;

			    glutPostRedisplay();

		           break;

		      }
	    }


   void myspecial(int key,int x,int y)  //function to handle "special" key presses
    {

      switch(key)
       {

 	case GLUT_KEY_UP:if(status>5)
                          {
		              status-=5;
		              glColor3f(0.0,1.0,0.0);
		              yl=yl-40;y2=y2-40;y3=y3-40;y4=y4-40;
		              rectangle(x1,yl,x2,y2,x3,y3,x4,y4);
			      if(count==2) count=0,f=0,status_count1=status,enters++;
		              glutPostRedisplay();
                          }
                            break;


	case GLUT_KEY_DOWN:if(status<16)
                            {
		               status+=5;
		               glColor3f(0.0,1.0,0.0);
		               yl=yl+40;y2=y2+40;y3=y3+40;y4=y4+40;
		               rectangle(x1,yl,x2,y2,x3,y3,x4,y4);
			       if(count==2)count=0,f=0,status_count1=status,enters++;
		               glutPostRedisplay();
                            }
                               break;


 	case GLUT_KEY_LEFT:if(status!=1&&status!=6&&status!=11&&status!=16)
                            {
		                status--;
		                glColor3f(0.0,1.0,0.0);
		                x1=x1+40;x2=x2+40;x3=x3+40;x4=x4+40;
			        rectangle(x1,yl,x2,y2,x3,y3,x4,y4);
				if(count==2)count=0,f=0,status_count1=status,enters++;
		                glutPostRedisplay();
                            }
                               break;



 	case GLUT_KEY_RIGHT:if(status!=5&&status!=10&&status!=15&&status!=20)
                             {
		                  status++;
		                  glColor3f(0.0,1.0,0.0);
		                  x1=x1-40;x2=x2-40;x3=x3-40;x4=x4-40;
		                  rectangle(x1,yl,x2,y2,x3,y3,x4,y4);
				  if(count==2)count=0,f=0,status_count1=status,enters++;
		                  glutPostRedisplay();
		              }
                         	 break;
      }
   }



   void init()  // initialize openGL
    {

	randm();

	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

	glOrtho(125.0,-125.0,125.0,-125.0,125.0,-125.0);

	glMatrixMode(GL_MODELVIEW);

	glClearColor(1.0,1.0,1.0,1.0);

	glLineWidth(1);
    }


   int main(int argc,char **argv)
    {
	randm();
	glutInit(&argc,argv);

	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);

	glutInitWindowSize(1366,768);

	glutCreateWindow("Test Your Memory");

	glutDisplayFunc(display);

	glutKeyboardFunc(mykey);

	glutSpecialFunc(myspecial);

	init();

	glEnable(GL_DEPTH_TEST) ;

	glutMainLoop();
	return 0;

    }


