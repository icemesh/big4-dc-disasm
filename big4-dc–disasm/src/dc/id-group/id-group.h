/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once
#include <stdint.h>

typedef uint32_t StringId;

struct IdGroupEntry;

struct IdGroup
{
	int64_t					m_numEntries;				///< <c>0x00</c>: number of entries in the group
	IdGroupEntry*			m_pEntries;					///< <c>0x08</c>: ptr to the entries
};

struct IdGroupEntry //0x8
{
	StringId				m_id;						///< <c>0x00</c>: StringId of the entry name
	uint32_t				m_padding;					///< <c>0x04</c>: stringid padding
};