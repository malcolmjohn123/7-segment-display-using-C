#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>


void led_display(int x, int y)
{
 setcolor(WHITE);
 outtextxy(x-90, 10, "7-segment ledD display");
 rectangle(x-120,y-200,x+120,y+200);
 rectangle(x-80,y-180,x+80,y-160);//top
 rectangle(x-100,y-150,x-80,y-20);//top left
 rectangle(x+80,y-150,x+100,y-20);//top right
 rectangle(x-70,y-10,x+70,y+10);//center
 rectangle(x-100,y+20,x-80,y+150);//bot left
 rectangle(x+80,y+20,x+100,y+150);//bot right
 rectangle(x-80,y+160,x+80,y+180);//bot
}
void main()
{
 int gd = DETECT, gm;
 int x, y;
 initgraph(&gd, &gm, "C:\\TC\\BGI");
 x = getmaxx()/2;
 y = getmaxy()/2;
 led_display(x,y);
 delay(1000);
 while(!kbhit())
 {
  led_display(x,y);
  //display 0
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x-80,y-180,x+80,y-160);//top
  floodfill(x,y-170,RED);
  rectangle(x-100,y-150,x-80,y-20);//top left
  floodfill(x-90,y-80,RED);
  rectangle(x+80,y-150,x+100,y-20);//top right
  floodfill(x+90,y-80,RED);
  rectangle(x-100,y+20,x-80,y+150);//bot left
  floodfill(x-90,y+80,RED);
  rectangle(x+80,y+20,x+100,y+150);//bot right
  floodfill(x+90,y+80,RED);
  rectangle(x-80,y+160,x+80,y+180);//bot
  floodfill(x,y+170,RED);
  delay(2000);
  cleardevice();
  led_display(x,y);

  //display 1
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x+80,y-150,x+100,y-20);//top right
  floodfill(x+90,y-80,RED);
  rectangle(x+80,y+20,x+100,y+150);//bot right
  floodfill(x+90,y+80,RED);
  delay(2000);
  cleardevice();
  led_display(x,y);

  //display2
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x-80,y-180,x+80,y-160);//top
  floodfill(x,y-170,RED);
  rectangle(x+80,y-150,x+100,y-20);//top right
  floodfill(x+90,y-80,RED);
  rectangle(x-70,y-10,x+70,y+10);//center
  floodfill(x,y,RED);
  rectangle(x-100,y+20,x-80,y+150);//bot left
  floodfill(x-90,y+80,RED);
  rectangle(x-80,y+160,x+80,y+180);//bot
  floodfill(x,y+170,RED);
  delay(2000);
  cleardevice();
  led_display(x,y);

  //display3
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x-80,y-180,x+80,y-160);//top
  floodfill(x,y-170,RED);
  rectangle(x+80,y-150,x+100,y-20);//top right
  floodfill(x+90,y-80,RED);
  rectangle(x-70,y-10,x+70,y+10);//center
  floodfill(x,y,RED);
  rectangle(x+80,y+20,x+100,y+150);//bot right
  floodfill(x+90,y+80,RED);
  rectangle(x-80,y+160,x+80,y+180);//bot
  floodfill(x,y+170,RED);
  delay(2000);
  cleardevice();
  led_display(x,y);

  //display4
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x-100,y-150,x-80,y-20);//top left
  floodfill(x-90,y-80,RED);
  rectangle(x+80,y-150,x+100,y-20);//top right
  floodfill(x+90,y-80,RED);
  rectangle(x-70,y-10,x+70,y+10);//center
  floodfill(x,y,RED);
  rectangle(x+80,y+20,x+100,y+150);//bot right
  floodfill(x+90,y+80,RED);
  delay(2000);
  cleardevice();
  led_display(x,y);

  //display5
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x-80,y-180,x+80,y-160);//top
  floodfill(x,y-170,RED);
  rectangle(x-100,y-150,x-80,y-20);//top left
  floodfill(x-90,y-80,RED);
  rectangle(x-70,y-10,x+70,y+10);//center
  floodfill(x,y,RED);
  rectangle(x+80,y+20,x+100,y+150);//bot right
  floodfill(x+90,y+80,RED);
  rectangle(x-80,y+160,x+80,y+180);//bot
  floodfill(x,y+170,RED);
  delay(2000);
  cleardevice();
  led_display(x,y);

  //display6
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x-80,y-180,x+80,y-160);//top
  floodfill(x,y-170,RED);
  rectangle(x-100,y-150,x-80,y-20);//top left
  floodfill(x-90,y-80,RED);
  rectangle(x-70,y-10,x+70,y+10);//center
  floodfill(x,y,RED);
  rectangle(x-100,y+20,x-80,y+150);//bot left
  floodfill(x-90,y+80,RED);
  rectangle(x+80,y+20,x+100,y+150);//bot right
  floodfill(x+90,y+80,RED);
  rectangle(x-80,y+160,x+80,y+180);//bot
  floodfill(x,y+170,RED);
  delay(2000);
  cleardevice();
  led_display(x,y);

  //display7
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x-80,y-180,x+80,y-160);//top
  floodfill(x,y-170,RED);
  rectangle(x+80,y-150,x+100,y-20);//top right
  floodfill(x+90,y-80,RED);
  rectangle(x+80,y+20,x+100,y+150);//bot right
  floodfill(x+90,y+80,RED);
  delay(2000);
  cleardevice();
  led_display(x,y);

  //display8
  setcolor(RED);
  setfillstyle(1,RED);
  rectangle(x-80,y-180,x+80,y-160);//top
  floodfill(x,y-170,RED);
  rectangle(x-100,y-150,x-80,y-20);//top left
  floodfill(x-90,y-80,RED);
  rectangle(x+80,y-150,x+100,y-20);//top right
  floodfill(x+90,y-80,RED);
  rectangle(x-70,y-10,x+70,y+10);//center
  floodfill(x,y,RED);
  rectangle(x-100,y+20,x-80,y+150);//bot left
  floodfill(x-90,y+80,RED);
  rectangle(x+80,y+20,x+100,y+150);//bot right
  floodfill(x+90,y+80,RED);
  rectangle(x-80,y+160,x+80,y+180);//bot
  floodfill(x,y+170,RED);
  delay(2000);
  cleardevice();
}
 closegraph();
 getch();

}