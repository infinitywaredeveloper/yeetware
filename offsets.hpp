#pragma once

#include <cstdint>
#include <Windows.h>
#include <iostream>
#include <stdio.h>


// 2018-11-29 12:12:53.463896800 UTC //offsets by hazedumper

namespace hazedumper {
	constexpr ::std::int64_t timestamp = 1543493573;
	namespace netvars {
		constexpr ::std::ptrdiff_t m_ArmorValue = 0xB270;
		constexpr ::std::ptrdiff_t m_Collision = 0x318;
		constexpr ::std::ptrdiff_t m_CollisionGroup = 0x470;
		constexpr ::std::ptrdiff_t m_Local = 0x2FAC;
		constexpr ::std::ptrdiff_t m_MoveType = 0x258;
		constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x31A4;
		constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x31A0;
		constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x301C;
		constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3028;
		constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x38C0;
		constexpr ::std::ptrdiff_t m_bHasDefuser = 0xB280;
		constexpr ::std::ptrdiff_t m_bHasHelmet = 0xB264;
		constexpr ::std::ptrdiff_t m_bInReload = 0x3275;
		constexpr ::std::ptrdiff_t m_bIsDefusing = 0x38B4;
		constexpr ::std::ptrdiff_t m_bIsScoped = 0x38AA;
		constexpr ::std::ptrdiff_t m_bSpotted = 0x939;
		constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x97C;
		constexpr ::std::ptrdiff_t m_clrRender = 0x70;
		constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x2698;
		constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x32E0;
		constexpr ::std::ptrdiff_t m_fFlags = 0x100;
		constexpr ::std::ptrdiff_t m_flC4Blow = 0x2980;
		constexpr ::std::ptrdiff_t m_flDefuseCountDown = 0x2998;
		constexpr ::std::ptrdiff_t m_flDefuseLength = 0x2994;
		constexpr ::std::ptrdiff_t m_flFallbackWear = 0x31B0;
		constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA32C;
		constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA328;
		constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x3208;
		constexpr ::std::ptrdiff_t m_flTimerLength = 0x2984;
		constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EE8;
		constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DE8;
		constexpr ::std::ptrdiff_t m_hObserverTarget = 0x3360;
		constexpr ::std::ptrdiff_t m_hOwner = 0x29BC;
		constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x148;
		constexpr ::std::ptrdiff_t m_iAccountID = 0x2FB8;
		constexpr ::std::ptrdiff_t m_iClip1 = 0x3234;
		constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A84;
		constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B88;
		constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB2DC;
		constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2F9C;
		constexpr ::std::ptrdiff_t m_iFOVStart = 0x31D8;
		constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA344;
		constexpr ::std::ptrdiff_t m_iHealth = 0xFC;
		constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2F9A;
		constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FB0;
		constexpr ::std::ptrdiff_t m_iObserverMode = 0x334C;
		constexpr ::std::ptrdiff_t m_iShotsFired = 0xA2E0;
		constexpr ::std::ptrdiff_t m_iState = 0x3228;
		constexpr ::std::ptrdiff_t m_iTeamNum = 0xF0;
		constexpr ::std::ptrdiff_t m_lifeState = 0x25B;
		constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x31A8;
		constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x31AC;
		constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x31B4;
		constexpr ::std::ptrdiff_t m_nForceBone = 0x267C;
		constexpr ::std::ptrdiff_t m_nTickBase = 0x3404;
		constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x440;
		constexpr ::std::ptrdiff_t m_szCustomName = 0x302C;
		constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x3588;
		constexpr ::std::ptrdiff_t m_thirdPersonViewAngles = 0x31C8;
		constexpr ::std::ptrdiff_t m_vecOrigin = 0x134;
		constexpr ::std::ptrdiff_t m_vecVelocity = 0x110;
		constexpr ::std::ptrdiff_t m_vecViewOffset = 0x104;
		constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3010;
	} // namespace netvars
	namespace signatures {
		constexpr ::std::ptrdiff_t clientstate_choked_commands = 0x4CB0;
		constexpr ::std::ptrdiff_t clientstate_delta_ticks = 0x174;
		constexpr ::std::ptrdiff_t clientstate_last_outgoing_command = 0x4CAC;
		constexpr ::std::ptrdiff_t clientstate_net_channel = 0x9C;
		constexpr ::std::ptrdiff_t convar_name_hash_table = 0x2F0F8;
		constexpr ::std::ptrdiff_t dwClientState = 0x589B34;
		constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
		constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4CC8;
		constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
		constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
		constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x310;
		constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x5240;
		constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
		constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D10;
		constexpr ::std::ptrdiff_t dwEntityList = 0x4C41704;
		constexpr ::std::ptrdiff_t dwForceAttack = 0x3082DEC;
		constexpr ::std::ptrdiff_t dwForceAttack2 = 0x3082DF8;
		constexpr ::std::ptrdiff_t dwForceBackward = 0x3082E40;
		constexpr ::std::ptrdiff_t dwForceForward = 0x3082E4C;
		constexpr ::std::ptrdiff_t dwForceJump = 0x50E444C;
		constexpr ::std::ptrdiff_t dwForceLeft = 0x3082DC8;
		constexpr ::std::ptrdiff_t dwForceRight = 0x3082DBC;
		constexpr ::std::ptrdiff_t dwGameDir = 0x627C70;
		constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x5156794;
		constexpr ::std::ptrdiff_t dwGetAllClasses = 0xC8653C;
		constexpr ::std::ptrdiff_t dwGlobalVars = 0x589838;
		constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x51809B0;
		constexpr ::std::ptrdiff_t dwInput = 0x508C3C0;
		constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x85CC34;
		constexpr ::std::ptrdiff_t dwLocalPlayer = 0xC648AC;
		constexpr ::std::ptrdiff_t dwMouseEnable = 0xC6A278;
		constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xC6A248;
		constexpr ::std::ptrdiff_t dwPlayerResource = 0x308117C;
		constexpr ::std::ptrdiff_t dwRadarBase = 0x50763EC;
		constexpr ::std::ptrdiff_t dwSensitivity = 0xC6A114;
		constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xC6A0E8;
		constexpr ::std::ptrdiff_t dwSetClanTag = 0x88BD0;
		constexpr ::std::ptrdiff_t dwViewMatrix = 0x4C33134;
		constexpr ::std::ptrdiff_t dwWeaponTable = 0x508CE5C;
		constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x322C;
		constexpr ::std::ptrdiff_t dwYawPtr = 0xC69ED8;
		constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xC6EF98;
		constexpr ::std::ptrdiff_t dwbSendPackets = 0xD126A;
		constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA3F20;
		constexpr ::std::ptrdiff_t interface_engine_cvar = 0x3E9EC;
		constexpr ::std::ptrdiff_t m_pStudioHdr = 0x293C;
		constexpr ::std::ptrdiff_t m_pitchClassPtr = 0x5076698;
		constexpr ::std::ptrdiff_t m_yawClassPtr = 0xC69ED8;
	} // namespace signatures
} // namespace hazedumper