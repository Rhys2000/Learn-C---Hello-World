//  main.cpp
//  Hello World
//  Created by Rhys Julian-Jones on 5/15/23.

#include <iostream>

int main() {
    /*
    - C++ is a programming language created by Bjarne Stroustrup and his team at Bell Laboratories in 1979. Forty years later, it is one of the most widely used languages in the world; we can find C++ applications everywhere, from the bottom of the oceans to the surface of Mars.
    - As the name implies, C++ was derived from the C language; Bjarne’s goal was to add object-oriented programming into C, a language well-respected for its portability and low-level functionality.
    - So why learn C++? Among many other things:
        > It is fast and flexible.
        > It is well-supported.
        > It forces you to think in new and creative ways.
    - In this lesson, we’ll start learning some basic concepts, and you’ll write your very first C++ program.
     
    - C++ programs are stored in files which usually have the file extension .cpp, which simply stands for “C Plus Plus”.
    - The code inside our C++ file is a classic first step all new programmers take — they greet the world through the terminal!
    - The terminal is the black panel on the bottom. It should be blank right now. The code in the text editor will print text out onto the terminal. More specifically, it will print the phrase Hello World!.
    */
    
    // 1. Press Run to see this program in action.
    std::cout << "Hello World!\n\n";
    
    /*
    - High five! We just got your first program to run.
    - C++, like most programming languages, runs line by line, from top to bottom.
    - In between the curly braces is what we are going to focus on for now.
        std::cout << "Hello World!\n";
    - std::cout is the “character output stream”. It is pronounced “see-out”.
    - << is an operator that comes right after it.
    - "Hello World!\n" is what’s being outputted here. You need double quotes around text. The \n is a special character that indicates a new line.
    - ; is a punctuation that tells the computer that you are at the end of a statement. It is similar to a period in a sentence.
    */
    
    // 1. Let’s write the whole std::cout statement from scratch. Inside the curly braces, type the following and press Run:
    std::cout << "Codecademy\n\n";
    
    /*
    - We learned how to output a line of text with the following code: std::cout << "🚙💨\n";
    - It will output: 🚙💨
    - We can also output multiple lines by adding more std::cout statements:
        std::cout << "Hello\n";
        std::cout << "Goodbye\n";
    - This will output:
        Hello
        Goodbye
    */
    
    // 1. Instead of displaying those two lines in the output, edit the code so that we output the number 1-10 in a triangle pattern with 1 being in the top right and 10 being in the bottom right.
    std::cout << "      1\n";
    std::cout << "    2 3\n";
    std::cout << "  4 5 6\n";
    std::cout << "7 8 9 10\n\n";
    
    /*
    - Woohoo! You have written a few C++ programs. 🙌
    - In this lesson, you have learned:
        > C++ is a general-purpose coding language.
        > C++ runs line by line, from top to bottom.
        > std::cout is how you output to the terminal: std::cout << "Good luck!\n";
    */
    
    // 1. Before we move on, let’s write a letter to your future self. In letter.cpp, let’s add the following: Goal(s) for yourself and name and date. Press Run to mail the letter! 📬
    std::cout << "Dear Self,\n";
    std::cout << "I want to learn how to code in C++ to become better equipped for real world projects such as computer vision or automation.\n";
    std::cout << "Rhys Julian-Jones 4-6-21\n\n";
    
    /*
    - C++ is a compiled language. That means that to get a C++ program to run, you must first translate it from a human-readable form to something a machine can “understand.” That translation is done by a program called a compiler.
    - When you program in C++, you mainly go through 4 phases during development:
        > Code — writing the program
        > Save — saving the program
        > Compile — compiling via the terminal
        > Execute — executing via the terminal
    - And repeat (debug the errors if needed). Note: Up until now, we’ve been doing the magic for you; Step 2, 3, and 4 were all done by simply pressing the Run button.
    */
    
    /*
    - Compile: A computer can only understand machine code. A compiler can translate the C++ programs that we write into machine code. You call on the compiler by using the terminal, which is the black panel to the right of the code editor that contains a dollar sign $. To compile a file, you need to type g++ followed by the file name in the terminal and press enter: g++ hello.cpp
    - The compiler will then translate the C++ program hello.cpp and create a machine code file called a.out.
    - Execute: To execute the new machine code file, all you need to do is type ./ and the machine code file name in the terminal and press enter. In this case, our compiled file name is a.out. Putting it all together, we end up with the following: ./a.out
    - The executable file will then be loaded to computer memory and the computer’s CPU (Central Processing Unit) executes the program one instruction at a time.
    */
    
    // 1. In our text editor, we have the Hello World program. Click on the folder icon:  Hello World There should only be hello.cpp in there right now. Compile hello.cpp using the terminal.
    //  g++ hello.cpp
    // 2. Click on the folder icon again. There should be a new a.out file in the folder, with some mysterious, alien-looking symbols inside. We can’t understand this, but a computer can! Execute a.out using the terminal.
    //  ./a.out
    
    /*
    - Compile: Sometimes when we compile, we want to give the output executable file a specific name. To do so, the compile command is slightly different. We still need to write g++ and the file name in the terminal. After that, there should be -o and then the name that you want to give to the executable file: g++ hello.cpp -o hello
    - The compiler will then translate the C++ program hello.cpp and create a machine code file called hello.
    - Execute: To execute the new machine code file, all you need to do is type ./ and the machine code file name in the terminal: ./hello
    - The executable file will then be loaded to computer memory and the computer’s CPU will execute the program one instruction at a time.
    */
    
    // 1. Once again, we’re working with the Hello World program. Click on the folder icon: Hello World There should only be hello.cpp in there right now. Compile hello.cpp using the terminal, but this time, give the executable file the name hello.
    //  g++ hello.cpp -o hello
    // 2. Click on the folder icon again. There should be a new hello file in the folder (but do not click on the new file). Execute hello.
    //  ./hello
    
    /*
    - Programming is often highly collaborative. In addition, our own code can quickly become difficult to understand when we return to it — sometimes only a few hours later! For these reasons, it’s often useful to leave notes in our code for ourselves or other developers.
    - As we write a C++ program, we can write comments in the code that the compiler will ignore as our program runs. These comments exist just for human readers.
    - Comments can explain what the code is doing, leave instructions for developers using the code, or add any other useful annotations.
    - There are two types of code comments in C++:
        > A single line comment will comment out a single line and is denoted with two forward slashes // preceding it: // Prints "hi!" to the terminal
            std::cout << "hi!";
        > You can also use a single line comment after a line of code: std::cout << "hi!";  // Prints "hi!"
        > A multi-line comment will comment out multiple lines and is denoted with to begin the comment, and to end the comment:
    */
    
    // 1. Let’s practice adding a comment. Add a new line above #include <iostream>. Write a single line comment that says Harry Potter.
        // Harry Potter
        std::cout << "Expecto Patronum\n\n";
    // 2. Compile and execute spell.cpp using the terminal. This checkpoint will pass after you compile and execute.
    
    /*
    - In this lesson, you have learned:
        > Compilation and execution using the terminal: g++ hello.cpp -o hello ./hello
        > Single line comments can be created using //.
        > Multi-line comments can be created using.
    */
    
    /*
    - Write a C++ program called initials.cpp that displays the initials of your name in block letters as shown: Happy coding!
    */
    
    // 1. My initials are R, J and J, so my initials.cpp program should output: What are your initials? Take a look at the complete alphabet.
    // 2. First, write a comment with a fun fact about yourself!
    // 3. And let’s create a skeleton for the program:
    // 4. Output your first initial. Press Save to save your program.
    // 5. Compile and execute to make sure you got the result. To compile, type the following after the $ sign and press enter: g++ initials.cpp To execute, type the following and press enter: ./a.out
    // 6. Output your second initial. Press Save to save your program.
    // 7. Compile and execute to make sure you got the result.
    
    //I had a heart attack when I was only 18 years old
    std::cout << "RRRR  JJJJJ JJJJJ\n";
    std::cout << "R   R   J     J  \n";
    std::cout << "R   R   J     J  \n";
    std::cout << "RRRR    J     J  \n";
    std::cout << "R R   J J   J J  \n";
    std::cout << "R  R  J J   J J  \n";
    std::cout << "R   R  JJ    JJ  \n\n";
}
