#include "MainCharacter.h"
#include "TextureManager.h"
#include <SDL.h>

MainCharacter::MainCharacter(Properties* props) : Character(props){

    m_Row = 1;
    m_FrameCount = 11;
    m_AnimationSpeed = 50;
}

void MainCharacter::Draw(){

    TextureManager::GetInstance()->DrawFrame(m_TextureID, m_Transform->X, m_Transform->Y, m_Width, m_Height, m_Row, m_Frame, m_Flip);
}

void MainCharacter::Update(float dt){

    m_Frame = (SDL_GetTicks()/m_AnimationSpeed)%m_FrameCount;
}

void MainCharacter::Clean(){

    TextureManager::GetInstance()->Clean();
}
