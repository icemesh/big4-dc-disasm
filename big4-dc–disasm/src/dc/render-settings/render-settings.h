/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once
#include <stdint.h>

struct RenderSettingsSubsetEntry;

typedef uint32_t StringId;

struct RenderSettingsMap //0x1C
{
	int64_t						m_numEntries;						///< <c>0x00</c>: ptr to the level set name
	StringId*					m_paStringId;						///< <c>0x08</c>: ptr to an array of StringIds
	RenderSettingsSubsetEntry** m_paRenderSettingsSubsetEntries;	///< <c>0x10</c>: ptr to an array of ptrs
};

struct RenderSettingsSubsetEntry //0x14 || 0x10
{
	StringId					m_entryId;							///< <c>0x00</c>: StringId of the name
	uint32_t					m_entryIdPadding;					///< <c>0x04</c>: padding 
	uint32_t					m_value;							///< <c>0x08</c>: 
	StringId					m_unkSid;							///< <c>0x0C</c>: unknown StringId. Dunno if its used or not
};

struct RenderSettings
{

};