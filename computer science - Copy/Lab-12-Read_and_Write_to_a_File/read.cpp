//lab12.cpp
//Ivan ALier-Reyes
//May 03 2021
// I have to be able to read a text file with a program

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    string fileData;

    file.open("/Users/goten/Desktop/computer science/Lab-12-Read_and_Write_to_a_File/poem.txt");
    while(!file.eof())
    {
        file >> fileData;
        cout << fileData;
        string x;
        getline(file, x);
        cout << x << endl;
    }

    file.close();
    return 0;

}

/*
C:\Users\goten\Desktop\computer science>cd "c:\Users\goten\Desktop\computer science\Lab-12-Read_and_Write_to_a_File\" && g++ read.cpp -o read &&rs\goten "c:\Users\goten\Desktop\computer science\Lab-12-Read_and_Write_to_a_File\"read
THEORY OF THE ALTERNATE UNIVERSE      
Another world lies tangent to our own-
where everything is whackeyed. you    
wear purple skirts; you leave
the dustcloth on translucent shelves;
the sun
is slightly green.
I sculpture wood and plastic, talk
about the rain
you take
swigs from bottles of intens champagne
To everything there is
"a touch fo strange."
When you got out of sight
you're walking down a lamplit street
and in your place
the woman i embrace
writes strange lovephrases on my cellophane
skin
The Worlds
slide in and out. They look
like time-exposure pictures of the moon
passes through teh eclipse
or our child's bronze
*/