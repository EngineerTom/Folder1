# include <stdio.h>
# include <math.h>
# include <grx20.h>
# include <string.h>

int minnum ();
int points(int);
int loop;

main(){
       int numbers[10], i, num, min, *pt1, *pt2, *pt3, *pt4, *pt5, *pt6, *pt7, *pt8, *pt9, *pt10;
       pt1 = &numbers[0];
       pt2 = &numbers[1];
       pt3 = &numbers[2];
       pt4 = &numbers[3];
       pt5 = &numbers[4];
       pt6 = &numbers[5];
       pt7 = &numbers[6];
       pt8 = &numbers[7];
       pt9 = &numbers[8];
       pt10 = &numbers[9];

       for(i=0; i<10; i++){
                         numbers[i]=10*i;
                         }
       printf("We have an array of numbers:\n%d, %d, %d, %d, %d, %d, %d, %d, %d, %d \n", *pt1, *pt2, *pt3, *pt4, *pt5, *pt6, *pt7, *pt8, *pt9, *pt10);
       min = minnum();
       printf("You have chosen to start with %d.", min);
       if(min==90){
                   printf(" %d is the last number in the list, so you may not view any more numbers.\n%d0", min, min);
                   }
       else num = points(min);
       printf("You have chosen to view %d numbers, starting with %d\n", num, min);
       system("PAUSE");
}

minnum(){
         int low;
printf("You can now look in detail at a few of these numbers in sequence. Which is the smallest number which interests you?\n");
for(loop=0 ;1 ;loop++){
         if(loop != 0){
                 printf("%d is not on the list of allowed numbers. Please re-examine it and choose a new one.\n", low);
                 }
         scanf("%d", &low);
         if(low % 10 != 0 || low < 0 || low > 90)
         continue;
         return (low);
         }
}

points(int least){
           int nos, dec = least/10;
           char quant[7];
           printf("How many numbers would you like to print?\n");
           for(loop=0 ;1 ;loop++){
                      if(loop != 0){
                      printf("That won't work. Please choose a %s number, between 1 and %d.\n",quant,10-dec);
                      }
           scanf("%d%", &nos);
           if(nos<1){
                     quant[] = "smaller";
                     continue;
                     }
           if(nos+dec>10){
                          quant[] = "bigger";
                          continue;
                          }
           else return nos;
}

