#include "main.h"
#include "result.cpp"

int main(int argc, char* argv[]) {
    for (int tc = 1; tc <= 1500; tc++){
        //  EDIT HEREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
        string fileName = "D:\\Testcase\\Testcase Demo\\input\\input" + to_string(tc) + ".txt";  //
        simulate(fileName, tc);
    }

    return 0;
}
