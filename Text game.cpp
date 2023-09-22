#include <iostream>
#include <vector>
using namespace std;



class Scene
{
public:
    virtual void display() = 0;
    virtual void handleInput(int& currentSceneIndex) = 0;
    
};


class MainMenu : public Scene
{
public:
    void display() override
    {
        cout<< "Main menu"<<endl;
        cout<< "1-Start Game"<<endl;
        cout<< "2-Quit"<<endl;
    }

    void handleInput(int& currentSceneIndex) override
    {
        int choice;
        cin>> choice;
        if (choice == 1)
        {
            currentSceneIndex = 1;
        }else if(choice == 2)
        {
            currentSceneIndex = -1;
        }else
        {
            cout<< "Unknown command"<<endl;
        }
    }
    
};


class Player : public Scene
{
public:

    string name;
    void display()
    {
        cout<< ">Welcome warrior, what is your name ?"<<endl;
    }

    void handleInput(int& currentSceneIndex) override
    {
        string input;
        cin>> name;
        cout<< ">Well sir " << name << " if you would like to read the guide, enter INFO. Else, type BEGIN."<<endl;
        cin>> input;
        if(input == "INFO")
        {
                currentSceneIndex = 2;
        }else if(input == "BEGIN")
        {
            currentSceneIndex = 3;
        }
    }
    
};


class Info : public Scene
{
public:
    void display()
    {
        cout<< "Welcome to the game guide for 'The Epic of the Knight of the Tower.'"<<endl;
        cout<< "This text-based game will take you on an epic adventure as a courageous warrior, facing puzzles, monsters and moral choices as you climb the cursed tower to save the kingdom."<<endl;
        cout<< "To interact with the game, use the text commands in the terminal. To read descriptions and dialogs, simply press Enter."<<endl;
        cout<< "To move you can use NORTH, SOUTH, EAST, WEST or the first letter of each direction, NSEW"<<endl;
        cout<< "To see your inventory use the command INVENTORY OR I"<<endl;
        cout<< ">Did you catch all that ?"<<endl;
    }

    void handleInput(int& currentSceneIndex) override
    {
        string input;
        cin>> input;
        if(input == "YES")
        {
            currentSceneIndex = 3;
        }else if(input == "NO")
        {
            currentSceneIndex = 2;
        }else{
            cout<< "I don't know this command"<<endl;
        }
    }
    
};


class TowerFront : public Scene
{
public:
    void display() override
    {
        cout<< ">You find yourself in front of the cursed Tower. There is large door."<<endl;
    }

    void handleInput(int& currentSceneIndex) override
    {
        string input;
        cin>> input;
        if (input == "OPEN")
        {
            cout<< ">You open the door."<<endl;
        }
        
    }
};


int main()
{
    vector<Scene*> scenes;
    scenes.push_back(new MainMenu());
    scenes.push_back(new Player());
    scenes.push_back(new Info());
    scenes.push_back(new TowerFront());

    int currentSceneIndex = 0;

    while(currentSceneIndex >= 0 && currentSceneIndex < scenes.size()){
        Scene* currentScene = scenes[currentSceneIndex];
        currentScene->display();
        currentScene->handleInput(currentSceneIndex);
    }

    for (Scene* scene : scenes)
    {
        delete scene;
    }

    return 0;

}