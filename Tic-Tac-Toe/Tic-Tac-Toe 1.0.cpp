#include <iostream>
#include <string>
#include <graphics.h>
#include <conio.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
int mainarr[3][3]={0};
int drawx()
{
    setcolor(WHITE);
    settextstyle(3,0,5);
    outtextxy(700,50,"Player 1(X)");
    getch();
    if(GetAsyncKeyState(VK_NUMPAD7))
        {
            setcolor(GREEN);
            line(450,200,590,313);
            line(450,313,590,200);
            mainarr[0][0]=2;
        }
    if(GetAsyncKeyState(VK_NUMPAD8))
        {
            setcolor(GREEN);
            line(610,200,750,313);
            line(610,313,750,200);
            mainarr[0][1]=2;
        }
    if(GetAsyncKeyState(VK_NUMPAD9))
        {
            setcolor(GREEN);
            line(770,200,920,313);
            line(770,313,920,200);
            mainarr[0][2]=2;
        }

    if(GetAsyncKeyState(VK_NUMPAD4))
        {
            setcolor(GREEN);
            line(450,330,590,460);
            line(450,460,590,330);
            mainarr[1][0]=2;
        }
    if(GetAsyncKeyState(VK_NUMPAD5))
        {
            setcolor(GREEN);
            line(610,330,750,460);
            line(610,460,750,330);
            mainarr[1][1]=2;
        }
    if(GetAsyncKeyState(VK_NUMPAD6))
        {
            setcolor(GREEN);
            line(770,330,920,460);
            line(770,460,920,330);
            mainarr[1][2]=2;
        }
    if(GetAsyncKeyState(VK_NUMPAD1))
        {
            setcolor(GREEN);
            line(450,475,590,605);
            line(450,603,590,475);
            mainarr[2][0]=2;
        }
    if(GetAsyncKeyState(VK_NUMPAD2))
        {
            setcolor(GREEN);
            line(600,475,740,605);
            line(600,603,740,475);
            mainarr[2][1]=2;
        }
    if(GetAsyncKeyState(VK_NUMPAD3))
        {
            setcolor(GREEN);
            line(770,475,920,603);
            line(770,603,920,475);
            mainarr[1][2]=2;
        }
    }
int draw0()
    {
        setcolor(WHITE);
        settextstyle(3,0,5);
        outtextxy(700,50,"Player 2(O)");
        getch();
    if (GetAsyncKeyState(VK_NUMPAD7))
        {
            setcolor(RED);
            circle(520,255,60);
            mainarr[0][0]=1;
        }
    if (GetAsyncKeyState(VK_NUMPAD4))
        {
            setcolor(RED);
            circle(520,405,60);
            mainarr[1][0]=1;
        }
    if (GetAsyncKeyState(VK_NUMPAD1))
        {
            setcolor(RED);
            circle(520,545,60);
            mainarr[2][0]=1;
        }
    if (GetAsyncKeyState(VK_NUMPAD8))
        {
            setcolor(RED);
            circle(680,255,60);
            mainarr[0][1]=1;
        }
    if (GetAsyncKeyState(VK_NUMPAD9))
        {
            setcolor(RED);
            circle(840,255,60);
            mainarr[0][2]=1;
        }
    if (GetAsyncKeyState(VK_NUMPAD5))
        {
            setcolor(RED);
            circle(680,405,60);
            mainarr[1][1]=1;
        }
    if (GetAsyncKeyState(VK_NUMPAD6))
        {
            setcolor(RED);
            circle(840,405,60);
            mainarr[1][2]=1;
        }
    if (GetAsyncKeyState(VK_NUMPAD3))
        {
            setcolor(RED);
            circle(840,545,60);
            mainarr[2][2]=1;
        }
    if (GetAsyncKeyState(VK_NUMPAD2))
        {
            setcolor(RED);
            circle(680,545,60);
            mainarr[2][1]=1;
        }
}


