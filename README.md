Simple Shell Project
This is a simple implementation of a Unix-like shell in C. A shell is a command-line interface that allows users to interact with an operating system by running commands.
Features
Basic Command Execution: The shell can execute simple commands entered by the user.
Input/Output Redirection: It supports input and output redirection using < and > operators.
Piping: The shell can pipe the output of one command as input to another command using the | operator.
Background Processes: It can run processes in the background using the & operator.
  
Usage
The shell supports the following commands and features:

Basic Command Execution: Enter commands like ls, pwd, echo, etc.
Input/Output Redirection: Redirect input from a file using < and redirect output to a file using >.
Example: cat input.txt > output.txt

Piping: Pipe the output of one command as input to another command using |.
Example: ls | grep txt
 
Background Processes: Add & at the end of a command to run it in the background.
Example: sleep 10 &

Contributors
Charity - Developer
