#include<stdio.h>
void show()
{
    static int x=10;
    int y=10;
    printf("x=%d y=%d\n",x,y);
    x++;
    y++;
}
int main()
{
    for(int i=0; i<5; ++i)
    {
        show();
    }
    return 0;
}