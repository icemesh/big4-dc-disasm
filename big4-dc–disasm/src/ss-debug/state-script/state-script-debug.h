/******************************************************************************/
/*
  Author  - icemesh
*/
/******************************************************************************/
#pragma once

struct StateScript;
struct SsDeclaration;
struct SsState;
struct SsOnBlock;
struct SsTrack;

void DumpScript(StateScript* pStateScript);
void PrintVariable(SsDeclaration* pDecl);
void PrintTag(SsDeclaration* pDecl);
void DumpState(SsState* pState);
void DumpBlocks(SsOnBlock* pBlock);
void PrintTrackGroup(SsTrack* pTrack);

