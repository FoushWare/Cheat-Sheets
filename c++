Q1._   What is the use of “using namespace std”? 

using: You are going to use it
namespace: To use what? A namespace
std: The std namespace (where features of the C++ Standard Library, such as string or vector, are declared).
After you write this instruction, if the compiler sees string it will know that you may be referring to  std::string, and if it sees vector, it will know that you may be referring to std::vector. (Provided that you have included in your compilation unit the header files where they are defined, of course.)

If you don't write it, when the compiler sees string or vector it will not know what you are refering to. You will need to explicitly tell it std::string or std::vector, and if you don't, you will get a compile error.


