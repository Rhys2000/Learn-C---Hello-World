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
    
    //Press Run to see this program in action.
    std::cout << "Hello World!\n";
    
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
    
    //Let’s write the whole std::cout statement from scratch. Inside the curly braces, type the following and press Run:
    std::cout << "Codecademy\n";
    
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
    
    //Instead of displaying those two lines in the output, edit the code so that we output the number 1-10 in a triangle pattern with 1 being in the top right and 10 being in the bottom right.
    std::cout << "      1\n";
    std::cout << "    2 3\n";
    std::cout << "  4 5 6\n";
    std::cout << "7 8 9 10\n";
    
    /*
    - Woohoo! You have written a few C++ programs. 🙌
    - In this lesson, you have learned:
        > C++ is a general-purpose coding language.
        > C++ runs line by line, from top to bottom.
        > std::cout is how you output to the terminal: std::cout << "Good luck!\n";
    */
    
    //Before we move on, let’s write a letter to your future self. In letter.cpp, let’s add the following: Goal(s) for yourself and name and date. Press Run to mail the letter! 📬
    std::cout << "Dear Self,\n";
    std::cout << "I want to learn how to code in C++ to become better equipped for real world projects such as computer vision or automation";
    std::cout << "Rhys Julian-Jones 4-6-21";
}
