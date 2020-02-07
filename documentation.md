| Sean Eastin|
| :---          	|
| s198013    	|
| Intro to c++|
||

## I. Requirements

1. Description of Problem(Here is where you layout what the purpose of the application. Address not only what the problem is the application is designed to solve, but the specifications of the problem)

	- **Name**: tic tac toe

	- **Problem Statement**: 

	- **Problem Specifications** :

2. Input Information(All information being given to the application)
- you use the keyboard to pick options

3.  Output Information(All information output to the user) 

 
4. User Interface Information(Here is where user interface information is explained ex: menu options or  a HUD )

## II. Design(This is where you document how your program works. The main game loop should be described here. Everything from the programs ending to its beginning should be documented here. You can use diagrams, gifs, or other images to help.)

1. _System Architecture_(This is where you describe how your application flows. This should break down the main game loop and how the application works from start to end)

1. _User Interface_(This is where each UI element is explained. For example each menu option the player has should would be explained here.)






3. ### Object Information(All classes and their atrributes shsould be described here.)

   **File**: TicTacToe.cpp(File name or class name)

     Description: 
     
    **Attributes(This is a list of each variable,function, and property inside the class**

         Name: board
             Description: a 2d array that stores the board
             Type: char

         Name: gameover
             Desceription:
             keeps program from closing untill user says they want to quit
             Type: bool

         Name: playernumber
             Desceription: swithches at the start of a player's turn used to tell the user who the current player is
             Type: string

         Name: XorO
             Desceription:
             used to tell the game what it is placing on the board
             Type: char

         Name: input
             Desceription:
             stores whatever number the player inputs
             Type: int

         Name: validinput
             Desceription:
             used to check if players inputed a valid input
             Type: bool

         Name:start
             Desceription:
             runs at the start of the game
             Type: function

         Name: tiegame
             Desceription:
             this is called when the game ends in a tie
             Type: function

         Name: youwon
             Desceription:
             called whenever someone wins
             Type: function

         Name: checkiftiegame
             Desceription:
            checks to see if all spaces are filled this is called after the game checks to see if someone won
             Type: function

         Name: checkifyouwon
             Desceription:
             checks to see if anyone won the game
             Type: function
            
         Name: playerinput
             Desceription:
            this function places an X or an O where the placer says they wont it.
             Type: function

         Name: draw
            draws the board
             Type: function
             
         Name: update
             Desceription:
             this runs untill someone wins
             Type: function
