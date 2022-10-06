# ZeckUpdate
This project was written in C++, but I am doing a rewrite for C as well as working on optimizing the code. This is also offering me an oppurtunity to learn and use Git efficiently.

# Install
This is meant to be compiled on Linux. To install, enter the folder of the source code: ZeckUpdate. Run make && sudo make install. If you are root, omit sudo. If you have a sudo replacement such as doas, replace sudo with the replacement.

# How does this work?
Installing the application creates a folder in the home user directory, often represented with '~', the folder named .zeckupdate with a file inside called update.txt. Running zeckupdate will result in 13 prompts, each asking for user input. These are simple questions. After the 13 prompts, the program terminates and all info is written to update.txt in this format:
# [prompt] [userinput]
# [prompt2] [userinput2]
# . . .
 
