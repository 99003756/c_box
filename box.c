#include "box.h"

void enter(struct box *w1)
{
  w1 = (struct box *)malloc(size * sizeof(struct box));
     
    w1[size] = {
        {1,"red"},
        {2,"blue"},
        {3, "black"} };
  free(w1);
}



struct box print_details(struct box *pw)
{
int i;
 printf("\nDetails of box record\n");
 for(i=0;i<3;i++)
 {
    printf("\nUnique ID: %d\t Name: %s\n"
        ,pw[i].UID,pw[i].name);
 }
 return *pw;
}

int search_code(struct box *pw)
{
 
 for(int i=0;i<3;i++)
 {
     if(3==pw[i].UID)
       {
         return 3;
       }
       else
        return 0;
 }

}

    
