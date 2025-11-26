#pragma once
#include <string>

class Object
{
protected:
    class Position
    {
        private:
            int x_;
            int y_;

        public:
            Position() : x_(0), y_(0) {};
            Position(int x, int y) : x_(x), y_(y) {}; 
    };
    std::string name_;
    Position pos_;

public:
    Object();
    Object(const std::string& name, const int x, const int y);

    void setName(const std::string& name);
    std::string getName() const;

    void setPosition(const Position& pos);
    Position getPosition() const;

    virtual void draw() const;
};