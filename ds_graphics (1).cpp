#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<ctime>
#include<conio.h>
#include<windows.h>
using namespace std;

void clearscreen()
{
    int x;
 setcolor(5);
 for(x=0;x<=639;x++)
 {
    line(x,0,x,479);
    delay(2);

 }
}

 void ins()
 {

     setcolor(5);
  settextstyle(6,0,5);
  outtextxy(20,80,"MADE BY");

  setcolor(13);
  settextstyle(3,0,2);
  outtextxy(150,200,"HIMANI KHURANA        15103237");
  outtextxy(150,250,"HIMANGI MITTAL        15103322");
  outtextxy(150,300,"SHIVANI TANEJA         15103339");
  outtextxy(150,350,"UTKARSH SINGH THAKUR   15103343");
  outtextxy(250,400,"BATCH B8");


 setfillstyle(2,3);
 rectangle(1,1,640,480);
 floodfill(23,23,13);




 setcolor(1);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);

outtextxy(260,500,"press any key to continue....");
 setcolor(5);
  settextstyle(6,0,5);
  while(!kbhit())
  {outtextxy(20,80,"MADE BY");
   delay(1);
   outtextxy(20,80,"                    ");
   delay(1);
  }
outtextxy(20,80,"MADE BY");
delay(2000);
clearscreen();
cleardevice();

 }



void front()
{int i;


 for(i=0; i<=110; i+=10)
 {
     setcolor(13);
  settextstyle(6,0,5);
  outtextxy(2+i,180,"SEARCH");
  outtextxy(640-i-160,180,"ENGINE");
  delay(80);

  outtextxy(2+i,180,"                        ");
  outtextxy(640-i-160,180,"                  ");
  delay(80);

 }

  outtextxy(110,180,"SEARCH");
  outtextxy(365,180,"ENGINE");
 delay(600);

settextstyle(5,0,5);

 outtextxy(20,180,"m");
 delay(300);
 outtextxy(55,180,"i");
 delay(300);
 outtextxy(68,180,"n");
 delay(300);
 outtextxy(88,180,"i");
 delay(300);

  settextstyle(5,0,5);

  outtextxy(20,180,"mini");

  //bkcolor


 setfillstyle(1,0);
 rectangle(1,1,640,480);
 floodfill(23,23,5);

settextstyle(6,0,5);
  outtextxy(110,180,"SEARCH");
  outtextxy(365,180,"ENGINE");
settextstyle(5,0,5);
    outtextxy(20,180,"mini");
delay(500);


  setcolor(13);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);

outtextxy(260,400,"press any key to continue....");
delay(800);
clearscreen();
}


void rect(int x1=50,int y1=80)
{
    setcolor(15);
    setfillstyle(1,7);
    rectangle(x1,y1,x1+470,y1+30);
    floodfill(x1+1,y1+1,0);
    setcolor(15);
    setfillstyle(1,15);
    rectangle(x1+10,y1+4,x1+453,y1+30);
    floodfill(x1+11,y1+5,0);
    setcolor(8);

}

void docPage(int x)             //THIS is the doc page which is coming
{
     initwindow(1024,1028);
 setfillstyle(2,3);
 rectangle(1,1,1028,1024);
 floodfill(23,23,13);


    char no[64];
    setcolor(15);

   settextstyle(3,HORIZ_DIR,4);
    sprintf(no,"You opened Doc-%d",x);
    line(30,10,30,50);
    outtextxy(30,30,no);
}

void mainpage(char c[][1024],double time,int search_results)
{
    //ShowWindow(FindWindow(NULL,"Windows BGI"),SW_MAXIMIZE);
    //initwindow(800,468);
    setfillstyle(1,0);
    rectangle(1,1,640,480);
    floodfill(23,23,5);


    rect();
    setcolor(13);
    settextstyle(6,0,5);
    outtextxy(525,78,"S");

    settextstyle(3,0,2);
    outtextxy(558,90,"EARCH");

    settextstyle(6,0,5);
    /* long long int i=100;
    while(i--)
    {
       outtextxy(525,78,"S");
       delay(100);

       outtextxy(525,78,"  ");
       delay(20);
    }*/
    setcolor(15);
    settextstyle(3,0,2);
    //char  variable[100];                 //not need now
    //strcpy(variable,c);
    //char msg[128];
    //sprintf(msg, "%s", variable);
    outtextxy(65,86,c[0]);                    //this function only accepts char array
    char total_results[128];
    //cout<<time;
    sprintf(total_results,"About %d results in %f seconds",search_results,time);
    outtextxy(100,120,total_results);       //displaying all the results

    strcpy(c[1],"hellwo j hku l ll valj   akrbvsk  vkjabv kjb lwebcdvrv");
    for(int i=0;i<search_results;i++)           //this is the loop for displaying all the search results
    {
        char no[4];
        sprintf(no,"%d",i+1);
        outtextxy(30,160+i*30,no);

        outtextxy(50,160+i*30,c[i]);
        // Beep(5000,100);
        //delay(500);


    }


    outtextxy(80,430,"Enter the DOC no. to be opned");

    char x=getch();
    if (x == '1') {
        printf("You pressed 1\n");
        docPage(x);

    }
    else if (x == '2') {
        printf("You pressed 2\n");
        docPage(x);
    }
    else if (x == '3') {
        printf("You pressed 3\n");
        docPage(x);
    }
    else if (x == '4') {
        printf("You pressed 4\n");
        docPage(x);
    }
    else if (x == '5') {
        printf("You pressed 5\n");
        docPage(x);
    }
    else if (x == '6') {
        printf("You pressed 6\n");
        docPage(x);
    }
    else if (x == '7') {
        printf("You pressed 7\n");
        docPage(x);
    }
    else if (x == '8') {
        printf("You pressed 8\n");
        docPage(x);
    }
    else if (x == '9') {
        printf("You pressed 9\n");
        docPage(x);
    }

}

int main()
{
    //ShowWindow( GetConsoleWindow(), SW_HIDE );
    //loading();
    //ShowWindow(FindWindow(NULL,"Windows BGI"),SW_MAXIMIZE);
    Beep(5000,100);

    int mx,my,y1,x1;
    int gdriver = DETECT, gmode;

    initgraph(&gdriver, &gmode, "");

    //front();
    //ins();

    //enter your search query
    cout<<"enter your search query:-"<<endl;
string s;
getline(cin,s);
char c[64][1024];
strcpy(c[0], s.c_str());   //convertin string to char array

//delay(200);


clock_t start;      //adding clock timer
double duration;

    start=clock();  //clock starts here
   // delay(1000);
/*

main algo comes here
and it adds the result in c array

*/
    duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;       //time stored in duration
    //cout<<duration;
    int     total_queries=9;       //just initilized it will be give by the search algo

    mainpage(c,duration,total_queries);       //passing all the queries and time in the main page

    system("PAUSE");


    return 0;
}
