/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

/*
This defines several macros so you'll have to write less. Those macros are:
LKR_VAS_MAS_WEPS_VARIANTS
LKR_VAS_MAS_MAGS
LKR_VAS_CAF_WEPS
LKR_VAS_CAF_MAGS
LKR_VAS_SC_ITEMS
LKR_VAS_HLCMOD_AK_MAGS
LKR_VAS_SUD_MAGS
LKR_VAS_SUD_EVW_M16
LKR_VAS_U100_MAGS
*/
#include "\lkr_vas_cfg\macros.hpp"

class lkr_vas_cfg {
	// amount of custom slots in VAS
	customSlots = 50;
	
	//Weapons to remove from VAS
	removeWeapons[] = {
		LKR_VAS_CAF_WEPS,
		LKR_VAS_MAS_WEPS_VARIANTS
	};
	
	//Magazines to remove from VAS
	removeMagazines[] = {
		LKR_VAS_CAF_MAGS
	};
	
	//Items to remove from VAS
	removeItems[] = {
		LKR_VAS_SC_ITEMS
	};
	
	//Backpacks to remove from VAS
	removeBackpacks[] = {
	};
	
	//Goggles to remove from VAS
	removeGlasses[] = {
	};
};
