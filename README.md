<div align="center">

<h1> 42 So_Long </h1>

<a href="https://github.com/simon-zerisenay/42_So_Long">![42 Badge](https://github.com/mcombeau/mcombeau/blob/main/42_badges/so_longm.png)</a>

</div>
<label>
	<h2> Score </h2>	
	<img alt="110" style="width: 100px;height: 70px" src="https://github.com/simon-zerisenay/simon-zerisenay/blob/main/110.png"/>
</label>
<h2>Introduction </h2>
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/simon-zerisenay/42_So_Long?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/simon-zerisenay/42_So_Long?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/simon-zerisenay/42_So_Long?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/simon-zerisenay/42_So_Long?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/simon-zerisenay/42_So_Long?color=green" />
</p>

Welcome to the 42 So_Long project! This project is part of the curriculum at 42 and focuses on creating a 2D game using the MinilibX, a simple graphic library provided by 42. So_Long is a game where the player navigates through a map, collects items, and avoids obstacles to reach the goal.

<h2>Objective</h2>
The objective of the So_Long project is to develop a fully functional game that incorporates various game elements, such as map rendering, player movement, collision detection, item collection, and win/lose conditions. By completing this project, you will enhance your understanding of game development concepts and gain practical experience in using the MinilibX library.

<h2>Features</h2>
Map Rendering
So_Long allows you to load and render game maps stored in a specific format, typically a file with a .ber extension. The map consists of different tiles representing walls, paths, collectible items, the player's starting position, and the exit. The MinilibX library provides functions to render graphical elements on the screen, enabling you to display the map with the appropriate textures and colors.

<h2>Player Movement</h2>
The player can move in four directions: up, down, left, and right, within the bounds of the map. By handling keyboard inputs, you can update the player's position on the screen accordingly. The MinilibX library provides functions to capture key events and perform actions based on the pressed keys.

<h2>Collision Detection</h2>
To ensure the player doesn't move through walls or outside the boundaries of the map, collision detection is implemented. The game checks if the player's desired movement will result in a collision with a wall or if the player has reached the exit. If a collision is detected, the player's movement is restricted.

<h2>Item Collection</h2>
Throughout the map, there may be collectible items that the player can interact with. When the player reaches a tile containing an item, it is collected, and the player's score is incremented. This feature adds an additional layer of gameplay and encourages exploration.

<h2>Win/Lose Conditions </h2>
The win condition is achieved when the player successfully reaches the exit tile. In contrast, the lose condition can be triggered by specific events, such as colliding with enemies or running out of lives. Implementing win and lose conditions adds a sense of challenge and completion to the game.

<h2>Installation</h2>
To install and run the So_Long project, follow these steps:

Clone the project repository: 
			
			git clone https://github.com/your_username/42-so_long.git
Navigate to the project directory: 
			
					cd 42-so_long
Compile the project using the provided Makefile: 
<br/>			

					make
Run the game executable: 
<br/>			

				./so_long maps/map3.ber
			
<br/>

Make sure you have the MinilibX library installed on your system. If it's not already installed, you can find the library and installation instructions in the project repository.

<h2>Testing </h2>
To test the game and validate its functionality, follow these steps:
<br/>
<br/>
<div align="center">
	<img alt="Game" src="https://github.com/simon-zerisenay/42_So_Long/blob/master/game.png" />
</div>
<br/>
<br/>
Launch the game using the installation steps mentioned above.
Navigate through the map using the arrow keys or WASD keys.
Ensure the player can move freely within the map and is restricted by walls and boundaries.
Collect items on the map and verify that the score is updated accordingly.
Reach the exit tile and confirm that the game ends with a win condition.
Trigger any lose conditions (if implemented) and verify that the game ends accordingly.
Test various edge cases, such as reaching invalid tiles or unexpected input, to ensure the game handles them gracefully.
During testing, monitor the game's performance, responsiveness, and adherence to the specified game rules. Make adjustments and improvements as necessary to enhance the gameplay experience.
