# Puzzle Game

## Description
This program implements a simple 3x3 sliding puzzle game in C++. The puzzle consists of numbered tiles (1 to 8) and an empty space (0). The player can move tiles into the empty space by entering their value, provided the tile is adjacent to the empty space.

The objective of the game is to rearrange the tiles to their original order:
```
1  2  3
4  5  6
7  8  0
```

## Features
- **Interactive Gameplay**: Users can input the number of a tile to move it into the empty space.
- **Validation**: Only tiles adjacent to the empty space can be moved.
- **Grid Display**: The current state of the grid is displayed after every move.

## How to Use
### Prerequisites
- A C++ compiler such as g++.

### Steps to Compile and Run
1. Save the program to a file named `puzzle_game.cpp`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the file.
4. Compile the program using the following command:
   ```bash
   g++ -o puzzle_game puzzle_game.cpp
   ```
5. Run the compiled program:
   ```bash
   ./puzzle_game
   ```

### Gameplay Instructions
1. Upon starting the program, the initial grid will be displayed:
   ```
   1   2   3
   4   5   6
   7   8   0
   ```
2. Enter the number of the tile you want to move into the empty space. For example, if the grid looks like this:
   ```
   1   2   3
   4   5   6
   7   8   0
   ```
   You can enter `8` to move the tile `8` into the empty space.
3. The program will validate your input:
   - If valid, the grid will update.
   - If invalid (e.g., the tile is not adjacent to the empty space), an error message will be displayed.
4. The game continues indefinitely, allowing you to practice sliding the tiles.

## Example Run
```
		   ***** PUZZLE GAME *****
	Note: Enter input number which is adjacent to Zero (0)

	1	2	3	
	4	5	6	
	7	8	0	

	Enter input number to replace with empty space (Zero): 8

	1	2	3	
	4	5	6	
	7	0	8	

	Enter input number to replace with empty space (Zero): 5

	1	2	3	
	4	0	6	
	7	5	8	
```

## Notes
- Ensure that the number you enter is within the range of tiles in the grid.



