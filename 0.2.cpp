// INSTRUCTIONS
// int x = 5; this is one instruction

// program

// program--A set of instruction provided to computer to perfom an action.

// this is program
/*

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    cout << a + b;
    return 0;
}
*/
////HARDWARE AND SOFTWARE ROLE////
// program executes on hw
// hw consist of-cpu,memory,io devices,storage device

// platform-compatiable set of hw and sw that provides an environment for software to run.

// some program platform depend only perfom on certain platform
//  if u can modify a program to  access a program in diff system then it is called porting
// or portability of program means u can execute on another platform too.

/////MACHINE INSTRUCTION////
/*

C PROGRAM NOT understood by cpu directly
so our code or program first converted into low language(or machine language like 0101010) and then cpu executes them.

//set of instructions understood by cpu is instruction set of machine
each machine instruction is composed of 0 1
each 0 or 1 is called bits and 8 bits form 1 byte
*/


///////////////////ASSEMBLY LANGUAGE////////////////////////
//more human friendly machine language
//just intermediate stage of compiling
//programming languge--assembly---machine language
//mov al, 0x61. mov al, 0x61 copies hexadecimal number 0x61 into the al CPU register.
//assembly language translated to machine language by assembler



///////////////////LOW LEVEL LANGUAGE/////////////////
//LOW level language are written for specific machine and understood by it only
//not portable
//low-level languages is that they are fast. 


//////////////////HIGH LEVEL LANGUAGE/////////////////////
//to overcome ll language toughness we have developer high level lang
//high level convert to low level to run
// two primary ways this is done: compiling and interpreting.

///COMPILER
//compiler is a program (or collection of programs) that reads the source code of one language
// (usually a high-level language) and translates it into another language (usually a low-level language). 
//For example, a C++ compiler translates C++ source code into machine code.


//INTERPRETER
// interpreter is a program that directly executes the instructions in the source code without requiring them to be compiled first. 
//executed code by code 


