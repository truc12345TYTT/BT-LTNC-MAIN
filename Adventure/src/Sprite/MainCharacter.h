#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include "Character.h"

class MainCharacter : public Character
{
    public:
        MainCharacter(Properties* props);

        virtual void Draw();
        virtual void Update(float dt);
        virtual void Clean();

    private:
        int m_Row, m_Frame, m_FrameCount;
        int m_AnimationSpeed;
};

#endif // MAINCHARACTER_H
