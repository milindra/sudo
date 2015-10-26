#include<iostream>
#include<graphics.h>
main()
{int l=0,j=0,i,k=0;
int gd=DETECT,gm;
initgraph(&gd,&gm,0);
/*line(160,240,319,120);
line(319,120,470,240);
line(470,240,430,240);
line(430,240,430,479);
line(200,479,200,240);
line(200,240,160,240);*/
for(i=0;i<300;i++)
{
cleardevice();
setlinestyle(0,0,1);
outtextxy(310,250-j,"HOSPITAL");
setcolor(WHITE);
line(160-i,240-j,319,120-i);
line(319,120-i,470+i,240-j);
line(470+i,240-j,430+j,240-j);
line(430+j,240-j,430+j,479);
line(200-j,479,200-j,240-j);
line(200-j,240-j,160-i,240-j);
rectangle(280-j,300-j,350+j,479);
//sudo dad
setcolor(BLUE);
circle(319,390-j,10+k); //head
line(319,400-j+k,319,430-k); //MID body

line(319,410-j+k,310-k,420-k);//hand1 left
line(310-k,420-k,300-k,410-j+k);

line(319,410-j+k,330+k,420-k);//hand2 right
line(330+k,420-k,340+k,410-j+k+5+l);

line(319,430-k,300-k,479); //leg1
line(319,430-k,330+k,479); //leg2

//sudo
setcolor(RED);
circle(340+k,410-j+k,5+l);
line(340+k,410-j+k+5+l,319,420-k);//left 
line(319,420-k,290-k,410-j+k+5+l);//right


if(i%2==0)
{
j++;
if(j%4==0){k++;if(k%2==0){l++;}}
}

delay(10);
}
getch();
}//milindra
