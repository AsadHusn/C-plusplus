#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
int main()  
{  
        int gm,gr,xcmin,ycmin,xcmax,ycmax,x,y,c;  
          printf("Enter the clipmin coordinate :\n");  
          scanf("%d%d",&xcmin,&ycmin);  
          printf("Enter the clipmax coordinate :\n");  
          scanf("%d%d",&xcmax,&ycmax);   
          printf("Enter the coordinate of the point:\n");  
          scanf("%d%d",&x,&y);  
          
          printf("\n1.Point clipping\n2.Exit\nEnter your choice:\n");  
           scanf("%d",&c);  
           switch(c)
     {  
           case 1:  
          detectgraph(&gm,&gr);
          initgraph(&gm,&gr,"d:\\tc\\BGI");  
          rectangle (xcmin,ycmax,xcmax,ycmin);  
          printf("*******POINT CLIPPING******\n");  
          if ((xcmin<x) && (x<xcmax))  
      {  
         if ((ycmin<y) && (y<ycmax))  
        {  
          printf("The point is inside the clip window\n");  
           putpixel(x,y,15);  
        }  
     }  
          else  
          printf("The point is outside the clipwindow \nThe point is clipped\n");  
          break;  
         case 2: exit(0);  
    }  
         getch();  
}  
