# EX 7 : THREE DIMENSIONAL TRANSFORMATIONS

## AIM :
 
 To implement the various transformations on three dimensional odjects using a c coding.

## EQUIPMENT REQUIRED:

●	Hardware: Personal Computer (PC)

●	Software: C Compiler

## ALGORITHM :


   Step 1 : Start.

   Step 2 : Draw an image with default parameters.

   Step 3 : Get the choice from user.

   Step 4 : Get the parameters for transformation.

   Step 5 : Perform the transformation.

   Step 6 : Display the output.

   Step 7 : Stop.

## Program :
```c
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


```

## Output :

# Translation

<img width="636" height="472" alt="3d_1" src="https://github.com/user-attachments/assets/76dc1c34-2eae-439d-a2f0-3de7c19bd9cc" />

# After Translation

<img width="638" height="478" alt="3d_2" src="https://github.com/user-attachments/assets/d7cbf729-7e11-487b-a4db-a534d264175f" />

# Scaling

<img width="636" height="473" alt="3d_3" src="https://github.com/user-attachments/assets/4e940a9c-4be2-4f44-a96f-7776d74ef462" />

# After Scaling

<img width="637" height="478" alt="3d_4" src="https://github.com/user-attachments/assets/f0f981b3-349c-4c73-b243-f8ffa24b38d5" />

# Rotation

<img width="640" height="473" alt="3d_5" src="https://github.com/user-attachments/assets/1dc0d0ae-fcf8-421f-9032-e716ff02c95d" />

# After Rotation about Z Axis

<img width="641" height="472" alt="3d_6" src="https://github.com/user-attachments/assets/88869502-5891-4234-8418-2990c56bfbb6" />

# After Rotation about X Axis

<img width="637" height="475" alt="3d_7" src="https://github.com/user-attachments/assets/d2f859ec-1fe8-47ec-8452-501ffceebd72" />

# After Rotation about Y Axis

<img width="637" height="475" alt="3d_8" src="https://github.com/user-attachments/assets/58ac8538-4557-4126-92df-938caa2651d6" />


## Result :

Thus, the program was executed and the output was obtained successfully
