/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tile.cpp
 * Author: stud
 * 
 * Created on 7. Mai 2017, 13:42
 */

#include "Tile.h"

Tile::Tile(Tiletype Tile)
{
    
    m_Type = Tile;
    m_Char = nullptr;
    
}

Tile::~Tile()
{
   
}

Tile::Tiletype Tile::getType()
{
    return m_Type;
}

Character* Tile::GetChar() 
{
    return m_Char;
}

bool Tile::hasCharacter() 
{ if (m_Char != 0)
    {
        return true;
    }
    return false;
}

void Tile::setCharacter(Character* c)
{
    m_Char = Char;
}

void Tile::onLeave(Tile* toTile)
{
    if(toTile == Tile::Floor && hasCharacter == false)
    {
        Character* temp = m_Char;
        m_Char = nullptr;
        onEnter(temp, toTile);
    }
    cout << "Can not enter Tile!" << endl;
}

void Tile::onEnter(Chraracter* c, Tile* fromTile)
{
    m_Char = c;
    
}