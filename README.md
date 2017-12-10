# p04-Capstone

##Input/Output

[message.cpp lines 18-21](/message.cpp#L10)
I created outputs here to greet the player, and give them an option to play or quit the game. 

[message.cpp line 22](/message.cpp#L22)
I created an input here to recieve the player's choice.

##Control Flow

[message.cpp lines 5-8](/message.cpp#L5)
I use an if statement to see if the player picks a valid choice

[message.cpp lines 9-12](/message.cpp#L9)
I use an else statement to make my bool validChoice = ture when choice is either 1 or 2

[main.cpp lines 57-60](/main.cpp#L57)
I use an else if statement here because in the case that the if statemnt above is false. I want to check if the player wanted to exit the game making startGame = false.

##Iteration

[map.cpp lines 7-10](/map.cpp#L7)
I use a for loop here to fill in the droneMap matrix with empty spaces to later fill in with strings.

[map.cpp lines 28-37](/map.cpp#L28)
I use a while loop here to make sure that only 15 drones are spawned into the map.

##Data Structure

[map.h line 12](/map.h#12)
I created a matrix variable (vector of vector of a droneMap) to represent a map of where the drones are because the map is a two dimensional grid with X and Y cordinates.

##Function

[main.cpp lines 50-62](/main.cpp#L50)
I created an endOrStart function that recieves the outcome of the player and returns a bool startGame. This is because I wanted to see if the player wants to play the game or not.

[main.cpp lines 69-92](/main.cpp#69)
I created a isNewHighScore function that pass by refrences int playerHighScore from the int main() because I want to save memory when it pulls in the vaiable.

##File IO

[main.cpp lines 74-90](/main.cpp#74)
I use fileIO to read a textfile and output the highestscore. I also use fileIO to overwrite the highestscore if the player got a score greater than the highestscore.

##Class

[map.h lines 1-30](/map.h#1)
I created a map class that creates the maps for the drones and the player,displays the map, updates the player map after every hit, plays the game, and returns a highscore. I also have member variables for the map matrices, the number of drones, the map size, to check if game is over, how many shots left the player has left, how many drones they hit.



