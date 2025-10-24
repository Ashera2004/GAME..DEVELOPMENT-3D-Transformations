#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int maxx, maxy, midx, midy;

void axis()
{
    getch();
    cleardevice();
    line(midx, 0, midx, maxy);
    line(0, midy, maxx, midy);
}

void main()
{
    int gd, gm;
    int x, y, z, o;
    int x1, x2, y1, y2;

    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "c:\\turboc3\\bgi");

    setfillstyle(0, getmaxcolor());

    maxx = getmaxx();
    maxy = getmaxy();
    midx = maxx / 2;
    midy = maxy / 2;

    axis();

    // Original cube
    bar3d(midx + 50, midy - 100, midx + 60, midy - 90, 5, 1);

    // Translation
    printf("Enter Translation Factor (x y z): ");
    scanf("%d%d%d", &x, &y, &z);
    axis();
    printf("After Translation\n");
    bar3d(midx + (x + 50), midy - (y + 100), midx + x + 60, midy - (y + 90), 5, 1);

    // Scaling
    axis();
    bar3d(midx + 50, midy + 100, midx + 60, midy - 90, 5, 1);
    printf("Enter Scaling Factor (x y z): ");
    scanf("%d%d%d", &x, &y, &z);
    axis();
    printf("After Scaling\n");
    bar3d(midx + (x * 50), midy - (y * 100), midx + (x * 60), midy - (y * 90), 5 * z, 1);

    // Rotation
    axis();
    bar3d(midx + 50, midy - 100, midx + 60, midy - 90, 5, 1);
    printf("Enter Rotating Angle (in degrees): ");
    scanf("%d", &o);

    // Rotation about Z-axis
    x1 = 50 * cos(o * 3.14 / 180) - 100 * sin(o * 3.14 / 180);
    y1 = 50 * cos(o * 3.14 / 180) + 100 * sin(o * 3.14 / 180);
    x2 = 60 * sin(o * 3.14 / 180) - 90 * cos(o * 3.14 / 180);
    y2 = 60 * sin(o * 3.14 / 180) + 90 * cos(o * 3.14 / 180);

    axis();
    printf("After Rotation about Z Axis\n");
    bar3d(midx + x1, midy - y1, midx + x2, midy - y2, 5, 1);

    // Rotation about X-axis
    axis();
    printf("After Rotation about X Axis\n");
    bar3d(midx + 50, midy - x1, midx + 60, midy - x2, 5, 1);

    // Rotation about Y-axis
    axis();
    printf("After Rotation about Y Axis\n");
    bar3d(midx + x1, midy - 100, midx + x2, midy - 90, 5, 1);

    getch();
    closegraph();
}
