/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#include "render-settings-debug.h"
#include "../../dc/render-settings/render-settings.h"
#include "../../sidbase/sidbase.h"
#include <stdio.h>

void PrintRenderSettings(RenderSettingsMap* pRsMap)
{
	int64_t numEntries = pRsMap->m_numEntries;
	StringId* pSid = pRsMap->m_paStringId;
	puts("StringIds dump");
	int64_t i = 0;
	for (i; i < numEntries; i++)
	{
		printf("#%08X -> %s\n", pSid[i], StringIdToStringInternal(pSid[i]));
	}
	puts("-----------------------------");
	puts("RenderSettingsSubsetEntry Array dump");
	RenderSettingsSubsetEntry** paSubSetEntries = pRsMap->m_paRenderSettingsSubsetEntries;
	i = 0;
	for (i; i < numEntries; i++)
	{
		RenderSettingsSubsetEntry* pSubSetEntries = paSubSetEntries[i];
		printf("#%08X -> %s: 0x%08X\n", pSubSetEntries->m_entryId, StringIdToStringInternal(pSubSetEntries->m_entryId), pSubSetEntries->m_value);
	}
	puts("============================");
}