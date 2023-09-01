#include <iostream>

int main(){
    int nombre1, nombre2, nombre3;
    std::cout << "Entrez 3 nombres" << std::endl;
    std::cin >> nombre1;
    std::cin >> nombre2;
    std::cin >> nombre3;

    if(nombre1>nombre2 && nombre1>nombre3){
        std::cout << "Le plus grand nombre est: " << nombre1 <<std::endl;
    }else if(nombre2>nombre1 && nombre2>nombre3){
        std::cout << "Le plus grand nombre est: " << nombre2 <<std::endl;
    }else if(nombre3>nombre1 && nombre3>nombre2){
        std::cout << "Le plus grand nombre est: " << nombre3 <<std::endl;
    }else{
        std::cout << "Il n'y a pas de plus grand" <<std::endl;
    }

    if(nombre1<nombre2 && nombre1<nombre3){
        std::cout << "Le plus petit nombre est: " << nombre1 <<std::endl;
    }else if(nombre2<nombre1 && nombre2<nombre3){
        std::cout << "Le plus petit nombre est: " << nombre2 <<std::endl;
    }else if(nombre3<nombre1 && nombre3<nombre2){
        std::cout << "Le plus petit nombre est: " << nombre3 <<std::endl;
    }else{
        std::cout << "Il n'y a pas de plus petit" << std::endl;
    }


    return 0;
}
