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

Problem solving  
The problem is to give a starting position and a ending position on a board, respectively, to judge the king, the rear, the car, and the image from the starting position.Set the number of steps required to reach the end position. First of all, the king, the back, the car, and the elephant are independent of each other, and they can be considered separately. So this The topic focuses on analyzing the characteristics of the walking rules of the king, the back, the car, and the elephant, thereby introducing the number of steps from the start to the end.We assume that the distance between the starting position and the ending position in the horizontal direction is x, and their distance in the vertical direction is y.According to the rules of the king's walking, he can walk horizontally, straightly, and obliquely, one step per step, so the number of steps required is min(x,y)+abs(x-y)– that is, the smaller of x, y plus the absolute value of the difference between x and y. According to the rules of walking, she can be horizontal, straight, and oblique
Go, the number of steps per step is not limited, so the number of steps required is 1 (x is equal to y or x is equal to 0 or y is equal to 0) or 2 (x is not equal to y). According to the rules of the car walking, it can go horizontally and vertically, can not walk obliquely, the number of cells is not limited, the number of steps is 1(x or y is equal to 0) or 2 (x and y are not equal to 0). According to the rule of walking, it can be slanted away, and the number of cells is not limited.The grid points on the board can be divided into two categories. The first category is that the difference between the abscissa and the ordinate is odd, and the second is the horizontal and vertical coordinates.The difference is even. For an image that can only be slanted away, it takes one step, because the absolute value of the increase or decrease of the horizontal and vertical coordinates is equal.
The parity of the difference between the abscissa and the ordinate remains unchanged no matter how it is walked. Therefore, the first category and the second category above Points cannot reach each other. If it is judged that the starting point and the ending point belong to two types of points respectively, it can be concluded that there is no need between them.A few steps of conclusion. If they belong to the same class, it takes 1 from the start point to the end point (the absolute value of x is equal to y Absolute value) or 2 (the absolute value of x is not equal to the absolute value of y).

Common problems in implementation  
This problem requires some simple reasoning. There are several cases of error:  
1) Because the analysis of the problem is not clear, the wrong calculation formula is given;  
2) A newline is missing at the end of each line of output;  
3) Mistype "Inf" as "inf";  
4) The case where the start position and the end position are the same is missed.  
