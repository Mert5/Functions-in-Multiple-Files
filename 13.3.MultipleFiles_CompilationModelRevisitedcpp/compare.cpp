int max(int a, int b){    // cpp files contain definitions
                          // definitions do not have to live here. 
                          // They can live in any translation unit in our c++ program.
                          // Translation unit mostly equivalent to cpp file.
                          // But it has to be a cpp file!
                          // You can even parse the functions(one might be another cpp file and another can be here)
                          // linker will find it.
                          // If you delete one definition, there will be linker error.
                          // ld(you will see in error) is the linker that gcc compiler uses
                          // clang compiler tells you there is "linker command failed"
                          // even in MSVC compiler, you will see LNK...(as an error)
    if (a>b)
        return a;
    else
        return b;
}