int checkx()
{
    int a=2;
    bool win=0;
        cout<<"the array is "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<mainarr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0,i=0;j<3;j++)
    {
        if (mainarr[j][i]==a)
        {
            if (mainarr[j][i+1]==a)
            {
                if (mainarr[j][i+2]==a)
                {
                    win=1;
                    cout<<"horizontal vctory of x at row "<<j;
                    return win;
                }
            }
        }
    }

    for(int j=0,i=0;j<3;j++)///check verti victory
    {
        if (mainarr[i][j]==a)
        {
            if (mainarr[i+1][j]==a)
            {
                if (mainarr[i+2][j]==a)
                {
                    win=1;
                    cout<<"vertical victory of x at col "<<j;
                    return win;
                }
            }
        }
    }
    int i=0,j=0;
        if (mainarr[i][j]==a)
        {
            if (mainarr[i+1][j+1]==a)
            {
                if (mainarr[i+2][j+2]==a)
                {
                    win=1;
                    cout<<"diagonal victory of x in the direction '\'";
                    return win;
                }
            }
        }
        if (mainarr[0][2]==a)
        {
            if (mainarr[1][1]==a)
            {
                if (mainarr[2][1]==a)
                {
                    win=1;
                    cout<<"diagonal victory of x in the direction '/'";
                    return win;
                }
            }
        }
        cout<<"for x"<<endl<<win;
        return win;
}
int checko()
{
    int a=1;
    bool win=0;
        cout<<"the array is "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<mainarr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0,i=0;j<3;j++)
    {
        if (mainarr[j][i]==a)
        {
            if (mainarr[j][i+1]==a)
            {
                if (mainarr[j][i+2]==a)
                {
                    win=1;
                    cout<<"horizontal victory of o at row "<<j;
                    return win;
                }
            }
        }
    }

    for(int j=0,i=0;j<3;j++)///check verti victory
    {
        if (mainarr[i][j]==a)
        {
            if (mainarr[i+1][j]==a)
            {
                if (mainarr[i+2][j]==a)
                {
                    win=1;
                    cout<<"vertical victory of o at col "<<j;
                    return win;
                }
            }
        }
    }
    int i=0,j=0;
        if (mainarr[i][j]==a)
        {
            if (mainarr[i+1][j+1]==a)
            {
                if (mainarr[i+2][j+2]==a)
                {
                    win=1;
                    cout<<"diagonal victory of o in the direction '\'";
                    return win;
                }
            }
        }

        int i1=0,j1=2;
        if (mainarr[i1][j1]==a)
        {
            if (mainarr[i1+1][j1-1]==a)
            {
                if (mainarr[i1+2][j-2]==a)
                {
                    win=1;
                    cout<<"diagonal victory of o in the direction '/'";
                    return win;
                }
            }
        }
        cout<<"for o"<<endl<<win;
        return win;
}

int draw()
{
    int a=5,b=5;
    int  xaxis=GetSystemMetrics(SM_CXSCREEN);
    int  yaxis=GetSystemMetrics(SM_CYSCREEN);
    initwindow(xaxis,yaxis,"XO");
    int page=0;
    setbkcolor(BLUE);
    settextstyle(1,0,9);
    floodfill(800,450,RED);
    delay (1000);
    cleardevice();
    bar(100,100,xaxis-100,yaxis-100);
    for(int i=10;i<=19;i++)
    {
    setcolor(BLUE);
    rectangle(450-i,200-i,xaxis-600+i,600+i);
    }
    setcolor(RED);
    line(600,200,600,600);
    line(764,200,764,600);
    line(450,320,936,320);
    line(450,470,936,470);
    int j=0;
    setcolor(WHITE);
    while(j<5)
    {
        drawx();
        a=checkx();
        cout<<a;
        if (a==1)
        {
            outtextxy(1000,50,"player 1 wins");
            cout<<"the player 1(X) wins";
            getch();
            return 0;
        }
        else cout<<"no one won go on"<<endl;
        draw0();
        b=checko();
        cout<<b;
        if (b==1)
        {
            outtextxy(1000,50,"player 2 wins");
            cout<<"the player 2(O) wins";
            getch();
            return 0;
        }
        else cout<<"no one won go on "<<endl;
    }
    if (a==0&&b==0)
    {
        cout<<"this is a draw";
    }

    j++;
    getch();
}
int main()
{
    draw();
}
