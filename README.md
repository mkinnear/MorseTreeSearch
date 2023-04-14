# MorseTreeSearch
Code that converts morse signals into English text using C++

How do I compile the code?

1. There's a simple makefile which compiles the project. Run this makefile in your terminal
[EXAMPLE]: make

How do I run the program?

1. The makefile will generate an executable file called "decode". It will also generate .o files.
To execute the program, run the "decode" file with at least 1 parameter enclosed in double quotes (parameter should be a morse code signal).
[EXAMPLE]: ./decode "..." "---" "..."
[OUTPUT]: SOS

How Morse Code Signals are processed:

1. Characters in morse code are processed with each parameter passed in as commandline arguments.
[EXAMPLE: ./decode "..." "---" "..."
[OUTPUT: S O S

2. For signals that you're unsure of, we accept a question mark "?". This signal represents both a short signal "." and a long signal "-"
[EXAMPLE]: ./decode "..?"
[OUTPUT]: S U

3. Words are sepetated by a "Forward Slash Signals -..-. which translates to /"
[EXAMPLE]: ./decode "-.--" "." "..." "-..-." "-." "---"
[OUTPUT]: YES NO

How do I clear .o files?

1. Run the the makefile command to delete all .o files.
[EXAMPLE]: make clean
[OUTPUT]: rm *.o

How do I remove executable file?

1. Run the makefile command to delete the executable file.
[EXAMPLE]: make fclean
[OUTPUT]: rm decode
