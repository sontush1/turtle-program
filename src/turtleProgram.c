#include <stdio.h>
#include <stdbool.h>



int direction[] = {10,20,30,40};   	// up = 10, right = 20, down = 30, left = 40
int static turtleDirection = 20;	// at starting the direction is right
int directionIndex = 1;

int array2D[50][50];	//array floor of 50 X 50
int penStatus = 0;  	// if the pen is up then the penStatus =0 otherwise penStatus = 1.
int x,y = 0;		// position index of the turtle and starting index (x,y) = (0,0)



// function prototype
void printArrayFloor(size_t row, size_t col, int array[row][col]);
void changeDirection(int option);
void moveTurtle(int numberOfMoves);

/**
*This is the main functon of the program
*/
int main(void) 
{
	
	array2D[0][0] = 0;   // initializing 2D array
	
	int command;
	int commandArray[100];	// Maximum 100 command can be stored in the array
	
	
	
	
	bool done = false; 	// true when the command = 9
	int commandNums = 0;	// keeps track how many command are given
	printf("Enter the Command: \n");
	
	// check the number of commands
	if(commandNums < 100) 
	{
	// This is a sentinal while loop
	while(!done) {
		scanf("%d", &commandArray[commandNums]);
		if(commandArray[commandNums] == 9)
		{
			done = true;
		}
		else if(commandArray[commandNums] == 5) 
		{
			//Avoid comma to assign in an int array
			char comma ;
			scanf("%c", & comma);
		}
		commandNums++;
		
		}
	 }
		
		
	
	
	
	
	//This is a for loop to command array
	for(int i =0; i < commandNums-1; ++i) {
		
		switch(commandArray[i]){
			case 1:
				penStatus = 0;
				break;
			case 2:
				penStatus = 1;
				break;
			case 3:
				changeDirection(3);  //change the direction of the turtle to right
				break;
			case 4:
				changeDirection(4);	//change the direction of the turtle to left
				break;
			case 5:
				i++;	// move to the next index of commandArray as the next element is number of moves
				moveTurtle(commandArray[i]);
				break;
			case 6:
				printArrayFloor(50,50,array2D);
				break;
			
		
		}
	
	}
	

}
/**
*This function changes the direction of the turtle 
*/
void changeDirection(int option) 
{	
	// direction array works as a circular array
	if(option == 3 ) 
	{
		directionIndex++;
		turtleDirection = direction[directionIndex % 4];
		
	}
	else if(option == 4) 
	{
		directionIndex--;
		turtleDirection = direction[directionIndex % 4];
	}

} 

/**
* This function moves the turtle
*/
void moveTurtle(int numberOfMoves) 
{
	switch(penStatus) {
		case 0:
			switch(turtleDirection) {
				// up = 10, right = 20, down = 30, left = 40
				case 10: 
					x -= numberOfMoves;
					break;
				case 20:
					y += numberOfMoves;
					break;
				case 30:
					x += numberOfMoves;
					break;
				case 40:
					y -= numberOfMoves;
					break;
				
			}
			break;  // end of case 0
		case 1:
			switch(turtleDirection) {
				// up = 10, right = 20, down = 30, left = 40
				case 10:
					for (int i = 0; i < numberOfMoves; ++i) {
      						x--;
      						array2D[x][y] = 1;
     					}
     					break;
     				case 20:
     				          for (int i = 0; i < numberOfMoves; ++i) {
      						y++;
      						array2D[x][y] = 1;
     					}
     					break;
     				case 30:
     					for (int i = 0; i < numberOfMoves; ++i) {
      						x++;
      						array2D[x][y] = 1;
     					}
     					break;
     				case 40:
     					for (int i = 0; i < numberOfMoves; ++i) {
      						y--;
      						array2D[x][y] = 1;
     					}
     					break;
     								
			
			}
			break;  // end of case 1
	}

}

/**
* This function prints the 2d array
*/
void printArrayFloor(size_t row, size_t col, int array[row][col]) 
{
	
	for(size_t i = 0; i < row; ++i) {
		for(size_t j = 0; j < col; ++j ) {
			if (array[i][j] == 1 )
			{
				printf("%c", '*');
			} 
			else 
			{
				printf(" ");
			}
		
		}
		puts("");	// new line for each row
	
	}


}
