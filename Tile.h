/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tile.h
 * Author: stud
 *
 * Created on 7. Mai 2017, 13:42
 */

#ifndef TILE_H
#define TILE_H
#include <iostream>
using namespace std;

class Tile
{
public:
    enum Tiletype{Floor ,Wall};
    
    Tiletype getType();
    Character* getCharacter();
    bool hasCharacter();
    void setCharacter(Character* c);
    void onLeave(Tile* toTile);
    void onEnter(Chraracter* c, Tile* fromTile);
    
    Tile(Tiletype Kacheltyp);
    
    virtual ~Tile();
    
private:

    Tiletype m_Type;
    Character* m_Char;
    
};

#endif /* TILE_H */

