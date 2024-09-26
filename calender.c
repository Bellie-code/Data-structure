#include<stdio.h>
#include<stdlib.h>
struct Day{
     char *dayName;
     int date;
     char *activity;
};
struct Day* createCalender();
void readCalender(struct Day* calender);
void displayCalender(struct Day* calender);
void freeCalender(struct Day* calender);
int main(){
    struct Day* calender = createCalender();
    readCalender(calender);
    displayCalender(calender);
    freeCalender(calender);
    return 0;
struct Day* createCalender(){
    return(struct Day*)malloc(7*sizeof(struct Day));
}
}
void readCalender(struct Day* calender){
    for(int i=0;i<7;i++){
       printf("Enter name of the day %d:",i+1);
       scanf("%ms",&calender[i].dayName);
       printf("Enter date for %s:",calender[i].dayName);
       scanf("%d",&calender[i].date);
       printf("Enter activity for %s:",calender[i].dayName); 
       scanf("%ms",&calender[i].activity);
       }
}
void displayCalender(struct Day* calender){
   printf("\n Week's Activity Report:\n");
   for(int i=0;i<7;i++){
      printf("Day:%s,Date:%d,Activity:%s\n",calender[i].dayName,calender[i].date,calender[i].activity);
   }
}
void freeCalender(struct Day* calender){
    for(int i=0;i<7;i++){
    free(calender[i].dayName);
    free(calender[i].activity);
    }
    free(calender);
}
