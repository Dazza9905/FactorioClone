#pragma once
#include "Grid.h"

class InputManager
{
public:
    static InputManager* GetInstance()
    {
        if (instance == nullptr)
        {
            instance = new InputManager;
        }
        return instance;
  
    }

    void CheckInput(Grid& grid);

private:
    static InputManager* instance;
};
