#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<ctime>
#include<conio.h>
#include<windows.h>
#include<cstdlib>
#pragma comment(lib, "winmm.lib")
#include<map>
#include<vector>
#include<fstream>
#include<algorithm>
#include "permute.cpp"
#include "match_find.cpp"


using namespace std;



void clearscreen(int d)
{int x;
 setcolor(5);
 for(x=0;x<=639;x++)
 {line(x,0,x,479);

    delay(d);

 }
}


void Clearscreen()
{int x;
 setcolor(5);
 for(x=0;x<=1048;x++)
 {line(x,0,x,1024);

    delay(0);

 }
}


 void ins()
 {

     setcolor(5);
  settextstyle(6,0,5);
  outtextxy(20,80,"MADE BY");

  setcolor(13);
  settextstyle(3,0,2);
   outtextxy(150,150,"BATCH B8");
  outtextxy(150,200,"HIMANI KHURANA        15103237");
  outtextxy(150,250,"HIMANGI MITTAL        15103322");
  outtextxy(150,300,"SHIVANI TANEJA         15103339");
  outtextxy(150,350,"UTKARSH SINGH THAKUR   15103343");


 setfillstyle(2,3);
 rectangle(1,1,640,480);
 floodfill(23,23,13);




 setcolor(5);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);

outtextxy(260,430,"press any key to continue....");
 delay(100);
 setcolor(5);
  settextstyle(6,0,5);
  while(!kbhit())
  {outtextxy(20,80,"MADE BY");
   delay(1);
   outtextxy(20,80,"                    ");
   delay(2);
  }
outtextxy(20,80,"MADE BY");
delay(20);
clearscreen(2);
cleardevice();

 }


void instructios()
 {


  setcolor(13);
  settextstyle(3,0,2);
   outtextxy(150,150,"press B <- to move back to previous page");
  outtextxy(150,180,"press  Q to exit");
  setcolor(5);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,2);




     delay(300);
     clearscreen(0.5);
 cleardevice();

}

