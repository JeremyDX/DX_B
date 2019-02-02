#pragma once

#include "Constants.h"

class XModelMesh
{
	public:
		static    void LoadCollisionData();
		static uint16_t GetCurrentCollidorIndex(Float3 & ref);
		static    void TestValues();
		static    void LoadObjectDefintions();
		static __int32 CreateTexturedSquare(Vertex32Byte * verts, int offset, Float3 Col, int texture_width, int texture_height, int drawX, int drawY);
		static __int32 InsertObjectToMap(Vertex32Byte * verts, uint32_t * minimap, int & offset, int id, int xunits, int yunits, int zunits);
	
};