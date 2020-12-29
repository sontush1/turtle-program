# turtle-program

## Program Background 

This is the classic example of array usage in C programming language. In the program, the Logo language has been simulated. The Logo language made the concept of turtle graphics famous.

## Description 

Imagine a mechanical turtle that walks around the room under the control of a C program. The turtle holds a pen in one of two positions, up or down. While the pen is down, the turtle traces out shapes as it moves; while the pen is up, the turtle moves about freely without writing anything. In this problem It has been simulated the operation of the turtle and create a computerized sketchpad as well.

## Instrutions 

A 50-by-50 array has been floor which is initialized to zeros. The program reads commands from an array that contains them. It also Keeps track of the current turtle position at all times and whether the pen is currently up or down. It has been assumed that the turtle always starts at position 0, 0 of the floor with its pen up, facing right. The set of turtle commands the program must process are shown at the bottom . 

Turtle commands:

| Command       | Meaning      |
| ------------- |:-------------:|
| 1             | Pen up        |
| 2             | Pen down      |
| 3             | Turn right    |
| 4             | Turn left     |
| 5, N          |  Move forward N spaces (N is a number) |
| 6             | Print the 50-by-50 array floor |
| 9             | End of data (sentinel) |

As the turtle moves with the pen down, set the appropriate elements of array floor to 1s. When the 6 command (print) is given, wherever there’s a 1 in the array, display an asterisk, or some other character you choose. Wherever there’s a zero, display a blank.
We assume that the floor has 4 walls. Thus, any attempt to go beyond the floor will make the turtle stop at the boundary of the floor.
