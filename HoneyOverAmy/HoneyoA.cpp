#include "pch.h"
#include <stdio.h>
#include "IniFile.hpp"
#include <cmath>
#include "stdafx.h"

//Macros
#define ReplacePVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM");
NJS_MATERIAL* TemporaryMaterialArray[] = { nullptr };

extern "C"
{
	uint16_t Amy_UpperArmIndices_DC[] = {
		0, 2,
		4, 6,
		5, 7,
		1, 3,
	};

	uint16_t Amy_LowerArmIndices_DC[] = {
		4, 14,
		5, 15,
		1, 11,
		0, 10,
	};

	uint16_t Amy_KneeIndices_DC[] = {
		0, 2,
		4, 6,
		5, 7,
		1, 3,
	};

	uint16_t Amy_LegIndices_DC[] = {
		0, 2,
		1, 3,
		4, 6,
		5, 7,
	};

	uint16_t Amy_ShoeIndices_DC[] = {
		2, 3,
		3, 2,
		0, 1,
		1, 0,
	};

	uint16_t Amy_HandIndices_DC[] = {
		0, 13,
		1, 1,
		5, 3,
		4, 12,
	};

	void __cdecl InitAmyWeldInfo_mod()
	{
		NJS_OBJECT* v0; // edi@1
		NJS_OBJECT* v1; // edi@1
		NJS_OBJECT* v2; // edi@1
		NJS_OBJECT* v3; // edi@1
		NJS_OBJECT* v4; // esi@1
		NJS_OBJECT* v5; // edx@1
		NJS_OBJECT* v6; // edx@1
		NJS_OBJECT* v7; // eax@1

		AmyWeldInfo[0].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[0].ModelA = AMY_OBJECTS[6];
		AmyWeldInfo[0].ModelB = AMY_OBJECTS[7];
		AmyWeldInfo[0].anonymous_5 = 0;
		AmyWeldInfo[0].VertexBuffer = 0;
		AmyWeldInfo[0].VertexPairCount = (uint8_t)(LengthOfArray(Amy_UpperArmIndices_DC) / 2);
		AmyWeldInfo[0].WeldType = 2;
		AmyWeldInfo[0].VertIndexes = Amy_UpperArmIndices_DC;
		AmyWeldInfo[1].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[1].ModelA = AMY_OBJECTS[7];
		AmyWeldInfo[1].ModelB = AMY_OBJECTS[8];
		AmyWeldInfo[1].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LowerArmIndices_DC) / 2);
		AmyWeldInfo[1].WeldType = 2;
		AmyWeldInfo[1].anonymous_5 = 0;
		AmyWeldInfo[1].VertexBuffer = 0;
		AmyWeldInfo[1].VertIndexes = Amy_LowerArmIndices_DC;
		AmyWeldInfo[2].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[2].ModelA = AMY_OBJECTS[9];
		AmyWeldInfo[2].ModelB = AMY_OBJECTS[10];
		AmyWeldInfo[2].VertexPairCount = (uint8_t)(LengthOfArray(Amy_UpperArmIndices_DC) / 2);
		AmyWeldInfo[2].WeldType = 2;
		AmyWeldInfo[2].anonymous_5 = 0;
		AmyWeldInfo[2].VertexBuffer = 0;
		AmyWeldInfo[2].VertIndexes = Amy_UpperArmIndices_DC;
		AmyWeldInfo[3].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[3].ModelA = AMY_OBJECTS[10];
		v0 = AMY_OBJECTS[11];
		AmyWeldInfo[3].VertIndexes = Amy_LowerArmIndices_DC;
		AmyWeldInfo[3].ModelB = v0;
		AmyWeldInfo[3].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LowerArmIndices_DC) / 2);
		AmyWeldInfo[3].WeldType = 2;
		AmyWeldInfo[3].anonymous_5 = 0;
		AmyWeldInfo[3].VertexBuffer = 0;
		AmyWeldInfo[4].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[4].ModelA = AMY_OBJECTS[12];
		AmyWeldInfo[4].ModelB = AMY_OBJECTS[13];
		AmyWeldInfo[4].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LegIndices_DC) / 2);
		AmyWeldInfo[4].WeldType = 2;
		AmyWeldInfo[4].anonymous_5 = 0;
		AmyWeldInfo[4].VertexBuffer = 0;
		AmyWeldInfo[4].VertIndexes = Amy_LegIndices_DC;
		AmyWeldInfo[5].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[5].ModelA = AMY_OBJECTS[13];
		AmyWeldInfo[5].ModelB = AMY_OBJECTS[14];
		AmyWeldInfo[5].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LegIndices_DC) / 2);
		AmyWeldInfo[5].WeldType = 2;
		AmyWeldInfo[5].anonymous_5 = 0;
		AmyWeldInfo[5].VertIndexes = Amy_LegIndices_DC;
		AmyWeldInfo[5].VertexBuffer = 0;
		AmyWeldInfo[6].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[6].ModelA = AMY_OBJECTS[15];
		v1 = AMY_OBJECTS[16];
		AmyWeldInfo[6].VertIndexes = Amy_LegIndices_DC;
		AmyWeldInfo[6].ModelB = v1;
		AmyWeldInfo[6].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LegIndices_DC) / 2);
		AmyWeldInfo[6].WeldType = 2;
		AmyWeldInfo[6].anonymous_5 = 0;
		AmyWeldInfo[6].VertexBuffer = 0;
		AmyWeldInfo[7].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[7].ModelA = AMY_OBJECTS[16];
		v2 = AMY_OBJECTS[17];
		AmyWeldInfo[7].VertIndexes = Amy_LegIndices_DC;
		AmyWeldInfo[7].ModelB = v2;
		AmyWeldInfo[7].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LegIndices_DC) / 2);
		AmyWeldInfo[7].WeldType = 2;
		AmyWeldInfo[7].anonymous_5 = 0;
		AmyWeldInfo[7].VertexBuffer = 0;
		AmyWeldInfo[8].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[8].ModelA = AMY_OBJECTS[18];
		AmyWeldInfo[8].ModelB = AMY_OBJECTS[19];
		AmyWeldInfo[8].VertexPairCount = (uint8_t)(LengthOfArray(Amy_ShoeIndices_DC) / 2);
		AmyWeldInfo[8].WeldType = 2;
		AmyWeldInfo[8].anonymous_5 = 0;
		AmyWeldInfo[8].VertexBuffer = 0;
		AmyWeldInfo[8].VertIndexes = Amy_ShoeIndices_DC;
		AmyWeldInfo[9].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[9].ModelA = AMY_OBJECTS[20];
		v3 = AMY_OBJECTS[21];
		AmyWeldInfo[9].VertIndexes = Amy_ShoeIndices_DC;
		AmyWeldInfo[9].ModelB = v3;
		AmyWeldInfo[9].VertexPairCount = (uint8_t)(LengthOfArray(Amy_ShoeIndices_DC) / 2);
		AmyWeldInfo[9].WeldType = 2;
		AmyWeldInfo[9].anonymous_5 = 0;
		AmyWeldInfo[9].VertexBuffer = 0;
		AmyWeldInfo[10].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[10].ModelA = AMY_OBJECTS[22];
		AmyWeldInfo[10].ModelB = AMY_OBJECTS[23];
		AmyWeldInfo[10].VertexPairCount = (uint8_t)(LengthOfArray(Amy_HandIndices_DC) / 2);
		AmyWeldInfo[10].WeldType = 2;
		AmyWeldInfo[10].anonymous_5 = 0;
		AmyWeldInfo[10].VertexBuffer = 0;
		AmyWeldInfo[10].VertIndexes = Amy_HandIndices_DC;
		AmyWeldInfo[11].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[11].ModelA = AMY_OBJECTS[24];
		AmyWeldInfo[11].ModelB = AMY_OBJECTS[25];
		AmyWeldInfo[11].VertexPairCount = (uint8_t)(LengthOfArray(Amy_HandIndices_DC) / 2);
		AmyWeldInfo[11].WeldType = 2;
		AmyWeldInfo[11].anonymous_5 = 0;
		AmyWeldInfo[11].VertexBuffer = 0;
		AmyWeldInfo[11].VertIndexes = Amy_HandIndices_DC;
		AmyWeldInfo[12].BaseModel = *AMY_OBJECTS;
		AmyWeldInfo[12].ModelA = AMY_OBJECTS[23];
		AmyWeldInfo[12].ModelB = 0;
		AmyWeldInfo[12].anonymous_5 = 0;
		AmyWeldInfo[12].VertexBuffer = 0;
		AmyWeldInfo[12].VertIndexes = 0;
		AmyWeldInfo[12].WeldType = 4;
		AmyWeldInfo[12].VertexPairCount = 2;
		AmyWeldInfo[13].BaseModel = *AMY_OBJECTS;
		v4 = AMY_OBJECTS[25];
		AmyWeldInfo[13].ModelB = 0;
		AmyWeldInfo[13].anonymous_5 = 0;
		AmyWeldInfo[13].VertexBuffer = 0;
		AmyWeldInfo[13].VertIndexes = 0;
		AmyWeldInfo[13].ModelA = v4;
		AmyWeldInfo[13].VertexPairCount = 2;
		AmyWeldInfo[13].WeldType = 5;
		AmyWeldInfo[14].BaseModel = *AMY_OBJECTS;
		v5 = AMY_OBJECTS[19];
		AmyWeldInfo[14].ModelB = 0;
		AmyWeldInfo[14].VertexPairCount = 0;
		AmyWeldInfo[14].anonymous_5 = 0;
		AmyWeldInfo[14].VertexBuffer = 0;
		AmyWeldInfo[14].VertIndexes = 0;
		AmyWeldInfo[14].ModelA = v5;
		AmyWeldInfo[14].WeldType = 6;
		AmyWeldInfo[15].BaseModel = *AMY_OBJECTS;
		v6 = AMY_OBJECTS[21];
		AmyWeldInfo[15].ModelB = 0;
		AmyWeldInfo[15].VertexPairCount = 0;
		AmyWeldInfo[15].anonymous_5 = 0;
		AmyWeldInfo[15].VertexBuffer = 0;
		AmyWeldInfo[15].VertIndexes = 0;
		AmyWeldInfo[15].ModelA = v6;
		AmyWeldInfo[15].WeldType = 7;
		AmyWeldInfo[16].BaseModel = *AMY_OBJECTS;
		v7 = AMY_OBJECTS[30];
		AmyWeldInfo[16].ModelB = 0;
		AmyWeldInfo[16].VertexPairCount = 0;
		AmyWeldInfo[16].anonymous_5 = 0;
		AmyWeldInfo[16].VertexBuffer = 0;
		AmyWeldInfo[16].VertIndexes = 0;
		AmyWeldInfo[17].BaseModel = 0;
		AmyWeldInfo[17].ModelA = 0;
		AmyWeldInfo[17].ModelB = 0;
		AmyWeldInfo[17].VertexPairCount = 0;
		AmyWeldInfo[17].VertexBuffer = 0;
		AmyWeldInfo[16].ModelA = v7;
		AmyWeldInfo[16].WeldType = 8;
		AmyWeldInfo[17].VertIndexes = 0;
	}

	void __cdecl InitNPCAmyWeldInfo_mod()
	{
		NJS_OBJECT* v0; // edi@1
		NJS_OBJECT* v1; // edi@1
		NJS_OBJECT* v2; // edi@1
		NJS_OBJECT* v3; // edi@1
		NJS_OBJECT* v4; // eax@1

		NPCAmyWeldInfo[0].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[0].ModelA = AMY_OBJECTS[6];
		NPCAmyWeldInfo[0].ModelB = AMY_OBJECTS[7];
		NPCAmyWeldInfo[0].anonymous_5 = 0;
		NPCAmyWeldInfo[0].VertexBuffer = 0;
		NPCAmyWeldInfo[0].VertexPairCount = (uint8_t)(LengthOfArray(Amy_UpperArmIndices_DC) / 2);
		NPCAmyWeldInfo[0].WeldType = 2;
		NPCAmyWeldInfo[0].VertIndexes = Amy_UpperArmIndices_DC;
		NPCAmyWeldInfo[1].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[1].ModelA = AMY_OBJECTS[7];
		NPCAmyWeldInfo[1].ModelB = AMY_OBJECTS[8];
		NPCAmyWeldInfo[1].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LowerArmIndices_DC) / 2);
		NPCAmyWeldInfo[1].WeldType = 2;
		NPCAmyWeldInfo[1].anonymous_5 = 0;
		NPCAmyWeldInfo[1].VertexBuffer = 0;
		NPCAmyWeldInfo[1].VertIndexes = Amy_LowerArmIndices_DC;
		NPCAmyWeldInfo[2].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[2].ModelA = AMY_OBJECTS[9];
		NPCAmyWeldInfo[2].ModelB = AMY_OBJECTS[10];
		NPCAmyWeldInfo[2].VertexPairCount = (uint8_t)(LengthOfArray(Amy_UpperArmIndices_DC) / 2);
		NPCAmyWeldInfo[2].WeldType = 2;
		NPCAmyWeldInfo[2].anonymous_5 = 0;
		NPCAmyWeldInfo[2].VertexBuffer = 0;
		NPCAmyWeldInfo[2].VertIndexes = Amy_UpperArmIndices_DC;
		NPCAmyWeldInfo[3].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[3].ModelA = AMY_OBJECTS[10];
		v0 = AMY_OBJECTS[11];
		NPCAmyWeldInfo[3].VertIndexes = Amy_LowerArmIndices_DC;
		NPCAmyWeldInfo[3].ModelB = v0;
		NPCAmyWeldInfo[3].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LowerArmIndices_DC) / 2);
		NPCAmyWeldInfo[3].WeldType = 2;
		NPCAmyWeldInfo[3].anonymous_5 = 0;
		NPCAmyWeldInfo[3].VertexBuffer = 0;
		NPCAmyWeldInfo[4].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[4].ModelA = AMY_OBJECTS[12];
		NPCAmyWeldInfo[4].ModelB = AMY_OBJECTS[13];
		NPCAmyWeldInfo[4].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LegIndices_DC) / 2);
		NPCAmyWeldInfo[4].WeldType = 2;
		NPCAmyWeldInfo[4].anonymous_5 = 0;
		NPCAmyWeldInfo[4].VertexBuffer = 0;
		NPCAmyWeldInfo[4].VertIndexes = Amy_LegIndices_DC;
		NPCAmyWeldInfo[5].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[5].ModelA = AMY_OBJECTS[13];
		NPCAmyWeldInfo[5].ModelB = AMY_OBJECTS[14];
		NPCAmyWeldInfo[5].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LegIndices_DC) / 2);
		NPCAmyWeldInfo[5].WeldType = 2;
		NPCAmyWeldInfo[5].anonymous_5 = 0;
		NPCAmyWeldInfo[5].VertexBuffer = 0;
		NPCAmyWeldInfo[5].VertIndexes = Amy_LegIndices_DC;
		NPCAmyWeldInfo[6].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[6].ModelA = AMY_OBJECTS[15];
		v1 = AMY_OBJECTS[16];
		NPCAmyWeldInfo[6].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LegIndices_DC) / 2);
		NPCAmyWeldInfo[6].anonymous_5 = 0;
		NPCAmyWeldInfo[6].VertexBuffer = 0;
		NPCAmyWeldInfo[6].VertIndexes = Amy_LegIndices_DC;
		NPCAmyWeldInfo[6].ModelB = v1;
		NPCAmyWeldInfo[6].WeldType = 2;
		NPCAmyWeldInfo[7].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[7].ModelA = AMY_OBJECTS[16];
		v2 = AMY_OBJECTS[17];
		NPCAmyWeldInfo[7].VertexPairCount = (uint8_t)(LengthOfArray(Amy_LegIndices_DC) / 2);
		NPCAmyWeldInfo[7].anonymous_5 = 0;
		NPCAmyWeldInfo[7].VertexBuffer = 0;
		NPCAmyWeldInfo[7].VertIndexes = Amy_LegIndices_DC;
		NPCAmyWeldInfo[7].ModelB = v2;
		NPCAmyWeldInfo[7].WeldType = 2;
		NPCAmyWeldInfo[8].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[8].ModelA = AMY_OBJECTS[18];
		NPCAmyWeldInfo[8].ModelB = AMY_OBJECTS[19];
		NPCAmyWeldInfo[8].anonymous_5 = 0;
		NPCAmyWeldInfo[8].VertexBuffer = 0;
		NPCAmyWeldInfo[8].WeldType = 2;
		NPCAmyWeldInfo[8].VertexPairCount = (uint8_t)(LengthOfArray(Amy_ShoeIndices_DC) / 2);
		NPCAmyWeldInfo[8].VertIndexes = Amy_ShoeIndices_DC;
		NPCAmyWeldInfo[9].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[9].ModelA = AMY_OBJECTS[20];
		v3 = AMY_OBJECTS[21];
		NPCAmyWeldInfo[9].anonymous_5 = 0;
		NPCAmyWeldInfo[9].VertexBuffer = 0;
		NPCAmyWeldInfo[9].VertexPairCount = (uint8_t)(LengthOfArray(Amy_ShoeIndices_DC) / 2);
		NPCAmyWeldInfo[9].VertIndexes = Amy_ShoeIndices_DC;
		NPCAmyWeldInfo[9].ModelB = v3;
		NPCAmyWeldInfo[9].WeldType = 2;
		NPCAmyWeldInfo[10].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[10].ModelA = AMY_OBJECTS[22];
		NPCAmyWeldInfo[10].ModelB = AMY_OBJECTS[23];
		NPCAmyWeldInfo[10].anonymous_5 = 0;
		NPCAmyWeldInfo[10].VertexBuffer = 0;
		NPCAmyWeldInfo[10].VertexPairCount = (uint8_t)(LengthOfArray(Amy_HandIndices_DC) / 2);
		NPCAmyWeldInfo[10].WeldType = 2;
		NPCAmyWeldInfo[10].VertIndexes = Amy_HandIndices_DC;
		NPCAmyWeldInfo[11].BaseModel = *AMY_OBJECTS;
		NPCAmyWeldInfo[11].ModelA = AMY_OBJECTS[24];
		v4 = AMY_OBJECTS[25];
		NPCAmyWeldInfo[11].anonymous_5 = 0;
		NPCAmyWeldInfo[11].VertexBuffer = 0;
		NPCAmyWeldInfo[12].BaseModel = 0;
		NPCAmyWeldInfo[12].ModelA = 0;
		NPCAmyWeldInfo[11].ModelB = v4;
		NPCAmyWeldInfo[11].VertexPairCount = (uint8_t)(LengthOfArray(Amy_HandIndices_DC) / 2);
		NPCAmyWeldInfo[11].WeldType = 2;
		NPCAmyWeldInfo[11].VertIndexes = Amy_HandIndices_DC;
		NPCAmyWeldInfo[12].ModelB = 0;
		NPCAmyWeldInfo[12].VertexPairCount = 0;
		NPCAmyWeldInfo[12].VertexBuffer = 0;
		NPCAmyWeldInfo[12].VertIndexes = 0;
	}

	void Init_Amy()
	{
		HMODULE hm = GetModuleHandle(L"CHRMODELS_orig");
		NJS_OBJECT** AMY_OBJECTS = (NJS_OBJECT**)GetProcAddress(hm, "___AMY_OBJECTS");
		AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling = AMY_OBJECTS[31];
		WriteJump((void*)0x007CCB90, InitAmyWeldInfo_mod);
		WriteJump((void*)0x007CD000, InitNPCAmyWeldInfo_mod);
	}

	__declspec(dllexport) __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		//Welding
		Init_Amy();
		//Disable morphs
		
		//Functions

		//Replace textures
		ReplacePVM("amy", "HoneyOA");
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}