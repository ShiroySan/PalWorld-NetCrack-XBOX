#pragma once
#include "include/Menu.hpp"
#include "config.h"
#include <Windows.h>

void ESP();

void DrawUActorComponent(SDK::TArray<SDK::UActorComponent*> Comps,ImColor color);

void DrawPosition();


void ResetStamina();

void SetInfiniteAmmo(bool bInfAmmo);

void SetCraftingSpeed(float mNewSpeed, bool bRestoreDefault = false);

void AddTechPoints(__int32 mPoints);

void AddAncientTechPoints(__int32 mPoints);

void RemoveTechPoints(__int32 mPoints);

void RemoveAncientTechPoint(__int32 mPoints);