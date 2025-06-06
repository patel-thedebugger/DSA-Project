#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#define SLEEP_TIME 100


int topR = -1 , topC = -1 ;
int max = 1;
int *stack[100]; 
void push ( int val )
{
    //overflow condition
    if((topC == max - 1) && (topR == max - 1 ))
    {
        printf("\n%d%d",topR,topC);
        printf("overflow \n");
    }
    else
    {
        //at the starting 
        if(topC == -1 && topR == -1)
        {
            topC = 0 ;
            topR = 0 ;
            stack[topR][topC] = val;
            topR++;
        }
        /* inserting in the form of 
        1   5    9  13
        2   6   10  14
        3   7   11  15
        4   8   12  16 */

        //inserting in the same row
        else if( topC < max && topR != max-1)
        {
            stack[topR][topC] = val;
            topR++;
        }
        //shifting to the next row
        else
        {
            stack[topR][topC] = val;
            topR = 0 ;
            topC++ ;
            
        }
    }
}

int pop ()
{
    //for returning the value of poped element

    int val = stack[topR][topC];

    //condition of empty 
    if(topC == -1 && topR == - 1)
    {
        printf("The stack is empty.");
    }
    /* inserting in the form of 
        1   5    9  13
        2   6   10  14
        3   7   11  15
        4   8   12  16 
        
    in descending order (LIFO)
    That means the 16 will pop first and then 15 ,14 , 13 , 12 blah blah */

    else
    {
        if(topR == 0)
        {
            if(topC == 0 )
            {
                topR = 0 ;
                topC = 0 ;
            }
            stack[topR][topC] = 0 ;
            topR = max-1 ;
            topC--;
        }
        else 
        {
            stack[topR][topC] = 0 ;
            topR--;
        }
    }
    return val;
}

int check(int row)
{
    int i , x ;

    //is there queen on the left side 
    if(topC != 0)
    {
        for( i = topC-1 ; i >= 0; i-- )
        {
            if(stack[row][i])
            {
                printf("\n<");
                return 0 ;
            }
                    
        }   
            
    }

    //is there queen at upward and diagonally side
    if(row>0)
    {
        //printf("z");
        x=0;
        for(int i = row ; i >= 0 ; i-- )
        {
            //checking diagonal upward and left side 
            if(stack[i][topC-x] && (topC-x >= 0))
            {
                printf("\n</");
                return 0 ;
            }
                    
            
            //checking  diagonally updward  of right side
            
            if(stack[i][topC+x] && (topC+x <= max - 1 ))
            {
                printf("\n/>");
                return 0 ;
            }
            
            //checking  upward only
            if( stack[i][topC] )
            {
                printf("\n^");
                return 0 ;
            }
            x++;
        }
    }
    
    //is there queen of downward and diagonally side
    if(topR!=max-1)
    {
        x=0;
        for(int i = row ; i < max ; i++,x++)
        {
            //checking diagonal downward of left side 
            if(topC-x >= 0 )
            {
                if(stack[i][topC-x])
                {
                    printf("\ndiagonally left side");
                    return 0 ;
                }
            }
        }
    }
    return 1 ;
}
void display()
{
    int i , j ;
    printf("\n");

    for(i = 0 ; i < max ; i++)
    {
        usleep(SLEEP_TIME);
        printf("\t\t");
        for(j = 0 ;j < max ;j++)
        {
            if(i == topR && j == topC)
            {
                printf("*  ");
                continue;
            }
                
            if(stack[i][j])
                printf("Q  ");
            else
                printf(".  ");
        }
        printf("\n");
    }

}

int main()
{
    //i and j are for indexing 
    // num for counting the total number of queens present
    int i , num , a , t ;
    printf("Enter the size : ");
    scanf("%d",&max);

    //dynamically allocating the memory of 2d array
    for (i = 0; i < max; i++)
        stack[i] = (int*)calloc(max , sizeof(int));

    //initializing num by default 0 
    num = 0 ;

    // for stating the presence of queen in the current column
    //where 0 implies yes and 
    //      1 implies No
    int flag = 1 ;

    

    while( 1 )
    {
        //displaying the initial matrix
        //display();
        usleep(SLEEP_TIME);
        //diplaying the final output when there is max number of queens
        if(num == max)
        {
            printf("\n\nThe required matrix is : \n");
            display();
            printf("\nData structure : 202040301");
            printf("\nMINI PROJECT");
            printf("\nTitle : N Queen Problem using Backtracking Algorithm and Stack");
            printf("\nDeveloped By : \n\t Garv Patel (12302130501014)");

            printf("\n\n===Code Execution Successfully===");
            
            break ;
        }

        //representing curret location of pointer
        printf("\nThe current location is %d%d",topR,topC);
        //inserting first elemnt
        if(topC == -1 && topR == -1)
        {
            push(1);
            num=1;
            flag = 0;
        }
        
        
        //condtion of presence/absence of queen in current column
        if( flag )
        {
            //if it passes if condition then it implies no queen
            
            //checking the possibility to place the queen
            //1 implies yes
            //0 implies No
            if(check(topR))
            {
                //if there is placement of queen at last row then not need to push 0 
                if(topR == max-1)
                    flag = 1 ; 
                //else we have to push 0 til the end of row
                else
                    flag = 0 ;

                //for presence of queen we push 1
                push(1);
                //increment in the number of queens
                num++;
                
            }
            //if we enter in the else part that states that there no possiblity of placing queen
            else
            {
                //if it is end of the row                                
                if( topR == max - 1 )
                {
                    t = 1 ;
                    //backing tracking upto previous queen
                    do
                    {
                        usleep(SLEEP_TIME);
                        // representing the back trackkig algorithm
                        printf("\n%d -> %d%d",t,topR,topC);
                        t++;
                        //condition at which there is no possiblity of placing all max queens
                        if((topC == 0 && topR == max - 1 ) && num != max && stack[topR][topC])
                        {
                            printf("\nNot possible");
                            return 0 ;
                        }
                        a = pop();
                    } while (!a);
                    //decrement of number of queens
                    num--;
                    //checking that there is queen of not at back
                    if(stack[topR][topC])
                    {
                        if(topR == max -1 )
                        {
                            topR = 0 ;
                            topC++;
                        }
                        else
                            topR++;
                    }
                    push(0);
                    //after back tracking if there is last row element we have to do back tracking again
                    if(topR == max - 1 )
                    {
                        t = 1 ;
                        do
                        {
                            usleep(SLEEP_TIME);
                            // representing the back trackkig algorithm
                            printf("\n%d -> %d%d",t,topR,topC);
                            t++;
                            if(topC == 0 && topR == 0 )
                            {
                                push(0);
                                goto next;
                            }                                
                            continue;
                        }while(!pop());
                        if(stack[topR][topC])
                        {
                            if(topR == max -1 )
                            {
                                topR = 0 ;
                                topC++;
                            }
                            else
                                topR++;
                        }
                        else
                        {
                            topR++;
                        }
                        
                        push(0);
                        next:
                        if(topC == -1)
                            topC = 0 ;
                        
                        //for again back tracking 
                        //again decrement
                        num--;
                    }
                    else
                        push(0);
                    
                }
                else
                    push(0);
                
            }
        }
        // when there is already queen in the column so pushing 0 in rest of rows 
        else
        {
            for( i = topR ; i < max ; i++ )
            {
                push(0);
            }
            flag = 1 ;    
        }
        printf("\n\n");

        //displaying
        display();
        //getch();

    }

    // freeing the dynamically allocated memory
    for (i = 0; i < max; i++)
        free(stack[i]);
    
    
    return 0 ;

}