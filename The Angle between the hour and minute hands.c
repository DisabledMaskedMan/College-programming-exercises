#include <stdio.h>
#define Myabs(x) (x<0 ? -x : x)

double calAngle(int hour, int minute)
{
    int DifAngle = hour * 30 - minute * 6;
    if(DifAngle > 180)
        DifAngle -= 360;
    else if (DifAngle < -180)
        DifAngle += 360;
    DifAngle = Myabs(DifAngle);

    return DifAngle;
}

int main()
{
    int Hour;
    int Minute;
    scanf("%d:%d", &Hour, &Minute);
    double Angle = calAngle(Hour, Minute);
    printf("%.1lf", Angle);

    return 0;
}
