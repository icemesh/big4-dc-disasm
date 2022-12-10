/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#include "level-set-debug.h"
#include "../../dc/level-set/level-set.h"

#include <stdio.h>

void PrintLevelSet(LevelSet* pLvlSet)
{
	LevelEntry** paLevelEntry = pLvlSet->m_pLevelSetArrays->m_paLevelEntry;
	int32_t numEntries = pLvlSet->m_pLevelSetArrays->m_numEntries;
	printf("{\n\t\"level-set %s\": {\n\t\t\"level-entries\": [\n", pLvlSet->m_levelSetName);
	for (int32_t idx = 0; idx < numEntries; idx++)
	{
		printf("\t\t\t\"%s\"%s\n", paLevelEntry[idx]->m_levelEntryName, idx == (numEntries - 1) ? "" : ",");
	}
	puts("\t\t]\n\t}\n}");
}
