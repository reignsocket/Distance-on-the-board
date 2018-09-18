Problem Description  
    Chess board is a black and white 8 * 8 square, with the pieces in the middle of the grid.    
    ![image](https://github.com/reignsocket/Distance-on-the-board/blob/master/picture.png)  
    The rules for the king, the rear, the car, and the elephant are as follows:  
         Wang: You can walk horizontally, straight or diagonally, but you can walk one step at a time.  
         After: Horizontal, straight, and oblique can go, and the number of steps per step is not limited.  
         Car: Both horizontal and vertical can go, can not walk obliquely, the number of cells is not limited.  
         Elephant: You can only walk diagonally, and the number of cells is not limited.  
     Write a program that gives the starting position and the target position, and calculates the king, the rear, the car, and the image    from the starting position to the target position.The minimum number of steps required.
       
Input data  
        The first line is the number of sets of test data t (0 <= t <= 20). Each of the following lines is a set of test data, each group including a checkerboardThe two positions above, the first is the starting position and the second is the target position. The position is expressed in the form of "letter-number"The letters range from "a" to "h" and numbers from "1" to "8". 
          
Output requirements  
        For each set of test data entered, the minimum number of steps required to output the king, the back, the car, and the image. If it cannot be reached, it will output"Inf"
          
Input sample  
  
2  
A1 c3  
F5 f8  
  
Output sample   
  
2 1 2 1  
3 1 1 Inf   
