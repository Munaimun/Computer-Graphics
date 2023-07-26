#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter your choice:\n1 for Flag\n2 for Emoji\n3 for House\n4 for scenario\n";
    cin>>ch;

    int gd = DETECT, gm;
    initgraph (&gd, &gm, " ");
    switch(ch)
    {
    case 1:
        //flag
        setcolor(GREEN);
        rectangle(150,100,400,250);
        setfillstyle(1,GREEN);
        floodfill(151,110,GREEN);

        setcolor(RED);
        circle(275,175,40);
        setfillstyle(1,RED);
        floodfill(276,176,RED);

        setcolor(WHITE);
        rectangle(146,100,149,400);
        setfillstyle(4,YELLOW);
        floodfill(147,253,WHITE);

        getch();
        closegraph();
        break;

    case 2:
        //EMOJI
        setcolor(WHITE);
        circle(200,150,100);
        setfillstyle(1,YELLOW);
        floodfill(201,151,WHITE);
        //left eye
        setcolor(WHITE);
        circle(150,120,10);
        setfillstyle(1,BLACK);
        floodfill(151,121,WHITE);
        //right eye
        setcolor(WHITE);
        circle(240,120,10);
        setfillstyle(1,BLACK);
        floodfill(241,121,WHITE);
        //nose
        setcolor(BLACK);
        line(195,130,180,150);
        line(195,130,210,150);
        line(180,150,210,150);

        ellipse(200, 160, 180, 0, 70, 60);
        getch();
        closegraph();

        break;

    case 3:
        // House body
        setcolor(WHITE);
        rectangle(100, 200, 400, 400);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(101, 250, WHITE);

        // Roof
        setcolor(WHITE);
        line(100, 200, 250, 100);
        line(250, 100, 400, 200);

        // Left window
        setcolor(WHITE);
        rectangle(120, 250, 170, 300);
        setfillstyle(SLASH_FILL, CYAN);
        floodfill(125, 255, WHITE);

        // Right window
        setcolor(WHITE);
        rectangle(335, 250, 385, 300);
        setfillstyle(SLASH_FILL, CYAN);
        floodfill(340, 255, WHITE);

        // Main door
        setcolor(BLACK);
        rectangle(200, 300, 300, 400);
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(205, 305, BLACK);
        getch();
        closegraph();

        break ;

    case 4:
        //cloud
        setcolor(WHITE);
        ellipse(100, 100, 0, 360, 50, 30);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(101, 101, WHITE);
        setcolor(WHITE);
        ellipse(30, 50, 0, 360, 50, 30);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(31, 51, WHITE);
        setcolor(WHITE);
        ellipse(170, 50, 0, 360, 50, 30);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(171, 51, WHITE);
        setcolor(WHITE);
        ellipse(270, 90, 0, 360, 50, 30);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(271, 91, WHITE);
        setcolor(WHITE);
        ellipse(370, 20, 0, 360, 50, 30);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(371, 21, WHITE);
        setcolor(WHITE);
        ellipse(570, 105, 0, 360, 50, 30);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(571, 111, WHITE);
        //sun
        setcolor(BROWN);
        circle(100,70,30);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(101,71, BROWN);

        setcolor(WHITE);
        //left house
        rectangle(30,180,260,350);
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(31,181, WHITE);
        //door
        rectangle(120,300,160,350);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(121,301, WHITE);
        line(145,130,30,180); //roof
        line(145,130,260,180);

        //right house
        rectangle(350,180,580,350);
        setfillstyle(SOLID_FILL, BROWN);
        floodfill(351,181, WHITE);
        //door
        rectangle(440,300,480,350);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(441,301, WHITE);
        line(465,130,350,180);
        line(465,130,580,180);

        //road
        line(170,350,170,450);
        line(111,350,111,450);
        line(430,350,430,450);
        line(490,350,490,450);

        getch();
        closegraph();

        break;

    default:
        cout<<"Invalid";
        break;
    }
    return 0;
}
