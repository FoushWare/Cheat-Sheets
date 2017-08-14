These question are rolling in my head?

Q1._   What is the use of “using namespace std”? 

using: You are going to use it
namespace: To use what? A namespace
std: The std namespace (where features of the C++ Standard Library, such as string or vector, are declared).
After you write this instruction, if the compiler sees string it will know that you may be referring to  std::string, and if it sees vector, it will know that you may be referring to std::vector. (Provided that you have included in your compilation unit the header files where they are defined, of course.)

If you don't write it, when the compiler sees string or vector it will not know what you are refering to. You will need to explicitly tell it std::string or std::vector, and if you don't, you will get a compile error.


Q2:What is the benefit to define member function out side the class
    with the help of scope resolution operator?

    Link1:https://www.quora.com/What-is-the-benefit-to-define-member-function-out-side-the-class-with-the-help-of-scope-resolution-operator
    link2:http://www.cplusplus.com/articles/2LywvCM9/
Q3:how to organize header files?
links:http://www.cplusplus.com/forum/articles/10627/
