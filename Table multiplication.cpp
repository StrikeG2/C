#include <iostream>
#include <sstream>

bool isNumber(const std::string& s){
    std::istringstream ss(s);
    double d;
    return (ss >> d) && (ss >> std::ws).eof();
}

int main(){
    std::string nb1;

    while(true){
        std::cout << "Entrez un nombre: " << std::endl;
        std::cin >> nb1;

        if(isNumber(nb1)){
            break;
        }
    }

    for(int i = 0; i < 11; i++){
        std::cout << nb1 << " x " << i << " = " << std::stoi(nb1)*i << std::endl;
    }

    return 0;
}
