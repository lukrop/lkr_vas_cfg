/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License.
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

#include "caf.hpp"
#include "mas.hpp"
#include "sc_items.hpp"

vas_customslots = (getNumber (configFile >> "lkr" >> "lkr_vas_cfg" >> "customSlots")) - 1;

//Weapons to remove from VAS
vas_r_weapons = getArray (configFile >> "lkr" >> "lkr_vas_cfg" >> "removeWeapons");

//Backpacks to remove from VAS
vas_r_backpacks = getArray (configFile >> "lkr" >> "lkr_vas_cfg" >> "removeBackpacks");

//Magazines to remove from VAS
vas_r_magazines = getArray (configFile >> "lkr" >> "lkr_vas_cfg" >> "removeMagazines");

//Items to remove from VAS
vas_r_items = ["muzzle_snds_H","muzzle_snds_B",
    "muzzle_snds_L","muzzle_snds_H_MG"] + (getArray (configFile >> "lkr" >> "lkr_vas_cfg" >> "removeItems"));

//Goggles to remove from VAS
vas_r_glasses = getArray (configFile >> "lkr" >> "lkr_vas_cfg" >> "removeGlasses");;

