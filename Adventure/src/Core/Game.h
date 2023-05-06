#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include <SDL_image.h>

#define SCREEN_WIDTH 960
#define SCREEN_HEIGHT 640

class Game
{

    public:
        static Game* GetInstance(){return s_Instance = (s_Instance != nullptr)? s_Instance : new Game();};

        bool Init();

        void Clean();
        void Update();
        void Render();
        void Events();
        void Quit();

        inline bool IsRunning(){return m_IsRunning;};
        inline SDL_Renderer* GetRenderer(){return m_Renderer;};

    private:
        Game(){};

        SDL_Window* m_Window;
        SDL_Renderer* m_Renderer;

        bool m_IsRunning;
        static Game* s_Instance;
};

#endif // GAME_H
