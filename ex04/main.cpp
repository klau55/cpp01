#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::ifstream ifs(filename.c_str());
        if (!ifs)
        {
            std::cerr << "Error: could not open file." << std::endl;
            return 1;
        }
        std::string outFilename = filename + ".replace";
        std::ofstream ofs(outFilename.c_str());        
        if (!ofs)
        {
            std::cerr << "Error: could not create file." << std::endl;
            return 1;
        }
        std::string line;
        while (std::getline(ifs, line))
        {
            size_t pos = 0;
            while ((pos = line.find(s1, pos)) != std::string::npos)
            {
                ofs << line.substr(0, pos) << s2;
                pos += s1.length();
                line = line.substr(pos);
                pos = 0;
            }
            ofs << line << std::endl;
        }
    }
    else
    {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return 1;
    }
}