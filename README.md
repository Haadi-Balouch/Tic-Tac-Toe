# Tic Tac Toe Game in C++

This repository contains a simple console-based Tic Tac Toe game implemented in C++. The game allows two users to play against each other by taking turns to mark spaces on a 3x3 grid.

## Features
- Two-player game mode.
- Dynamic user input for selecting row and column.
- Validates user input to ensure moves are within bounds and do not overwrite existing moves.
- Detects and announces the winner or a draw.

## How to Play
1. Clone the repository and compile the `tic_tac_toe.cpp` file.
2. Run the compiled executable.
3. The game will prompt "User 1" and "User 2" alternately to input their moves.
4. Enter the row and column numbers (1-based index) where you want to place your mark ('X' for User 1, 'O' for User 2).
5. The game continues until one player wins or all cells are filled (draw).

## Code Overview

### Functions
- `void input(char array[row][col], int &r, int &c);`
  - Handles user input for row and column. Ensures the input is within valid range and the chosen cell is empty.

- `void user1(char array[row][col]);`
  - Handles the turn for User 1, taking input and marking 'X' on the board.

- `void user2(char array[row][col]);`
  - Handles the turn for User 2, taking input and marking 'O' on the board.

- `void check(char array[row][col]);`
  - Checks the board for winning conditions (horizontal, vertical, and diagonal lines).

- `void display(char array[row][col]);`
  - Displays the current state of the board.

### Main Loop
- The main loop continues to run until a player wins, alternating between User 1 and User 2 turns.

## Compilation
To compile the program, use the following command:
```bash
g++ -o tic_tac_toe tic_tac_toe.cpp
```

## Running the Game
After compilation, run the game using:
```bash
./tic_tac_toe
```

## Example Gameplay
```
********** USER 1 ************
Enter the row: 1
Enter the column: 1
 | X |   |   |
 -------------
 |   |   |   |
 -------------
 |   |   |   |
********** USER 2 ************
Enter the row: 2
Enter the column: 2
 | X |   |   |
 -------------
 |   | O |   |
 -------------
 |   |   |   |
```
