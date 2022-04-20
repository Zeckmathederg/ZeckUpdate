# ZeckUpdate
Written in C++, this code takes my input and prints it to a file: its purpose to ask me how I am and stuff.
This executable is meant to be ran on Linux, most distros will work fine granted that the following provisions are followed.
g++ must also be installed for compiling to work.

# File structure and compiling process
updates     src       bin
src contains all the source code, licensing, and README.md.
updates: no file has to be entered in the folder; update.txt will be created automatically by executabale.
bin contains the executable.
# To compile
# (1).
Create the file structure: updates, and src. bin is not necassary for the executable to function, but is recommended.
# (2).
git clone into the src folder created.
# (3). 
Provided that g++ is already installed while in src directory: g++ -o ./ZeckUpdate main.cpp prompts.cpp prompts.hpp
# (4).
To run the application, move the executable to wherever you feel fit as long as it is in a folder aligned with src and updates. Running in src also functions.
Next: ./ZeckUpdate
The file creation process shall be working just fine and you should be prompted.
# (5).
Check the updates folder, and update.txt should be the resultant file. Check the file, and the prompts + user input should now be contained after the application process is terminated.
