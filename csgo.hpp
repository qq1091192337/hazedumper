#pragma once
#include <cstddef>

// 2018-01-30 20:37:56.682982600 UTC

namespace hazedumper {
namespace netvars {
constexpr ::std::ptrdiff_t m_ArmorValue = 0xB238;
constexpr ::std::ptrdiff_t m_Collision = 0x318;
constexpr ::std::ptrdiff_t m_CollisionGroup = 0x470;
constexpr ::std::ptrdiff_t m_Local = 0x2FAC;
constexpr ::std::ptrdiff_t m_MoveType = 0x258;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidHigh = 0x316C;
constexpr ::std::ptrdiff_t m_OriginalOwnerXuidLow = 0x3168;
constexpr ::std::ptrdiff_t m_aimPunchAngle = 0x301C;
constexpr ::std::ptrdiff_t m_aimPunchAngleVel = 0x3028;
constexpr ::std::ptrdiff_t m_bGunGameImmunity = 0x3894;
constexpr ::std::ptrdiff_t m_bHasDefuser = 0xB248;
constexpr ::std::ptrdiff_t m_bHasHelmet = 0xB22C;
constexpr ::std::ptrdiff_t m_bInReload = 0x3245;
constexpr ::std::ptrdiff_t m_bIsDefusing = 0x3888;
constexpr ::std::ptrdiff_t m_bIsScoped = 0x387E;
constexpr ::std::ptrdiff_t m_bSpotted = 0x939;
constexpr ::std::ptrdiff_t m_bSpottedByMask = 0x97C;
constexpr ::std::ptrdiff_t m_dwBoneMatrix = 0x2698;
constexpr ::std::ptrdiff_t m_fAccuracyPenalty = 0x32B0;
constexpr ::std::ptrdiff_t m_fFlags = 0x100;
constexpr ::std::ptrdiff_t m_flFallbackWear = 0x3178;
constexpr ::std::ptrdiff_t m_flFlashDuration = 0xA2F8;
constexpr ::std::ptrdiff_t m_flFlashMaxAlpha = 0xA2F4;
constexpr ::std::ptrdiff_t m_flNextPrimaryAttack = 0x31D8;
constexpr ::std::ptrdiff_t m_hActiveWeapon = 0x2EE8;
constexpr ::std::ptrdiff_t m_hMyWeapons = 0x2DE8;
constexpr ::std::ptrdiff_t m_hObserverTarget = 0x3360;
constexpr ::std::ptrdiff_t m_hOwner = 0x29BC;
constexpr ::std::ptrdiff_t m_hOwnerEntity = 0x148;
constexpr ::std::ptrdiff_t m_iAccountID = 0x2FA8;
constexpr ::std::ptrdiff_t m_iClip1 = 0x3204;
constexpr ::std::ptrdiff_t m_iCompetitiveRanking = 0x1A44;
constexpr ::std::ptrdiff_t m_iCompetitiveWins = 0x1B48;
constexpr ::std::ptrdiff_t m_iCrosshairId = 0xB2A4;
constexpr ::std::ptrdiff_t m_iEntityQuality = 0x2F8C;
constexpr ::std::ptrdiff_t m_iFOVStart = 0x31D8;
constexpr ::std::ptrdiff_t m_iGlowIndex = 0xA310;
constexpr ::std::ptrdiff_t m_iHealth = 0xFC;
constexpr ::std::ptrdiff_t m_iItemDefinitionIndex = 0x2F88;
constexpr ::std::ptrdiff_t m_iItemIDHigh = 0x2FA0;
constexpr ::std::ptrdiff_t m_iObserverMode = 0x334C;
constexpr ::std::ptrdiff_t m_iShotsFired = 0xA2B0;
constexpr ::std::ptrdiff_t m_iState = 0x31F8;
constexpr ::std::ptrdiff_t m_iTeamNum = 0xF0;
constexpr ::std::ptrdiff_t m_lifeState = 0x25B;
constexpr ::std::ptrdiff_t m_nFallbackPaintKit = 0x3170;
constexpr ::std::ptrdiff_t m_nFallbackSeed = 0x3174;
constexpr ::std::ptrdiff_t m_nFallbackStatTrak = 0x317C;
constexpr ::std::ptrdiff_t m_nForceBone = 0x267C;
constexpr ::std::ptrdiff_t m_nTickBase = 0x3404;
constexpr ::std::ptrdiff_t m_rgflCoordinateFrame = 0x440;
constexpr ::std::ptrdiff_t m_szCustomName = 0x301C;
constexpr ::std::ptrdiff_t m_szLastPlaceName = 0x3588;
constexpr ::std::ptrdiff_t m_vecOrigin = 0x134;
constexpr ::std::ptrdiff_t m_vecVelocity = 0x110;
constexpr ::std::ptrdiff_t m_vecViewOffset = 0x104;
constexpr ::std::ptrdiff_t m_viewPunchAngle = 0x3010;
} // namespace netvars
namespace signatures {
constexpr ::std::ptrdiff_t dwClientState = 0x57C844;
constexpr ::std::ptrdiff_t dwClientState_GetLocalPlayer = 0x180;
constexpr ::std::ptrdiff_t dwClientState_IsHLTV = 0x4CC8;
constexpr ::std::ptrdiff_t dwClientState_Map = 0x28C;
constexpr ::std::ptrdiff_t dwClientState_MapDirectory = 0x188;
constexpr ::std::ptrdiff_t dwClientState_MaxPlayer = 0x310;
constexpr ::std::ptrdiff_t dwClientState_PlayerInfo = 0x5240;
constexpr ::std::ptrdiff_t dwClientState_State = 0x108;
constexpr ::std::ptrdiff_t dwClientState_ViewAngles = 0x4D10;
constexpr ::std::ptrdiff_t dwEntityList = 0x4A79EF4;
constexpr ::std::ptrdiff_t dwForceAttack = 0x2EBC26C;
constexpr ::std::ptrdiff_t dwForceAttack2 = 0x2EBC278;
constexpr ::std::ptrdiff_t dwForceBackward = 0x2EBC2F0;
constexpr ::std::ptrdiff_t dwForceForward = 0x2EBC2E4;
constexpr ::std::ptrdiff_t dwForceJump = 0x4F11164;
constexpr ::std::ptrdiff_t dwForceLeft = 0x2EBC2CC;
constexpr ::std::ptrdiff_t dwForceRight = 0x2EBC2D8;
constexpr ::std::ptrdiff_t dwGameDir = 0x61A168;
constexpr ::std::ptrdiff_t dwGameRulesProxy = 0x4F7B4AC;
constexpr ::std::ptrdiff_t dwGetAllClasses = 0xABFBD4;
constexpr ::std::ptrdiff_t dwGlobalVars = 0x57C548;
constexpr ::std::ptrdiff_t dwGlowObjectManager = 0x4F96D50;
constexpr ::std::ptrdiff_t dwInput = 0x4EC4AB8;
constexpr ::std::ptrdiff_t dwInterfaceLinkList = 0x6DBF44;
constexpr ::std::ptrdiff_t dwLocalPlayer = 0xA9D0EC;
constexpr ::std::ptrdiff_t dwMouseEnable = 0xAA2950;
constexpr ::std::ptrdiff_t dwMouseEnablePtr = 0xAA2920;
constexpr ::std::ptrdiff_t dwPlayerResource = 0x2EBA5FC;
constexpr ::std::ptrdiff_t dwRadarBase = 0x4EAEBEC;
constexpr ::std::ptrdiff_t dwSensitivity = 0xAA27EC;
constexpr ::std::ptrdiff_t dwSensitivityPtr = 0xAA27C0;
constexpr ::std::ptrdiff_t dwSetClanTag = 0x86AB0;
constexpr ::std::ptrdiff_t dwViewMatrix = 0x4A6B964;
constexpr ::std::ptrdiff_t dwWeaponTable = 0x4EC56B4;
constexpr ::std::ptrdiff_t dwWeaponTableIndex = 0x31FC;
constexpr ::std::ptrdiff_t dwYawPtr = 0xAA25B0;
constexpr ::std::ptrdiff_t dwZoomSensitivityRatioPtr = 0xAA7618;
constexpr ::std::ptrdiff_t dwbSendPackets = 0xCCDCA;
constexpr ::std::ptrdiff_t dwppDirect3DDevice9 = 0xA1F40;
constexpr ::std::ptrdiff_t m_pStudioHdr = 0x293C;
} // namespace signatures
} // namespace hazedumper
