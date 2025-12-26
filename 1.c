#include<stdio.h>

int main(){
    int marks;
    printf("Enter your Marks :");
    scanf("%d",&marks);
    (marks>=90) ? printf("Your Grade is A ") : (marks>=80 ? printf("Your Grade is B ") : (marks>=60 ?printf("Your Grade is C " ) : (marks>= 50 ? printf("Your Grade is D ") :(marks>= 35 ? printf("Your Grade is E ") : printf("Your Grade is F ") ))));
    switch(marks / 10){
        case 10:
           printf("\nExcelent Work");
        break;  


        case 9:
           printf("\nWell Done");
        break;


        case 8:
           printf("\nWell Done !");
        break; 

        case 7:
           printf("\nWell Done !");
        break;

        case 6:
           printf("\nWell Done !");
        break;
        case 5:
           printf("\nGood job !");
        break;
        case 4:
           printf("\nGood job !");
        break;
        case 3:
           printf("\nYou can do better !");
        break;
        case 2:
           printf("\nSorry You are fail !");
        break;
        case 1:
           printf("\nSorry You are fail !");
        break;
    }



    if(marks<35){
        printf("\nPlease Try Again next Time");
    }else{
        printf("\nYou are eligible for next level");
    }
}