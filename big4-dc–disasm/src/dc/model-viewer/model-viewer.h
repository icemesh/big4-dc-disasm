/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once
#include <stdint.h>

typedef uint32_t StringId;

struct ModelViewerModel //0x94
{
	StringId	m_modelNameId;			///< <c>0x00</c>: eg SID("*model-elena-kingsbay*")
	uint32_t	m_modelNameIdPad;		///< <c>0x04</c>: padding data is 8 bytes aligned
	const char* m_modelName;			///< <c>0x08</c>: eg elena-kingsbay
	StringId	m_modelId;				///< <c>0x10</c>: eg SID("elena-kingsbay")
	uint32_t	m_modelIdPad;			///< <c>0x14</c>: padding data is 8 bytes aligned
	StringId	m_poseId;				///< <c>0x18</c>: SID("character-turntable-poses--elena-kingsbay")
	uint32_t	m_poseIdPad;			///< <c>0x1C</c>: padding data is 8 bytes aligned
	uint64_t	m_unk;					///< <c>0x20</c>: always 0 ?
	const char* m_facePose;				///< <c>0x28</c>: eg DefaultFace
	StringId	m_facePoseId;			///< <c>0x30</c>: eg SID("DefaultFace")
	uint32_t	m_facePoseIdPad;		///< <c>0x34</c>: padding data is 8 bytes aligned
	const char* m_characterIconFile;	///< <c>0x38</c>: eg file://character-icons/elena-kingsbay
	StringId	m_characterIconFile;	///< <c>0x40</c>: eg SID("file://character-icons/elena-kingsbay")
	uint32_t	m_filePathIdIdPad;		///< <c>0x44</c>: padding data is 8 bytes aligned
	StringId	m_unkSid;				///< <c>0x48</c>: SID("MODEL_VIEWER_MODEL_ELENA_KINGSBAY")
	uint32_t	m_unk2;					///< <c>0x4C</c>:
	uint32_t	m_unk3;					///< <c>0x50</c>: always 1 ?
	uint32_t	m_unk4;					///< <c>0x54</c>: always 22 ?
	StringId	m_unkSid2;				///< <c>0x58</c>: eg SID("cave-cav-libertalia-outro-b") cinematic name id ?
	uint32_t	m_unkSid2Pad;			///< <c>0x5C</c>: padding data is 8 bytes aligned
	uint8_t		m_vec4[0x10];				///< <c>0x60</c>: always 0? or vec4 ?
	uint8_t		m_vec4_2[0x10];			///< <c>0x70</c>: always 0? or vec4 ?
	uint8_t		m_vec4_3[0x10];			///< <c>0x80</c>: always 0? or vec4 ?
	uint32_t	m_padding;				///< <c>0x90</c>: padding probably
};