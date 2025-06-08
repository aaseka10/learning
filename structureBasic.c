#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[20];
    float percentage;
    char grade; 
};
int main () {
struct student aaseka;
printf("Enter the roll number of the student:");
scanf("%d",&aaseka.roll);
strcpy (aaseka.name ,"Aaseka Phuyal");
aaseka.percentage = 99.5;
aaseka.grade= 'A';

printf("%d\n%s\n%f\n%c",aaseka.roll,aaseka.name,aaseka.percentage,aaseka.grade);
return 0;
}

/*Enter the roll number of the student:2
2
Aaseka Phuyal
99.500000
A*/
