/*
 * GUIOptions.cpp
 *
 *  Created on: Dec 4, 2015
 *      Author: dwarf
 */

#include "GraphicsOptions.h"
namespace warp{
namespace gui{
namespace options{

float screenSpaceHeight = 20;

float getScreenSpaceHeight(){
	return screenSpaceHeight;
}

float getScreenSpaceWidth(){
	return screenSpaceHeight * warp::options::getAspectRatio();
}

}
}


}
