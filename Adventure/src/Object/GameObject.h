#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "IObject.h"
#include "Transform.h"
#include <string>
#include "SDL.h"

struct Properties{
    public:
        Properties(std::string _textureID, float x, float y, int _width, int _height, SDL_RendererFlip _flip = SDL_FLIP_NONE):
            textureID(_textureID), X(x), Y(y), width(_width), height(_height), flip(_flip) {};

    public:
        int width, height;
        float X, Y;
        std::string textureID;
        SDL_RendererFlip flip;
};

class GameObject : public IObject
{
    public:
        GameObject(Properties* props): m_TextureID(props->textureID), m_Width(props->width), m_Height(props->height), m_Flip(props->flip) {

            m_Transform = new Transform(props->X, props->Y);
        }

        virtual void Draw()=0;
        virtual void Update()=0;
        virtual void Clean()=0;

    protected:
        Transform* m_Transform;
        int m_Width, m_Height;
        std::string m_TextureID;
        SDL_RendererFlip m_Flip;
};

#endif // GAMEOBJECT_H
