#include "main.hpp"

int open_read_file(std::string &file, char *filename){
    std::string line;
    std::ifstream inf(filename);

    if (!inf){
        std::cout << "The input file can't be opened" << std::endl;
        return 1;
    }
    while(std::getline(inf, line))
        file += (line + "\n");
    if (file == ""){
        std::cout << "Empty file" << std::endl;
        return 1;
    }
    file.erase(file.end()-1);
    return 0;
}

void replacing(std::string &file, char *s1, char *s2){
    std::size_t occurrence;

    while (1){
        occurrence = file.find(s1);
        if (occurrence == std::string::npos)
            break;
        file.erase(occurrence, strlen(s1));
        file.insert(occurrence, s2);
    }
}

int write_to_file(std::string &file, char *filename){
    std::ofstream outf(strcat(filename, ".replace"));
    if (!outf){
        std::cout << "The output file can't be opened" << std::endl;
        return 1;
    }
    outf << file;
    outf.close();
    return 0;
}

int main(int argc, char **argv) {
    if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0]){
        std::cout << "Wrong parameters" << std::endl;
        return 1;
    }
    std::string file = "";
    if (open_read_file(file, argv[1]))
        return 1;
    replacing(file, argv[2], argv[3]);
    if (write_to_file(file, argv[1]))
        return 1;
    return 0;
}
