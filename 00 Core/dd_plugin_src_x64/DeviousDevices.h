#include "skse64/PluginAPI.h"
#include "skse64/PapyrusArgs.h"
#include "skse64/PapyrusClass.h"
#include "skse64/PapyrusVM.h"
#include "skse64/PapyrusNativeFunctions.h"

#include "skse64/GameData.h"
#include "skse64/GameTypes.h"
#include "skse64/GameForms.h"
#include "skse64/GameRTTI.h"
#include "skse64/GameReferences.h"
#include "skse64/GameObjects.h"
#include "skse64/GameBSExtraData.h"

#include <string> 
#include <math.h>

namespace DeviousDevices {
  //float TestCos(StaticFunctionTag* base, float val);
  TESForm* FindMatchingDevice(StaticFunctionTag* base, Actor* obj, BGSKeyword* kwd);
  bool RegisterFuncs(VMClassRegistry* registry);
}
