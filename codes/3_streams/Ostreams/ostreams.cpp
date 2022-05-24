
//What do we need to include?
#include <iostream>
#include <string>
#include <fstream>

//No using namespace std;!!!!
using std::cout;
using std::endl;
using std::string;

//function to write num to any ostream
void writeToStream(std::ostream &out_stream, int num) {
    out_stream << "The number is: " << num << endl;
}

int main() {
    // Write an int to the user's console.
    int myNum = 42;
    cout << "The answer is: " << myNum << endl;

    // Write an int to a file.
    std::ofstream out_stream("out.txt");

    out_stream << "The answer is: " << myNum << endl;
    

    // Write method to take any ostream
    writeToStream(cout, 666);
    writeToStream(out_stream, 666);
   
    return 0;
}
