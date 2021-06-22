#include <iostream>
#include <fstream>
#include <string.h>

int main()
{
    std::string s1, s2, s3, search;
    std::fstream fp1;
    size_t pos;
    fp1.open("file_search");
    if(!fp1)
    {
        std::cout<<"\nError Occurred!";
        return 0;
    }
    std::cout << "\nenter first keyword to search: ";
    std::cin >> s1;
    while (std::getline(fp1, search))
    {
        pos = search.find(s3);
        if (pos != std::string::npos)
        {
            std::cout
             << "Found!";
            break ;
        }
    }
    
    fp1.close();
    std::cout<<std::endl;

    return (0);
}