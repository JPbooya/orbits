// include guard
#ifndef CENTER_H
#define CENTER_H

#include <bn_fixed_point.h>
#include <bn_sprite_ptr.h>

#include "movement.h"
#include "bn_sprite_items_square.h"

class Center {
    public:
        /**
         * Creates a new center.
         * 
         * @param starting_position the initial location of the center
         * @param mass the mass of the center. The larger the value, the greater the attraction
         * @param speed the speed at which the center moves when the d-pad is held
         */
        
        Center(bn::fixed_point starting_position, bn::fixed mass, bn::fixed speed);

        /**
         * Updates the location of the Center based on player direction with the d-pad.
         */
       void update();

        // delcaring from a different file
        bn::fixed_point position();

        bn::fixed mass();
        // private: could not be changed if outisde of class 
        // instance varibales
    private:
        bn::sprite_ptr _sprite;
        bn::fixed _mass; // the mass of the center. The larger the value, the greater the attraction
        bn::fixed _speed; //the speed at which the center moves when the d-pad is held
};

// 
#endif
