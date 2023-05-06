#include "Game.h"
#include "TextureManager.h"
#include "MainCharacter.h"

Game* Game::s_Instance = nullptr;
MainCharacter* player = nullptr;

bool Game::Init(){

    if (SDL_Init(SDL_INIT_VIDEO) && IMG_Init(IMG_INIT_PNG)){
        SDL_Log("Failed to initialize SDL: %s\n", SDL_GetError());
        return false;
    }

    m_Window = SDL_CreateWindow("Adventure", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    if (m_Window == nullptr){
        SDL_Log("Failed to create Window: %s\n", SDL_GetError());
        return false;
    }

    m_Renderer = SDL_CreateRenderer(m_Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (m_Renderer == nullptr){
        SDL_Log("Failed to create Renderer: %s\n", SDL_GetError());
    }

    if (!TextureManager::GetInstance()->Load("player", "assets/Main Characters/Mask Dude/Idle (32x32).png"))
        SDL_Log("Failed to Load TextureManager: %s\n", SDL_GetError());
    else SDL_Log("Load Texture: Done!\n");

    player = new MainCharacter(new Properties("player", 100, 100, 32, 32));
  /*  Vector2D v(1,2), v1(2,4);
    v = v + v1;
    v = v*3;
    v.Log("Vector2D check: ");
    Transform tf(-3, 2.8);
    tf.Log("Transform check: ");
    tf.TranslateX(2);
    tf.Log("Transform check: ");
    tf.TranslateY(-5);
    tf.Log("Transform check: ");
    tf.Translate(v1);
    tf.Log("Transform check: "); */

    return m_IsRunning = true;
}



void Game::Update(){

    //SDL_Log("asasas");
    player->Update(1);
}

void Game::Render(){

    SDL_SetRenderDrawColor(m_Renderer, 0, 100, 0, 0);
    SDL_RenderClear(m_Renderer);
    player->Draw();

    SDL_RenderPresent(m_Renderer);
}

void Game::Events(){

    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type){
        case SDL_QUIT: Quit();  break;
    }
}

void Game::Clean(){

    TextureManager::GetInstance()->Clean();

    SDL_DestroyRenderer(m_Renderer);
    SDL_DestroyWindow(m_Window);

    IMG_Quit();
    SDL_Quit();

    SDL_Log("Clean: Done!\n");
}

void Game::Quit(){

    m_IsRunning = false;
}
