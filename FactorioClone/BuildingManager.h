#pragma once
#include <raylib.h>
#include <iostream>

class BuildingManager
{


public:
    static BuildingManager* GetInstance()
    {
        if (instance == nullptr)
        {
            instance = new BuildingManager;
        }
        return instance;
  
    }


    void PlaceBuilding(Vector2 buildPosition);

private:
    BuildingManager()
    {
        std::cout << "BuildingManager created" << std::endl;
    }
    ~BuildingManager()
    {
        std::cout << "BuildingManager destroyed" << std::endl;
    }

    static BuildingManager* instance;
    
};