void front()
{int i;
  //PlaySound("ds.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
 PlaySound(TEXT("ds.wav"), NULL, SND_FILENAME | SND_ASYNC);
 for(i=0; i<=110; i+=10)
 {setcolor(13);
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
clearscreen(2);
}


void rect(int x1=50,int y1=80)
{setcolor(15);
 setfillstyle(1,7);
 rectangle(x1,y1,x1+470,y1+30);
 floodfill(x1+1,y1+1,15);
 setcolor(0);
 setfillstyle(1,15);
 rectangle(x1+10,y1+4,x1+453,y1+30);
 floodfill(x1+11,y1+5,0);
 setcolor(8);

}

void main_glimpse()
{
    setfillstyle(1,15);
 rectangle(1,1,640,480);
 floodfill(23,23,5);


    rect();
    setcolor(13);
  settextstyle(6,0,5);
  outtextxy(525,78,"S");

     settextstyle(3,0,2);
   outtextxy(558,90,"EARCH");

     settextstyle(6,0,5);
   int i=10;
  while(i--)
   {
       outtextxy(525,78,"S");
       delay(100);

       outtextxy(525,78,"  ");
       delay(20);


   }
outtextxy(525,78,"S");
}

void docPage(char  x,char num)             //THIS is the doc page which is coming
{
     initwindow(1024,1028);
 setfillstyle(2,3);
 rectangle(1,1,1028,1024);
 floodfill(23,23,13);


    char no[64];
    setcolor(13);

   settextstyle(3,HORIZ_DIR,2);
    sprintf(no,"You opened Doc-%c",x);
    line(30,10,30,50);
    outtextxy(30,30,no);

    setcolor(9);
    settextstyle(5,0,1);
    outtextxy(690,50,"press 'B' to go back to home page");

   // ifstream f1;
   // string s1;
    cout<<"yo";
    //f1.open("C:/0.txt");
	FILE *fp;
    char ch,s[1000];
    if(num=='1')
    {

    fp=fopen("C:\\1.txt","r");
    /*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
            //cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }

    }
    else if(num=='2')
    {

    fp=fopen("C:\\2.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
            //cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }



        else if(num=='3')
    {

    fp=fopen("C:\\3.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
            //cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }
    else if(num=='4')
    {

    fp=fopen("C:\\4.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
            //cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }
    else if(num=='5')
    {

    fp=fopen("C:\\5.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
            //cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }
    else if(num=='6')
    {

    fp=fopen("C:\\6.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
            //co/ut<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }
    else if(num=='7')
    {

    fp=fopen("C:\\7.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
            //cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }
    else if(num=='8')
    {

    fp=fopen("C:\\8.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    char s[100];int i=-1;
		while((ch=getc(fp))!=EOF)
        {
           // cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }
    else if(num=='9')
    {

    fp=fopen("C:\\9.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
           // cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }
    else if(num=='0')
    {

    fp=fopen("C:\\0.txt","r");


	/*if(f1.is_open()){
		getline(f1,s1);}
		*/
    //char s[100];
    int i=-1;
		while((ch=getc(fp))!=EOF)
        {
            //cout<<ch<<endl;
            //sprintf(s,"%s",s1);
            s[++i]=ch;
        }
    }
	/*if(f1.is_open()){
		getline(f1,s1);}
		*/

    //cout<<s;
    setcolor(13);
    settextstyle(3,0,2);
    char a1[10][50];
    for(int i=0;i<10;i++)
    {
        int p=0;
        for(int j=i*50;j<(i+1)*50;j++)
        {
            a1[i][p]=s[j];
            p++;
        }

    }
    //strcpy()
    outtextxy(30,150,a1[0]);
    outtextxy(30,180,a1[1]);
    outtextxy(30,210,a1[2]);
    outtextxy(30,240,a1[3]);
    outtextxy(30,270,a1[4]);
    outtextxy(30,300,a1[5]);
    outtextxy(30,330,a1[6]);
    outtextxy(30,360,a1[7]);
    outtextxy(30,390,a1[8]);
    outtextxy(30,420,a1[9]);
 /*cout<<"ierjt";
    char s[1024];
    sprintf(s,"%s",s1);
     outtextxy(300,160+30,s);

    */







    char cab=getch();
    if((cab=='b')||(cab=='B'))
    {
     Clearscreen() ;
     cleardevice();
    }

}

void mainpage(char c[][1024],double time,int search_results,char number[])
{
     initwindow(640,480);
    char d[64][1024];
    strcpy(d[0],c[0]);
    double t=time;
    int search=search_results;
    setfillstyle(1,15);
 rectangle(1,1,640,480);
 floodfill(23,23,5);


    rect();
    setcolor(13);
  settextstyle(6,0,5);
  outtextxy(525,78,"S");

     settextstyle(3,0,2);
   outtextxy(558,90,"EARCH");

    // settextstyle(6,0,5);
  /* long long int i=100;
  while(i--)
   {
       outtextxy(525,78,"S");
       delay(100);

       outtextxy(525,78,"  ");
       delay(20);


   }*/



    outtextxy(65,86,c[0]);                    //this function only accepts char array
    char total_results[128];

    //cout<<time;
    setcolor(15);
    settextstyle(5,0,1);
    sprintf(total_results,"about %d results in %f seconds......",search_results,time);
    outtextxy(100,120,total_results);       //displaying all the results
     setcolor(13);
     settextstyle(3,0,1);
    for(int i=1;i<=search_results;i++)           //this is the loop for displaying all the search results
    {
        char no[4];
        sprintf(no,"%d",i-1);
        outtextxy(30,160+i*30,no);

        outtextxy(50,160+i*30,c[i]);
        // Beep(5000,100);
        delay(200);
    }


    //outtextxy(80,430,"Enter the DOC no. to be opened");

    char x=getch();
   if((x=='Q')||(x=='q'))
   {
    //   printf("exiting");
      // getch();
       exit(0);
   }
   else
   {

    if (x == '1') {
        printf("You pressed 1\n");
        docPage(x,number[1]);

    }
    else if (x == '2') {
        printf("You pressed 2\n");
        docPage(x,number[2]);
    }
    else if (x == '3') {
        printf("You pressed 3\n");
        docPage(x,number[3]);
    }

    else if (x == '4') {
        printf("You pressed 4\n");
        docPage(x,number[4]);
    }
    else if (x == '5') {
        printf("You pressed 5\n");
        docPage(x,number[5]);
    }
    else if (x == '6') {
        printf("You pressed 6\n");
        docPage(x,number[6]);
    }
    else if (x == '7') {
        printf("You pressed 7\n");
        docPage(x,number[7]);
    }
    else if (x == '8') {
        printf("You pressed 8\n");
        docPage(x,number[8]);
    }
      else if (x == '0') {
        printf("You pressed 0\n");
        docPage(x,number[0]);
        }

    else if (x == '9') {
        printf("You pressed 9\n");
        docPage(x,number[9]);
    }

    mainpage(c,time,search_results,number);///to do
   }
}








struct node{
	string doc;
	int freq;
	node *next_node;
};
bool myfunction(struct node *n1, struct node *n2){
	return (n1->freq>n2->freq);
}
map<string,node*> create_table(string search){
	map<string,node*> hashtable;
	map<string,node*>::iterator it;
	string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	int freq=0;
	node *n = new node;
	node *n2 = new node;
	node *n3 = new node;
	node *n4 = new node;
	node *n5 = new node;
	node *n6 = new node;
	node *n7 = new node;
	node *n8 = new node;
	node *n9 = new node;
	node *n10 = new node;
	ifstream fs1,fs2,fs3,fs4,fs5,fs6,fs7,fs8,fs9,fs10;

	fs1.open("C:/0.txt");
	if(fs1.is_open()){
		getline(fs1,s1);
	}
	n->doc = "0.txt";
	n->freq = frequency(s1,search);

	hashtable.insert(pair<string, node*>(search, n));

	fs2.open("C:/1.txt");
	if(fs2.is_open()){
		getline(fs2,s2);
	}
	n2->doc = "1.txt";
	n2->freq = frequency(s2,search);
	n->next_node = n2;

	fs3.open("C:/3.txt");
	if(fs3.is_open()){
		getline(fs3,s3);
	}
	n3->doc = "3.txt";
	n3->freq = frequency(s3,search);
	n2->next_node = n3;

	fs4.open("C:/4.txt");
	if(fs4.is_open()){
		getline(fs4,s4);
	}
	n4->doc = "4.txt";
	n4->freq = frequency(s4,search);
	n3->next_node = n4;

	fs5.open("C:/5.txt");
	if(fs5.is_open()){
		getline(fs5,s5);
	}
	n5->doc = "5.txt";
	n5->freq = frequency(s5,search);
	n4->next_node = n5;

	fs6.open("C:/6.txt");
	if(fs6.is_open()){
		getline(fs6,s6);
	}
	n6->doc = "6.txt";
	n6->freq = frequency(s6,search);
	n5->next_node = n6;

	fs7.open("C:/7.txt");
	if(fs7.is_open()){
		getline(fs7,s7);
	}
	n7->doc = "7.txt";
	n7->freq = frequency(s7,search);
	n6->next_node = n7;

	fs8.open("C:/8.txt");
	if(fs8.is_open()){
		getline(fs8,s8);
	}
	n8->doc = "8.txt";
	n8->freq = frequency(s8,search);
	n7->next_node = n8;

	fs9.open("C:/9.txt");
	if(fs9.is_open()){
		getline(fs9,s9);
	}
	n9->doc = "9.txt";
	n9->freq = frequency(s9,search);
	n8->next_node = n9;

	fs10.open("C:/2.txt");
	if(fs10.is_open()){
		getline(fs10,s10);
	}
	n10->doc = "2.txt";
	n10->freq = frequency(s10,search);
	n9->next_node = n10;
	n10->next_node = NULL;

	return hashtable;
}
vector<string> documents(map<string,node*> hashtable){
	vector<string> docs;
	for(map<string,node*>::iterator it = hashtable.begin();it!=hashtable.end();++it){
		while(it->second!=NULL){
			docs.push_back(it->second->doc);
			it->second = it->second->next_node;
		}
	}
	return docs;
}



int main()
{
     int gdriver = DETECT, gmode;

 initgraph(&gdriver, &gmode, "");

delay(1000);
front();
ins();
instructios();
main_glimpse();
    //enter your search query
    cout<<"enter your search query:-"<<endl;
string s;
getline(cin,s);
char c[64][1024];
strcpy(c[0], s.c_str());   //convertin string to char array




clock_t start;      //adding clock timer
double duration;

    start=clock();  //clock starts here
   // delay(1000);


//main algo comes here
//and it adds the result in c array
    map<string,node*> hashtable;
	map<string,node*>::iterator it;
	vector<node*> docs;
	vector<string> docs_final, queries;
	vector<string>::iterator itr;
	string search;
	int vsize = 0;

	search=s;

	hashtable = create_table(search);
	for(map<string,node*>::iterator it = hashtable.begin();it!=hashtable.end();++it){
		//cout<<it->first<<" ";
		while(it->second!=NULL){
	//	cout<<it->second->doc<<" "<<it->second->freq<<" ";
			docs.push_back(it->second);
			it->second = it->second->next_node;
		}
		//cout<<endl;
	}
	vsize = docs.size();
	sort(docs.begin(),docs.end(),myfunction);
	for(int i=0;i<vsize;++i){
		//cout<<docs[i]->freq;
		if(docs[i]->freq>0){
			docs_final.push_back(docs[i]->doc);
		}
	}

	queries = permute(search);
	for(std::vector<std::string>::iterator it = queries.begin(); it!= queries.end();++it){
		//cout<<*it<<endl;
		hashtable = create_table(*it);
		for(map<string,node*>::iterator it = hashtable.begin();it!=hashtable.end();++it){
		//cout<<it->first<<" ";
		while(it->second!=NULL){
			//cout<<endl<<it->second->doc<<" "<<it->second->freq<<" ";
			docs.push_back(it->second);
			it->second = it->second->next_node;
			}
			//cout<<endl;
		}
		vsize = docs.size();
		sort(docs.begin(),docs.end(),myfunction);

		for(int i=0;i<vsize;++i){
		//	cout<<docs[i]->freq;
			itr = find(docs_final.begin(),docs_final.end(),docs[i]->doc);
			if(itr==docs_final.end()){
				if(docs[i]->freq>0){
					docs_final.push_back(docs[i]->doc);
				}
			}
		}
	}
	int f=1,j=0;
	string t;
	char  number[15];

    for(std::vector<std::string>::iterator it = docs_final.begin(); it!= docs_final.end();++it)
    {

//cout<<(*it)<<endl;
         t=*it;

        strcpy(c[f], t.c_str());   //convertin string to char array
       //cout<<c[f];
    number[j]=t[0];

       // cout<<number[j]<<endl;
      ++j;
        f++;


    }

   duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;       //time stored in duration
    //cout<<duration;
    int     total_queries=10;       //just initilized it will be give by the search algo

    mainpage(c,duration,total_queries,number);       //passing all the queries and time in the main page
    system("PAUSE");




 return 0;
}




/*int main(){
	map<string,node*> hashtable;
	map<string,node*>::iterator it;
	vector<node*> docs;
	vector<string> docs_final, queries;
	vector<string>::iterator itr;
	string search;
	int vsize = 0;

	getline(cin,search);

	hashtable = create_table(search);
	for(map<string,node*>::iterator it = hashtable.begin();it!=hashtable.end();++it){
		//cout<<it->first<<" ";
		while(it->second!=NULL){
	//	cout<<it->second->doc<<" "<<it->second->freq<<" ";
			docs.push_back(it->second);
			it->second = it->second->next_node;
		}
		//cout<<endl;
	}
	vsize = docs.size();
	sort(docs.begin(),docs.end(),myfunction);
	for(int i=0;i<vsize;++i){
		//cout<<docs[i]->freq;
		if(docs[i]->freq>0){
			docs_final.push_back(docs[i]->doc);
		}
	}

	queries = permute(search);
	for(std::vector<std::string>::iterator it = queries.begin(); it!= queries.end();++it){
		//cout<<*it<<endl;
		hashtable = create_table(*it);
		for(map<string,node*>::iterator it = hashtable.begin();it!=hashtable.end();++it){
		//cout<<it->first<<" ";
		while(it->second!=NULL){
			//cout<<endl<<it->second->doc<<" "<<it->second->freq<<" ";
			docs.push_back(it->second);
			it->second = it->second->next_node;
			}
			//cout<<endl;
		}
		vsize = docs.size();
		sort(docs.begin(),docs.end(),myfunction);

		for(int i=0;i<vsize;++i){
		//	cout<<docs[i]->freq;
			itr = find(docs_final.begin(),docs_final.end(),docs[i]->doc);
			if(itr==docs_final.end()){
				if(docs[i]->freq>0){
					docs_final.push_back(docs[i]->doc);
				}
			}
		}
	}


	cout<<endl<<endl<<endl;
	for(std::vector<std::string>::iterator it = docs_final.begin(); it!= docs_final.end();++it){
		cout<<(*it)<<endl;

	}
	return 0;
}*/

