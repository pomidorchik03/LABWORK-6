#pragma once
#include <string>
#include <vector>

class Object
{
protected:
    class Position
    {
        protected:
            int x_;
            int y_;

        public:
            Position() : x_(0), y_(0) {};
            Position(int x, int y) : x_(x), y_(y) {}; 
    };
    class Vertex : public Position
    {
        Vertex() : Position() {};
        Vertex(int x, int y): Position(x,y) {};        
    };
    std::vector<Vertex> vertex_;
    std::string name_;
    Position center_;

public:
    Object();
    Object(const std::string& name, const int x, const int y);

    void setName(const std::string& name);
    std::string getName() const;

    void setPosition(const Position& pos);
    Position getPosition() const;

    virtual void draw() const;
};
