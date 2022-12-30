#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;


    char string1[32];
    printf("Enter the first string");
    scanf(" %s",string1 );


    char string2[32];
    printf("Enter the second string");
    scanf(" %s",string2 );


    printf("Sting 1 has a length of:  %k\n", myGetLenght(string1)  );
    printf("Sting 2 has a length of:  %k\n", myGetLenght(string2)  );












    return 0;
}
