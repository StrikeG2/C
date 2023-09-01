#include <iostream>
#include <sstream>
#include <windows.h>


int ajouterTaches( std::string tabTaches[], int& size){
    int lasti = size;
    std::string nomTache;
    std::cout << "Entrez la tache à faire" << std::endl;
    std::cin >> nomTache;
    tabTaches[lasti] = nomTache;
    lasti = lasti + 1;
    size = size + 1;
    return 0;
}

int supprTaches(std::string tabTaches[], int& size){
    SetConsoleOutputCP(CP_UTF8);
    int iToRemove;
    std::cout << "Entrez le numéro de la tache à supprimer" << std::endl;
    std::cin >> iToRemove;
    if(iToRemove >= 0 && iToRemove < size){
        for(int i = iToRemove; i < size - 1; i++){
            tabTaches[i] = tabTaches[i+1];
        }
        size = size - 1;
    }
    return 0;
}

int afficherListeTaches(std::string tabTaches[], int& size){
    for(int i=0; i < size; i++ ){
       std::cout << i << " - " << tabTaches[i] << std::endl;
    }
    return 0;
}

int main(){
    std::string tabTaches[100];
    int size = 0;
    int num;

    std::cout << "Bienvenue dans votre liste des taches" << std::endl;
    while(true){
        std::cout << "1- Ajouter une tache" << std::endl;
        std::cout << "2- Supprimer une tache" << std::endl;
        std::cout << "3- Afficher la liste des taches" << std::endl;
        std::cout << "4- Quitter" << std::endl;
        std::cin >> num;


        if(num == 1){
          ajouterTaches(tabTaches, size);
        }else if(num == 2){
            supprTaches(tabTaches, size);
        }else if(num == 3){
            afficherListeTaches(tabTaches, size);
        }else if(num == 4){
            break;
        }else{
            std::cout << "Option non valide" << std::endl;
        }

    }
    return 0;
}
