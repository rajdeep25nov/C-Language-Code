# include <stdio.h>
//2D Arrays in C
int main(){
int students =3;
int subject =5;
    int marks [3][5];
    for (int i = 0; i <students; i++)
    {
        for (int j = 0; j <subject; j++)
        
        {
            printf("Enter the mark of student %d  in subject%d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
        
    }
    for (int i = 0; i <students; i++)
    {
        for (int j = 0; j <subject; j++)
        
        {
            printf("The mark of student %d  in subject%d is %d\n",i+1,j+1,marks[i][j]);
            
        }
        
    }



    
}