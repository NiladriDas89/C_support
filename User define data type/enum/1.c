#include<stdio.h>
enum Color { RED, GREEN, BLUE };
enum day{Sunday,monday,tuesday,wednesday,thrusday,friday,saturday};
int main(int argc, char const *argv[])
{   enum Color color;
    enum day weeklist;
    printf("%d\n",weeklist);
    color=GREEN;
    printf("%d\n",color);//Basicaly enum is user define data type . it take index in as input .
    //Using for loop
    for ( weeklist=0;weeklist<sizeof(enum day)/sizeof(int); weeklist++)
    {
        printf("%d: %s\n",weeklist,(weeklist==Sunday)?"Sunday":(weeklist==monday)?"monday":"tuesday");
    }
    
    return 0;
}
