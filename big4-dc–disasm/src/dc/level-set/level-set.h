/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once
#include <stdint.h>

struct LevelEntry;
struct LevelSetArrays;

typedef uint32_t StringId;

struct LevelSet //0x24
{
	const char*			m_levelSetName;		///< <c>0x00</c>: ptr to the level set name
	StringId			m_levelSetId;		///< <c>0x08</c>: StringId of the level set name
	uint32_t			m_padding;			///< <c>0x0C</c>: padding probably
	LevelSetArrays*		m_pLevelSetArrays;	///< <c>0x10</c>: ptr to the level set array
	void*				m_unkPtr;			///< <c>0x18</c>: ptr to unk
	uint32_t			m_padding2;			///< <c>0x20</c>: padding probably 
};

struct LevelSetArrays //0xC
{
	LevelEntry**		m_paLevelEntry;		///< <c>0x00</c>: ptr to an array of pointers 
	int32_t				m_numEntries;		///< <c>0x08</c>: number of elements in the array
};

struct LevelEntry //0x1C
{
	const char*			m_levelEntryName;	///< <c>0x00</c>: ptr to the level set name
	StringId			m_levelEntryId;		///< <c>0x08</c>: StringId of the level set name
	uint32_t			m_padding;			///< <c>0x0C</c>: padding probably
	uint32_t			m_unkNumber;		///< <c>0x10</c>: unk number
	uint64_t			m_unk;				///< <c>0x14</c>: padding probably
};