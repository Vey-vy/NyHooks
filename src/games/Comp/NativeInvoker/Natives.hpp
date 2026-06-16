// #pragma once
// #include "NativeInvoker.hpp"
// #include "games/Ny.hpp"
// #include "games/Classes/type.hpp"

// namespace BLIP
// {
//     // AddBlipForContact | 0x7C671162
//     static Any ADD_BLIP_FOR_CONTACT(float x, float y, float z, Blip *pBlip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C671162, x, y, z, pBlip);
//     }

//     // AddBlipForCoord | 0x3E7D3074
//     static Any ADD_BLIP_FOR_COORD(float x, float y, float z, Blip *pBlip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E7D3074, x, y, z, pBlip);
//     }

//     // AddBlipForGangTerritory | 0x2C1B52CE
//     static Any ADD_BLIP_FOR_GANG_TERRITORY(float x0, float y0, float x1, float y1, int32_t colour, int32_t *blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C1B52CE, x0, y0, x1, y1, colour, blip);
//     }

//     // AddBlipForObject | 0x70CC1487
//     static Any ADD_BLIP_FOR_OBJECT(Object obj, Blip *pBlip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70CC1487, obj, pBlip);
//     }

//     // AddBlipForRadius | 0x21804D1A
//     static Any ADD_BLIP_FOR_RADIUS(float x, float y, float z, int32_t type, int32_t *blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21804D1A, x, y, z, type, blip);
//     }

//     // AddBlipForWeapon | 0x4CA708B9
//     static Any ADD_BLIP_FOR_WEAPON(float x, float y, float z, int32_t *blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4CA708B9, x, y, z, blip);
//     }

//     // AddSimpleBlipForPickup | 0x44B30452
//     static Any ADD_SIMPLE_BLIP_FOR_PICKUP(Pickup pickup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44B30452, pickup);
//     }

//     // ChangeBlipAlpha | 0x2FB14E41
//     static Any CHANGE_BLIP_ALPHA(Blip blip, int32_t alpha)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FB14E41, blip, alpha);
//     }

//     // ChangeBlipColour | 0x1D8800E3
//     static Any CHANGE_BLIP_COLOUR(Blip blip, ColourIndex colour)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D8800E3, blip, colour);
//     }

//     // ChangeBlipDisplay | 0x3ACC1794
//     static Any CHANGE_BLIP_DISPLAY(Blip blip, uint32_t display)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3ACC1794, blip, display);
//     }

//     // ChangeBlipNameFromAscii | 0x6C9F2330
//     static Any CHANGE_BLIP_NAME_FROM_ASCII(Blip blip, char *blipName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C9F2330, blip, blipName);
//     }

//     // ChangeBlipNameToPlayerName | 0x731B11A7
//     static Any CHANGE_BLIP_NAME_TO_PLAYER_NAME(int32_t blip, int32_t playerid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x731B11A7, blip, playerid);
//     }

//     // ChangeBlipPriority | 0x69EC0E70
//     static Any CHANGE_BLIP_PRIORITY(Blip blip, uint32_t priority)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69EC0E70, blip, priority);
//     }

//     // ChangeBlipRotation | 0x3AF307B1
//     static Any CHANGE_BLIP_ROTATION(int32_t blip, int32_t rotation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3AF307B1, blip, rotation);
//     }

//     // ChangeBlipScale | 0x44D349D9
//     static Any CHANGE_BLIP_SCALE(Blip blip, float scale)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44D349D9, blip, scale);
//     }

//     // ChangeBlipSprite | 0x6A90123D
//     static Any CHANGE_BLIP_SPRITE(Blip blip, uint32_t sprite)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A90123D, blip, sprite);
//     }

//     // ChangeBlipTeamRelevance | 0x4B2625BE
//     static Any CHANGE_BLIP_TEAM_RELEVANCE(int32_t blip, int32_t relevance)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B2625BE, blip, relevance);
//     }

//     // ChangePickupBlipColour | 0x65D949B7
//     static Any CHANGE_PICKUP_BLIP_COLOUR(int32_t colour)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65D949B7, colour);
//     }

//     // ChangePickupBlipDisplay | 0x3E5F2362
//     static Any CHANGE_PICKUP_BLIP_DISPLAY(int32_t display)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E5F2362, display);
//     }

//     // ChangePickupBlipPriority | 0x31321D1A
//     static Any CHANGE_PICKUP_BLIP_PRIORITY(int32_t priority)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31321D1A, priority);
//     }

//     // ChangePickupBlipScale | 0x4F66544E
//     static Any CHANGE_PICKUP_BLIP_SCALE(float scale)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F66544E, scale);
//     }

//     // ChangeTerritoryBlipScale | 0x35A250C2
//     static Any CHANGE_TERRITORY_BLIP_SCALE(int32_t blip, float a2, float a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x35A250C2, blip, a2, a3);
//     }

//     // CreateTemporaryRadarBlipsForPickupsInArea | 0x44EA47BB
//     static Any CREATE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS_IN_AREA(float x, float y, float z, float radius, int32_t bliptype)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44EA47BB, x, y, z, radius, bliptype);
//     }

//     // DimBlip | 0x272D15FD
//     static Any DIM_BLIP(Blip blip, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x272D15FD, blip, unknownTrue);
//     }

//     // DisplayFrontendMapBlips | 0x61B830BC
//     static Any DISPLAY_FRONTEND_MAP_BLIPS(bool display)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61B830BC, display);
//     }

//     // DisplayTextWithBlipName | 0x7E8D1DCE
//     static Any DISPLAY_TEXT_WITH_BLIP_NAME(float x, float y, char *str, int32_t blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E8D1DCE, x, y, str, blip);
//     }

//     // DoesBlipExist | 0x590A6FF4
//     static Any DOES_BLIP_EXIST(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x590A6FF4, blip);
//     }

//     // FlashBlip | 0x4DFE09D6
//     static Any FLASH_BLIP(Blip blip, bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DFE09D6, blip, on);
//     }

//     // FlashBlipAlt | 0x611948A3
//     static Any FLASH_BLIP_ALT(Blip blip, bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x611948A3, blip, on);
//     }

//     // FlushAllOutOfDateRadarBlipsFromMissionCleanupList | 0x1F1C77E1
//     static Any FLUSH_ALL_OUT_OF_DATE_RADAR_BLIPS_FROM_MISSION_CLEANUP_LIST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F1C77E1);
//     }

//     // GetBlipName | 0x00000000
//     static Any GET_BLIP_NAME(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x00000000, blip);
//     }

//     // GetBlipAlpha | 0x61497585
//     static Any GET_BLIP_ALPHA(int32_t blip, int32_t *alpha)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61497585, blip, alpha);
//     }

//     // GetBlipColour | 0x59B425DA
//     static Any GET_BLIP_COLOUR(Blip blip, ColourIndex *pColour)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59B425DA, blip, pColour);
//     }

//     // GetBlipCoords | 0x4C1E75DB
//     static Any GET_BLIP_COORDS(Blip blip, rage::vector3 *pVector)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C1E75DB, blip, pVector);
//     }

//     // GetBlipInfoIdDisplay | 0x1B731C3F
//     static Any GET_BLIP_INFO_ID_DISPLAY(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B731C3F, blip);
//     }

//     // GetBlipInfoIdObjectIndex | 0x7B05072C
//     static Any GET_BLIP_INFO_ID_OBJECT_INDEX(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B05072C, blip);
//     }

//     // GetBlipInfoIdPosition | 0x413B3893
//     static Any GET_BLIP_INFO_ID_POSITION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x413B3893);
//     }

//     // GetBlipInfoIdRotation | 0x6FBA4274
//     static Any GET_BLIP_INFO_ID_ROTATION(int32_t blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6FBA4274, blip);
//     }

//     // GetBlipInfoIdType | 0x6A9E5CE5
//     static Any GET_BLIP_INFO_ID_TYPE(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A9E5CE5, blip);
//     }

//     // GetBlipSprite | 0x30B1316B
//     static Any GET_BLIP_SPRITE(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30B1316B, blip);
//     }

//     // GetFirstBlipInfoId | 0x3BD729E9
//     static Any GET_FIRST_BLIP_INFO_ID(uint32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BD729E9, type);
//     }

//     // GetNextBlipInfoId | 0x154932F0
//     static Any GET_NEXT_BLIP_INFO_ID(uint32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x154932F0, type);
//     }

//     // IsBlipShortRange | 0x32E84B6A
//     static Any IS_BLIP_SHORT_RANGE(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32E84B6A, blip);
//     }

//     // RemoveBlip | 0x7BBF3625
//     static Any REMOVE_BLIP(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BBF3625, blip);
//     }

//     // RemoveBlipAndClearIndex | 0x66385B6C
//     static Any REMOVE_BLIP_AND_CLEAR_INDEX(int32_t blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66385B6C, blip);
//     }

//     // RemoveTemporaryRadarBlipsForPickups | 0x6F797AF3
//     static Any REMOVE_TEMPORARY_RADAR_BLIPS_FOR_PICKUPS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6F797AF3);
//     }

//     // SetBlipAsShortRange | 0x2ED90276
//     static Any SET_BLIP_AS_SHORT_RANGE(Blip blip, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2ED90276, blip, value);
//     }

//     // SetBlipCoordinates | 0x3D91564E
//     static Any SET_BLIP_COORDINATES(int32_t blip, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D91564E, blip, x, y, z);
//     }

//     // SetBlipMarkerLongDistance | 0x150A6532
//     static Any SET_BLIP_MARKER_LONG_DISTANCE(int32_t blip, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x150A6532, blip, set);
//     }

//     // SetBlipThrottleRandomly | 0x12A619E9
//     static Any SET_BLIP_THROTTLE_RANDOMLY(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12A619E9, veh, set);
//     }

//     // SetPoliceRadarBlips | 0x14790F9F
//     static Any SET_POLICE_RADAR_BLIPS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14790F9F, set);
//     }

//     // SetThisScriptCanRemoveBlipsCreatedByAnyScript | 0x29D64E72
//     static Any SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(bool allow)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29D64E72, allow);
//     }

//     // ShowBlipOnAltimeter | 0x1DD86C2A
//     static Any SHOW_BLIP_ON_ALTIMETER(int32_t blip, bool show)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DD86C2A, blip, show);
//     }

// } // namespace BLIP

// namespace CAM
// {

//     // ActivateScriptedCams | 0x3EBE11B9
//     static Any ACTIVATE_SCRIPTED_CAMS(bool a1, bool a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3EBE11B9, a1, a2);
//     }

//     // AddCamSplineNode | 0x3B4F1EBA
//     static Any ADD_CAM_SPLINE_NODE(int32_t cam, int32_t camnode)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B4F1EBA, cam, camnode);
//     }

//     // AttachCamToObject | 0x2966710D
//     static Any ATTACH_CAM_TO_OBJECT(int32_t cam, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2966710D, cam, obj);
//     }

//     // AttachCamToViewport | 0x21A3110A
//     static Any ATTACH_CAM_TO_VIEWPORT(int32_t cam, int32_t viewportid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21A3110A, cam, viewportid);
//     }

//     // BeginCamCommands | 0x351F4C86
//     static Any BEGIN_CAM_COMMANDS(int32_t *a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x351F4C86, a1);
//     }

//     // CamSetInterpStateSrc | 0x32C67124
//     static Any CAM_SET_INTERP_STATE_SRC(int32_t cam, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32C67124, cam, a2);
//     }

//     // CamIsSphereVisible | 0x2D5611D4
//     static Any CAM_IS_SPHERE_VISIBLE(Camera camera, float pX, float pY, float pZ, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D5611D4, camera, pX, pY, pZ, radius);
//     }

//     // CamProcess | 0x52411DDA
//     static Any CAM_PROCESS(int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52411DDA, cam);
//     }

//     // CamRestore | 0x348F612D
//     static Any CAM_RESTORE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x348F612D);
//     }

//     // CamRestoreJumpcut | 0x538021CD
//     static Any CAM_RESTORE_JUMPCUT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x538021CD);
//     }

//     // CamSequenceClose | 0x5D975A46
//     static Any CAM_SEQUENCE_CLOSE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D975A46);
//     }

//     // CamSequenceGetProgress | 0x7AAD273F
//     static Any CAM_SEQUENCE_GET_PROGRESS(int a1, int32_t *progress)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7AAD273F, a1, progress);
//     }

//     // CamSequenceOpen | 0x5D867A02
//     static Any CAM_SEQUENCE_OPEN(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D867A02, a1);
//     }

//     // CamSequenceStart | 0x26335EE7
//     static Any CAM_SEQUENCE_START(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26335EE7, a1);
//     }

//     // CamSequenceStop | 0x282E4EFB
//     static Any CAM_SEQUENCE_STOP(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x282E4EFB, a1);
//     }

//     // CamSetCinematic | 0x63A86D87
//     static Any CAM_SET_CINEMATIC(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63A86D87, veh, set);
//     }

//     // CamSetDollyZoomLock | 0x25071DF3
//     static Any CAM_SET_DOLLY_ZOOM_LOCK(int32_t cam, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25071DF3, cam, set);
//     }

//     // CamSetInterpGraphPos | 0x3C7C3E89
//     static Any CAM_SET_INTERP_GRAPH_POS(int32_t cam, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C7C3E89, cam, a2);
//     }

//     // CamSetInterpGraphRot | 0x1C5B7C51
//     static Any CAM_SET_INTERP_GRAPH_ROT(int32_t cam, int32_t val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C5B7C51, cam, val);
//     }

//     // CamSetInterpolationDetails | 0x5AAC39C1
//     static Any CAM_SET_INTERPOLATION_DETAILS(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AAC39C1, a1);
//     }

//     // CellCamActivate | 0x446F74E5
//     static Any CELL_CAM_ACTIVATE(bool a1, bool a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x446F74E5, a1, a2);
//     }

//     // CellCamSetCentrePos | 0x32C67003
//     static Any CELL_CAM_SET_CENTRE_POS(float x, float y)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32C67003, x, y);
//     }

//     // CellCamSetColourBrightness | 0x4ECB189E
//     static Any CELL_CAM_SET_COLOUR_BRIGHTNESS(float a1, float a2, float a3, float a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4ECB189E, a1, a2, a3, a4);
//     }

//     // CloneCam | 0x483E5BE8
//     static Any CLONE_CAM(int32_t cam, int32_t *camcopy)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x483E5BE8, cam, camcopy);
//     }

//     // CountScriptCams | 0x4806044A
//     static Any COUNT_SCRIPT_CAMS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4806044A);
//     }

//     // CreateCam | 0x694A0DC1
//     static Any CREATE_CAM(uint32_t camtype_usually14, Camera *camera)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x694A0DC1, camtype_usually14, camera);
//     }

//     // DestroyAllCams | 0x614A3353
//     static Any DESTROY_ALL_CAMS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x614A3353);
//     }

//     // DestroyCam | 0x14334EEE
//     static Any DESTROY_CAM(Camera camera)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14334EEE, camera);
//     }

//     // DetachCamFromViewport | 0x1DEA65DE
//     static Any DETACH_CAM_FROM_VIEWPORT(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DEA65DE, a1);
//     }

//     // DisableDebugCamAndPlayerWarping | 0x1A1473B0
//     static Any DISABLE_DEBUG_CAM_AND_PLAYER_WARPING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A1473B0);
//     }

//     // DisableHeliChaseCamBonnetNitroFix | 0x19A73E70
//     static Any DISABLE_HELI_CHASE_CAM_BONNET_NITRO_FIX()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19A73E70);
//     }

//     // DisableHeliChaseCamThisUpdate | 0x78D17492
//     static Any DISABLE_HELI_CHASE_CAM_THIS_UPDATE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78D17492);
//     }

//     // DisableIntermezzoCams | 0x3DA200CB
//     static Any DISABLE_INTERMEZZO_CAMS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3DA200CB);
//     }

//     // DoesCamExist | 0x46953225
//     static Any DOES_CAM_EXIST(Camera camera)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46953225, camera);
//     }

//     // EnableCamCollision | 0x71AE1BDC
//     static Any ENABLE_CAM_COLLISION(int32_t cam, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71AE1BDC, cam, enable);
//     }

//     // EnableDebugCam | 0x296B09E8
//     static Any ENABLE_DEBUG_CAM(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x296B09E8, enable);
//     }

//     // EndCamCommands | 0x627F3275
//     static Any END_CAM_COMMANDS(int32_t *a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x627F3275, a1);
//     }

//     // ForceNoCamPause | 0x2CC70E04
//     static Any FORCE_NO_CAM_PAUSE(bool foce)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CC70E04, foce);
//     }

//     // GetCamFarClip | 0x752643C9
//     static Any GET_CAM_FAR_CLIP(int32_t cam, float *clip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x752643C9, cam, clip);
//     }

//     // GetCamFarDof | 0x1CB27FE1
//     static Any GET_CAM_FAR_DOF(int32_t cam, float *fardof)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1CB27FE1, cam, fardof);
//     }

//     // GetCamFov | 0x7BF4652D
//     static Any GET_CAM_FOV(Camera camera, float *fov)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BF4652D, camera, fov);
//     }

//     // GetCamMotionBlur | 0x64EF411D
//     static Any GET_CAM_MOTION_BLUR(int32_t cam, int32_t *blur)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64EF411D, cam, blur);
//     }

//     // GetCamNearClip | 0x2EF477FD
//     static Any GET_CAM_NEAR_CLIP(int32_t cam, float *clip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2EF477FD, cam, clip);
//     }

//     // GetCamNearDof | 0x50D15F0D
//     static Any GET_CAM_NEAR_DOF(int32_t cam, float *dof)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50D15F0D, cam, dof);
//     }

//     // GetCamPos | 0x60C22E93
//     static Any GET_CAM_POS(Camera camera, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60C22E93, camera, pX, pY, pZ);
//     }

//     // GetCamRot | 0x51A06698
//     static Any GET_CAM_ROT(Camera camera, float *angleX, float *angleY, float *angleZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51A06698, camera, angleX, angleY, angleZ);
//     }

//     // GetCamState | 0x22AA0984
//     static Any GET_CAM_STATE(int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22AA0984, cam);
//     }

//     // GetCameraFromNetworkId | 0x7E656E50
//     static Any GET_CAMERA_FROM_NETWORK_ID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E656E50);
//     }

//     // GetDebugCam | 0x7D15544E
//     static Any GET_DEBUG_CAM(int32_t *cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D15544E, cam);
//     }

//     // GetFreeCam | 0x538514CC
//     static Any GET_FREE_CAM(int32_t *cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x538514CC, cam);
//     }

//     // GetGameCamChild | 0x588F6BC0
//     static Any GET_GAME_CAM_CHILD(Camera *camera)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x588F6BC0, camera);
//     }

//     // GetRootCam | 0x75E005F1
//     static Any GET_ROOT_CAM(Cam *rootcam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75E005F1, rootcam);
//     }

//     // GetScriptCam | 0x5F00596C
//     static Any GET_SCRIPT_CAM(int32_t *cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F00596C, cam);
//     }

//     // GetScriptDrawCam | 0x30F71BC6
//     static Any GET_SCRIPT_DRAW_CAM(int32_t *cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30F71BC6, cam);
//     }

//     // HintCam | 0x1B637A1C
//     static Any HINT_CAM(float x, float y, float z, int a4, int a5, int a6, int a7)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B637A1C, x, y, z, a4, a5, a6, a7);
//     }

//     // IsCamActive | 0x348D7AF5
//     static Any IS_CAM_ACTIVE(Camera camera)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x348D7AF5, camera);
//     }

//     // IsCamColliding | 0x39595CE1
//     static Any IS_CAM_COLLIDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39595CE1);
//     }

//     // IsCamHappy | 0x7D95313B
//     static Any IS_CAM_HAPPY(int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D95313B, cam);
//     }

//     // IsCamInterpolating | 0x1AE118F4
//     static Any IS_CAM_INTERPOLATING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1AE118F4);
//     }

//     // IsCamPropagating | 0x7EAC3387
//     static Any IS_CAM_PROPAGATING(Camera camera)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EAC3387, camera);
//     }

//     // IsCamSequenceComplete | 0x55727056
//     static Any IS_CAM_SEQUENCE_COMPLETE(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55727056, a1);
//     }

//     // IsDebugCameraOn | 0x4E26149C
//     static Any IS_DEBUG_CAMERA_ON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E26149C);
//     }

//     // IsSpecificCamInterpolating | 0x17C37E6D
//     static Any IS_SPECIFIC_CAM_INTERPOLATING(int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17C37E6D, cam);
//     }

//     // PointCamAtCam | 0x44717CF9
//     static Any POINT_CAM_AT_CAM(int32_t cam, int32_t camnext)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44717CF9, cam, camnext);
//     }

//     // PointCamAtCoord | 0x4496175C
//     static Any POINT_CAM_AT_COORD(int32_t cam, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4496175C, cam, x, y, z);
//     }

//     // PointCamAtObject | 0x5E627D20
//     static Any POINT_CAM_AT_OBJECT(int32_t cam, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E627D20, cam, obj);
//     }

//     // PointFixedCamAtPos | 0x6D4E2A4A
//     static Any POINT_FIXED_CAM_AT_POS(float x, float y, float z, int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D4E2A4A, x, y, z, cam);
//     }

//     // ProstituteCamActivate | 0x346D76E8
//     static Any PROSTITUTE_CAM_ACTIVATE(bool activate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x346D76E8, activate);
//     }

//     // ResetCamInterpCustomSpeedGraph | 0x779F3EC6
//     static Any RESET_CAM_INTERP_CUSTOM_SPEED_GRAPH()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x779F3EC6);
//     }

//     // ResetCamSplineCustomSpeedGraph | 0x13135C95
//     static Any RESET_CAM_SPLINE_CUSTOM_SPEED_GRAPH()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13135C95);
//     }

//     // SetCameraState | 0x14702FDF
//     static Any SET_CAMERA_STATE(int32_t cam, int32_t state)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14702FDF, cam, state);
//     }

//     // SetBlockCameraToggle | 0x45C63B22
//     static Any SET_BLOCK_CAMERA_TOGGLE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45C63B22, set);
//     }

//     // SetCamActive | 0x43E42686
//     static Any SET_CAM_ACTIVE(Camera camera, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43E42686, camera, value);
//     }

//     // SetCamAttachOffset | 0x72E93E13
//     static Any SET_CAM_ATTACH_OFFSET(int32_t cam, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72E93E13, cam, x, y, z);
//     }

//     // SetCamAttachOffsetIsRelative | 0x44984033
//     static Any SET_CAM_ATTACH_OFFSET_IS_RELATIVE(int32_t cam, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44984033, cam, set);
//     }

//     // SetCamComponentShake | 0x52CE5D9F
//     static Any SET_CAM_COMPONENT_SHAKE(int32_t cam, int32_t componentid, int a3, int32_t time, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52CE5D9F, cam, componentid, a3, time, x, y, z);
//     }

//     // SetCamDofFocuspoint | 0x39DC5AEB
//     static Any SET_CAM_DOF_FOCUSPOINT(int32_t cam, float x, float y, float z, float a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39DC5AEB, cam, x, y, z, a5);
//     }

//     // SetCamFarClip | 0x181F6B00
//     static Any SET_CAM_FAR_CLIP(int32_t cam, float clip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x181F6B00, cam, clip);
//     }

//     // SetCamFarDof | 0x52F543A3
//     static Any SET_CAM_FAR_DOF(int32_t cam, float fardof)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52F543A3, cam, fardof);
//     }

//     // SetCamFov | 0x55D470C2
//     static Any SET_CAM_FOV(Camera camera, float fov)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55D470C2, camera, fov);
//     }

//     // SetCamInheritRollObject | 0x208B4A6A
//     static Any SET_CAM_INHERIT_ROLL_OBJECT(int32_t cam, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x208B4A6A, cam, obj);
//     }

//     // SetCamInterpDetailRotStyleAngles | 0x5F7307F4
//     static Any SET_CAM_INTERP_DETAIL_ROT_STYLE_ANGLES(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F7307F4, a1);
//     }

//     // SetCamInterpDetailRotStyleQuats | 0x439C47D5
//     static Any SET_CAM_INTERP_DETAIL_ROT_STYLE_QUATS(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x439C47D5, a1);
//     }

//     // SetCamInterpStyleCore | 0x72297CDC
//     static Any SET_CAM_INTERP_STYLE_CORE(int32_t cam0, int32_t cam1, int32_t cam2, int32_t time, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72297CDC, cam0, cam1, cam2, time, flag);
//     }

//     // SetCamInterpStyleDetailed | 0x683927F5
//     static Any SET_CAM_INTERP_STYLE_DETAILED(int32_t cam, bool a2, bool a3, bool a4, bool a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x683927F5, cam, a2, a3, a4, a5);
//     }

//     // SetCamMotionBlur | 0x693D7B21
//     static Any SET_CAM_MOTION_BLUR(int32_t cam, float blur)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x693D7B21, cam, blur);
//     }

//     // SetCamName | 0x2AE87B02
//     static Any SET_CAM_NAME(int32_t cam, char *camname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2AE87B02, cam, camname);
//     }

//     // SetCamNearClip | 0x298827FC
//     static Any SET_CAM_NEAR_CLIP(int32_t cam, float clip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x298827FC, cam, clip);
//     }

//     // SetCamNearDof | 0x60AD2FE0
//     static Any SET_CAM_NEAR_DOF(int32_t cam, float dof)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60AD2FE0, cam, dof);
//     }

//     // SetCamPointDampingParams | 0x57AC39F5
//     static Any SET_CAM_POINT_DAMPING_PARAMS(int32_t cam, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57AC39F5, cam, x, y, z);
//     }

//     // SetCamPointOffset | 0x1C887939
//     static Any SET_CAM_POINT_OFFSET(int32_t cam, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C887939, cam, x, y, z);
//     }

//     // SetCamPointOffsetIsRelative | 0x12F20552
//     static Any SET_CAM_POINT_OFFSET_IS_RELATIVE(int32_t cam, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12F20552, cam, set);
//     }

//     // SetCamPos | 0x152F6314
//     static Any SET_CAM_POS(Camera camera, float pX, float pY, float pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x152F6314, camera, pX, pY, pZ);
//     }

//     // SetCamPropagate | 0x44414E60
//     static Any SET_CAM_PROPAGATE(Camera camera, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44414E60, camera, value);
//     }

//     // SetCamRoll | 0x4C5142C0
//     static Any SET_CAM_ROLL(int32_t cam, float roll)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C5142C0, cam, roll);
//     }

//     // SetCamRot | 0x746744D1
//     static Any SET_CAM_ROT(Camera camera, float angleX, float angleY, float angleZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x746744D1, camera, angleX, angleY, angleZ);
//     }

//     // SetCamShake | 0x686B6395
//     static Any SET_CAM_SHAKE(int32_t cam, bool a2, int32_t shakeval)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x686B6395, cam, a2, shakeval);
//     }

//     // SetCamSplineCustomSpeedGraph | 0x391B5A76
//     static Any SET_CAM_SPLINE_CUSTOM_SPEED_GRAPH(float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x391B5A76, speed);
//     }

//     // SetCamSplineDuration | 0x4ADB6F79
//     static Any SET_CAM_SPLINE_DURATION(int32_t cam, int32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4ADB6F79, cam, duration);
//     }

//     // SetCamSplineProgress | 0x5A712F63
//     static Any SET_CAM_SPLINE_PROGRESS(int32_t cam, float progress)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A712F63, cam, progress);
//     }

//     // SetCamSplineSpeedConstant | 0x2CF72EB7
//     static Any SET_CAM_SPLINE_SPEED_CONSTANT(int32_t cam, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CF72EB7, cam, set);
//     }

//     // SetCamSplineSpeedGraph | 0x47AC289C
//     static Any SET_CAM_SPLINE_SPEED_GRAPH(int32_t cam, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47AC289C, cam, a2);
//     }

//     // SetCameraAutoScriptActivation | 0x31D53B3D
//     static Any SET_CAMERA_AUTO_SCRIPT_ACTIVATION(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31D53B3D, set);
//     }

//     // SetCameraControlsDisabledWithPlayerControls | 0x3C714F12
//     static Any SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C714F12, value);
//     }

//     // SetDrunkCam | 0x74B90C48
//     static Any SET_DRUNK_CAM(Cam cam, float val, int32_t time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74B90C48, cam, val, time);
//     }

//     // SetFixedCamPos | 0x511A3B01
//     static Any SET_FIXED_CAM_POS(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x511A3B01, x, y, z);
//     }

//     // SetGameCamHeading | 0x45FB5CE1
//     static Any SET_GAME_CAM_HEADING(float heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45FB5CE1, heading);
//     }

//     // SetGameCamPitch | 0x1BC772AC
//     static Any SET_GAME_CAM_PITCH(float pitch)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BC772AC, pitch);
//     }

//     // SetGameCameraControlsActive | 0x57952546
//     static Any SET_GAME_CAMERA_CONTROLS_ACTIVE(bool active)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57952546, active);
//     }

//     // SetGarageLeaveCameraAlone | 0x5BC10979
//     static Any SET_GARAGE_LEAVE_CAMERA_ALONE(int32_t garage, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BC10979, garage, set);
//     }

//     // SetTelescopeCamAngleLimits | 0x6680196B
//     static Any SET_TELESCOPE_CAM_ANGLE_LIMITS(float a1, float a2, float a3, float a4, float a5, float a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6680196B, a1, a2, a3, a4, a5, a6);
//     }

//     // SnapshotCam | 0x34BF456A
//     static Any SNAPSHOT_CAM(int32_t cam, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34BF456A, cam, a2);
//     }

//     // UnattachCam | 0x278305AE
//     static Any UNATTACH_CAM(int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x278305AE, cam);
//     }

//     // UninheritCamRoll | 0x38AD2830
//     static Any UNINHERIT_CAM_ROLL(int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38AD2830, cam);
//     }

//     // UnpointCam | 0x212B4014
//     static Any UNPOINT_CAM(int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x212B4014, cam);
//     }

// } // namespace CAM

// namespace CAR
// {

//     // AddBlipForCar | 0x6D21564D
//     static Any ADD_BLIP_FOR_CAR(Vehicle vehicle, Blip *pBlip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D21564D, vehicle, pBlip);
//     }

//     // AddCarToMissionDeletionList | 0x45E80BF7
//     static Any ADD_CAR_TO_MISSION_DELETION_LIST(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45E80BF7, car);
//     }

//     // AddStuckCarCheckWithWarp | 0x3BCA4ACA
//     static Any ADD_STUCK_CAR_CHECK_WITH_WARP(Car car, float stuckdif, int32_t time, bool flag0, bool flag1, bool flag2, bool flag3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BCA4ACA, car, stuckdif, time, flag0, flag1, flag2, flag3);
//     }

//     // AddUpsidedownCarCheck | 0x557C076C
//     static Any ADD_UPSIDEDOWN_CAR_CHECK(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x557C076C, vehicle);
//     }

//     // AllowPlayerToCarryNonMissionObjects | 0x6A0A724C
//     static Any ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS(Player playerIndex, bool allow)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A0A724C, playerIndex, allow);
//     }

//     // AlwaysUseHeadOnHornAnimWhenDeadInCar | 0x7C156670
//     static Any ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR(Ped ped, bool use)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C156670, ped, use);
//     }

//     // ApplyForceToCar | 0x434611A3
//     static Any APPLY_FORCE_TO_CAR(Vehicle vehicle, uint32_t unknown0_3, float x, float y, float z, float spinX, float spinY, float spinZ, uint32_t unknown4_0, uint32_t unknown5_1, uint32_t unknown6_1, uint32_t unknown7_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x434611A3, vehicle, unknown0_3, x, y, z, spinX, spinY, spinZ, unknown4_0, unknown5_1, unknown6_1, unknown7_1);
//     }

//     // AttachCamToVehicle | 0x5E564CFF
//     static Any ATTACH_CAM_TO_VEHICLE(int32_t cam, Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E564CFF, cam, veh);
//     }

//     // AttachCarToCar | 0x64146142
//     static Any ATTACH_CAR_TO_CAR(Car car0, Car car1, int a3, float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64146142, car0, car1, a3, x0, y0, z0, x1, y1, z1);
//     }

//     // AttachCarToCarPhysically | 0x778F46E3
//     static Any ATTACH_CAR_TO_CAR_PHYSICALLY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x778F46E3);
//     }

//     // AttachCarToObject | 0x61C81E88
//     static Any ATTACH_CAR_TO_OBJECT(Car car, Object obj, float a3, float a4, float a5, float a6, float a7, float a8, float a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61C81E88, car, obj, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // AttachCarToObjectPhysically | 0x32E57C15
//     static Any ATTACH_CAR_TO_OBJECT_PHYSICALLY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32E57C15);
//     }

//     // AttachObjectToCar | 0x7E81412A
//     static Any ATTACH_OBJECT_TO_CAR(Object obj, Vehicle v, uint32_t unknown0_0, float pX, float pY, float pZ, float rX, float rY, float rZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E81412A, obj, v, unknown0_0, pX, pY, pZ, rX, rY, rZ);
//     }

//     // AttachObjectToCarPhysically | 0x161B05A9
//     static Any ATTACH_OBJECT_TO_CAR_PHYSICALLY(Object obj, Car car, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10, Any a11, Any a12, Any a13, Any a14, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x161B05A9, obj, car, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, flag);
//     }

//     // BreakCarDoor | 0x18BD071B
//     static Any BREAK_CAR_DOOR(Vehicle vehicle, uint32_t door, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18BD071B, vehicle, door, unknownFalse);
//     }

//     // BurstCarTyre | 0x690D344F
//     static Any BURST_CAR_TYRE(Vehicle vehicle, uint32_t tyre)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x690D344F, vehicle, tyre);
//     }

//     // CanBeDescribedAsACar | 0x79103802
//     static Any CAN_BE_DESCRIBED_AS_ACAR(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79103802, veh);
//     }

//     // CanRegisterMissionVehicle | 0x200A510B
//     static Any CAN_REGISTER_MISSION_VEHICLE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x200A510B);
//     }

//     // ClearAngledAreaOfCars | 0x7E2A7743
//     static Any CLEAR_ANGLED_AREA_OF_CARS(float x0, float y0, float z0, float x1, float y1, float z1, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E2A7743, x0, y0, z0, x1, y1, z1, radius);
//     }

//     // ClearAreaOfCars | 0x24367E48
//     static Any CLEAR_AREA_OF_CARS(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24367E48, x, y, z, radius);
//     }

//     // ClearCarLastDamageEntity | 0x4D6665F7
//     static Any CLEAR_CAR_LAST_DAMAGE_ENTITY(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D6665F7, vehicle);
//     }

//     // ClearCarLastWeaponDamage | 0x31102E20
//     static Any CLEAR_CAR_LAST_WEAPON_DAMAGE(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31102E20, vehicle);
//     }

//     // ClearPlayerHasDamagedAtLeastOneVehicle | 0x26AA20CF
//     static Any CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_VEHICLE(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26AA20CF, player);
//     }

//     // ClearRoomForCar | 0x5FD24FEA
//     static Any CLEAR_ROOM_FOR_CAR(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FD24FEA, vehicle);
//     }

//     // CloseAllCarDoors | 0x56B8674F
//     static Any CLOSE_ALL_CAR_DOORS(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56B8674F, vehicle);
//     }

//     // ControlCarDoor | 0x194F76D4
//     static Any CONTROL_CAR_DOOR(Vehicle vehicle, uint32_t door, uint32_t unknown_maybe_open, float angle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x194F76D4, vehicle, door, unknown_maybe_open, angle);
//     }

//     // CreateCar | 0x2F1D6843
//     static Any CREATE_CAR(uint32_t nameHash, float x, float y, float z, Vehicle *pVehicle, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F1D6843, nameHash, x, y, z, pVehicle, unknownTrue);
//     }

//     // CreateCarGeneratorWithPlate | 0x1A6E1448
//     static Any CREATE_CAR_GENERATOR_WITH_PLATE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A6E1448);
//     }

//     // CreateEmergencyServicesCar | 0x768B3AC7
//     static Any CREATE_EMERGENCY_SERVICES_CAR(uint32_t model, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x768B3AC7, model, x, y, z);
//     }

//     // CreateEmergencyServicesCarReturnDriver | 0x68251A95
//     static Any CREATE_EMERGENCY_SERVICES_CAR_RETURN_DRIVER(uint32_t model, float x, float y, float z, Car *car, Ped *cardriver, Ped *carpass)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68251A95, model, x, y, z, car, cardriver, carpass);
//     }

//     // CreateEmergencyServicesCarThenWalk | 0x4A3D6D97
//     static Any CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK(uint32_t model, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A3D6D97, model, x, y, z);
//     }

//     // CreateRandomCarForCarPark | 0x36DA42AF
//     static Any CREATE_RANDOM_CAR_FOR_CAR_PARK(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36DA42AF, x, y, z, radius);
//     }

//     // DamageCar | 0x2D2B208A
//     static Any DAMAGE_CAR(Car car, float x, float y, float z, float unkforce0, float unkforce1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D2B208A, car, x, y, z, unkforce0, unkforce1, flag);
//     }

//     // DeleteCar | 0x7F71342D
//     static Any DELETE_CAR(Vehicle *pVehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F71342D, pVehicle);
//     }

//     // DeleteCarGenerator | 0x76E738A3
//     static Any DELETE_CAR_GENERATOR(int32_t handle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76E738A3, handle);
//     }

//     // DetachCar | 0x34CC1F23
//     static Any DETACH_CAR(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34CC1F23, vehicle);
//     }

//     // DisableCarGenerators | 0x581E2306
//     static Any DISABLE_CAR_GENERATORS(bool flag0, bool flag1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x581E2306, flag0, flag1);
//     }

//     // DisablePlayerAutoVehicleExit | 0x50E33E8F
//     static Any DISABLE_PLAYER_AUTO_VEHICLE_EXIT(Ped ped, bool disable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50E33E8F, ped, disable);
//     }

//     // DoesCarHaveRoof | 0x7AE52512
//     static Any DOES_CAR_HAVE_ROOF(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7AE52512, vehicle);
//     }

//     // DoesCarHaveStuckCarCheck | 0x2B856FAA
//     static Any DOES_CAR_HAVE_STUCK_CAR_CHECK(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B856FAA, vehicle);
//     }

//     // DoesVehicleExist | 0x67A42263
//     static Any DOES_VEHICLE_EXIST(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67A42263, vehicle);
//     }

//     // DoesVehicleExistWithNetworkId | 0x69C033D8
//     static Any DOES_VEHICLE_EXIST_WITH_NETWORK_ID(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69C033D8, a1);
//     }

//     // DontSuppressAnyCarModels | 0x69F55DCC
//     static Any DONT_SUPPRESS_ANY_CAR_MODELS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69F55DCC);
//     }

//     // EnableGpsInVehicle | 0x144F3CE5
//     static Any ENABLE_GPS_IN_VEHICLE(Vehicle veh, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x144F3CE5, veh, enable);
//     }

//     // ExplodeCar | 0x505518A2
//     static Any EXPLODE_CAR(Vehicle vehicle, bool unknownTrue, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x505518A2, vehicle, unknownTrue, unknownFalse);
//     }

//     // ExplodeCarInCutsceneShakeAndBit | 0x7CF61A81
//     static Any EXPLODE_CAR_IN_CUTSCENE_SHAKE_AND_BIT(Car car, bool flag0, bool flag1, bool flag2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CF61A81, car, flag0, flag1, flag2);
//     }

//     // ExtinguishCarFire | 0x63A40F58
//     static Any EXTINGUISH_CAR_FIRE(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63A40F58, vehicle);
//     }

//     // FixCar | 0x3D562F78
//     static Any FIX_CAR(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D562F78, vehicle);
//     }

//     // ForceAirDragMultForPlayersCar | 0x554053ED
//     static Any FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR(int32_t player, float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x554053ED, player, multiplier);
//     }

//     // ForceCarLights | 0x71B81DE7
//     static Any FORCE_CAR_LIGHTS(Car car, int32_t lights)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71B81DE7, car, lights);
//     }

//     // ForceGenerateParkedCarsTooCloseToOthers | 0x1B8F031D
//     static Any FORCE_GENERATE_PARKED_CARS_TOO_CLOSE_TO_OTHERS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B8F031D, set);
//     }

//     // ForceRandomCarModel | 0x521D0D5B
//     static Any FORCE_RANDOM_CAR_MODEL(uint32_t hash)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x521D0D5B, hash);
//     }

//     // FreezeCarPosition | 0x295C4C52
//     static Any FREEZE_CAR_POSITION(Vehicle vehicle, bool frozen)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x295C4C52, vehicle, frozen);
//     }

//     // FreezeCarPositionAndDontLoadCollision | 0x588A27FB
//     static Any FREEZE_CAR_POSITION_AND_DONT_LOAD_COLLISION(Vehicle vehicle, bool frozen)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x588A27FB, vehicle, frozen);
//     }

//     // GetBlipInfoIdCarIndex | 0x566D04C2
//     static Any GET_BLIP_INFO_ID_CAR_INDEX(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x566D04C2, blip);
//     }

//     // GetCarAnimCurrentTime | 0x5B580DCC
//     static Any GET_CAR_ANIM_CURRENT_TIME(Car car, char *animname0, char *animname1, float *time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B580DCC, car, animname0, animname1, time);
//     }

//     // GetCarAnimTotalTime | 0x295C34B8
//     static Any GET_CAR_ANIM_TOTAL_TIME(Car car, char *animname0, char *animname1, float *time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x295C34B8, car, animname0, animname1, time);
//     }

//     // GetCarBlockingCar | 0x66B43B06
//     static Any GET_CAR_BLOCKING_CAR(Car car0, Car *car1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66B43B06, car0, car1);
//     }

//     // GetCarColours | 0x6CAC3D62
//     static Any GET_CAR_COLOURS(Vehicle vehicle, ColourIndex *pColour1, ColourIndex *pColour2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CAC3D62, vehicle, pColour1, pColour2);
//     }

//     // GetCarCoordinates | 0x2D432EAB
//     static Any GET_CAR_COORDINATES(Vehicle vehicle, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D432EAB, vehicle, pX, pY, pZ);
//     }

//     // GetCarDeformationAtPos | 0x1F913BC7
//     static Any GET_CAR_DEFORMATION_AT_POS(Vehicle vehicle, float x, float y, float z, rage::vector3 *pDeformation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F913BC7, vehicle, x, y, z, pDeformation);
//     }

//     // GetCarDoorLockStatus | 0x774426C2
//     static Any GET_CAR_DOOR_LOCK_STATUS(Vehicle vehicle, uint32_t *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x774426C2, vehicle, pValue);
//     }

//     // GetCarForwardVector | 0x7E4F49B5
//     static Any GET_CAR_FORWARD_VECTOR(Car car, rage::vector3 *vec)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E4F49B5, car, vec);
//     }

//     // GetCarForwardX | 0x47A21100
//     static Any GET_CAR_FORWARD_X(Vehicle vehicle, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47A21100, vehicle, pValue);
//     }

//     // GetCarForwardY | 0x3BDB4496
//     static Any GET_CAR_FORWARD_Y(Vehicle vehicle, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BDB4496, vehicle, pValue);
//     }

//     // GetCarHeading | 0x46803CFA
//     static Any GET_CAR_HEADING(Vehicle vehicle, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46803CFA, vehicle, pValue);
//     }

//     // GetCarHealth | 0x4D417CD3
//     static Any GET_CAR_HEALTH(Vehicle vehicle, uint32_t *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D417CD3, vehicle, pValue);
//     }

//     // GetCarLivery | 0x10237666
//     static Any GET_CAR_LIVERY(Car car, int32_t *livery)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10237666, car, livery);
//     }

//     // GetCarMass | 0x5D7C4F08
//     static Any GET_CAR_MASS(Car car, float *mass)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D7C4F08, car, mass);
//     }

//     // GetCarModel | 0x5FF84497
//     static Any GET_CAR_MODEL(Vehicle vehicle, uint32_t *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FF84497, vehicle, pValue);
//     }

//     // GetCarModelValue | 0x29D37792
//     static Any GET_CAR_MODEL_VALUE(Car car, int32_t *value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29D37792, car, value);
//     }

//     // GetCarObjectIsAttachedTo | 0x2D215414
//     static Any GET_CAR_OBJECT_IS_ATTACHED_TO(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D215414, obj);
//     }

//     // GetCarPitch | 0x61EE5C9A
//     static Any GET_CAR_PITCH(Vehicle vehicle, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61EE5C9A, vehicle, pValue);
//     }

//     // GetCarSpeed | 0x16DD2D00
//     static Any GET_CAR_SPEED(Vehicle vehicle, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x16DD2D00, vehicle, pValue);
//     }

//     // GetCarSpeedVector | 0x112E7FB1
//     static Any GET_CAR_SPEED_VECTOR(Vehicle vehicle, rage::vector3 *pVector, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x112E7FB1, vehicle, pVector, unknownFalse);
//     }

//     // GetCarUprightValue | 0x326E2886
//     static Any GET_CAR_UPRIGHT_VALUE(Vehicle vehicle, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x326E2886, vehicle, pValue);
//     }

//     // GetClosestCar | 0x2CB303F8
//     static Any GET_CLOSEST_CAR(float x, float y, float z, float radius, bool unknownFalse, uint32_t unknown70)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CB303F8, x, y, z, radius, unknownFalse, unknown70);
//     }

//     // GetClosestCarNode | 0x27F87222
//     static Any GET_CLOSEST_CAR_NODE(float x, float y, float z, float *pResX, float *pResY, float *pResZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27F87222, x, y, z, pResX, pResY, pResZ);
//     }

//     // GetClosestCarNodeFavourDirection | 0x2F2405D1
//     static Any GET_CLOSEST_CAR_NODE_FAVOUR_DIRECTION(int a1, float x, float y, float z, float *pX, float *pY, float *pZ, float *heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F2405D1, a1, x, y, z, pX, pY, pZ, heading);
//     }

//     // GetClosestCarNodeWithHeading | 0x371467E0
//     static Any GET_CLOSEST_CAR_NODE_WITH_HEADING(float x, float y, float z, float *pResX, float *pResY, float *pResZ, float *pHeading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x371467E0, x, y, z, pResX, pResY, pResZ, pHeading);
//     }

//     // GetClosestMajorCarNode | 0x406A035E
//     static Any GET_CLOSEST_MAJOR_CAR_NODE(float x, float y, float z, float *pResX, float *pResY, float *pResZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x406A035E, x, y, z, pResX, pResY, pResZ);
//     }

//     // GetCurrentBasicPoliceCarModel | 0x76901A85
//     static Any GET_CURRENT_BASIC_POLICE_CAR_MODEL(uint32_t *pModel)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76901A85, pModel);
//     }

//     // GetCurrentPlaybackNumberForCar | 0x678813A4
//     static Any GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x678813A4, car);
//     }

//     // GetCurrentPoliceCarModel | 0x20A53B7F
//     static Any GET_CURRENT_POLICE_CAR_MODEL(uint32_t *pModel)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20A53B7F, pModel);
//     }

//     // GetCurrentTaxiCarModel | 0x1D6D767E
//     static Any GET_CURRENT_TAXI_CAR_MODEL(uint32_t *pModel)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D6D767E, pModel);
//     }

//     // GetDeadCarCoordinates | 0x3BC827E6
//     static Any GET_DEAD_CAR_COORDINATES(Vehicle vehicle, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BC827E6, vehicle, pX, pY, pZ);
//     }

//     // GetDisplayNameFromVehicleModel | 0x404E0056
//     static Any GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x404E0056, model);
//     }

//     // GetDriverOfCar | 0x22457083
//     static Any GET_DRIVER_OF_CAR(Vehicle vehicle, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22457083, vehicle, pPed);
//     }

//     // GetExtraCarColours | 0x25B87BCA
//     static Any GET_EXTRA_CAR_COLOURS(Vehicle vehicle, ColourIndex *pColour1, ColourIndex *pColour2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25B87BCA, vehicle, pColour1, pColour2);
//     }

//     // GetFollowVehicleCamSubmode | 0x4C7B7A29
//     static Any GET_FOLLOW_VEHICLE_CAM_SUBMODE(int32_t *mode)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C7B7A29, mode);
//     }

//     // GetHeightOfVehicle | 0x5FAD09CA
//     static Any GET_HEIGHT_OF_VEHICLE(Vehicle vehicle, float x, float y, float z, bool unknownTrue1, bool unknownTrue2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FAD09CA, vehicle, x, y, z, unknownTrue1, unknownTrue2);
//     }

//     // GetInteriorFromCar | 0x25714BE4
//     static Any GET_INTERIOR_FROM_CAR(Vehicle vehicle, Interior *pInterior)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25714BE4, vehicle, pInterior);
//     }

//     // GetIsStickyBombStuckToVehicle | 0x29BF0233
//     static Any GET_IS_STICKY_BOMB_STUCK_TO_VEHICLE(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29BF0233, veh);
//     }

//     // GetModelNameOfCarForDebugOnly | 0x18062DA6
//     static Any GET_MODEL_NAME_OF_CAR_FOR_DEBUG_ONLY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18062DA6);
//     }

//     // GetNearestCableCar | 0x7F3A0E22
//     static Any GET_NEAREST_CABLE_CAR(float x, float y, float z, float radius, Vehicle *pVehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F3A0E22, x, y, z, radius, pVehicle);
//     }

//     // GetNetworkIdFromVehicle | 0x1BC70617
//     static Any GET_NETWORK_ID_FROM_VEHICLE(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BC70617, a1, a2);
//     }

//     // GetNextClosestCarNode | 0x5935382A
//     static Any GET_NEXT_CLOSEST_CAR_NODE(float x, float y, float z, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5935382A, x, y, z, pX, pY, pZ);
//     }

//     // GetNextClosestCarNodeFavourDirection | 0x6E3906E4
//     static Any GET_NEXT_CLOSEST_CAR_NODE_FAVOUR_DIRECTION(float x, float y, float z, float *pX, float *pY, float *pZ, float *direction)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E3906E4, x, y, z, pX, pY, pZ, direction);
//     }

//     // GetNextClosestCarNodeWithHeading | 0x3D7A673F
//     static Any GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING(float x, float y, float z, float *pX, float *pY, float *pZ, float *heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D7A673F, x, y, z, pX, pY, pZ, heading);
//     }

//     // GetNextClosestCarNodeWithHeadingOnIsland | 0x320E1E3B
//     static Any GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND(float x, float y, float z, float *pX, float *pY, float *pZ, float *heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x320E1E3B, x, y, z, pX, pY, pZ, heading);
//     }

//     // GetNoLawVehiclesDestroyedByLocalPlayer | 0x63C50673
//     static Any GET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63C50673);
//     }

//     // GetNthClosestCarNode | 0x740912C2
//     static Any GET_NTH_CLOSEST_CAR_NODE(float x, float y, float z, int32_t n, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x740912C2, x, y, z, n, pX, pY, pZ);
//     }

//     // GetNthClosestCarNodeFavourDirection | 0x6F766824
//     static Any GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION(int a1, float x, float y, float z, int32_t n, float *pX, float *pY, float *pZ, float *direction)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6F766824, a1, x, y, z, n, pX, pY, pZ, direction);
//     }

//     // GetNthClosestCarNodeWithHeading | 0x1F6B3FF0
//     static Any GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING(float x, float y, float z, uint32_t nodeNum, float *pResX, float *pResY, float *pResZ, float *pHeading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F6B3FF0, x, y, z, nodeNum, pResX, pResY, pResZ, pHeading);
//     }

//     // GetNthClosestCarNodeWithHeadingOnIsland | 0x59DB1AD1
//     static Any GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND(float x, float y, float z, uint32_t nodeNum, uint32_t areaId, float *pResX, float *pResY, float *pResZ, float *pHeading, uint32_t *pUnknownMaybeAreaId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59DB1AD1, x, y, z, nodeNum, areaId, pResX, pResY, pResZ, pHeading, pUnknownMaybeAreaId);
//     }

//     // GetNumCarColours | 0x5AA025C2
//     static Any GET_NUM_CAR_COLOURS(Vehicle vehicle, uint32_t *pNumColours)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AA025C2, vehicle, pNumColours);
//     }

//     // GetNumberOfStickyBombsStuckToVehicle | 0x285D1184
//     static Any GET_NUMBER_OF_STICKY_BOMBS_STUCK_TO_VEHICLE(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x285D1184, veh);
//     }

//     // GetOffsetFromCarGivenWorldCoords | 0x373B213C
//     static Any GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS(Vehicle vehicle, float x, float y, float z, float *pOffX, float *pOffY, float *pOffZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x373B213C, vehicle, x, y, z, pOffX, pOffY, pOffZ);
//     }

//     // GetOffsetFromCarInWorldCoords | 0x7F8D3DD9
//     static Any GET_OFFSET_FROM_CAR_IN_WORLD_COORDS(Vehicle vehicle, float x, float y, float z, float *pOffX, float *pOffY, float *pOffZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F8D3DD9, vehicle, x, y, z, pOffX, pOffY, pOffZ);
//     }

//     // GetOffsetsForAttachCarToCar | 0x2CAD4E39
//     static Any GET_OFFSETS_FOR_ATTACH_CAR_TO_CAR(Car car0, Car car1, rage::vector3 *a3, rage::vector3 *a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CAD4E39, car0, car1, a3, a4);
//     }

//     // GetPlaneUndercarriagePosition | 0x353F0568
//     static Any GET_PLANE_UNDERCARRIAGE_POSITION(Vehicle plane, float *pos)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x353F0568, plane, pos);
//     }

//     // GetPlayerToPlaceBombInCar | 0x17572318
//     static Any GET_PLAYER_TO_PLACE_BOMB_IN_CAR(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17572318, vehicle);
//     }

//     // GetPlayersLastCarNoSave | 0x12067E8D
//     static Any GET_PLAYERS_LAST_CAR_NO_SAVE(Vehicle *pVehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12067E8D, pVehicle);
//     }

//     // GetRandomCarBackBumperInSphere | 0x2C37408C
//     static Any GET_RANDOM_CAR_BACK_BUMPER_IN_SPHERE(float x, float y, float z, float radius, int a5, int a6, Vehicle *veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C37408C, x, y, z, radius, a5, a6, veh);
//     }

//     // GetRandomCarFrontBumperInSphereNoSave | 0x13C91ACD
//     static Any GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE(float x, float y, float z, float radius, bool flag0, bool flag1, int32_t *handle, bool flag2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13C91ACD, x, y, z, radius, flag0, flag1, handle, flag2);
//     }

//     // GetRandomCarInSphere | 0x528F5EA7
//     static Any GET_RANDOM_CAR_IN_SPHERE(float x, float y, float z, float radius, uint32_t model, int32_t unk, Car *car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x528F5EA7, x, y, z, radius, model, unk, car);
//     }

//     // GetRandomCarModelInMemory | 0x195C13BC
//     static Any GET_RANDOM_CAR_MODEL_IN_MEMORY(bool MustIncludeSpecialModels, uint32_t *pHash, int32_t *pErrorId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x195C13BC, MustIncludeSpecialModels, pHash, pErrorId);
//     }

//     // GetRandomCarNode | 0x588E1506
//     static Any GET_RANDOM_CAR_NODE(float x, float y, float z, float radius, bool flag0, bool flag1, bool flag2, float *pX, float *pY, float *pZ, float *heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x588E1506, x, y, z, radius, flag0, flag1, flag2, pX, pY, pZ, heading);
//     }

//     // GetRandomCarNodeIncludeSwitchedOffNodes | 0x2D1A5F8C
//     static Any GET_RANDOM_CAR_NODE_INCLUDE_SWITCHED_OFF_NODES(float x, float y, float z, float radius, bool flag0, bool flag1, bool flag2, float *pX, float *pY, float *pZ, float *heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D1A5F8C, x, y, z, radius, flag0, flag1, flag2, pX, pY, pZ, heading);
//     }

//     // GetRandomCarOfTypeInAngledAreaNoSave | 0x6D4746D8
//     static Any GET_RANDOM_CAR_OF_TYPE_IN_ANGLED_AREA_NO_SAVE(float a1, float a2, float a3, float a4, float a5, uint32_t type, Car *car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D4746D8, a1, a2, a3, a4, a5, type, car);
//     }

//     // GetRandomCarOfTypeInAreaNoSave | 0x74AF54F0
//     static Any GET_RANDOM_CAR_OF_TYPE_IN_AREA_NO_SAVE(float x0, float y0, float x1, float y1, uint32_t model, Car *car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74AF54F0, x0, y0, x1, y1, model, car);
//     }

//     // GetRemoteControlledCar | 0x311926C6
//     static Any GET_REMOTE_CONTROLLED_CAR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x311926C6);
//     }

//     // GetSpawnCoordinatesForCarNode | 0x5B386B6C
//     static Any GET_SPAWN_COORDINATES_FOR_CAR_NODE(Any a1, Any a2, Any a3, Any a4, Any a5, Any a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B386B6C, a1, a2, a3, a4, a5, a6);
//     }

//     // GetTimeSincePlayerHitCar | 0x58C01823
//     static Any GET_TIME_SINCE_PLAYER_HIT_CAR(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58C01823, playerIndex);
//     }

//     // GetTotalDurationOfCarRecording | 0x5F8C3937
//     static Any GET_TOTAL_DURATION_OF_CAR_RECORDING(int32_t CarRec)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F8C3937, CarRec);
//     }

//     // GetTrainCarriage | 0x7F861E46
//     static Any GET_TRAIN_CARRIAGE(Vehicle train, int32_t num, Vehicle *carriage)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F861E46, train, num, carriage);
//     }

//     // GetVehicleClass | 0x6F796702
//     static Any GET_VEHICLE_CLASS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6F796702);
//     }

//     // GetVehicleComponentInfo | 0x3B5D0F27
//     static Any GET_VEHICLE_COMPONENT_INFO(Vehicle veh, int32_t component_id, rage::vector3 *a3, rage::vector3 *a4, int32_t *a5, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B5D0F27, veh, component_id, a3, a4, a5, flag);
//     }

//     // GetVehicleDirtLevel | 0x571152F5
//     static Any GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float *pIntensity)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x571152F5, vehicle, pIntensity);
//     }

//     // GetVehicleEngineRevs | 0x2FFA0249
//     static Any GET_VEHICLE_ENGINE_REVS(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FFA0249, veh);
//     }

//     // GetVehicleFromNetworkId | 0x794E4A82
//     static Any GET_VEHICLE_FROM_NETWORK_ID(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x794E4A82, a1, a2);
//     }

//     // GetVehicleGear | 0x2D2F452D
//     static Any GET_VEHICLE_GEAR(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D2F452D, veh);
//     }

//     // GetVehicleModelFromIndex | 0x7E5C70BF
//     static Any GET_VEHICLE_MODEL_FROM_INDEX(int32_t index)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E5C70BF, index);
//     }

//     // GetVehiclePlayerWouldEnter | 0x20430265
//     static Any GET_VEHICLE_PLAYER_WOULD_ENTER(int32_t player, Vehicle *veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20430265, player, veh);
//     }

//     // GetVehicleQuaternion | 0x6C5871D6
//     static Any GET_VEHICLE_QUATERNION(Vehicle veh, float *a2, float *a3, float *a4, float *a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C5871D6, veh, a2, a3, a4, a5);
//     }

//     // GetVehicleTypeOfModel | 0x60F720F6
//     static Any GET_VEHICLE_TYPE_OF_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60F720F6, model);
//     }

//     // HandVehicleControlBackToPlayer | 0x6C654678
//     static Any HAND_VEHICLE_CONTROL_BACK_TO_PLAYER(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C654678, veh);
//     }

//     // HasCarBeenDamagedByCar | 0x119A668D
//     static Any HAS_CAR_BEEN_DAMAGED_BY_CAR(Vehicle vehicle, Vehicle otherCar)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x119A668D, vehicle, otherCar);
//     }

//     // HasCarBeenResprayed | 0x3D0432F2
//     static Any HAS_CAR_BEEN_RESPRAYED(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D0432F2, vehicle);
//     }

//     // HasCarRecordingBeenLoaded | 0x453F587D
//     static Any HAS_CAR_RECORDING_BEEN_LOADED(int32_t CarRec)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x453F587D, CarRec);
//     }

//     // HasClosestObjectOfTypeBeenDamagedByCar | 0x4D6B3E20
//     static Any HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CAR(float x, float y, float z, float radius, uint32_t type_or_model, Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D6B3E20, x, y, z, radius, type_or_model, car);
//     }

//     // HasObjectBeenDamagedByCar | 0x50801274
//     static Any HAS_OBJECT_BEEN_DAMAGED_BY_CAR(Object obj, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50801274, obj, vehicle);
//     }

//     // HasPlayerDamagedAtLeastOneVehicle | 0x674849B5
//     static Any HAS_PLAYER_DAMAGED_AT_LEAST_ONE_VEHICLE(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x674849B5, playerIndex);
//     }

//     // IsBigVehicle | 0x60305168
//     static Any IS_BIG_VEHICLE(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60305168, vehicle);
//     }

//     // IsCarAMissionCar | 0x7A422E14
//     static Any IS_CAR_AMISSION_CAR(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A422E14, vehicle);
//     }

//     // IsCarAttached | 0x6BDC40EB
//     static Any IS_CAR_ATTACHED(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6BDC40EB, vehicle);
//     }

//     // IsCarDead | 0x2AAB340A
//     static Any IS_CAR_DEAD(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2AAB340A, vehicle);
//     }

//     // IsCarDoorDamaged | 0x5AFE791F
//     static Any IS_CAR_DOOR_DAMAGED(Vehicle vehicle, uint32_t door)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AFE791F, vehicle, door);
//     }

//     // IsCarDoorFullyOpen | 0x55444602
//     static Any IS_CAR_DOOR_FULLY_OPEN(Vehicle vehicle, uint32_t door)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55444602, vehicle, door);
//     }

//     // IsCarHealthGreater | 0x63F07A46
//     static Any IS_CAR_HEALTH_GREATER(Car car, float health)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63F07A46, car, health);
//     }

//     // IsCarInAirProper | 0x37BF18AC
//     static Any IS_CAR_IN_AIR_PROPER(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37BF18AC, vehicle);
//     }

//     // IsCarInAngledArea2d | 0x74290BCB
//     static Any IS_CAR_IN_ANGLED_AREA2D()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74290BCB);
//     }

//     // IsCarInAngledArea3d | 0x3521612F
//     static Any IS_CAR_IN_ANGLED_AREA3D()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3521612F);
//     }

//     // IsCarInArea2d | 0x7EA03481
//     static Any IS_CAR_IN_AREA2D(Vehicle vehicle, float x1, float y1, float x2, float y2, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EA03481, vehicle, x1, y1, x2, y2, unknownFalse);
//     }

//     // IsCarInArea3d | 0x289D3888
//     static Any IS_CAR_IN_AREA3D(Vehicle vehicle, float x1, float y1, float z1, float x2, float y2, float z2, uint32_t unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x289D3888, vehicle, x1, y1, z1, x2, y2, z2, unknownFalse);
//     }

//     // IsCarLowRider | 0x6B3D5D45
//     static Any IS_CAR_LOW_RIDER(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B3D5D45, car);
//     }

//     // IsCarOnFire | 0x189A2BB1
//     static Any IS_CAR_ON_FIRE(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x189A2BB1, vehicle);
//     }

//     // IsCarOnScreen | 0x59E3553F
//     static Any IS_CAR_ON_SCREEN(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59E3553F, vehicle);
//     }

//     // IsCarPassengerSeatFree | 0x1BDA0DA5
//     static Any IS_CAR_PASSENGER_SEAT_FREE(Vehicle vehicle, uint32_t seatIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BDA0DA5, vehicle, seatIndex);
//     }

//     // IsCarPlayingAnim | 0x49F619F1
//     static Any IS_CAR_PLAYING_ANIM(Car car, char *animname0, char *animname1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49F619F1, car, animname0, animname1);
//     }

//     // IsCarSirenOn | 0x129A1569
//     static Any IS_CAR_SIREN_ON(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x129A1569, vehicle);
//     }

//     // IsCarStreetRacer | 0x24DF32CC
//     static Any IS_CAR_STREET_RACER(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24DF32CC, car);
//     }

//     // IsCarStuckOnRoof | 0x46892D07
//     static Any IS_CAR_STUCK_ON_ROOF(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46892D07, vehicle);
//     }

//     // IsCarTouchingCar | 0x7B014306
//     static Any IS_CAR_TOUCHING_CAR(Vehicle vehicle, Vehicle otherCar)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B014306, vehicle, otherCar);
//     }

//     // IsCarTyreBurst | 0x1DF623F9
//     static Any IS_CAR_TYRE_BURST(Vehicle vehicle, uint32_t tyre)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DF623F9, vehicle, tyre);
//     }

//     // IsCarUpright | 0x1A212500
//     static Any IS_CAR_UPRIGHT(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A212500, vehicle);
//     }

//     // IsCarUpsidedown | 0x2E291239
//     static Any IS_CAR_UPSIDEDOWN(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E291239, vehicle);
//     }

//     // IsCarWaitingForWorldCollision | 0x6EA72622
//     static Any IS_CAR_WAITING_FOR_WORLD_COLLISION(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6EA72622, vehicle);
//     }

//     // IsCopVehicleInArea3dNoSave | 0x72F81072
//     static Any IS_COP_VEHICLE_IN_AREA3D_NO_SAVE(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72F81072, x0, y0, z0, x1, y1, z1);
//     }

//     // IsEmergencyServicesVehicle | 0x6AFF0587
//     static Any IS_EMERGENCY_SERVICES_VEHICLE(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6AFF0587, veh);
//     }

//     // IsFollowVehicleCamOffsetActive | 0x40072120
//     static Any IS_FOLLOW_VEHICLE_CAM_OFFSET_ACTIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40072120);
//     }

//     // IsInCarFireButtonPressed | 0x63B70F7C
//     static Any IS_IN_CAR_FIRE_BUTTON_PRESSED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63B70F7C);
//     }

//     // IsMemoryCardInUse | 0x38F61531
//     static Any IS_MEMORY_CARD_IN_USE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38F61531);
//     }

//     // IsOurPlayerHigherPriorityForCarGeneration | 0x504E03FC
//     static Any IS_OUR_PLAYER_HIGHER_PRIORITY_FOR_CAR_GENERATION(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x504E03FC, a1);
//     }

//     // IsPlaceCarBombActive | 0x775F6665
//     static Any IS_PLACE_CAR_BOMB_ACTIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x775F6665);
//     }

//     // IsPlaybackGoingOnForCar | 0x375F145D
//     static Any IS_PLAYBACK_GOING_ON_FOR_CAR(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x375F145D, car);
//     }

//     // IsPlayerVehicleEntryDisabled | 0x4908091D
//     static Any IS_PLAYER_VEHICLE_ENTRY_DISABLED(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4908091D, player);
//     }

//     // IsThisModelACar | 0x6EA92FD5
//     static Any IS_THIS_MODEL_ACAR(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6EA92FD5, model);
//     }

//     // IsThisModelAVehicle | 0x62BC0AEE
//     static Any IS_THIS_MODEL_AVEHICLE(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62BC0AEE, model);
//     }

//     // IsVehicleExtraTurnedOn | 0x4B920E81
//     static Any IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, uint32_t extra)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B920E81, vehicle, extra);
//     }

//     // IsVehicleOnAllWheels | 0x4D460265
//     static Any IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D460265, vehicle);
//     }

//     // IsVehicleOnPlayerMachine | 0x2CFE78F5
//     static Any IS_VEHICLE_ON_PLAYER_MACHINE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CFE78F5);
//     }

//     // LocateCar2d | 0x36F70AF6
//     static Any LOCATE_CAR2D(Car car, float x0, float y0, float xUnk, float yUnk, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36F70AF6, car, x0, y0, xUnk, yUnk, flag);
//     }

//     // LocateCar3d | 0x2A221E97
//     static Any LOCATE_CAR3D(Car car, float x, float y, float z, float xa, float ya, float za, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A221E97, car, x, y, z, xa, ya, za, flag);
//     }

//     // LocateDeadCar3d | 0x584D0C79
//     static Any LOCATE_DEAD_CAR3D(Car car, float x, float y, float z, float xa, float ya, float za, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x584D0C79, car, x, y, z, xa, ya, za, flag);
//     }

//     // LockCarDoors | 0x6702757C
//     static Any LOCK_CAR_DOORS(Vehicle vehicle, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6702757C, vehicle, value);
//     }

//     // MarkCarAsConvoyCar | 0x79274447
//     static Any MARK_CAR_AS_CONVOY_CAR(Vehicle vehicle, bool convoyCar)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79274447, vehicle, convoyCar);
//     }

//     // MarkCarAsNoLongerNeeded | 0x20C76FD1
//     static Any MARK_CAR_AS_NO_LONGER_NEEDED(Vehicle *pVehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20C76FD1, pVehicle);
//     }

//     // NetworkDisplayHostGamerCard | 0x414E4E7F
//     static Any NETWORK_DISPLAY_HOST_GAMER_CARD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x414E4E7F);
//     }

//     // OpenCarDoor | 0x1E352CEF
//     static Any OPEN_CAR_DOOR(Vehicle vehicle, uint32_t door)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E352CEF, vehicle, door);
//     }

//     // OverrideNumberOfParkedCars | 0x7F483739
//     static Any OVERRIDE_NUMBER_OF_PARKED_CARS(int32_t num)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F483739, num);
//     }

//     // PausePlaybackRecordedCar | 0x24256EFB
//     static Any PAUSE_PLAYBACK_RECORDED_CAR(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24256EFB, car);
//     }

//     // PlaceObjectRelativeToCar | 0x21DE7496
//     static Any PLACE_OBJECT_RELATIVE_TO_CAR(Object obj, Car car, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21DE7496, obj, car, x, y, z);
//     }

//     // PlayAudioEventFromVehicle | 0x2F4B2A8B
//     static Any PLAY_AUDIO_EVENT_FROM_VEHICLE(char *name, Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F4B2A8B, name, veh);
//     }

//     // PlaySoundFromVehicle | 0x763274B7
//     static Any PLAY_SOUND_FROM_VEHICLE(int32_t SoundId, char *SoundName, Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x763274B7, SoundId, SoundName, veh);
//     }

//     // PointCamAtVehicle | 0x69F02BA0
//     static Any POINT_CAM_AT_VEHICLE(int32_t cam, Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69F02BA0, cam, veh);
//     }

//     // PointFixedCamAtVehicle | 0x52FF28DF
//     static Any POINT_FIXED_CAM_AT_VEHICLE(Vehicle veh, int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52FF28DF, veh, cam);
//     }

//     // PopCarBoot | 0x3C78449F
//     static Any POP_CAR_BOOT(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C78449F, vehicle);
//     }

//     // RemoveCarRecording | 0x484964FE
//     static Any REMOVE_CAR_RECORDING(int32_t CarRec)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x484964FE, CarRec);
//     }

//     // RemoveCarsFromGeneratorsInArea | 0x2BEE5F97
//     static Any REMOVE_CARS_FROM_GENERATORS_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BEE5F97, x0, y0, z0, x1, y1, z1);
//     }

//     // RemovePtfxFromVehicle | 0x3FB14EC5
//     static Any REMOVE_PTFX_FROM_VEHICLE(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FB14EC5, veh);
//     }

//     // RemoveStuckCarCheck | 0x213308DB
//     static Any REMOVE_STUCK_CAR_CHECK(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x213308DB, vehicle);
//     }

//     // RemoveUpsidedownCarCheck | 0x6A1244E9
//     static Any REMOVE_UPSIDEDOWN_CAR_CHECK(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A1244E9, vehicle);
//     }

//     // ReserveNetworkMissionVehicles | 0x15652DC1
//     static Any RESERVE_NETWORK_MISSION_VEHICLES(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15652DC1, a1);
//     }

//     // ReserveNetworkMissionVehiclesForHost | 0x3E9C7CD3
//     static Any RESERVE_NETWORK_MISSION_VEHICLES_FOR_HOST(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E9C7CD3, a1);
//     }

//     // ResetCarWheels | 0x78CE659D
//     static Any RESET_CAR_WHEELS(Car car, bool reset)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78CE659D, car, reset);
//     }

//     // ResetNoLawVehiclesDestroyedByLocalPlayer | 0x63615A6D
//     static Any RESET_NO_LAW_VEHICLES_DESTROYED_BY_LOCAL_PLAYER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63615A6D);
//     }

//     // SelectWeaponsForVehicle | 0x7AD71A55
//     static Any SELECT_WEAPONS_FOR_VEHICLE(Vehicle veh, int32_t weapon)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7AD71A55, veh, weapon);
//     }

//     // SetAllCarGeneratorsBackToActive | 0x399E1A43
//     static Any SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x399E1A43);
//     }

//     // SetAllCarsCanBeDamaged | 0x3EA5269D
//     static Any SET_ALL_CARS_CAN_BE_DAMAGED(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3EA5269D, set);
//     }

//     // SetAllPickupsOfTypeCollectableByCar | 0x54B054D0
//     static Any SET_ALL_PICKUPS_OF_TYPE_COLLECTABLE_BY_CAR(int32_t pickuptype, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x54B054D0, pickuptype, set);
//     }

//     // SetCamInheritRollVehicle | 0x51AD2993
//     static Any SET_CAM_INHERIT_ROLL_VEHICLE(int32_t cam, Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51AD2993, cam, veh);
//     }

//     // SetCanBurstCarTyres | 0x24DE2039
//     static Any SET_CAN_BURST_CAR_TYRES(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24DE2039, car, set);
//     }

//     // SetCanResprayCar | 0x76A2739D
//     static Any SET_CAN_RESPRAY_CAR(Car car, bool can)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76A2739D, car, can);
//     }

//     // SetCarAllowedToDrown | 0x31026CE0
//     static Any SET_CAR_ALLOWED_TO_DROWN(Car car, bool allowed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31026CE0, car, allowed);
//     }

//     // SetCarAnimSpeed | 0x74CD7D1F
//     static Any SET_CAR_ANIM_SPEED(Car car, char *animname0, char *animname1, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74CD7D1F, car, animname0, animname1, speed);
//     }

//     // SetCarAsMissionCar | 0x210A33B2
//     static Any SET_CAR_AS_MISSION_CAR(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x210A33B2, car);
//     }

//     // SetCarCanBeDamaged | 0x394E733E
//     static Any SET_CAR_CAN_BE_DAMAGED(Vehicle vehicle, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x394E733E, vehicle, value);
//     }

//     // SetCarCanBeVisiblyDamaged | 0x4727446B
//     static Any SET_CAR_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4727446B, vehicle, value);
//     }

//     // SetCarCollision | 0x6A9033B3
//     static Any SET_CAR_COLLISION(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A9033B3, car, set);
//     }

//     // SetCarCoordinates | 0x567B6C56
//     static Any SET_CAR_COORDINATES(Vehicle vehicle, float pX, float pY, float pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x567B6C56, vehicle, pX, pY, pZ);
//     }

//     // SetCarCoordinatesNoOffset | 0x12D64378
//     static Any SET_CAR_COORDINATES_NO_OFFSET(Car car, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12D64378, car, x, y, z);
//     }

//     // SetCarExistsOnAllMachines | 0x7BAC73DF
//     static Any SET_CAR_EXISTS_ON_ALL_MACHINES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BAC73DF);
//     }

//     // SetCarForwardSpeed | 0x65BB0060
//     static Any SET_CAR_FORWARD_SPEED(Vehicle vehicle, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65BB0060, vehicle, speed);
//     }

//     // SetCarFovFadeMult | 0x5EEE6ADB
//     static Any SET_CAR_FOV_FADE_MULT(float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5EEE6ADB, multiplier);
//     }

//     // SetCarFovMax | 0x3FBF13BD
//     static Any SET_CAR_FOV_MAX(float maxfov)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FBF13BD, maxfov);
//     }

//     // SetCarFovRate | 0x536B4F4A
//     static Any SET_CAR_FOV_RATE(float rate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x536B4F4A, rate);
//     }

//     // SetCarFovStartSpeed | 0x3CF41D47
//     static Any SET_CAR_FOV_START_SPEED(float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CF41D47, speed);
//     }

//     // SetCarFovStartSpeedBoat | 0x40FC5520
//     static Any SET_CAR_FOV_START_SPEED_BOAT(float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40FC5520, speed);
//     }

//     // SetCarGeneratorsActiveInArea | 0x69CE154F
//     static Any SET_CAR_GENERATORS_ACTIVE_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69CE154F, x0, y0, z0, x1, y1, z1, set);
//     }

//     // SetCarHeading | 0x75E40528
//     static Any SET_CAR_HEADING(Vehicle vehicle, float dir)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75E40528, vehicle, dir);
//     }

//     // SetCarHealth | 0x49B6525C
//     static Any SET_CAR_HEALTH(Vehicle vehicle, uint32_t Value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49B6525C, vehicle, Value);
//     }

//     // SetCarInCutscene | 0x32593711
//     static Any SET_CAR_IN_CUTSCENE(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32593711, car, set);
//     }

//     // SetCarLaneShift | 0x10FD2442
//     static Any SET_CAR_LANE_SHIFT(Car car, float shift)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10FD2442, car, shift);
//     }

//     // SetCarLightMultiplier | 0x74824ADA
//     static Any SET_CAR_LIGHT_MULTIPLIER(Car car, float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74824ADA, car, multiplier);
//     }

//     // SetCarLivery | 0x2E9E149D
//     static Any SET_CAR_LIVERY(Car car, int32_t livery)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E9E149D, car, livery);
//     }

//     // SetCarMotionBlurEffectBoat | 0x7D106167
//     static Any SET_CAR_MOTION_BLUR_EFFECT_BOAT(float blur)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D106167, blur);
//     }

//     // SetCarNotDamagedByRelationshipGroup | 0x3AAD447A
//     static Any SET_CAR_NOT_DAMAGED_BY_RELATIONSHIP_GROUP(Car car, bool set, int32_t group)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3AAD447A, car, set, group);
//     }

//     // SetCarOnlyDamagedByPlayer | 0x2880077C
//     static Any SET_CAR_ONLY_DAMAGED_BY_PLAYER(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2880077C, car, set);
//     }

//     // SetCarOnlyDamagedByRelationshipGroup | 0x783F287A
//     static Any SET_CAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Car car, bool set, int32_t group)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x783F287A, car, set, group);
//     }

//     // SetCarProofs | 0x137C35BA
//     static Any SET_CAR_PROOFS(Vehicle vehicle, bool bulletProof, bool fireProof, bool explosionProof, bool collisionProof, bool meleeProof)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x137C35BA, vehicle, bulletProof, fireProof, explosionProof, collisionProof, meleeProof);
//     }

//     // SetCarRandomRouteSeed | 0x19D302AE
//     static Any SET_CAR_RANDOM_ROUTE_SEED(Car car, int32_t seed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19D302AE, car, seed);
//     }

//     // SetCarStayInFastLane | 0x5EAD47E8
//     static Any SET_CAR_STAY_IN_FAST_LANE(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5EAD47E8, car, set);
//     }

//     // SetCarStayInSlowLane | 0x1B8B3973
//     static Any SET_CAR_STAY_IN_SLOW_LANE(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B8B3973, car, set);
//     }

//     // SetCarStopCloning | 0x407371FF
//     static Any SET_CAR_STOP_CLONING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x407371FF);
//     }

//     // SetCarStrong | 0x61F40670
//     static Any SET_CAR_STRONG(Vehicle vehicle, bool strong)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61F40670, vehicle, strong);
//     }

//     // SetCarTraction | 0x278F2D0A
//     static Any SET_CAR_TRACTION(Car car, float traction)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x278F2D0A, car, traction);
//     }

//     // SetCarWatertight | 0x31017E6E
//     static Any SET_CAR_WATERTIGHT(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31017E6E, car, set);
//     }

//     // SetDoNotSpawnParkedCarsOnTop | 0x7A93645C
//     static Any SET_DO_NOT_SPAWN_PARKED_CARS_ON_TOP(int32_t pickup, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A93645C, pickup, set);
//     }

//     // SetExtraCarColours | 0x6CB14354
//     static Any SET_EXTRA_CAR_COLOURS(Vehicle vehicle, ColourIndex colour1, ColourIndex colour2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CB14354, vehicle, colour1, colour2);
//     }

//     // SetFollowVehicleCamOffset | 0x56507469
//     static Any SET_FOLLOW_VEHICLE_CAM_OFFSET(bool a1, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56507469, a1, x, y, z);
//     }

//     // SetFollowVehicleCamSubmode | 0x20BC708E
//     static Any SET_FOLLOW_VEHICLE_CAM_SUBMODE(int32_t mode)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20BC708E, mode);
//     }

//     // SetFollowVehiclePitchLimitUp | 0x5567728E
//     static Any SET_FOLLOW_VEHICLE_PITCH_LIMIT_UP(float pitchuplim)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5567728E, pitchuplim);
//     }

//     // SetFreebiesInVehicle | 0x25541DBE
//     static Any SET_FREEBIES_IN_VEHICLE(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25541DBE, veh, set);
//     }

//     // SetGangCar | 0x3A8531E8
//     static Any SET_GANG_CAR(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A8531E8, car, set);
//     }

//     // SetGpsVoiceForVehicle | 0x356876BF
//     static Any SET_GPS_VOICE_FOR_VEHICLE(Vehicle veh, int32_t VoiceId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x356876BF, veh, VoiceId);
//     }

//     // SetHasBeenOwnedForCarGenerator | 0x60E335FA
//     static Any SET_HAS_BEEN_OWNED_FOR_CAR_GENERATOR(int32_t CarGen, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60E335FA, CarGen, set);
//     }

//     // SetInterpInOutVehicleEnabledThisFrame | 0x120D3155
//     static Any SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x120D3155, set);
//     }

//     // SetLoadCollisionForCarFlag | 0x1E5C50B5
//     static Any SET_LOAD_COLLISION_FOR_CAR_FLAG(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E5C50B5, car, set);
//     }

//     // SetLoudVehicleRadio | 0x34686B92
//     static Any SET_LOUD_VEHICLE_RADIO(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34686B92, veh, set);
//     }

//     // SetNetworkVehicleRespotTimer | 0x266F327C
//     static Any SET_NETWORK_VEHICLE_RESPOT_TIMER(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x266F327C, a1, a2);
//     }

//     // SetPickupCollectableByCar | 0x6DA91393
//     static Any SET_PICKUP_COLLECTABLE_BY_CAR(Object pickup, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6DA91393, pickup, set);
//     }

//     // SetPickupsFixCars | 0x59DC6B9A
//     static Any SET_PICKUPS_FIX_CARS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59DC6B9A, set);
//     }

//     // SetPlaneUndercarriageUp | 0x7953702C
//     static Any SET_PLANE_UNDERCARRIAGE_UP(Vehicle plain, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7953702C, plain, set);
//     }

//     // SetPlayerCanDropWeaponsInCar | 0x4F884E33
//     static Any SET_PLAYER_CAN_DROP_WEAPONS_IN_CAR(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F884E33, set);
//     }

//     // SetPlayerMayOnlyEnterThisVehicle | 0x6BC05942
//     static Any SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(int32_t player, Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6BC05942, player, veh);
//     }

//     // SetPlayersCanBeInSeparateCars | 0x58704CAD
//     static Any SET_PLAYERS_CAN_BE_IN_SEPARATE_CARS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58704CAD);
//     }

//     // SetPtfxCamInsideVehicle | 0x137E6800
//     static Any SET_PTFX_CAM_INSIDE_VEHICLE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x137E6800, set);
//     }

//     // SetReduceVehicleModelBudget | 0x71F965B4
//     static Any SET_REDUCE_VEHICLE_MODEL_BUDGET(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71F965B4, set);
//     }

//     // SetRoomForCarByKey | 0x1E106A88
//     static Any SET_ROOM_FOR_CAR_BY_KEY(Car car, uint32_t roomkey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E106A88, car, roomkey);
//     }

//     // SetRoomForCarByName | 0x2667609A
//     static Any SET_ROOM_FOR_CAR_BY_NAME(Car car, char *roomname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2667609A, car, roomname);
//     }

//     // SetTargetCarForMissionGarage | 0x6EF667A4
//     static Any SET_TARGET_CAR_FOR_MISSION_GARAGE(int32_t garage, Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6EF667A4, garage, car);
//     }

//     // SetUpTripSkipForSpecificVehicle | 0x65A428F2
//     static Any SET_UP_TRIP_SKIP_FOR_SPECIFIC_VEHICLE(float a1, float a2, float a3, float a4, Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65A428F2, a1, a2, a3, a4, veh);
//     }

//     // SetUpTripSkipForVehicleFinishedByScript | 0x4D5068A6
//     static Any SET_UP_TRIP_SKIP_FOR_VEHICLE_FINISHED_BY_SCRIPT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D5068A6);
//     }

//     // SetUpsidedownCarNotDamaged | 0x353317C7
//     static Any SET_UPSIDEDOWN_CAR_NOT_DAMAGED(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x353317C7, car, set);
//     }

//     // SetVehicleAlwaysRender | 0x4A4B0F18
//     static Any SET_VEHICLE_ALWAYS_RENDER(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A4B0F18, veh);
//     }

//     // SetVehicleCanBeTargetted | 0x2B9B35C3
//     static Any SET_VEHICLE_CAN_BE_TARGETTED(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B9B35C3, veh, set);
//     }

//     // SetVehicleDeformationMult | 0x7B65266B
//     static Any SET_VEHICLE_DEFORMATION_MULT(Vehicle veh, float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B65266B, veh, multiplier);
//     }

//     // SetVehicleExplodesOnHighExplosionDamage | 0x7B4A7CD6
//     static Any SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B4A7CD6, veh, set);
//     }

//     // SetVehicleIsConsideredByPlayer | 0x720673D9
//     static Any SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x720673D9, veh, set);
//     }

//     // SetVehicleQuaternion | 0x43573596
//     static Any SET_VEHICLE_QUATERNION(Vehicle veh, float a2, float a3, float a4, float a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43573596, veh, a2, a3, a4, a5);
//     }

//     // ShutCarDoor | 0x5E7A620E
//     static Any SHUT_CAR_DOOR(Vehicle vehicle, uint32_t door)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E7A620E, vehicle, door);
//     }

//     // SkipInPlaybackRecordedCar | 0x2C8C61BA
//     static Any SKIP_IN_PLAYBACK_RECORDED_CAR(Car car, float time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C8C61BA, car, time);
//     }

//     // SkipTimeInPlaybackRecordedCar | 0x255059BB
//     static Any SKIP_TIME_IN_PLAYBACK_RECORDED_CAR(int32_t CarRec, float time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x255059BB, CarRec, time);
//     }

//     // SmashCarWindow | 0x2CDF628C
//     static Any SMASH_CAR_WINDOW(Car car, int32_t windownum)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CDF628C, car, windownum);
//     }

//     // SpecifyScriptPopulationZoneNumCars | 0x1B886584
//     static Any SPECIFY_SCRIPT_POPULATION_ZONE_NUM_CARS(int32_t num)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B886584, num);
//     }

//     // SpecifyScriptPopulationZoneNumParkedCars | 0x2EB751CC
//     static Any SPECIFY_SCRIPT_POPULATION_ZONE_NUM_PARKED_CARS(int32_t num)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2EB751CC, num);
//     }

//     // StartCarFire | 0x94BC3DCE
//     static Any START_CAR_FIRE(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x94BC3DCE, vehicle);
//     }

//     // StartPlaybackRecordedCar | 0x53335A45
//     static Any START_PLAYBACK_RECORDED_CAR(Car car, int32_t CarRec)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x53335A45, car, CarRec);
//     }

//     // StartPlaybackRecordedCarUsingAi | 0x5D900560
//     static Any START_PLAYBACK_RECORDED_CAR_USING_AI(Car car, int32_t CarRec)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D900560, car, CarRec);
//     }

//     // StopCarBreaking | 0x29305D67
//     static Any STOP_CAR_BREAKING(Car car, bool stop)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29305D67, car, stop);
//     }

//     // StopPlaybackRecordedCar | 0x71C91921
//     static Any STOP_PLAYBACK_RECORDED_CAR(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71C91921, car);
//     }

//     // StopVehicleAlwaysRender | 0x7CDD7B0E
//     static Any STOP_VEHICLE_ALWAYS_RENDER(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CDD7B0E, veh);
//     }

//     // SuppressCarModel | 0x768F640F
//     static Any SUPPRESS_CAR_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x768F640F, model);
//     }

//     // SwitchCarGenerator | 0x7CE83A30
//     static Any SWITCH_CAR_GENERATOR(int32_t handle, int32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CE83A30, handle, type);
//     }

//     // SwitchCarSiren | 0x7781290F
//     static Any SWITCH_CAR_SIREN(Car car, bool siren)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7781290F, car, siren);
//     }

//     // TakeCarOutOfParkedCarsBudget | 0x60EF0519
//     static Any TAKE_CAR_OUT_OF_PARKED_CARS_BUDGET(Car car, bool out)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60EF0519, car, out);
//     }

//     // TakeRemoteControlOfCar | 0x5DEA7140
//     static Any TAKE_REMOTE_CONTROL_OF_CAR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DEA7140);
//     }

//     // TaskCarDriveToCoord | 0x69715285
//     static Any TASK_CAR_DRIVE_TO_COORD(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10, Any a11)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69715285, ped, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
//     }

//     // TaskCarDriveToCoordNotAgainstTraffic | 0x483A62AB
//     static Any TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10, Any a11)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x483A62AB, ped, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
//     }

//     // TaskCarDriveWander | 0x1E9635A9
//     static Any TASK_CAR_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, uint32_t drivingStyle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E9635A9, ped, vehicle, speed, drivingStyle);
//     }

//     // TaskCarMission | 0x36273536
//     static Any TASK_CAR_MISSION(Ped ped, Vehicle vehicle, uint32_t targetEntity, uint32_t missionType, float speed, uint32_t drivingStyle, uint32_t unknown6_10, uint32_t unknown7_5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36273536, ped, vehicle, targetEntity, missionType, speed, drivingStyle, unknown6_10, unknown7_5);
//     }

//     // TaskCarMissionCoorsTarget | 0x36D51DDF
//     static Any TASK_CAR_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, uint32_t unknown0_4, float speed, uint32_t unknown2_1, uint32_t unknown3_5, uint32_t unknown4_10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36D51DDF, ped, vehicle, x, y, z, unknown0_4, speed, unknown2_1, unknown3_5, unknown4_10);
//     }

//     // TaskCarMissionCoorsTargetNotAgainstTraffic | 0x3CB4693B
//     static Any TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC(Ped ped, Vehicle vehicle, float x, float y, float z, uint32_t unknown0_4, float speed, uint32_t unknown2_1, uint32_t unknown3_5, uint32_t unknown4_10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CB4693B, ped, vehicle, x, y, z, unknown0_4, speed, unknown2_1, unknown3_5, unknown4_10);
//     }

//     // TaskCarMissionNotAgainstTraffic | 0x3BE7444A
//     static Any TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC(Ped ped, Vehicle vehicle, uint32_t targetEntity, uint32_t missionType, float speed, uint32_t drivingStyle, uint32_t unknown6_10, uint32_t unknown7_5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BE7444A, ped, vehicle, targetEntity, missionType, speed, drivingStyle, unknown6_10, unknown7_5);
//     }

//     // TaskCarTempAction | 0x11612815
//     static Any TASK_CAR_TEMP_ACTION(Ped ped, Vehicle vehicle, uint32_t action, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11612815, ped, vehicle, action, duration);
//     }

//     // TaskDestroyCar | 0x787A3D4C
//     static Any TASK_DESTROY_CAR(Ped ped, Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x787A3D4C, ped, car);
//     }

//     // TaskEnterCarAsDriver | 0x5BF03315
//     static Any TASK_ENTER_CAR_AS_DRIVER(Ped ped, Vehicle vehicle, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BF03315, ped, vehicle, duration);
//     }

//     // TaskEveryoneLeaveCar | 0x41E45BE5
//     static Any TASK_EVERYONE_LEAVE_CAR(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41E45BE5, vehicle);
//     }

//     // TaskGoStraightToCoordRelativeToCar | 0x498B3BE4
//     static Any TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x498B3BE4, ped, a2, a3, a4, a5, a6, a7);
//     }

//     // TaskGotoCar | 0x3EA116F7
//     static Any TASK_GOTO_CAR(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3EA116F7, ped, a2, a3, a4);
//     }

//     // TaskLeaveAnyCar | 0x1114089D
//     static Any TASK_LEAVE_ANY_CAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1114089D, ped);
//     }

//     // TaskLeaveCar | 0x6B85214E
//     static Any TASK_LEAVE_CAR(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B85214E, ped, vehicle);
//     }

//     // TaskLeaveCarAndFlee | 0x6CEA50D8
//     static Any TASK_LEAVE_CAR_AND_FLEE(Ped ped, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CEA50D8, ped, a2, a3, a4, a5);
//     }

//     // TaskLeaveCarDontCloseDoor | 0x1C9A376D
//     static Any TASK_LEAVE_CAR_DONT_CLOSE_DOOR(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C9A376D, ped, vehicle);
//     }

//     // TaskLeaveCarImmediately | 0x7BFB484F
//     static Any TASK_LEAVE_CAR_IMMEDIATELY(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BFB484F, ped, vehicle);
//     }

//     // TaskLeaveCarInDirection | 0x18740B3D
//     static Any TASK_LEAVE_CAR_IN_DIRECTION(Ped ped, Car car, bool direction)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18740B3D, ped, car, direction);
//     }

//     // TaskLookAtVehicle | 0x4A2C5544
//     static Any TASK_LOOK_AT_VEHICLE(Ped ped, Vehicle targetVehicle, uint32_t duration, uint32_t unknown_0)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A2C5544, ped, targetVehicle, duration, unknown_0);
//     }

//     // TaskPickupAndCarryObject | 0x76D72D89
//     static Any TASK_PICKUP_AND_CARRY_OBJECT(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76D72D89, ped, a2, a3, a4, a5, a6);
//     }

//     // TaskPlayAnimSecondaryInCar | 0x482B2B74
//     static Any TASK_PLAY_ANIM_SECONDARY_IN_CAR(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x482B2B74, ped, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // TurnCarToFaceCoord | 0x16184716
//     static Any TURN_CAR_TO_FACE_COORD(Car car, float x, float y)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x16184716, car, x, y);
//     }

//     // UnpausePlaybackRecordedCar | 0x361A01AD
//     static Any UNPAUSE_PLAYBACK_RECORDED_CAR(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x361A01AD, car);
//     }

//     // VehicleCanBeTargettedByHsMissile | 0x27607F64
//     static Any VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27607F64, car, set);
//     }

//     // WashVehicleTextures | 0x69491CFA
//     static Any WASH_VEHICLE_TEXTURES(Vehicle vehicle, uint32_t intensity)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69491CFA, vehicle, intensity);
//     }

// } // namespace CAR

// namespace CHARACTER
// {

//     // AddAmmoToChar | 0x1ADA0C3A
//     static Any ADD_AMMO_TO_CHAR(Ped ped, uint32_t weapon, uint32_t amount)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1ADA0C3A, ped, weapon, amount);
//     }

//     // AddArmourToChar | 0x1C623537
//     static Any ADD_ARMOUR_TO_CHAR(Ped ped, uint32_t amount)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C623537, ped, amount);
//     }

//     // AddBlipForChar | 0x19A64C5D
//     static Any ADD_BLIP_FOR_CHAR(Ped ped, Blip *pBlip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19A64C5D, ped, pBlip);
//     }

//     // AddCharDecisionMakerEventResponse | 0x65536ECF
//     static Any ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint32_t eventid, uint32_t responseid, float param1, float param2, float param3, float param4, uint32_t unknown0_1, uint32_t unknown1_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65536ECF, dm, eventid, responseid, param1, param2, param3, param4, unknown0_1, unknown1_1);
//     }

//     // AddFirstNCharactersOfStringToHtmlScriptObject | 0x75FC34EF
//     static Any ADD_FIRST_NCHARACTERS_OF_STRING_TO_HTML_SCRIPT_OBJECT(int32_t htmlobj, char *str, int32_t n)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75FC34EF, htmlobj, str, n);
//     }

//     // BeginCharSearchCriteria | 0x43F86230
//     static Any BEGIN_CHAR_SEARCH_CRITERIA()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43F86230);
//     }

//     // BlendOutCharMoveAnims | 0x65A34B7A
//     static Any BLEND_OUT_CHAR_MOVE_ANIMS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65A34B7A, ped);
//     }

//     // BlockCharAmbientAnims | 0x1A2D7640
//     static Any BLOCK_CHAR_AMBIENT_ANIMS(Ped ped, bool block)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A2D7640, ped, block);
//     }

//     // BlockCharGestureAnims | 0x1C144E4E
//     static Any BLOCK_CHAR_GESTURE_ANIMS(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C144E4E, ped, value);
//     }

//     // BlockCharHeadIk | 0x3EFA66E8
//     static Any BLOCK_CHAR_HEAD_IK(Ped ped, bool block)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3EFA66E8, ped, block);
//     }

//     // BlockCharVisemeAnims | 0x44881D27
//     static Any BLOCK_CHAR_VISEME_ANIMS(Ped ped, bool block)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44881D27, ped, block);
//     }

//     // ClearCharDecisionMakerEventResponse | 0x3F491F21
//     static Any CLEAR_CHAR_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint32_t eventid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F491F21, dm, eventid);
//     }

//     // CanCharSeeDeadChar | 0x7ED82ED9
//     static Any CAN_CHAR_SEE_DEAD_CHAR(Ped ped, Ped pednext)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7ED82ED9, ped, pednext);
//     }

//     // CanCreateRandomChar | 0x5CD64D63
//     static Any CAN_CREATE_RANDOM_CHAR(bool flag0, bool flag1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5CD64D63, flag0, flag1);
//     }

//     // CellCamIsCharVisibleNoFaceCheck | 0x770600CF
//     static Any CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x770600CF, ped);
//     }

//     // ChangeCharSitIdleAnim | 0x7B2822F7
//     static Any CHANGE_CHAR_SIT_IDLE_ANIM(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B2822F7, ped, a2, a3, a4);
//     }

//     // ClearAllCharProps | 0x232A52FA
//     static Any CLEAR_ALL_CHAR_PROPS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x232A52FA, ped);
//     }

//     // ClearAllCharRelationships | 0x57297D58
//     static Any CLEAR_ALL_CHAR_RELATIONSHIPS(Ped ped, int32_t relgroup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57297D58, ped, relgroup);
//     }

//     // ClearCharLastDamageBone | 0x1A013092
//     static Any CLEAR_CHAR_LAST_DAMAGE_BONE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A013092, ped);
//     }

//     // ClearCharLastWeaponDamage | 0x718508B4
//     static Any CLEAR_CHAR_LAST_WEAPON_DAMAGE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x718508B4, ped);
//     }

//     // ClearCharProp | 0x51546112
//     static Any CLEAR_CHAR_PROP(Ped ped, bool unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51546112, ped, unknown);
//     }

//     // ClearCharRelationship | 0x42DB145F
//     static Any CLEAR_CHAR_RELATIONSHIP(Ped ped, int32_t reltype, int32_t relgroup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42DB145F, ped, reltype, relgroup);
//     }

//     // ClearCharSecondaryTask | 0x7FC96DD5
//     static Any CLEAR_CHAR_SECONDARY_TASK(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FC96DD5, ped);
//     }

//     // ClearCharTasks | 0x4AB470F3
//     static Any CLEAR_CHAR_TASKS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AB470F3, ped);
//     }

//     // ClearCharTasksImmediately | 0x3C116620
//     static Any CLEAR_CHAR_TASKS_IMMEDIATELY(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C116620, ped);
//     }

//     // ClearRoomForChar | 0x405B16CF
//     static Any CLEAR_ROOM_FOR_CHAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x405B16CF, ped);
//     }

//     // ClearRoomForDummyChar | 0x2E373084
//     static Any CLEAR_ROOM_FOR_DUMMY_CHAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E373084, ped);
//     }

//     // CopyCharDecisionMaker | 0x1BB41B75
//     static Any COPY_CHAR_DECISION_MAKER(uint32_t type, DecisionMaker *pDM)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BB41B75, type, pDM);
//     }

//     // CopyGroupCharDecisionMaker | 0x472E65D6
//     static Any COPY_GROUP_CHAR_DECISION_MAKER(uint32_t type, DecisionMaker *pDM)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x472E65D6, type, pDM);
//     }

//     // CopySharedCharDecisionMaker | 0x189E32C9
//     static Any COPY_SHARED_CHAR_DECISION_MAKER(uint32_t type, DecisionMaker *pDM)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x189E32C9, type, pDM);
//     }

//     // CreateChar | 0x4A673763
//     static Any CREATE_CHAR(RelationshipGroup type, uint32_t model, float x, float y, float z, Ped *pPed, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A673763, type, model, x, y, z, pPed, unknownTrue);
//     }

//     // CreateCharAsPassenger | 0x442B1C1D
//     static Any CREATE_CHAR_AS_PASSENGER(Vehicle vehicle, uint32_t charType, uint32_t model, uint32_t passengerIndex, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x442B1C1D, vehicle, charType, model, passengerIndex, pPed);
//     }

//     // CreateCharInsideCar | 0x2702274D
//     static Any CREATE_CHAR_INSIDE_CAR(Vehicle vehicle, uint32_t charType, uint32_t model, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2702274D, vehicle, charType, model, pPed);
//     }

//     // CreateDummyChar | 0x44FF276B
//     static Any CREATE_DUMMY_CHAR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44FF276B);
//     }

//     // CreateRandomChar | 0x375D6223
//     static Any CREATE_RANDOM_CHAR(float x, float y, float z, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x375D6223, x, y, z, pPed);
//     }

//     // CreateRandomCharAsDriver | 0x31CD5F18
//     static Any CREATE_RANDOM_CHAR_AS_DRIVER(Vehicle vehicle, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31CD5F18, vehicle, pPed);
//     }

//     // CreateRandomCharAsPassenger | 0x46D01849
//     static Any CREATE_RANDOM_CHAR_AS_PASSENGER(Vehicle vehicle, uint32_t seat, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46D01849, vehicle, seat, pPed);
//     }

//     // CreateRandomFemaleChar | 0x1A920C02
//     static Any CREATE_RANDOM_FEMALE_CHAR(float x, float y, float z, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A920C02, x, y, z, pPed);
//     }

//     // CreateRandomMaleChar | 0x2FC728BB
//     static Any CREATE_RANDOM_MALE_CHAR(float x, float y, float z, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FC728BB, x, y, z, pPed);
//     }

//     // DamageChar | 0x6045426E
//     static Any DAMAGE_CHAR(Ped ped, uint32_t hitPoints, bool unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6045426E, ped, hitPoints, unknown);
//     }

//     // DeleteDummyChar | 0x73F55AEF
//     static Any DELETE_DUMMY_CHAR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73F55AEF);
//     }

//     // DoesCharExist | 0x46531797
//     static Any DOES_CHAR_EXIST(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46531797, ped);
//     }

//     // DontRemoveChar | 0x3659084A
//     static Any DONT_REMOVE_CHAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3659084A, ped);
//     }

//     // EndCharSearchCriteria | 0x5ECF404A
//     static Any END_CHAR_SEARCH_CRITERIA()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5ECF404A);
//     }

//     // ExplodeCharHead | 0x4A802E89
//     static Any EXPLODE_CHAR_HEAD(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A802E89, ped);
//     }

//     // ExtinguishCharFire | 0x5D786EEE
//     static Any EXTINGUISH_CHAR_FIRE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D786EEE, ped);
//     }

//     // ForceCharToDropWeapon | 0x214C5455
//     static Any FORCE_CHAR_TO_DROP_WEAPON(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x214C5455, ped);
//     }

//     // FreezeCharPosition | 0x20266A86
//     static Any FREEZE_CHAR_POSITION(Ped ped, bool frozen)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20266A86, ped, frozen);
//     }

//     // FreezeCharPositionAndDontLoadCollision | 0x74576E37
//     static Any FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION(Ped ped, bool frozen)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74576E37, ped, frozen);
//     }

//     // GetCharCoordinates | 0x2B5C06E6
//     static Any GET_CHAR_COORDINATES(Ped ped, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B5C06E6, ped, pX, pY, pZ);
//     }

//     // GetDeadCharCoordinates | 0x51457269
//     static Any GET_DEAD_CHAR_COORDINATES(Ped ped, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51457269, ped, pX, pY, pZ);
//     }

//     // GetAmmoInCharWeapon | 0x23E140A9
//     static Any GET_AMMO_IN_CHAR_WEAPON(Ped ped, uint32_t weapon, uint32_t *pAmmo)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x23E140A9, ped, weapon, pAmmo);
//     }

//     // GetAnimGroupFromChar | 0x55EB748F
//     static Any GET_ANIM_GROUP_FROM_CHAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55EB748F, ped);
//     }

//     // GetCarCharIsUsing | 0x1B067237
//     static Any GET_CAR_CHAR_IS_USING(Ped ped, Vehicle *pVehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B067237, ped, pVehicle);
//     }

//     // GetCharAllowedToRunOnBoats | 0x4C872A85
//     static Any GET_CHAR_ALLOWED_TO_RUN_ON_BOATS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C872A85, ped);
//     }

//     // GetCharAnimBlendAmount | 0x1DE37A21
//     static Any GET_CHAR_ANIM_BLEND_AMOUNT(Ped ped, char *AnimName0, char *AnimName1, float *amount)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DE37A21, ped, AnimName0, AnimName1, amount);
//     }

//     // GetCharAnimCurrentTime | 0x555D3B8C
//     static Any GET_CHAR_ANIM_CURRENT_TIME(Ped ped, char *animGroup, char *animName, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x555D3B8C, ped, animGroup, animName, pValue);
//     }

//     // GetCharAnimEventTime | 0x675A1B4E
//     static Any GET_CHAR_ANIM_EVENT_TIME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x675A1B4E);
//     }

//     // GetCharAnimIsEvent | 0x118174EC
//     static Any GET_CHAR_ANIM_IS_EVENT(Ped ped, char *AnimName0, char *AnimName1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x118174EC, ped, AnimName0, AnimName1, flag);
//     }

//     // GetCharAnimTotalTime | 0x2E51318F
//     static Any GET_CHAR_ANIM_TOTAL_TIME(Ped ped, char *animGroup, char *animName, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E51318F, ped, animGroup, animName, pValue);
//     }

//     // GetCharArmour | 0x3C756E54
//     static Any GET_CHAR_ARMOUR(Ped ped, uint32_t *pArmour)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C756E54, ped, pArmour);
//     }

//     // GetCharDrawableVariation | 0x1A1A6D83
//     static Any GET_CHAR_DRAWABLE_VARIATION(Ped ped, uint32_t component)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A1A6D83, ped, component);
//     }

//     // GetCharExtractedDisplacement | 0x466B5AA0
//     static Any GET_CHAR_EXTRACTED_DISPLACEMENT(Ped ped, bool unknown, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x466B5AA0, ped, unknown, pX, pY, pZ);
//     }

//     // GetCharExtractedVelocity | 0x7B3F0058
//     static Any GET_CHAR_EXTRACTED_VELOCITY(Ped ped, bool a2, float *x, float *y, float *z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B3F0058, ped, a2, x, y, z);
//     }

//     // GetCharGravity | 0x746E7171
//     static Any GET_CHAR_GRAVITY(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x746E7171, ped);
//     }

//     // GetCharHealth | 0x4B6C2256
//     static Any GET_CHAR_HEALTH(Ped ped, uint32_t *pHealth)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B6C2256, ped, pHealth);
//     }

//     // GetCharHeightAboveGround | 0x79973C5A
//     static Any GET_CHAR_HEIGHT_ABOVE_GROUND(Ped ped, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79973C5A, ped, pValue);
//     }

//     // GetCharInCarPassengerSeat | 0x5E756B51
//     static Any GET_CHAR_IN_CAR_PASSENGER_SEAT(Vehicle vehicle, uint32_t seatIndex, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E756B51, vehicle, seatIndex, pPed);
//     }

//     // GetCharLastDamageBone | 0x767E5013
//     static Any GET_CHAR_LAST_DAMAGE_BONE(Ped ped, uint32_t *pBone)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x767E5013, ped, pBone);
//     }

//     // GetCharMaxMoveBlendRatio | 0x54AE4F4B
//     static Any GET_CHAR_MAX_MOVE_BLEND_RATIO(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x54AE4F4B, ped);
//     }

//     // GetCharMeleeActionFlag0 | 0x103F14E4
//     static Any GET_CHAR_MELEE_ACTION_FLAG0(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x103F14E4, ped);
//     }

//     // GetCharMoney | 0x7D675993
//     static Any GET_CHAR_MONEY(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D675993, ped);
//     }

//     // GetCharMoveAnimSpeedMultiplier | 0x325B1A34
//     static Any GET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER(Ped ped, float *multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x325B1A34, ped, multiplier);
//     }

//     // GetCharMovementAnimsBlocked | 0x11292C09
//     static Any GET_CHAR_MOVEMENT_ANIMS_BLOCKED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11292C09, ped);
//     }

//     // GetCharPropIndex | 0x3AC85DB1
//     static Any GET_CHAR_PROP_INDEX(Ped ped, bool unknown, uint32_t *pIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3AC85DB1, ped, unknown, pIndex);
//     }

//     // GetCharReadyToBeExecuted | 0x3FFF4DE9
//     static Any GET_CHAR_READY_TO_BE_EXECUTED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FFF4DE9, ped);
//     }

//     // GetCharReadyToBeStunned | 0x5C422066
//     static Any GET_CHAR_READY_TO_BE_STUNNED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C422066, ped);
//     }

//     // GetCharSpeed | 0x3E156AFC
//     static Any GET_CHAR_SPEED(Ped ped, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E156AFC, ped, pValue);
//     }

//     // GetCharSwimState | 0x34460DD7
//     static Any GET_CHAR_SWIM_STATE(Ped ped, int32_t *state)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34460DD7, ped, state);
//     }

//     // GetCharTextureVariation | 0x3A7B78C5
//     static Any GET_CHAR_TEXTURE_VARIATION(Ped ped, uint32_t component)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A7B78C5, ped, component);
//     }

//     // GetCharVelocity | 0x3B977FD4
//     static Any GET_CHAR_VELOCITY(Ped ped, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B977FD4, ped, pX, pY, pZ);
//     }

//     // GetCharWalkAlongsideLeaderWhenAppropriate | 0x6D170B31
//     static Any GET_CHAR_WALK_ALONGSIDE_LEADER_WHEN_APPROPRIATE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D170B31, ped);
//     }

//     // GetCharWeaponInSlot | 0x74EC7580
//     static Any GET_CHAR_WEAPON_IN_SLOT(Ped ped, uint32_t slot, uint32_t *pWeapon, uint32_t *pAmmo0, uint32_t *pAmmo1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74EC7580, ped, slot, pWeapon, pAmmo0, pAmmo1);
//     }

//     // GetCharWillCowerInsteadOfFleeing | 0x69A52C96
//     static Any GET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69A52C96, ped);
//     }

//     // GetCharWillTryToLeaveBoatAfterLeader | 0x6D5F1592
//     static Any GET_CHAR_WILL_TRY_TO_LEAVE_BOAT_AFTER_LEADER(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D5F1592, ped);
//     }

//     // GetCharWillTryToLeaveWater | 0x7BC85E73
//     static Any GET_CHAR_WILL_TRY_TO_LEAVE_WATER(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BC85E73, ped);
//     }

//     // GetCurrentCharWeapon | 0x5AB8289F
//     static Any GET_CURRENT_CHAR_WEAPON(Ped ped, uint32_t *pWeapon)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AB8289F, ped, pWeapon);
//     }

//     // GetDeadCharPickupCoords | 0x2A7475D8
//     static Any GET_DEAD_CHAR_PICKUP_COORDS(Ped ped, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A7475D8, ped, pX, pY, pZ);
//     }

//     // GetFirstNCharactersOfLiteralString | 0x42D249E3
//     static Any GET_FIRST_NCHARACTERS_OF_LITERAL_STRING(char *literalString, uint32_t chars)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42D249E3, literalString, chars);
//     }

//     // GetFirstNCharactersOfString | 0x108B4A25
//     static Any GET_FIRST_NCHARACTERS_OF_STRING(char *gxtName, uint32_t chars)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x108B4A25, gxtName, chars);
//     }

//     // GetInteriorFromDummyChar | 0x380751A9
//     static Any GET_INTERIOR_FROM_DUMMY_CHAR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x380751A9);
//     }

//     // GetKeyForCharInRoom | 0x266D0801
//     static Any GET_KEY_FOR_CHAR_IN_ROOM(Ped ped, uint32_t *pKey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x266D0801, ped, pKey);
//     }

//     // GetKeyForDummyCharInRoom | 0x74672C8C
//     static Any GET_KEY_FOR_DUMMY_CHAR_IN_ROOM(Ped ped, int32_t *room)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74672C8C, ped, room);
//     }

//     // GetNumberOfCharDrawableVariations | 0x3C293296
//     static Any GET_NUMBER_OF_CHAR_DRAWABLE_VARIATIONS(Ped ped, uint32_t component)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C293296, ped, component);
//     }

//     // GetOffsetFromCharInWorldCoords | 0x737F24F9
//     static Any GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS(Ped ped, float x, float y, float z, float *pOffX, float *pOffY, float *pOffZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x737F24F9, ped, x, y, z, pOffX, pOffY, pOffZ);
//     }

//     // GetPlayerChar | 0x511454A9
//     static Any GET_PLAYER_CHAR(Player playerIndex, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x511454A9, playerIndex, pPed);
//     }

//     // GetRandomCharInAreaOffsetNoSave | 0x6ED17CF8
//     static Any GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE(float x, float y, float z, float sx, float sy, float sz, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6ED17CF8, x, y, z, sx, sy, sz, pPed);
//     }

//     // GetRoomNameFromCharDebug | 0x4A7620F7
//     static Any GET_ROOM_NAME_FROM_CHAR_DEBUG()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A7620F7);
//     }

//     // GetSafePositionForChar | 0x5D877285
//     static Any GET_SAFE_POSITION_FOR_CHAR(float x, float y, float z, bool unknownTrue, float *pSafeX, float *pSafeY, float *pSafeZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D877285, x, y, z, unknownTrue, pSafeX, pSafeY, pSafeZ);
//     }

//     // GiveDelayedWeaponToChar | 0x709154FC
//     static Any GIVE_DELAYED_WEAPON_TO_CHAR(Ped ped, int32_t weapon, int32_t delaytime, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x709154FC, ped, weapon, delaytime, flag);
//     }

//     // HasCarBeenDamagedByChar | 0x61487DBF
//     static Any HAS_CAR_BEEN_DAMAGED_BY_CHAR(Vehicle vehicle, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61487DBF, vehicle, ped);
//     }

//     // HasCharAnimFinished | 0x53F34027
//     static Any HAS_CHAR_ANIM_FINISHED(Ped ped, char *AnimName0, char *AnimName1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x53F34027, ped, AnimName0, AnimName1);
//     }

//     // HasCharBeenArrested | 0x210A0879
//     static Any HAS_CHAR_BEEN_ARRESTED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x210A0879, ped);
//     }

//     // HasCharBeenDamagedByCar | 0x30A65021
//     static Any HAS_CHAR_BEEN_DAMAGED_BY_CAR(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30A65021, ped, vehicle);
//     }

//     // HasCharBeenDamagedByChar | 0x1DD624A0
//     static Any HAS_CHAR_BEEN_DAMAGED_BY_CHAR(Ped ped, Ped otherChar, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DD624A0, ped, otherChar, unknownFalse);
//     }

//     // HasCharBeenDamagedByWeapon | 0x6DB26E07
//     static Any HAS_CHAR_BEEN_DAMAGED_BY_WEAPON(Ped ped, uint32_t weapon)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6DB26E07, ped, weapon);
//     }

//     // HasCharBeenPhotographed | 0x1F2928A6
//     static Any HAS_CHAR_BEEN_PHOTOGRAPHED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F2928A6, ped);
//     }

//     // HasCharGotWeapon | 0x11F759DE
//     static Any HAS_CHAR_GOT_WEAPON(Ped ped, uint32_t weapon)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11F759DE, ped, weapon);
//     }

//     // HasCharSpottedChar | 0x1ADD68E8
//     static Any HAS_CHAR_SPOTTED_CHAR(Ped ped, Ped otherChar)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1ADD68E8, ped, otherChar);
//     }

//     // HasCharSpottedCharInFront | 0x156D5236
//     static Any HAS_CHAR_SPOTTED_CHAR_IN_FRONT(Ped ped, Ped otherChar)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x156D5236, ped, otherChar);
//     }

//     // HasClosestObjectOfTypeBeenDamagedByChar | 0x1FC90C7C
//     static Any HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CHAR(float x, float y, float z, float radius, uint32_t objectModel, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1FC90C7C, x, y, z, radius, objectModel, ped);
//     }

//     // HideCharWeaponForScriptedCutscene | 0x2B7C5CFB
//     static Any HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, bool hide)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B7C5CFB, ped, hide);
//     }

//     // IsAnyCharShootingInArea | 0x19D16ACE
//     static Any IS_ANY_CHAR_SHOOTING_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19D16ACE, x0, y0, z0, x1, y1, z1, flag);
//     }

//     // IsCharDead | 0x6A6B4F18
//     static Any IS_CHAR_DEAD(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A6B4F18, ped);
//     }

//     // IsCharDucking | 0x495D6021
//     static Any IS_CHAR_DUCKING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x495D6021, ped);
//     }

//     // IsCharFatallyInjured | 0x4A7802CB
//     static Any IS_CHAR_FATALLY_INJURED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A7802CB, ped);
//     }

//     // IsCharGettingInToACar | 0x5C8C2E39
//     static Any IS_CHAR_GETTING_IN_TO_ACAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C8C2E39, ped);
//     }

//     // IsCharGettingUp | 0x4A906237
//     static Any IS_CHAR_GETTING_UP(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A906237, ped);
//     }

//     // IsCharHealthGreater | 0x7B75036E
//     static Any IS_CHAR_HEALTH_GREATER(Ped ped, uint32_t health)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B75036E, ped, health);
//     }

//     // IsCharInAir | 0x23C15141
//     static Any IS_CHAR_IN_AIR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x23C15141, ped);
//     }

//     // IsCharInAngledArea2d | 0x7D591EAD
//     static Any IS_CHAR_IN_ANGLED_AREA2D(Ped ped, float x1, float y1, float x2, float y2, float unknown, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D591EAD, ped, x1, y1, x2, y2, unknown, unknownFalse);
//     }

//     // IsCharInAngledArea3d | 0x610157C9
//     static Any IS_CHAR_IN_ANGLED_AREA3D(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, float unknown, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x610157C9, ped, x1, y1, z1, x2, y2, z2, unknown, unknownFalse);
//     }

//     // IsCharInAnyBoat | 0x210A4F1D
//     static Any IS_CHAR_IN_ANY_BOAT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x210A4F1D, ped);
//     }

//     // IsCharInAnyCar | 0x71184DA3
//     static Any IS_CHAR_IN_ANY_CAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71184DA3, ped);
//     }

//     // IsCharInAnyPlane | 0x4BAC2912
//     static Any IS_CHAR_IN_ANY_PLANE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4BAC2912, ped);
//     }

//     // IsCharInAnyPoliceVehicle | 0x4414660B
//     static Any IS_CHAR_IN_ANY_POLICE_VEHICLE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4414660B, ped);
//     }

//     // IsCharInAnyTrain | 0x22434C20
//     static Any IS_CHAR_IN_ANY_TRAIN(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22434C20, ped);
//     }

//     // IsCharInArea2d | 0x7F371477
//     static Any IS_CHAR_IN_AREA2D(Ped ped, float x1, float y1, float x2, float y2, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F371477, ped, x1, y1, x2, y2, unknownFalse);
//     }

//     // IsCharInArea3d | 0x44A30283
//     static Any IS_CHAR_IN_AREA3D(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44A30283, ped, x1, y1, z1, x2, y2, z2, unknownFalse);
//     }

//     // IsCharInAreaOnFoot2d | 0x3F2D7D06
//     static Any IS_CHAR_IN_AREA_ON_FOOT2D(Ped ped, float x1, float y1, float x2, float y2, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F2D7D06, ped, x1, y1, x2, y2, unknownFalse);
//     }

//     // IsCharInCar | 0x7D037B40
//     static Any IS_CHAR_IN_CAR(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D037B40, ped, vehicle);
//     }

//     // IsCharInFlyingVehicle | 0x7FA763E8
//     static Any IS_CHAR_IN_FLYING_VEHICLE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FA763E8, ped);
//     }

//     // IsCharInMeleeCombat | 0x68855BE7
//     static Any IS_CHAR_IN_MELEE_COMBAT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68855BE7, ped);
//     }

//     // IsCharInModel | 0x45DB5FE9
//     static Any IS_CHAR_IN_MODEL(Ped ped, uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45DB5FE9, ped, model);
//     }

//     // IsCharInTaxi | 0x28A73BCA
//     static Any IS_CHAR_IN_TAXI(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28A73BCA, ped);
//     }

//     // IsCharInWater | 0x7B1F0130
//     static Any IS_CHAR_IN_WATER(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B1F0130, ped);
//     }

//     // IsCharInZone | 0x435054B3
//     static Any IS_CHAR_IN_ZONE(Ped ped, char *zonename)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x435054B3, ped, zonename);
//     }

//     // IsCharInjured | 0x4ECB2267
//     static Any IS_CHAR_INJURED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4ECB2267, ped);
//     }

//     // IsCharMale | 0x7D76127F
//     static Any IS_CHAR_MALE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D76127F, ped);
//     }

//     // IsCharModel | 0x6C403ACC
//     static Any IS_CHAR_MODEL(Ped ped, uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C403ACC, ped, model);
//     }

//     // IsCharOnFire | 0x358E21C5
//     static Any IS_CHAR_ON_FIRE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x358E21C5, ped);
//     }

//     // IsCharOnFoot | 0x10A86CF4
//     static Any IS_CHAR_ON_FOOT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10A86CF4, ped);
//     }

//     // IsCharOnPlayerMachine | 0x1BFE7952
//     static Any IS_CHAR_ON_PLAYER_MACHINE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BFE7952);
//     }

//     // IsCharOnScreen | 0x59471B11
//     static Any IS_CHAR_ON_SCREEN(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59471B11, ped);
//     }

//     // IsCharPlayingAnim | 0x673E4CD2
//     static Any IS_CHAR_PLAYING_ANIM(Ped ped, char *animSet, char *animName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x673E4CD2, ped, animSet, animName);
//     }

//     // IsCharRespondingToAnyEvent | 0x5DDB09F8
//     static Any IS_CHAR_RESPONDING_TO_ANY_EVENT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DDB09F8, ped);
//     }

//     // IsCharRespondingToEvent | 0x32653482
//     static Any IS_CHAR_RESPONDING_TO_EVENT(Ped ped, int32_t eventid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32653482, ped, eventid);
//     }

//     // IsCharShooting | 0x324D1594
//     static Any IS_CHAR_SHOOTING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x324D1594, ped);
//     }

//     // IsCharShootingInArea | 0x42941472
//     static Any IS_CHAR_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float x2, float y2, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42941472, ped, x1, y1, x2, y2, unknownFalse);
//     }

//     // IsCharSittingInAnyCar | 0x1DBD7385
//     static Any IS_CHAR_SITTING_IN_ANY_CAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DBD7385, ped);
//     }

//     // IsCharSittingInCar | 0x309C265B
//     static Any IS_CHAR_SITTING_IN_CAR(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x309C265B, ped, vehicle);
//     }

//     // IsCharStuckUnderCar | 0x70BB021A
//     static Any IS_CHAR_STUCK_UNDER_CAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70BB021A, ped);
//     }

//     // IsCharSwimming | 0x75D21B78
//     static Any IS_CHAR_SWIMMING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75D21B78, ped);
//     }

//     // IsCharTouchingObject | 0x3AB06137
//     static Any IS_CHAR_TOUCHING_OBJECT(Ped ped, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3AB06137, ped, obj);
//     }

//     // IsCharTouchingObjectOnFoot | 0x7C0B46C8
//     static Any IS_CHAR_TOUCHING_OBJECT_ON_FOOT(Ped ped, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C0B46C8, ped, obj);
//     }

//     // IsCharTouchingVehicle | 0x307A4B8E
//     static Any IS_CHAR_TOUCHING_VEHICLE(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x307A4B8E, ped, vehicle);
//     }

//     // IsCharTryingToEnterALockedCar | 0x1C132038
//     static Any IS_CHAR_TRYING_TO_ENTER_ALOCKED_CAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C132038, ped);
//     }

//     // IsCharUsingAnyScenario | 0x64BD4664
//     static Any IS_CHAR_USING_ANY_SCENARIO(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64BD4664, ped);
//     }

//     // IsCharUsingMapAttractor | 0x60B26D74
//     static Any IS_CHAR_USING_MAP_ATTRACTOR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60B26D74, ped);
//     }

//     // IsCharUsingScenario | 0x62842540
//     static Any IS_CHAR_USING_SCENARIO(Ped ped, char *scenarioName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62842540, ped, scenarioName);
//     }

//     // IsCharWaitingForWorldCollision | 0x51453EA2
//     static Any IS_CHAR_WAITING_FOR_WORLD_COLLISION(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51453EA2, ped);
//     }

//     // IsPlayerFreeAimingAtChar | 0x30D427B4
//     static Any IS_PLAYER_FREE_AIMING_AT_CHAR(Player playerIndex, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30D427B4, playerIndex, ped);
//     }

//     // IsPlayerTargettingChar | 0x58A6457C
//     static Any IS_PLAYER_TARGETTING_CHAR(Player playerIndex, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58A6457C, playerIndex, ped);
//     }

//     // LoadCharDecisionMaker | 0x7F7B4FC5
//     static Any LOAD_CHAR_DECISION_MAKER(uint32_t type, DecisionMaker *pDM)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F7B4FC5, type, pDM);
//     }

//     // LocateCharAnyMeans2d | 0x5BB767AD
//     static Any LOCATE_CHAR_ANY_MEANS2D(Ped ped, float x0, float y0, float x1, float y1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BB767AD, ped, x0, y0, x1, y1, flag);
//     }

//     // LocateCharAnyMeansCar2d | 0x1A455E51
//     static Any LOCATE_CHAR_ANY_MEANS_CAR2D(Ped ped, Car car, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A455E51, ped, car, x, y, flag);
//     }

//     // LocateCharAnyMeansCar3d | 0x58DD4CCC
//     static Any LOCATE_CHAR_ANY_MEANS_CAR3D(Ped ped, Car car, float x, float y, float z, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58DD4CCC, ped, car, x, y, z, flag);
//     }

//     // LocateCharAnyMeansChar2d | 0x18EA4926
//     static Any LOCATE_CHAR_ANY_MEANS_CHAR2D(Ped ped, Ped pednext, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18EA4926, ped, pednext, x, y, flag);
//     }

//     // LocateCharAnyMeansChar3d | 0x3E441A58
//     static Any LOCATE_CHAR_ANY_MEANS_CHAR3D(Ped ped, Ped pednext, float x, float y, float z, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E441A58, ped, pednext, x, y, z, flag);
//     }

//     // LocateCharAnyMeansObject2d | 0x4FD34079
//     static Any LOCATE_CHAR_ANY_MEANS_OBJECT2D(Ped ped, Object obj, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FD34079, ped, obj, x, y, flag);
//     }

//     // LocateCharAnyMeansObject3d | 0x6D0E1BCE
//     static Any LOCATE_CHAR_ANY_MEANS_OBJECT3D(Ped ped, Object obj, float x, float y, float z, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D0E1BCE, ped, obj, x, y, z, flag);
//     }

//     // LocateCharInCar2d | 0x1DDA54EF
//     static Any LOCATE_CHAR_IN_CAR2D(Ped ped, float x0, float y0, float x1, float y1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DDA54EF, ped, x0, y0, x1, y1, flag);
//     }

//     // LocateCharInCarCar2d | 0x53B429F9
//     static Any LOCATE_CHAR_IN_CAR_CAR2D(Ped ped, Car car, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x53B429F9, ped, car, x, y, flag);
//     }

//     // LocateCharInCarCar3d | 0x4D3547D1
//     static Any LOCATE_CHAR_IN_CAR_CAR3D(Ped ped, Car car, float x, float y, float z, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D3547D1, ped, car, x, y, z, flag);
//     }

//     // LocateCharInCarChar2d | 0x17BC4531
//     static Any LOCATE_CHAR_IN_CAR_CHAR2D(Ped ped, Ped pednext, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17BC4531, ped, pednext, x, y, flag);
//     }

//     // LocateCharInCarObject2d | 0x6CCB719D
//     static Any LOCATE_CHAR_IN_CAR_OBJECT2D(Ped ped, Object obj, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CCB719D, ped, obj, x, y, flag);
//     }

//     // LocateCharOnFoot2d | 0x50EE161F
//     static Any LOCATE_CHAR_ON_FOOT2D(Ped ped, float x0, float y0, float x1, float y1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50EE161F, ped, x0, y0, x1, y1, flag);
//     }

//     // LocateCharOnFoot3d | 0x3D003090
//     static Any LOCATE_CHAR_ON_FOOT3D(Ped ped, float x0, float y0, float z0, float x1, float y1, float z1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D003090, ped, x0, y0, z0, x1, y1, z1, flag);
//     }

//     // LocateCharOnFootCar2d | 0x78A75EF4
//     static Any LOCATE_CHAR_ON_FOOT_CAR2D(Ped ped, Car car, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78A75EF4, ped, car, x, y, flag);
//     }

//     // LocateCharOnFootCar3d | 0x3C3E5FA0
//     static Any LOCATE_CHAR_ON_FOOT_CAR3D(Ped ped, Car car, float x, float y, float z, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C3E5FA0, ped, car, x, y, z, flag);
//     }

//     // LocateCharOnFootChar2d | 0x191E2F12
//     static Any LOCATE_CHAR_ON_FOOT_CHAR2D(Ped ped, Ped pednext, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x191E2F12, ped, pednext, x, y, flag);
//     }

//     // LocateCharOnFootChar3d | 0x4DA362B0
//     static Any LOCATE_CHAR_ON_FOOT_CHAR3D(Ped ped, Ped pednext, float x, float y, float z, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DA362B0, ped, pednext, x, y, z, flag);
//     }

//     // LocateCharOnFootObject2d | 0x67F518F0
//     static Any LOCATE_CHAR_ON_FOOT_OBJECT2D(Ped ped, Object obj, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67F518F0, ped, obj, x, y, flag);
//     }

//     // LocateCharOnFootObject3d | 0x4A8E429A
//     static Any LOCATE_CHAR_ON_FOOT_OBJECT3D(Ped ped, Object obj, float x, float y, float z, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A8E429A, ped, obj, x, y, z, flag);
//     }

//     // ModifyCharMoveBlendRatio | 0x3E657606
//     static Any MODIFY_CHAR_MOVE_BLEND_RATIO(Ped ped, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E657606, ped, a2);
//     }

//     // ModifyCharMoveState | 0x5CD32071
//     static Any MODIFY_CHAR_MOVE_STATE(Ped ped, uint32_t state)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5CD32071, ped, state);
//     }

//     // PlayerHasChar | 0x22545844
//     static Any PLAYER_HAS_CHAR(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22545844, playerIndex);
//     }

//     // RemoveAllCharWeapons | 0x6BA520F0
//     static Any REMOVE_ALL_CHAR_WEAPONS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6BA520F0, ped);
//     }

//     // RemoveCharDefensiveArea | 0x2BC44D7D
//     static Any REMOVE_CHAR_DEFENSIVE_AREA(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BC44D7D, ped);
//     }

//     // RemoveCharElegantly | 0x5731084A
//     static Any REMOVE_CHAR_ELEGANTLY(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5731084A, ped);
//     }

//     // RemoveCharFromCarMaintainPosition | 0x3DA4533F
//     static Any REMOVE_CHAR_FROM_CAR_MAINTAIN_POSITION(Ped ped, Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3DA4533F, ped, car);
//     }

//     // RemoveCharFromGroup | 0x649316B7
//     static Any REMOVE_CHAR_FROM_GROUP(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x649316B7, ped);
//     }

//     // RemoveWeaponFromChar | 0x2485231E
//     static Any REMOVE_WEAPON_FROM_CHAR(Ped ped, uint32_t weapon)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2485231E, ped, weapon);
//     }

//     // SetAnimGroupForChar | 0x4CD43E46
//     static Any SET_ANIM_GROUP_FOR_CHAR(Ped ped, char *grname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4CD43E46, ped, grname);
//     }

//     // SetCanTargetCharWithoutLos | 0x3FA651A7
//     static Any SET_CAN_TARGET_CHAR_WITHOUT_LOS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FA651A7, ped, set);
//     }

//     // SetCharAccuracy | 0x1958471A
//     static Any SET_CHAR_ACCURACY(Ped ped, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1958471A, ped, value);
//     }

//     // SetCharAllAnimsSpeed | 0x5BDB7E2C
//     static Any SET_CHAR_ALL_ANIMS_SPEED(Ped ped, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BDB7E2C, ped, speed);
//     }

//     // SetCharAllowedToDuck | 0x6E2E55B5
//     static Any SET_CHAR_ALLOWED_TO_DUCK(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E2E55B5, ped, set);
//     }

//     // SetCharAllowedToRunOnBoats | 0x662235A5
//     static Any SET_CHAR_ALLOWED_TO_RUN_ON_BOATS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x662235A5, ped, set);
//     }

//     // SetCharAmmo | 0x437D247E
//     static Any SET_CHAR_AMMO(Ped ped, uint32_t weapon, uint32_t ammo)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x437D247E, ped, weapon, ammo);
//     }

//     // SetCharAnimCurrentTime | 0x245F424F
//     static Any SET_CHAR_ANIM_CURRENT_TIME(Ped ped, char *AnimName0, char *AnimName1, float time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x245F424F, ped, AnimName0, AnimName1, time);
//     }

//     // SetCharAnimPlayingFlag | 0x52DA430A
//     static Any SET_CHAR_ANIM_PLAYING_FLAG(Ped ped, char *AnimName0, char *AnimName1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52DA430A, ped, AnimName0, AnimName1, flag);
//     }

//     // SetCharAnimSpeed | 0x3C2A3334
//     static Any SET_CHAR_ANIM_SPEED(Ped ped, char *AnimName0, char *AnimName1, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C2A3334, ped, AnimName0, AnimName1, speed);
//     }

//     // SetCharAsEnemy | 0x1C35407F
//     static Any SET_CHAR_AS_ENEMY(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C35407F, ped, value);
//     }

//     // SetCharAsMissionChar | 0x60EC0540
//     static Any SET_CHAR_AS_MISSION_CHAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60EC0540, ped);
//     }

//     // SetCharBleeding | 0x38330B4A
//     static Any SET_CHAR_BLEEDING(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38330B4A, ped, set);
//     }

//     // SetCharCanBeKnockedOffBike | 0x30C54CD2
//     static Any SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30C54CD2, ped, value);
//     }

//     // SetCharCanBeShotInVehicle | 0x79912ADC
//     static Any SET_CHAR_CAN_BE_SHOT_IN_VEHICLE(Ped ped, bool enabled)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79912ADC, ped, enabled);
//     }

//     // SetCharCantBeDraggedOut | 0x2E5C36C0
//     static Any SET_CHAR_CANT_BE_DRAGGED_OUT(Ped ped, bool enabled)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E5C36C0, ped, enabled);
//     }

//     // SetCharClimbAnimRate | 0x68AB2DD9
//     static Any SET_CHAR_CLIMB_ANIM_RATE(Ped ped, float rate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68AB2DD9, ped, rate);
//     }

//     // SetCharCollision | 0x2A7413EB
//     static Any SET_CHAR_COLLISION(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A7413EB, ped, set);
//     }

//     // SetCharComponentVariation | 0x71A52973
//     static Any SET_CHAR_COMPONENT_VARIATION(Ped ped, uint32_t component, uint32_t modelVariation, uint32_t textureVariation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71A52973, ped, component, modelVariation, textureVariation);
//     }

//     // SetCharCoordinates | 0x689D0F5F
//     static Any SET_CHAR_COORDINATES(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x689D0F5F, ped, x, y, z);
//     }

//     // SetCharCoordinatesDontClearPlayerTasks | 0x3458600C
//     static Any SET_CHAR_COORDINATES_DONT_CLEAR_PLAYER_TASKS(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3458600C, ped, x, y, z);
//     }

//     // SetCharCoordinatesDontWarpGang | 0x624E5833
//     static Any SET_CHAR_COORDINATES_DONT_WARP_GANG(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x624E5833, ped, x, y, z);
//     }

//     // SetCharCoordinatesDontWarpGangNoOffset | 0x355F3FEB
//     static Any SET_CHAR_COORDINATES_DONT_WARP_GANG_NO_OFFSET(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x355F3FEB, ped, x, y, z);
//     }

//     // SetCharCoordinatesNoOffset | 0x57C758F0
//     static Any SET_CHAR_COORDINATES_NO_OFFSET(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57C758F0, ped, x, y, z);
//     }

//     // SetCharCurrentWeaponVisible | 0x6DAB7270
//     static Any SET_CHAR_CURRENT_WEAPON_VISIBLE(Ped ped, bool visble)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6DAB7270, ped, visble);
//     }

//     // SetCharDecisionMakerToDefault | 0x73CB1489
//     static Any SET_CHAR_DECISION_MAKER_TO_DEFAULT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73CB1489, ped);
//     }

//     // SetCharDefaultComponentVariation | 0x4FB30DB6
//     static Any SET_CHAR_DEFAULT_COMPONENT_VARIATION(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FB30DB6, ped);
//     }

//     // SetCharDefensiveAreaAttachedToCar | 0x7191562B
//     static Any SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_CAR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7191562B);
//     }

//     // SetCharDefensiveAreaAttachedToPed | 0x51C00627
//     static Any SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped pednext, float x0, float y0, float z0, float x1, float y1, float z1, int a9, int a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51C00627, ped, pednext, x0, y0, z0, x1, y1, z1, a9, a10);
//     }

//     // SetCharDesiredHeading | 0x6EF64079
//     static Any SET_CHAR_DESIRED_HEADING(Ped ped, float heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6EF64079, ped, heading);
//     }

//     // SetCharDropsWeaponsWhenDead | 0x2D43113A
//     static Any SET_CHAR_DROPS_WEAPONS_WHEN_DEAD(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D43113A, ped, value);
//     }

//     // SetCharDrownsInSinkingVehicle | 0x1E805412
//     static Any SET_CHAR_DROWNS_IN_SINKING_VEHICLE(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E805412, ped, set);
//     }

//     // SetCharDruggedUp | 0x458C333D
//     static Any SET_CHAR_DRUGGED_UP(Ped ped, bool drugged)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x458C333D, ped, drugged);
//     }

//     // SetCharDucking | 0x64302F16
//     static Any SET_CHAR_DUCKING(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64302F16, ped, set);
//     }

//     // SetCharFireDamageMultiplier | 0x29AE70A8
//     static Any SET_CHAR_FIRE_DAMAGE_MULTIPLIER(Ped ped, float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29AE70A8, ped, multiplier);
//     }

//     // SetCharForceDieInCar | 0x54AF2F7A
//     static Any SET_CHAR_FORCE_DIE_IN_CAR(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x54AF2F7A, ped, set);
//     }

//     // SetCharGestureGroup | 0x1106579B
//     static Any SET_CHAR_GESTURE_GROUP(Ped ped, char *AnimGroup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1106579B, ped, AnimGroup);
//     }

//     // SetCharGetOutUpsideDownCar | 0x1AAF54BE
//     static Any SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1AAF54BE, ped, set);
//     }

//     // SetCharGravity | 0x602C46E7
//     static Any SET_CHAR_GRAVITY(Ped ped, float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x602C46E7, ped, value);
//     }

//     // SetCharHeading | 0x46B5523B
//     static Any SET_CHAR_HEADING(Ped ped, float heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46B5523B, ped, heading);
//     }

//     // SetCharHealth | 0x575E2880
//     static Any SET_CHAR_HEALTH(Ped ped, uint32_t health)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x575E2880, ped, health);
//     }

//     // SetCharInCutscene | 0x12850007
//     static Any SET_CHAR_IN_CUTSCENE(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12850007, ped, set);
//     }

//     // SetCharInvincible | 0x2A58578B
//     static Any SET_CHAR_INVINCIBLE(Ped ped, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A58578B, ped, enable);
//     }

//     // SetCharIsTargetPriority | 0x163A1D77
//     static Any SET_CHAR_IS_TARGET_PRIORITY(Ped ped, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x163A1D77, ped, enable);
//     }

//     // SetCharKeepTask | 0x264009D3
//     static Any SET_CHAR_KEEP_TASK(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x264009D3, ped, value);
//     }

//     // SetCharMaxMoveBlendRatio | 0x640E7764
//     static Any SET_CHAR_MAX_MOVE_BLEND_RATIO(Ped ped, float ratio)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x640E7764, ped, ratio);
//     }

//     // SetCharMaxTimeInWater | 0x45F32596
//     static Any SET_CHAR_MAX_TIME_IN_WATER(Ped ped, float time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45F32596, ped, time);
//     }

//     // SetCharMaxTimeUnderwater | 0x7110790B
//     static Any SET_CHAR_MAX_TIME_UNDERWATER(Ped ped, float time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7110790B, ped, time);
//     }

//     // SetCharMeleeActionFlag0 | 0x771F3D7D
//     static Any SET_CHAR_MELEE_ACTION_FLAG0(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x771F3D7D, ped, set);
//     }

//     // SetCharMeleeActionFlag1 | 0x2EF60AA6
//     static Any SET_CHAR_MELEE_ACTION_FLAG1(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2EF60AA6, ped, set);
//     }

//     // SetCharMeleeActionFlag2 | 0x265E37E1
//     static Any SET_CHAR_MELEE_ACTION_FLAG2(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x265E37E1, ped, set);
//     }

//     // SetCharMeleeMovementConstaintBox | 0x5A7D2C3C
//     static Any SET_CHAR_MELEE_MOVEMENT_CONSTAINT_BOX(Ped ped, float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A7D2C3C, ped, x0, y0, z0, x1, y1, z1);
//     }

//     // SetCharMoney | 0x7B44224F
//     static Any SET_CHAR_MONEY(Ped ped, uint32_t amount)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B44224F, ped, amount);
//     }

//     // SetCharMoveAnimSpeedMultiplier | 0x5DC456DE
//     static Any SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER(Ped ped, float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DC456DE, ped, multiplier);
//     }

//     // SetCharMovementAnimsBlocked | 0x346B4FE7
//     static Any SET_CHAR_MOVEMENT_ANIMS_BLOCKED(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x346B4FE7, ped, set);
//     }

//     // SetCharNameDebug | 0x751967FD
//     static Any SET_CHAR_NAME_DEBUG()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x751967FD);
//     }

//     // SetCharNeverTargetted | 0x5EA84115
//     static Any SET_CHAR_NEVER_TARGETTED(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5EA84115, ped, set);
//     }

//     // SetCharOnlyDamagedByPlayer | 0x440D0A91
//     static Any SET_CHAR_ONLY_DAMAGED_BY_PLAYER(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x440D0A91, ped, set);
//     }

//     // SetCharOnlyDamagedByRelationshipGroup | 0x506C2898
//     static Any SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Ped ped, bool set, int32_t relgroup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x506C2898, ped, set, relgroup);
//     }

//     // SetCharProofs | 0x76F25B4B
//     static Any SET_CHAR_PROOFS(Ped ped, bool unknown0, bool fallingDamage, bool unknown1, bool unknown2, bool unknown3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76F25B4B, ped, unknown0, fallingDamage, unknown1, unknown2, unknown3);
//     }

//     // SetCharPropIndex | 0x5FE95249
//     static Any SET_CHAR_PROP_INDEX(Ped ped, uint32_t propType, uint32_t index)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FE95249, ped, propType, index);
//     }

//     // SetCharPropIndexTexture | 0x57390041
//     static Any SET_CHAR_PROP_INDEX_TEXTURE(Ped ped, int a2, int a3, int a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57390041, ped, a2, a3, a4);
//     }

//     // SetCharProvideCoveringFire | 0x1A827B2C
//     static Any SET_CHAR_PROVIDE_COVERING_FIRE(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A827B2C, ped, set);
//     }

//     // SetCharRandomComponentVariation | 0x47D9437C
//     static Any SET_CHAR_RANDOM_COMPONENT_VARIATION(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47D9437C, ped);
//     }

//     // SetCharReadyToBeExecuted | 0x5F58606A
//     static Any SET_CHAR_READY_TO_BE_EXECUTED(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F58606A, ped, set);
//     }

//     // SetCharReadyToBeStunned | 0x2B416A06
//     static Any SET_CHAR_READY_TO_BE_STUNNED(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B416A06, ped, set);
//     }

//     // SetCharRelationship | 0x6D9538E1
//     static Any SET_CHAR_RELATIONSHIP(Ped ped, uint32_t relationshipLevel, uint32_t relationshipGroup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D9538E1, ped, relationshipLevel, relationshipGroup);
//     }

//     // SetCharRelationshipGroup | 0x61822A3C
//     static Any SET_CHAR_RELATIONSHIP_GROUP(Ped ped, uint32_t relationshipGroup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61822A3C, ped, relationshipGroup);
//     }

//     // SetCharRotation | 0x70E13826
//     static Any SET_CHAR_ROTATION(Ped ped, float xr, float yr, float zr)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70E13826, ped, xr, yr, zr);
//     }

//     // SetCharShootRate | 0x2AE979DC
//     static Any SET_CHAR_SHOOT_RATE(Ped ped, int32_t rate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2AE979DC, ped, rate);
//     }

//     // SetCharSignalAfterKill | 0x6C6C1CF3
//     static Any SET_CHAR_SIGNAL_AFTER_KILL(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C6C1CF3, ped, set);
//     }

//     // SetCharSphereDefensiveArea | 0x56AD2409
//     static Any SET_CHAR_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56AD2409, ped, x, y, z, radius);
//     }

//     // SetCharStayInCarWhenJacked | 0x1A02748F
//     static Any SET_CHAR_STAY_IN_CAR_WHEN_JACKED(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A02748F, ped, set);
//     }

//     // SetCharSuffersCriticalHits | 0x154E450E
//     static Any SET_CHAR_SUFFERS_CRITICAL_HITS(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x154E450E, ped, value);
//     }

//     // SetCharUsesUpperbodyDamageAnimsOnly | 0x268F1413
//     static Any SET_CHAR_USES_UPPERBODY_DAMAGE_ANIMS_ONLY(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x268F1413, ped, set);
//     }

//     // SetCharWalkAlongsideLeaderWhenAppropriate | 0x41121D51
//     static Any SET_CHAR_WALK_ALONGSIDE_LEADER_WHEN_APPROPRIATE(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41121D51, ped, set);
//     }

//     // SetCharWatchMelee | 0x142A5E83
//     static Any SET_CHAR_WATCH_MELEE(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x142A5E83, ped, set);
//     }

//     // SetCharWeaponSkill | 0x441B1EAF
//     static Any SET_CHAR_WEAPON_SKILL(Ped ped, int32_t skill)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x441B1EAF, ped, skill);
//     }

//     // SetCharWillCowerInsteadOfFleeing | 0x58FB0BC1
//     static Any SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58FB0BC1, ped, set);
//     }

//     // SetCharWillDoDrivebys | 0x2C9E0483
//     static Any SET_CHAR_WILL_DO_DRIVEBYS(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C9E0483, ped, value);
//     }

//     // SetCharWillFlyThroughWindscreen | 0x6FC75ABD
//     static Any SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6FC75ABD, ped, value);
//     }

//     // SetCharWillLeaveCarInCombat | 0x7CFC39CB
//     static Any SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CFC39CB, ped, set);
//     }

//     // SetCharWillMoveWhenInjured | 0x1EF36397
//     static Any SET_CHAR_WILL_MOVE_WHEN_INJURED(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1EF36397, ped, value);
//     }

//     // SetCharWillOnlyFireWithClearLos | 0x4458184A
//     static Any SET_CHAR_WILL_ONLY_FIRE_WITH_CLEAR_LOS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4458184A, ped, set);
//     }

//     // SetCharWillRemainOnBoatAfterMissionEnds | 0x5E8D08CE
//     static Any SET_CHAR_WILL_REMAIN_ON_BOAT_AFTER_MISSION_ENDS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E8D08CE, ped, set);
//     }

//     // SetCharWillTryToLeaveBoatAfterLeader | 0x62AB2AB4
//     static Any SET_CHAR_WILL_TRY_TO_LEAVE_BOAT_AFTER_LEADER(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62AB2AB4, ped, set);
//     }

//     // SetCharWillTryToLeaveWater | 0x1D1B6750
//     static Any SET_CHAR_WILL_TRY_TO_LEAVE_WATER(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D1B6750, ped, set);
//     }

//     // SetCharWillUseCarsInCombat | 0x2FD83FB5
//     static Any SET_CHAR_WILL_USE_CARS_IN_COMBAT(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FD83FB5, ped, value);
//     }

//     // SetCharWillUseCover | 0x5F2F1680
//     static Any SET_CHAR_WILL_USE_COVER(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F2F1680, ped, value);
//     }

//     // SetCurrentCharWeapon | 0x6CF44DD6
//     static Any SET_CURRENT_CHAR_WEAPON(Ped ped, uint32_t w, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CF44DD6, ped, w, unknownTrue);
//     }

//     // SetDeadCharCoordinates | 0x68C57282
//     static Any SET_DEAD_CHAR_COORDINATES(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68C57282, ped, x, y, z);
//     }

//     // SetGroupCharDecisionMaker | 0x14166075
//     static Any SET_GROUP_CHAR_DECISION_MAKER(Group group, DecisionMaker dm)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14166075, group, dm);
//     }

//     // SetGroupCharDucksWhenAimedAt | 0x5C8C7F9E
//     static Any SET_GROUP_CHAR_DUCKS_WHEN_AIMED_AT(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C8C7F9E, ped, value);
//     }

//     // SetLoadCollisionForCharFlag | 0x4AA762A4
//     static Any SET_LOAD_COLLISION_FOR_CHAR_FLAG(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AA762A4, ped, set);
//     }

//     // SetRoomForCharByKey | 0x620C26D8
//     static Any SET_ROOM_FOR_CHAR_BY_KEY(Ped ped, uint32_t key)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x620C26D8, ped, key);
//     }

//     // SetRoomForCharByName | 0x2E9B1F77
//     static Any SET_ROOM_FOR_CHAR_BY_NAME(Ped ped, char *roomname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E9B1F77, ped, roomname);
//     }

//     // SetRoomForDummyCharByKey | 0x29907BEF
//     static Any SET_ROOM_FOR_DUMMY_CHAR_BY_KEY(Ped dummy, int32_t key)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29907BEF, dummy, key);
//     }

//     // SetRoomForDummyCharByName | 0x75B024C6
//     static Any SET_ROOM_FOR_DUMMY_CHAR_BY_NAME(Ped ped, char *roomname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75B024C6, ped, roomname);
//     }

//     // StartCharFire | 0x5FB31295
//     static Any START_CHAR_FIRE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FB31295, ped);
//     }

//     // StoreCarCharIsInNoSave | 0x21CC647F
//     static Any STORE_CAR_CHAR_IS_IN_NO_SAVE(Ped ped, Car *car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21CC647F, ped, car);
//     }

//     // TaskAimGunAtChar | 0x4437501B
//     static Any TASK_AIM_GUN_AT_CHAR(Ped ped, Ped targetPed, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4437501B, ped, targetPed, duration);
//     }

//     // TaskCharArrestChar | 0x71A05FF1
//     static Any TASK_CHAR_ARREST_CHAR(Ped ped0, Ped ped1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71A05FF1, ped0, ped1);
//     }

//     // TaskCharSlideToCoordAndPlayAnim | 0x79BB1D64
//     static Any TASK_CHAR_SLIDE_TO_COORD_AND_PLAY_ANIM(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10, Any a11, Any a12, Any a13, Any a14)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79BB1D64, ped, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
//     }

//     // TaskCharSlideToCoordHdgRate | 0x33D756A0
//     static Any TASK_CHAR_SLIDE_TO_COORD_HDG_RATE(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x33D756A0, ped, a2, a3, a4, a5, a6, a7);
//     }

//     // TaskChatWithChar | 0x5C9807CA
//     static Any TASK_CHAT_WITH_CHAR(Ped ped, Ped pednext, bool a3, bool a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C9807CA, ped, pednext, a3, a4);
//     }

//     // TaskCombatHatedTargetsAroundChar | 0x127669D3
//     static Any TASK_COMBAT_HATED_TARGETS_AROUND_CHAR(Ped ped, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x127669D3, ped, radius);
//     }

//     // TaskCombatHatedTargetsAroundCharTimed | 0x15012850
//     static Any TASK_COMBAT_HATED_TARGETS_AROUND_CHAR_TIMED(Ped ped, float radius, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15012850, ped, radius, duration);
//     }

//     // TaskFleeCharAnyMeans | 0x32517AE2
//     static Any TASK_FLEE_CHAR_ANY_MEANS(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32517AE2, ped, a2, a3, a4, a5, a6, a7, a8);
//     }

//     // TaskGoToChar | 0x664D06FF
//     static Any TASK_GO_TO_CHAR(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x664D06FF, ped, a2, a3, a4);
//     }

//     // TaskGotoCharAiming | 0x65EB71CC
//     static Any TASK_GOTO_CHAR_AIMING(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65EB71CC, ped, a2, a3, a4);
//     }

//     // TaskGotoCharOffset | 0x658028BA
//     static Any TASK_GOTO_CHAR_OFFSET(Ped ped, Ped target, uint32_t duration, float offsetRight, float offsetFront)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x658028BA, ped, target, duration, offsetRight, offsetFront);
//     }

//     // TaskLookAtChar | 0x2DD35B3F
//     static Any TASK_LOOK_AT_CHAR(Ped ped, Ped targetPed, uint32_t duration, uint32_t unknown_0)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2DD35B3F, ped, targetPed, duration, unknown_0);
//     }

//     // TaskPutCharDirectlyIntoCover | 0x1FDD4860
//     static Any TASK_PUT_CHAR_DIRECTLY_INTO_COVER(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1FDD4860, a1, a2, a3, a4, a5);
//     }

//     // TaskSetCharDecisionMaker | 0x1CB2670D
//     static Any TASK_SET_CHAR_DECISION_MAKER(Ped ped, DecisionMaker dm)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1CB2670D, ped, dm);
//     }

//     // TaskSmartFleeChar | 0x1880639C
//     static Any TASK_SMART_FLEE_CHAR(Ped ped, Ped fleeFromPed, float unknown0_100, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1880639C, ped, fleeFromPed, unknown0_100, duration);
//     }

//     // TaskSmartFleeCharPreferringPavements | 0x57AC66E9
//     static Any TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS(Ped ped, Ped fleeFromPed, float unknown0_100, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57AC66E9, ped, fleeFromPed, unknown0_100, duration);
//     }

//     // TaskTurnCharToFaceCoord | 0x51517B11
//     static Any TASK_TURN_CHAR_TO_FACE_COORD(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51517B11, ped, x, y, z);
//     }

//     // TaskWarpCharIntoCarAsDriver | 0x6F363A21
//     static Any TASK_WARP_CHAR_INTO_CAR_AS_DRIVER(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6F363A21, ped, vehicle);
//     }

//     // ToggleCharDucking | 0x265544F9
//     static Any TOGGLE_CHAR_DUCKING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x265544F9, ped);
//     }

//     // UnsetCharMeleeMovementConstaintBox | 0x3AC90796
//     static Any UNSET_CHAR_MELEE_MOVEMENT_CONSTAINT_BOX(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3AC90796, ped);
//     }

//     // WarpCharFromCarToCar | 0x3AE77439
//     static Any WARP_CHAR_FROM_CAR_TO_CAR(Ped ped, Vehicle vehicle, uint32_t seatIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3AE77439, ped, vehicle, seatIndex);
//     }

//     // WarpCharFromCarToCoord | 0x6A77506A
//     static Any WARP_CHAR_FROM_CAR_TO_COORD(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A77506A, ped, x, y, z);
//     }

//     // WarpCharIntoCar | 0x73D3504A
//     static Any WARP_CHAR_INTO_CAR(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73D3504A, ped, vehicle);
//     }

//     // WarpCharIntoCarAsPassenger | 0x172376FE
//     static Any WARP_CHAR_INTO_CAR_AS_PASSENGER(Ped ped, Vehicle vehicle, uint32_t seatIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x172376FE, ped, vehicle, seatIndex);
//     }

// } // namespace CHARACTER

// namespace MISC
// {

//     // AbortAllGarageActivity | 0x5DB95843
//     static Any ABORT_ALL_GARAGE_ACTIVITY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DB95843);
//     }

//     // Absi | 0x75A648B7
//     static Any ABSI(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75A648B7, value);
//     }

//     // Acos | 0x2E746E53
//     static Any ACOS(float a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E746E53, a1);
//     }

//     // ActivateCheat | 0x69E742FC
//     static Any ACTIVATE_CHEAT(uint32_t cheat)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69E742FC, cheat);
//     }

//     // ActivateFrontend | 0x3C64626F
//     static Any ACTIVATE_FRONTEND()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C64626F);
//     }

//     // ActivateInterior | 0x66DD4F67
//     static Any ACTIVATE_INTERIOR(Interior interior, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66DD4F67, interior, unknownTrue);
//     }

//     // ActivateVectorMap | 0x2E7D1C82
//     static Any ACTIVATE_VECTOR_MAP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E7D1C82);
//     }

//     // AddAdditionalPopulationModel | 0x7EDE120F
//     static Any ADD_ADDITIONAL_POPULATION_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EDE120F, model);
//     }

//     // AddCombatDecisionMakerEventResponse | 0x530A7CE5
//     static Any ADD_COMBAT_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint32_t eventid, uint32_t responseid, float param1, float param2, float param3, float param4, uint32_t unknown0_1, uint32_t unknown1_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x530A7CE5, dm, eventid, responseid, param1, param2, param3, param4, unknown0_1, unknown1_1);
//     }

//     // AddCoverBlockingArea | 0x6E856548
//     static Any ADD_COVER_BLOCKING_AREA(Any a1, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E856548, a1, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // AddCoverPoint | 0x18D5264D
//     static Any ADD_COVER_POINT(Any a1, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18D5264D, a1, a2, a3, a4, a5, a6, a7, a8);
//     }

//     // AddHospitalRestart | 0x2AB06643
//     static Any ADD_HOSPITAL_RESTART(float x, float y, float z, float radius, int32_t islandnum)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2AB06643, x, y, z, radius, islandnum);
//     }

//     // AddLineToConversation | 0x75080482
//     static Any ADD_LINE_TO_CONVERSATION(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75080482, a1, a2, a3, a4, a5);
//     }

//     // AddNavmeshRequiredRegion | 0x6CB64BDB
//     static Any ADD_NAVMESH_REQUIRED_REGION(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CB64BDB, x, y, z);
//     }

//     // AddNeededAtPosn | 0x2E831921
//     static Any ADD_NEEDED_AT_POSN(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E831921, x, y, z);
//     }

//     // AddNewConversationSpeaker | 0x542D499E
//     static Any ADD_NEW_CONVERSATION_SPEAKER(int32_t id, int a2, int32_t *a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x542D499E, id, a2, a3);
//     }

//     // AddNewFrontendConversationSpeaker | 0x13D44996
//     static Any ADD_NEW_FRONTEND_CONVERSATION_SPEAKER(int a1, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13D44996, a1, a2);
//     }

//     // AddNextMessageToPreviousBriefs | 0x1B086D33
//     static Any ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(bool add)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B086D33, add);
//     }

//     // AddPointToGpsRaceTrack | 0x5BE115FD
//     static Any ADD_POINT_TO_GPS_RACE_TRACK(rage::vector3 *point)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BE115FD, point);
//     }

//     // AddPoliceRestart | 0x42492860
//     static Any ADD_POLICE_RESTART(float x, float y, float z, float radius, int32_t islandnum)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42492860, x, y, z, radius, islandnum);
//     }

//     // AddScenarioBlockingArea | 0x4C1E3A64
//     static Any ADD_SCENARIO_BLOCKING_AREA(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C1E3A64, x0, y0, z0, x1, y1, z1);
//     }

//     // AddScore | 0x537379A8
//     static Any ADD_SCORE(Player playerIndex, int32_t score)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x537379A8, playerIndex, score);
//     }

//     // AddSpawnBlockingArea | 0x36DF37DB
//     static Any ADD_SPAWN_BLOCKING_AREA(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36DF37DB, a1, a2, a3, a4);
//     }

//     // AddSpawnBlockingDisc | 0x2B4E2A8C
//     static Any ADD_SPAWN_BLOCKING_DISC(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B4E2A8C, a1, a2, a3, a4, a5);
//     }

//     // AddSphere | 0x42252652
//     static Any ADD_SPHERE(float x, float y, float z, float radius, uint32_t a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42252652, x, y, z, radius, a5);
//     }

//     // AddStringToNewsScrollbar | 0x192E5726
//     static Any ADD_STRING_TO_NEWS_SCROLLBAR(char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x192E5726, str);
//     }

//     // AddStringWithThisTextLabelToPreviousBrief | 0x76860554
//     static Any ADD_STRING_WITH_THIS_TEXT_LABEL_TO_PREVIOUS_BRIEF(char *gxtname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76860554, gxtname);
//     }

//     // AddStuntJump | 0x422E7AC3
//     static Any ADD_STUNT_JUMP(float x, float y, float z, float x0, float y0, float z0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int32_t reward)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x422E7AC3, x, y, z, x0, y0, z0, x1, y1, z1, x2, y2, z2, x3, y3, z3, reward);
//     }

//     // AddToPreviousBrief | 0x446E6515
//     static Any ADD_TO_PREVIOUS_BRIEF(char *gxtentry)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x446E6515, gxtentry);
//     }

//     // AddToPreviousBriefWithUnderscore | 0x3D0A71A2
//     static Any ADD_TO_PREVIOUS_BRIEF_WITH_UNDERSCORE(char *gxtentry)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D0A71A2, gxtentry);
//     }

//     // AllowAutoConversationLookats | 0x736D423E
//     static Any ALLOW_AUTO_CONVERSATION_LOOKATS(Ped ped, bool allow)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x736D423E, ped, allow);
//     }

//     // AllowEmergencyServices | 0x69A72C50
//     static Any ALLOW_EMERGENCY_SERVICES(bool allow)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69A72C50, allow);
//     }

//     // AllowGangRelationshipsToBeChangedByNextCommand | 0x585157FE
//     static Any ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x585157FE, value);
//     }

//     // AllowOneTimeOnlyCommandsToRun | 0x3B2E3198
//     static Any ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B2E3198);
//     }

//     // AllowStuntJumpsToTrigger | 0x5E8D7E3F
//     static Any ALLOW_STUNT_JUMPS_TO_TRIGGER(bool allow)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E8D7E3F, allow);
//     }

//     // AllowTargetWhenInjured | 0x33F8250B
//     static Any ALLOW_TARGET_WHEN_INJURED(Ped ped, bool allow)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x33F8250B, ped, allow);
//     }

//     // AlterWantedLevel | 0x60C80EC9
//     static Any ALTER_WANTED_LEVEL(Player playerIndex, uint32_t level)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60C80EC9, playerIndex, level);
//     }

//     // AlterWantedLevelNoDrop | 0x5F3B6079
//     static Any ALTER_WANTED_LEVEL_NO_DROP(Player playerIndex, uint32_t level)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F3B6079, playerIndex, level);
//     }

//     // AmbientAudioBankNoLongerNeeded | 0x292349C7
//     static Any AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x292349C7);
//     }

//     // AnchorBoat | 0x2E12687B
//     static Any ANCHOR_BOAT(Vehicle boat, bool anchor)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E12687B, boat, anchor);
//     }

//     // ApplyWantedLevelChangeNow | 0x705A6ED9
//     static Any APPLY_WANTED_LEVEL_CHANGE_NOW(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x705A6ED9, playerIndex);
//     }

//     // AreAllNavmeshRegionsLoaded | 0x73737990
//     static Any ARE_ALL_NAVMESH_REGIONS_LOADED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73737990);
//     }

//     // AreCreditsFinished | 0x63A669B6
//     static Any ARE_CREDITS_FINISHED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63A669B6);
//     }

//     // AreTaxiLightsOn | 0x5F4B0B22
//     static Any ARE_TAXI_LIGHTS_ON(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F4B0B22, vehicle);
//     }

//     // AreWidescreenBordersActive | 0x4FE17259
//     static Any ARE_WIDESCREEN_BORDERS_ACTIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FE17259);
//     }

//     // AsciiIntToString | 0x7F4C0E47
//     static Any ASCII_INT_TO_STRING(int32_t ascii)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F4C0E47, ascii);
//     }

//     // Asin | 0x590A6F04
//     static Any ASIN(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x590A6F04, value);
//     }

//     // Atan | 0x7FFE0A12
//     static Any ATAN(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FFE0A12, value);
//     }

//     // Atan2 | 0x10A1449C
//     static Any ATAN2(float a1, float a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10A1449C, a1, a2);
//     }

//     // AwardAchievement | 0x5ED03255
//     static Any AWARD_ACHIEVEMENT(uint32_t achievement)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5ED03255, achievement);
//     }

//     // BlendFromNmWithAnim | 0x6E405BD5
//     static Any BLEND_FROM_NM_WITH_ANIM(Ped ped, char *AnimName0, char *AnimName1, int a4, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E405BD5, ped, AnimName0, AnimName1, a4, x, y, z);
//     }

//     // BlockCoweringInCover | 0x1866612D
//     static Any BLOCK_COWERING_IN_COVER(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1866612D, ped, set);
//     }

//     // BlockPeekingInCover | 0x15101503
//     static Any BLOCK_PEEKING_IN_COVER(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15101503, ped, set);
//     }

//     // Breakpoint | 0x5AE10E31
//     static Any BREAKPOINT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AE10E31);
//     }

//     // ClearCombatDecisionMakerEventResponse | 0x4FEE5CC2
//     static Any CLEAR_COMBAT_DECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint32_t eventid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FEE5CC2, dm, eventid);
//     }

//     // ClearGrouPDecisionMakerEventResponse | 0x4FEE5CC2
//     static Any CLEAR_GROU_PDECISION_MAKER_EVENT_RESPONSE(DecisionMaker dm, uint32_t eventid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FEE5CC2, dm, eventid);
//     }

//     // CalculateChecksum | 0x18A302CD
//     static Any CALCULATE_CHECKSUM(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18A302CD, a1, a2);
//     }

//     // CanFontBeLoaded | 0x1E2A5820
//     static Any CAN_FONT_BE_LOADED(int32_t fontid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E2A5820, fontid);
//     }

//     // CanRegisterMissionEntities | 0x66FD3CFC
//     static Any CAN_REGISTER_MISSION_ENTITIES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66FD3CFC);
//     }

//     // CanStartMissionPassedTune | 0x22AB641D
//     static Any CAN_START_MISSION_PASSED_TUNE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22AB641D);
//     }

//     // CancelCurrentlyPlayingAmbientSpeech | 0x495D445F
//     static Any CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x495D445F, ped);
//     }

//     // CancelOverrideRestart | 0x6ED83424
//     static Any CANCEL_OVERRIDE_RESTART()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6ED83424);
//     }

//     // Ceil | 0x76181322
//     static Any CEIL(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76181322, value);
//     }

//     // ChangeGarageType | 0x6E0A438A
//     static Any CHANGE_GARAGE_TYPE(int32_t garage, int32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E0A438A, garage, type);
//     }

//     // ChangePlaybackToUseAi | 0x76EB2878
//     static Any CHANGE_PLAYBACK_TO_USE_AI(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76EB2878, car);
//     }

//     // CheatHappenedRecently | 0x7488454D
//     static Any CHEAT_HAPPENED_RECENTLY(int32_t cheat, int32_t time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7488454D, cheat, time);
//     }

//     // CheckNmFeedback | 0x7C4C63EF
//     static Any CHECK_NM_FEEDBACK(Ped ped, int32_t id, bool a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C4C63EF, ped, id, a3);
//     }

//     // CheckStuckTimer | 0x15285933
//     static Any CHECK_STUCK_TIMER(Car car, int32_t timernum, int32_t timeout)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15285933, car, timernum, timeout);
//     }

//     // ClearArea | 0x27722942
//     static Any CLEAR_AREA(float x, float y, float z, float radius, bool unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27722942, x, y, z, radius, unknown);
//     }

//     // ClearAreaOfCops | 0x5F182E21
//     static Any CLEAR_AREA_OF_COPS(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F182E21, x, y, z, radius);
//     }

//     // ClearBit | 0x66D57CC4
//     static Any CLEAR_BIT(int32_t *val, int32_t bit)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66D57CC4, val, bit);
//     }

//     // ClearBrief | 0x16D762E5
//     static Any CLEAR_BRIEF()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x16D762E5);
//     }

//     // ClearCutscene | 0x79611458
//     static Any CLEAR_CUTSCENE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79611458);
//     }

//     // ClearEventPrecedence | 0x1CC41C5E
//     static Any CLEAR_EVENT_PRECEDENCE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1CC41C5E);
//     }

//     // ClearNamedCutscene | 0x62EF058E
//     static Any CLEAR_NAMED_CUTSCENE(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62EF058E, name);
//     }

//     // ClearOnscreenCounter | 0x3F236954
//     static Any CLEAR_ONSCREEN_COUNTER(int32_t counterid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F236954, counterid);
//     }

//     // ClearOnscreenTimer | 0x34C751A2
//     static Any CLEAR_ONSCREEN_TIMER(int32_t timerid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34C751A2, timerid);
//     }

//     // ClearPrints | 0x1D8C324A
//     static Any CLEAR_PRINTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D8C324A);
//     }

//     // ClearRelationship | 0x3FF16CBC
//     static Any CLEAR_RELATIONSHIP(int a1, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FF16CBC, a1, a2, a3);
//     }

//     // ClearSequenceTask | 0x7ED774FE
//     static Any CLEAR_SEQUENCE_TASK(TaskSequence taskSequence)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7ED774FE, taskSequence);
//     }

//     // ClearSmallPrints | 0x7C515B18
//     static Any CLEAR_SMALL_PRINTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C515B18);
//     }

//     // ClearTextLabel | 0x412E68D0
//     static Any CLEAR_TEXT_LABEL(char *label)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x412E68D0, label);
//     }

//     // ClearThisBigPrint | 0x4A4F2699
//     static Any CLEAR_THIS_BIG_PRINT(char *gxtentry)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A4F2699, gxtentry);
//     }

//     // ClearThisPrintBigNow | 0x1C8B73B6
//     static Any CLEAR_THIS_PRINT_BIG_NOW(bool a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C8B73B6, a1);
//     }

//     // ClearTimecycleModifier | 0x60FB61A7
//     static Any CLEAR_TIMECYCLE_MODIFIER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60FB61A7);
//     }

//     // ClearUpTripSkip | 0x75F069D9
//     static Any CLEAR_UP_TRIP_SKIP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75F069D9);
//     }

//     // ClearWantedLevel | 0x205622AC
//     static Any CLEAR_WANTED_LEVEL(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x205622AC, playerIndex);
//     }

//     // CloseDebugFile | 0x41286578
//     static Any CLOSE_DEBUG_FILE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41286578);
//     }

//     // CloseGarage | 0x5C083072
//     static Any CLOSE_GARAGE(char *garageName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C083072, garageName);
//     }

//     // CompareTwoDates | 0x116D009A
//     static Any COMPARE_TWO_DATES(int32_t date0_0, int32_t date0_1, int32_t date1_0, int32_t date1_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x116D009A, date0_0, date0_1, date1_0, date1_1);
//     }

//     // ConnectLods | 0x79EB2BC9
//     static Any CONNECT_LODS(Object obj0, Object obj1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79EB2BC9, obj0, obj1);
//     }

//     // ConvertMetresToFeet | 0x4D2771CE
//     static Any CONVERT_METRES_TO_FEET(float metres)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D2771CE, metres);
//     }

//     // CopyAnimations | 0x308D1778
//     static Any COPY_ANIMATIONS(Ped ped, Ped pednext, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x308D1778, ped, pednext, speed);
//     }

//     // CopyGroupCombatDecisionMaker | 0x17002E03
//     static Any COPY_GROUP_COMBAT_DECISION_MAKER(uint32_t type, DecisionMaker *pDM)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17002E03, type, pDM);
//     }

//     // CopySharedCombatDecisionMaker | 0x13DE5C59
//     static Any COPY_SHARED_COMBAT_DECISION_MAKER(uint32_t type, DecisionMaker *pDM)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13DE5C59, type, pDM);
//     }

//     // CreateCheckpoint | 0x41F27499
//     static Any CREATE_CHECKPOINT(int32_t type, float x, float y, float z, float a5, float a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41F27499, type, x, y, z, a5, a6);
//     }

//     // CreateGroup | 0x78300C0C
//     static Any CREATE_GROUP(bool unknownFalse, Group *pGroup, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78300C0C, unknownFalse, pGroup, unknownTrue);
//     }

//     // CreateNmMessage | 0x22AA010C
//     static Any CREATE_NM_MESSAGE(bool a1, int32_t id)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22AA010C, a1, id);
//     }

//     // CreateUser3dMarker | 0x77513211
//     static Any CREATE_USER3D_MARKER(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x77513211, x, y, z);
//     }

//     // DeactivateFrontend | 0x72B16D0D
//     static Any DEACTIVATE_FRONTEND()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72B16D0D);
//     }

//     // DebugOff | 0x67177EEC
//     static Any DEBUG_OFF()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67177EEC);
//     }

//     // DebugOn | 0x4B2103F0
//     static Any DEBUG_ON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B2103F0);
//     }

//     // DecrementIntStat | 0x7DD91295
//     static Any DECREMENT_INT_STAT(uint32_t stat, uint32_t amount)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DD91295, stat, amount);
//     }

//     // DeleteAllTrains | 0x552B2224
//     static Any DELETE_ALL_TRAINS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x552B2224);
//     }

//     // DeleteCheckpoint | 0x1293731D
//     static Any DELETE_CHECKPOINT(uint32_t checkpoint)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1293731D, checkpoint);
//     }

//     // DeleteMissionTrain | 0x7DA237BC
//     static Any DELETE_MISSION_TRAIN(Train *pTrain)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DA237BC, pTrain);
//     }

//     // DeleteMissionTrains | 0x7D635E2C
//     static Any DELETE_MISSION_TRAINS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D635E2C);
//     }

//     // DidSaveCompleteSuccessfully | 0x5AA33E86
//     static Any DID_SAVE_COMPLETE_SUCCESSFULLY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AA33E86);
//     }

//     // DisableEndCreditsFade | 0x21B45EC1
//     static Any DISABLE_END_CREDITS_FADE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21B45EC1);
//     }

//     // DisableFrontendRadio | 0x6B2F3E97
//     static Any DISABLE_FRONTEND_RADIO()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B2F3E97);
//     }

//     // DisableGps | 0x32A81853
//     static Any DISABLE_GPS(bool disable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32A81853, disable);
//     }

//     // DisablePoliceScanner | 0x63AF5057
//     static Any DISABLE_POLICE_SCANNER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63AF5057);
//     }

//     // DisplayAltimeterThisFrame | 0x50C13702
//     static Any DISPLAY_ALTIMETER_THIS_FRAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50C13702);
//     }

//     // DisplayAmmo | 0x2E115B4B
//     static Any DISPLAY_AMMO(bool display)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E115B4B, display);
//     }

//     // DisplayAreaName | 0x1E87298A
//     static Any DISPLAY_AREA_NAME(bool display)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E87298A, display);
//     }

//     // DisplayCash | 0x62ED1551
//     static Any DISPLAY_CASH(bool display)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62ED1551, display);
//     }

//     // DisplayGrimeThisFrame | 0x56B95223
//     static Any DISPLAY_GRIME_THIS_FRAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56B95223);
//     }

//     // DisplayHud | 0x52632919
//     static Any DISPLAY_HUD(bool display)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52632919, display);
//     }

//     // DisplayNonMinigameHelpMessages | 0x73F56AC5
//     static Any DISPLAY_NON_MINIGAME_HELP_MESSAGES(bool a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73F56AC5, a1);
//     }

//     // DisplayNthOnscreenCounterWithString | 0x4D9C4195
//     static Any DISPLAY_NTH_ONSCREEN_COUNTER_WITH_STRING(int a1, int a2, int a3, char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D9C4195, a1, a2, a3, str);
//     }

//     // DisplayOnscreenTimerWithString | 0x384F104F
//     static Any DISPLAY_ONSCREEN_TIMER_WITH_STRING(int32_t timerid, bool a2, char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x384F104F, timerid, a2, str);
//     }

//     // DisplayRadar | 0x17920FA7
//     static Any DISPLAY_RADAR(bool display)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17920FA7, display);
//     }

//     // DisplaySniperScopeThisFrame | 0x5BF23AD5
//     static Any DISPLAY_SNIPER_SCOPE_THIS_FRAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BF23AD5);
//     }

//     // DisplayTextWith2Numbers | 0x337957AF
//     static Any DISPLAY_TEXT_WITH2NUMBERS(float x, float y, char *gxtName, int32_t number1, int32_t number2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x337957AF, x, y, gxtName, number1, number2);
//     }

//     // DisplayTextWith3Numbers | 0x746C06E8
//     static Any DISPLAY_TEXT_WITH3NUMBERS(float x, float y, char *gxtentry, int a4, int a5, int a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x746C06E8, x, y, gxtentry, a4, a5, a6);
//     }

//     // DisplayTextWithFloat | 0x311F4FE9
//     static Any DISPLAY_TEXT_WITH_FLOAT(float x, float y, char *gxtName, float value, uint32_t unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x311F4FE9, x, y, gxtName, value, unknown);
//     }

//     // DisplayTextWithLiteralString | 0x661B239A
//     static Any DISPLAY_TEXT_WITH_LITERAL_STRING(float x, float y, char *gxtName, char *literalStr)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x661B239A, x, y, gxtName, literalStr);
//     }

//     // DisplayTextWithLiteralSubstring | 0x1FCB5241
//     static Any DISPLAY_TEXT_WITH_LITERAL_SUBSTRING(Any a1, Any a2, Any a3, Any a4, Any a5, Any a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1FCB5241, a1, a2, a3, a4, a5, a6);
//     }

//     // DisplayTextWithNumber | 0x5A495ABE
//     static Any DISPLAY_TEXT_WITH_NUMBER(float x, float y, char *gxtName, int32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A495ABE, x, y, gxtName, value);
//     }

//     // DisplayTextWithString | 0x10A75905
//     static Any DISPLAY_TEXT_WITH_STRING(float x, float y, char *gxtName, char *gxtStringName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10A75905, x, y, gxtName, gxtStringName);
//     }

//     // DisplayTextWithStringAndInt | 0x369A4540
//     static Any DISPLAY_TEXT_WITH_STRING_AND_INT(float x, float y, char *gxtname, char *gxtnamenext, int32_t val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x369A4540, x, y, gxtname, gxtnamenext, val);
//     }

//     // DisplayTextWithSubstringGivenHashKey | 0x7EF6599D
//     static Any DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY(float x, float y, char *gxtkey, uint32_t gxtkey0)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EF6599D, x, y, gxtkey, gxtkey0);
//     }

//     // DisplayTextWithTwoLiteralStrings | 0x4B7C3AEC
//     static Any DISPLAY_TEXT_WITH_TWO_LITERAL_STRINGS(float x, float y, char *gxtName, char *literalStr1, char *literalStr2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B7C3AEC, x, y, gxtName, literalStr1, literalStr2);
//     }

//     // DisplayTextWithTwoStrings | 0x66842574
//     static Any DISPLAY_TEXT_WITH_TWO_STRINGS(float x, float y, char *gxtName, char *gxtStringName1, char *gxtStringName2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66842574, x, y, gxtName, gxtStringName1, gxtStringName2);
//     }

//     // DisplayTextWithTwoSubstringsGivenHashKeys | 0x39E77F70
//     static Any DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS(float x, float y, char *gxtkey, uint32_t gxtkey0, uint32_t gxtkey1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39E77F70, x, y, gxtkey, gxtkey0, gxtkey1);
//     }

//     // DoScreenFadeInUnhacked | 0x5F9218C3
//     static Any DO_SCREEN_FADE_IN_UNHACKED(uint32_t timeMS)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F9218C3, timeMS);
//     }

//     // DoScreenFadeOut | 0x65DE621C
//     static Any DO_SCREEN_FADE_OUT(uint32_t timeMS)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65DE621C, timeMS);
//     }

//     // DoScreenFadeOutUnhacked | 0x42D250A7
//     static Any DO_SCREEN_FADE_OUT_UNHACKED(uint32_t timeMS)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42D250A7, timeMS);
//     }

//     // DoWeaponStuffAtStartOf2pGame | 0x18194E99
//     static Any DO_WEAPON_STUFF_AT_START_OF2P_GAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18194E99);
//     }

//     // DoesDecisionMakerExist | 0x66D53314
//     static Any DOES_DECISION_MAKER_EXIST(DecisionMaker dm)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66D53314, dm);
//     }

//     // DoesGroupExist | 0x3D385F6D
//     static Any DOES_GROUP_EXIST(Group group)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D385F6D, group);
//     }

//     // DoesScenarioExistInArea | 0x48252E33
//     static Any DOES_SCENARIO_EXIST_IN_AREA(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48252E33, a1, a2, a3, a4, a5);
//     }

//     // DoesTextLabelExist | 0x2A611607
//     static Any DOES_TEXT_LABEL_EXIST(char *gxtentry)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A611607, gxtentry);
//     }

//     // DoesWebPageExist | 0x1DE062FD
//     static Any DOES_WEB_PAGE_EXIST(char *webaddress)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DE062FD, webaddress);
//     }

//     // DontDisplayLoadingOnFadeThisFrame | 0x2F58286C
//     static Any DONT_DISPLAY_LOADING_ON_FADE_THIS_FRAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F58286C);
//     }

//     // DrawCheckpoint | 0x29FC3E19
//     static Any DRAW_CHECKPOINT(float x, float y, float z, float radius, int32_t r, int32_t g, int32_t b)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29FC3E19, x, y, z, radius, r, g, b);
//     }

//     // DrawCheckpointWithAlpha | 0x26810BE3
//     static Any DRAW_CHECKPOINT_WITH_ALPHA(float x, float y, float z, float radius, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26810BE3, x, y, z, radius, r, g, b, a);
//     }

//     // DrawColouredCylinder | 0x309860C4
//     static Any DRAW_COLOURED_CYLINDER(float x, float y, float z, float a4, float a5, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x309860C4, x, y, z, a4, a5, r, g, b, a);
//     }

//     // DrawCorona | 0x39ED0C43
//     static Any DRAW_CORONA(float x, float y, float z, float radius, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39ED0C43, x, y, z, radius, a5, a6, a7, a8, a9);
//     }

//     // DrawCurvedWindow | 0x4B684D0B
//     static Any DRAW_CURVED_WINDOW(float a1, float a2, float a3, float a4, uint32_t alpha)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B684D0B, a1, a2, a3, a4, alpha);
//     }

//     // DrawCurvedWindowNotext | 0x12B9197E
//     static Any DRAW_CURVED_WINDOW_NOTEXT(float a1, float a2, float a3, float a4, int a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12B9197E, a1, a2, a3, a4, a5);
//     }

//     // DrawCurvedWindowText | 0x7DD67E15
//     static Any DRAW_CURVED_WINDOW_TEXT(float a1, float a2, float a3, int a4, int a5, char *a6, char *a7, int a8)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DD67E15, a1, a2, a3, a4, a5, a6, a7, a8);
//     }

//     // DrawDebugSphere | 0x539572F3
//     static Any DRAW_DEBUG_SPHERE(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x539572F3, x, y, z, radius);
//     }

//     // DrawFrontendHelperText | 0x44E14770
//     static Any DRAW_FRONTEND_HELPER_TEXT(char *a1, char *a2, bool a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44E14770, a1, a2, a3);
//     }

//     // DrawLightWithRange | 0x30D27EB1
//     static Any DRAW_LIGHT_WITH_RANGE(float x, float y, float z, int32_t r, int32_t g, int32_t b, float a7, float a8)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30D27EB1, x, y, z, r, g, b, a7, a8);
//     }

//     // DrawMovie | 0x26274628
//     static Any DRAW_MOVIE(float a1, float a2, float a3, float a4, float a5, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26274628, a1, a2, a3, a4, a5, r, g, b, a);
//     }

//     // DrawRect | 0x3B2526E3
//     static Any DRAW_RECT(float x1, float y1, float x2, float y2, uint32_t r, uint32_t g, uint32_t b, uint32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B2526E3, x1, y1, x2, y2, r, g, b, a);
//     }

//     // DrawSphere | 0x769F6E66
//     static Any DRAW_SPHERE(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x769F6E66, x, y, z, radius);
//     }

//     // DrawSprite | 0x6ADD40EC
//     static Any DRAW_SPRITE(uint32_t texture, float a2, float a3, float a4, float a5, float angle, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6ADD40EC, texture, a2, a3, a4, a5, angle, r, g, b, a);
//     }

//     // DrawSpriteFrontBuff | 0x22417905
//     static Any DRAW_SPRITE_FRONT_BUFF(float x0, float y0, float x1, float y1, float rotation, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22417905, x0, y0, x1, y1, rotation, r, g, b, a);
//     }

//     // DrawSpritePhoto | 0x4BD4248E
//     static Any DRAW_SPRITE_PHOTO(float x0, float y0, float x1, float y1, float rotation, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4BD4248E, x0, y0, x1, y1, rotation, r, g, b, a);
//     }

//     // DrawSpriteWithFixedRotation | 0x7CB404D4
//     static Any DRAW_SPRITE_WITH_FIXED_ROTATION(uint32_t texture, float a2, float a3, float a4, float a5, float angle, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CB404D4, texture, a2, a3, a4, a5, angle, r, g, b, a);
//     }

//     // DrawSpriteWithUv | 0x58C41E8F
//     static Any DRAW_SPRITE_WITH_UV(uint32_t texture, float a2, float a3, float a4, float a5, float angle, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58C41E8F, texture, a2, a3, a4, a5, angle, r, g, b, a);
//     }

//     // DrawSpriteWithUvCoords | 0x2D1D17C9
//     static Any DRAW_SPRITE_WITH_UV_COORDS(uint32_t texture, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float angle, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D1D17C9, texture, a2, a3, a4, a5, a6, a7, a8, a9, angle, r, g, b, a);
//     }

//     // DrawToplevelSprite | 0x1849408D
//     static Any DRAW_TOPLEVEL_SPRITE(uint32_t texture, float a2, float a3, float a4, float a5, float angle, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1849408D, texture, a2, a3, a4, a5, angle, r, g, b, a);
//     }

//     // DrawWindow | 0x232642DE
//     static Any DRAW_WINDOW(float a1, float a2, float a3, float a4, char *str, uint32_t alpha)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x232642DE, a1, a2, a3, a4, str, alpha);
//     }

//     // DrawWindowText | 0x3D0F5735
//     static Any DRAW_WINDOW_TEXT(float a1, float a2, float a3, int a4, char *a5, int a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D0F5735, a1, a2, a3, a4, a5, a6);
//     }

//     // EnableChaseAudio | 0x68664078
//     static Any ENABLE_CHASE_AUDIO(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68664078, enable);
//     }

//     // EnableDeferredLighting | 0x6CFC30AD
//     static Any ENABLE_DEFERRED_LIGHTING(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CFC30AD, enable);
//     }

//     // EnableEndCreditsFade | 0x1EA85697
//     static Any ENABLE_END_CREDITS_FADE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1EA85697);
//     }

//     // EnableFancyWater | 0x74FC2325
//     static Any ENABLE_FANCY_WATER(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74FC2325, enable);
//     }

//     // EnableFovLodMultiplier | 0x556B0755
//     static Any ENABLE_FOV_LOD_MULTIPLIER(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x556B0755, enable);
//     }

//     // EnableFrontendRadio | 0x5328068B
//     static Any ENABLE_FRONTEND_RADIO()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5328068B);
//     }

//     // EnableMaxAmmoCap | 0x7E657B56
//     static Any ENABLE_MAX_AMMO_CAP(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E657B56, enable);
//     }

//     // EnablePoliceScanner | 0x5B262142
//     static Any ENABLE_POLICE_SCANNER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B262142);
//     }

//     // EnableSaveHouse | 0x208C03C9
//     static Any ENABLE_SAVE_HOUSE(uint32_t savehouse, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x208C03C9, savehouse, enable);
//     }

//     // EnableSceneStreaming | 0x362B7D1B
//     static Any ENABLE_SCENE_STREAMING(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x362B7D1B, enable);
//     }

//     // EnableShadows | 0x41596B09
//     static Any ENABLE_SHADOWS(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41596B09, enable);
//     }

//     // EvolvePtfx | 0x3CE05E7C
//     static Any EVOLVE_PTFX(uint32_t ptfx, char *evolvetype, float val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CE05E7C, ptfx, evolvetype, val);
//     }

//     // Exp | 0x1BA61E20
//     static Any EXP(float a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BA61E20, a1);
//     }

//     // FailKillFrenzy | 0x5EA253A5
//     static Any FAIL_KILL_FRENZY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5EA253A5);
//     }

//     // FakeDeatharrest | 0x30D17655
//     static Any FAKE_DEATHARREST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30D17655);
//     }

//     // FindMaxNumberOfGroupMembers | 0x7E154274
//     static Any FIND_MAX_NUMBER_OF_GROUP_MEMBERS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E154274);
//     }

//     // FindPositionInRecording | 0x22087F31
//     static Any FIND_POSITION_IN_RECORDING(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22087F31, car);
//     }

//     // FindPrimaryPopulationZoneGroup | 0x36601178
//     static Any FIND_PRIMARY_POPULATION_ZONE_GROUP(int32_t *groupparam0, int32_t *groupparam1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36601178, groupparam0, groupparam1);
//     }

//     // FindStaticEmitterIndex | 0x64793A54
//     static Any FIND_STATIC_EMITTER_INDEX(char *StaticEmitterName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64793A54, StaticEmitterName);
//     }

//     // FindStreetNameAtPosition | 0x49763A4F
//     static Any FIND_STREET_NAME_AT_POSITION(float pX, float pY, float pZ, uint32_t *strHash0, uint32_t *strHash1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49763A4F, pX, pY, pZ, strHash0, strHash1);
//     }

//     // FinishStreamingRequestList | 0x1788346E
//     static Any FINISH_STREAMING_REQUEST_LIST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1788346E);
//     }

//     // FixAmbienceOrientation | 0x788F7A03
//     static Any FIX_AMBIENCE_ORIENTATION(bool fix)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x788F7A03, fix);
//     }

//     // FlashRadar | 0x265F6FF5
//     static Any FLASH_RADAR(bool flash)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x265F6FF5, flash);
//     }

//     // FlashRoute | 0x20E74A9C
//     static Any FLASH_ROUTE(bool flash)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20E74A9C, flash);
//     }

//     // FlashWeaponIcon | 0x796A6B88
//     static Any FLASH_WEAPON_ICON(bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x796A6B88, on);
//     }

//     // Floor | 0x49261BA6
//     static Any FLOOR(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49261BA6, value);
//     }

//     // FlushAllSpawnBlockingAreas | 0x65B05F3F
//     static Any FLUSH_ALL_SPAWN_BLOCKING_AREAS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65B05F3F);
//     }

//     // FlushCoverBlockingAreas | 0x5A535133
//     static Any FLUSH_COVER_BLOCKING_AREAS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A535133);
//     }

//     // FlushScenarioBlockingAreas | 0x754D0FC4
//     static Any FLUSH_SCENARIO_BLOCKING_AREAS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x754D0FC4);
//     }

//     // ForceFullVoice | 0x62285CAD
//     static Any FORCE_FULL_VOICE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62285CAD, ped);
//     }

//     // ForceHighLod | 0x1EFB0992
//     static Any FORCE_HIGH_LOD(bool force)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1EFB0992, force);
//     }

//     // ForceLoadingScreen | 0x4E68316C
//     static Any FORCE_LOADING_SCREEN(bool force)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E68316C, force);
//     }

//     // ForcePopulationInit | 0x42180729
//     static Any FORCE_POPULATION_INIT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42180729);
//     }

//     // ForceRadioTrack | 0x6A7E47C9
//     static Any FORCE_RADIO_TRACK(char *radiostation, char *trackname, int a3, int a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A7E47C9, radiostation, trackname, a3, a4);
//     }

//     // ForceWind | 0x310E75C9
//     static Any FORCE_WIND(float wind)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x310E75C9, wind);
//     }

//     // ForwardToTimeOfDay | 0x456C6096
//     static Any FORWARD_TO_TIME_OF_DAY(uint32_t hour, uint32_t minute)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x456C6096, hour, minute);
//     }

//     // FreezeOnscreenTimer | 0x4B8B6F24
//     static Any FREEZE_ONSCREEN_TIMER(bool freeze)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B8B6F24, freeze);
//     }

//     // GenerateDirections | 0x203A137B
//     static Any GENERATE_DIRECTIONS(float x, float y, float z, int32_t *direction, rage::vector3 *a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x203A137B, x, y, z, direction, a5);
//     }

//     // GenerateRandomFloat | 0x380C142A
//     static Any GENERATE_RANDOM_FLOAT(float *a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x380C142A, a1);
//     }

//     // GenerateRandomFloatInRange | 0x74C626EB
//     static Any GENERATE_RANDOM_FLOAT_IN_RANGE(float min, float max, float *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74C626EB, min, max, pValue);
//     }

//     // GenerateRandomInt | 0x335D0F34
//     static Any GENERATE_RANDOM_INT(int32_t *a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x335D0F34, a1);
//     }

//     // GenerateRandomIntInRange | 0x168B1717
//     static Any GENERATE_RANDOM_INT_IN_RANGE(uint32_t min, uint32_t max, uint32_t *pValue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x168B1717, min, max, pValue);
//     }

//     // GetAcceptButton | 0x530F4572
//     static Any GET_ACCEPT_BUTTON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x530F4572);
//     }

//     // GetAmmoInClip | 0x612C748F
//     static Any GET_AMMO_IN_CLIP(Ped ped, uint32_t weapon, uint32_t *pAmmo)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x612C748F, ped, weapon, pAmmo);
//     }

//     // GetAngleBetween2dVectors | 0x5BC4602D
//     static Any GET_ANGLE_BETWEEN2D_VECTORS(float x1, float y1, float x2, float y2, float *pResult)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BC4602D, x1, y1, x2, y2, pResult);
//     }

//     // GetAsciiPressed | 0x495F399D
//     static Any GET_ASCII_PRESSED(int32_t key, int32_t *pressedKey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x495F399D, key, pressedKey);
//     }

//     // GetAspectRatio | 0x36600272
//     static Any GET_ASPECT_RATIO()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36600272);
//     }

//     // GetAudibleMusicTrackTextId | 0x18246AC8
//     static Any GET_AUDIBLE_MUSIC_TRACK_TEXT_ID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18246AC8);
//     }

//     // GetBitsInRange | 0x58AE7C1D
//     static Any GET_BITS_IN_RANGE(int32_t val, int32_t rangebegin, int32_t rangeend)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58AE7C1D, val, rangebegin, rangeend);
//     }

//     // GetBufferedAscii | 0x21F43531
//     static Any GET_BUFFERED_ASCII(int32_t key, int32_t *a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21F43531, key, a2);
//     }

//     // GetClosestRoad | 0x63C00DE7
//     static Any GET_CLOSEST_ROAD(float x, float y, float z, float a4, int a5, rage::vector3 *a6, rage::vector3 *a7, float *a8, float *a9, float *a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63C00DE7, x, y, z, a4, a5, a6, a7, a8, a9, a10);
//     }

//     // GetConsoleCommand | 0x3BC51157
//     static Any GET_CONSOLE_COMMAND()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BC51157);
//     }

//     // GetConsoleCommandToken | 0x5D607947
//     static Any GET_CONSOLE_COMMAND_TOKEN()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D607947);
//     }

//     // GetCorrectedColour | 0x64D35E1D
//     static Any GET_CORRECTED_COLOUR(uint32_t r, uint32_t g, uint32_t b, uint32_t *pR, uint32_t *pG, uint32_t *pB)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64D35E1D, r, g, b, pR, pG, pB);
//     }

//     // GetCreateRandomCops | 0x4F9342F3
//     static Any GET_CREATE_RANDOM_COPS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F9342F3);
//     }

//     // GetCurrentBasicCopModel | 0x1B305900
//     static Any GET_CURRENT_BASIC_COP_MODEL(uint32_t *pModel)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B305900, pModel);
//     }

//     // GetCurrentDate | 0x2E5B068F
//     static Any GET_CURRENT_DATE(uint32_t *day, uint32_t *month)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E5B068F, day, month);
//     }

//     // GetCurrentDayOfWeek | 0x39FD432B
//     static Any GET_CURRENT_DAY_OF_WEEK()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39FD432B);
//     }

//     // GetCurrentEpisode | 0x7D7619D2
//     static Any GET_CURRENT_EPISODE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D7619D2);
//     }

//     // GetCurrentLanguage | 0x1105259C
//     static Any GET_CURRENT_LANGUAGE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1105259C);
//     }

//     // GetCurrentPopulationZoneType | 0x30516A11
//     static Any GET_CURRENT_POPULATION_ZONE_TYPE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30516A11);
//     }

//     // GetCurrentStackSize | 0x6AC52840
//     static Any GET_CURRENT_STACK_SIZE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6AC52840);
//     }

//     // GetCurrentStationForTrain | 0x10FE0FE9
//     static Any GET_CURRENT_STATION_FOR_TRAIN(Train train)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10FE0FE9, train);
//     }

//     // GetCurrentZoneScumminess | 0x4B7B5F77
//     static Any GET_CURRENT_ZONE_SCUMMINESS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B7B5F77);
//     }

//     // GetCutsceneAudioTimeMs | 0x2B8A0C6B
//     static Any GET_CUTSCENE_AUDIO_TIME_MS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B8A0C6B);
//     }

//     // GetCutsceneTime | 0x7DF26C8C
//     static Any GET_CUTSCENE_TIME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DF26C8C);
//     }

//     // GetDistanceBetweenCoords2d | 0x687107CA
//     static Any GET_DISTANCE_BETWEEN_COORDS2D(float x1, float y1, float x2, float y2, float *pDist)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x687107CA, x1, y1, x2, y2, pDist);
//     }

//     // GetDistanceBetweenCoords3d | 0x23F772E7
//     static Any GET_DISTANCE_BETWEEN_COORDS3D(float x1, float y1, float z1, float x2, float y2, float z2, float *pDist)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x23F772E7, x1, y1, z1, x2, y2, z2, pDist);
//     }

//     // GetDoorAngleRatio | 0x44EA2669
//     static Any GET_DOOR_ANGLE_RATIO(Vehicle vehicle, uint32_t door, float *pAngleRatio)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44EA2669, vehicle, door, pAngleRatio);
//     }

//     // GetDoorState | 0x64861559
//     static Any GET_DOOR_STATE(Object obj, uint32_t *a2, float *a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64861559, obj, a2, a3);
//     }

//     // GetEngineHealth | 0x2B0A05E0
//     static Any GET_ENGINE_HEALTH(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B0A05E0, vehicle);
//     }

//     // GetEpisodeIndexFromSummons | 0x704E638F
//     static Any GET_EPISODE_INDEX_FROM_SUMMONS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x704E638F);
//     }

//     // GetEpisodeName | 0x6004431B
//     static Any GET_EPISODE_NAME(uint32_t episodeIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6004431B, episodeIndex);
//     }

//     // GetFilterSaveSetting | 0x25CA45EA
//     static Any GET_FILTER_SAVE_SETTING(int32_t filterid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25CA45EA, filterid);
//     }

//     // GetFloatStat | 0x1D801FC0
//     static Any GET_FLOAT_STAT(uint32_t stat)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D801FC0, stat);
//     }

//     // GetFrameTime | 0x206420A6
//     static Any GET_FRAME_TIME(float *time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x206420A6, time);
//     }

//     // GetFrontendDesignValue | 0x747E681E
//     static Any GET_FRONTEND_DESIGN_VALUE(int32_t frontendid, float *a2, float *a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x747E681E, frontendid, a2, a3);
//     }

//     // GetGfwlHasSafeHouse | 0x6CC85D46
//     static Any GET_GFWL_HAS_SAFE_HOUSE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CC85D46);
//     }

//     // GetGroundZFor3dCoord | 0x6D902EE3
//     static Any GET_GROUND_ZFOR3D_COORD(float x, float y, float z, float *pGroundZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D902EE3, x, y, z, pGroundZ);
//     }

//     // GetGroupFormation | 0x596174E5
//     static Any GET_GROUP_FORMATION(int32_t group, int32_t *formation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x596174E5, group, formation);
//     }

//     // GetGroupFormationSpacing | 0x67DB4150
//     static Any GET_GROUP_FORMATION_SPACING(int32_t group, float *spacing)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67DB4150, group, spacing);
//     }

//     // GetGroupLeader | 0x5DBB46B5
//     static Any GET_GROUP_LEADER(Group group, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DBB46B5, group, pPed);
//     }

//     // GetGroupMember | 0x2FF90FF5
//     static Any GET_GROUP_MEMBER(Group group, uint32_t index, Ped *pPed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FF90FF5, group, index, pPed);
//     }

//     // GetGroupSize | 0x45EE4E9A
//     static Any GET_GROUP_SIZE(Group group, uint32_t *pStartIndex, uint32_t *pCount)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45EE4E9A, group, pStartIndex, pCount);
//     }

//     // GetHashKey | 0x68FF7165
//     static Any GET_HASH_KEY(char *value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68FF7165, value);
//     }

//     // GetHelpMessageBoxSize | 0x267D251F
//     static Any GET_HELP_MESSAGE_BOX_SIZE(float *x, float *y)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x267D251F, x, y);
//     }

//     // GetHostId | 0x79C84DBC
//     static Any GET_HOST_ID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79C84DBC);
//     }

//     // GetHostMatchOn | 0x757A0EB8
//     static Any GET_HOST_MATCH_ON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x757A0EB8);
//     }

//     // GetIntStat | 0x48994D58
//     static Any GET_INT_STAT(uint32_t stat)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48994D58, stat);
//     }

//     // GetInteriorAtCoords | 0x29216610
//     static Any GET_INTERIOR_AT_COORDS(float x, float y, float z, Interior *pInterior)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29216610, x, y, z, pInterior);
//     }

//     // GetInteriorHeading | 0x73245AB3
//     static Any GET_INTERIOR_HEADING(Interior interior, float *pHeading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73245AB3, interior, pHeading);
//     }

//     // GetIsAutosaveOff | 0x551C6295
//     static Any GET_IS_AUTOSAVE_OFF()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x551C6295);
//     }

//     // GetIsDepositAnimRunning | 0x3CCB4248
//     static Any GET_IS_DEPOSIT_ANIM_RUNNING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CCB4248);
//     }

//     // GetIsDisplayingsavemessage | 0x34F9164D
//     static Any GET_IS_DISPLAYINGSAVEMESSAGE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34F9164D);
//     }

//     // GetIsHidef | 0x19976813
//     static Any GET_IS_HIDEF()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19976813);
//     }

//     // GetIsProjectileTypeInArea | 0x7B2E70F3
//     static Any GET_IS_PROJECTILE_TYPE_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1, int32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B2E70F3, x0, y0, z0, x1, y1, z1, type);
//     }

//     // GetKeyboardMoveInput | 0x4AF73456
//     static Any GET_KEYBOARD_MOVE_INPUT(int32_t *a1, int32_t *a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AF73456, a1, a2);
//     }

//     // GetLatestConsoleCommand | 0x670E3DE3
//     static Any GET_LATEST_CONSOLE_COMMAND()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x670E3DE3);
//     }

//     // GetLcpdCopScore | 0x17C05D83
//     static Any GET_LCPD_COP_SCORE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17C05D83);
//     }

//     // GetLcpdCriminalScore | 0x1207025C
//     static Any GET_LCPD_CRIMINAL_SCORE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1207025C);
//     }

//     // GetLengthOfStringWithThisHashKey | 0x6C013A17
//     static Any GET_LENGTH_OF_STRING_WITH_THIS_HASH_KEY(uint32_t gxtkey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C013A17, gxtkey);
//     }

//     // GetLengthOfStringWithThisTextLabel | 0x6D795EC0
//     static Any GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(char *gxtName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D795EC0, gxtName);
//     }

//     // GetLengthOfStringWithThisTextLabelInsNum | 0x5F02084D
//     static Any GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F02084D, a1, a2, a3);
//     }

//     // GetLineHeight | 0x150B0C33
//     static Any GET_LINE_HEIGHT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x150B0C33);
//     }

//     // GetLocalGamerlevelFromProfilesettings | 0x7C5F327E
//     static Any GET_LOCAL_GAMERLEVEL_FROM_PROFILESETTINGS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C5F327E);
//     }

//     // GetMapAreaFromCoords | 0x5ED33D46
//     static Any GET_MAP_AREA_FROM_COORDS(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5ED33D46, x, y, z);
//     }

//     // GetMaxAmmo | 0x7C6968F8
//     static Any GET_MAX_AMMO(Ped ped, uint32_t weapon, uint32_t *pMaxAmmo)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C6968F8, ped, weapon, pMaxAmmo);
//     }

//     // GetMaxWantedLevel | 0x71755E9B
//     static Any GET_MAX_WANTED_LEVEL(uint32_t *pMaxWantedLevel)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71755E9B, pMaxWantedLevel);
//     }

//     // GetMaximumNumberOfPassengers | 0x554014F1
//     static Any GET_MAXIMUM_NUMBER_OF_PASSENGERS(Vehicle vehicle, uint32_t *pMax)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x554014F1, vehicle, pMax);
//     }

//     // GetMinutesOfDay | 0x3DFE691D
//     static Any GET_MINUTES_OF_DAY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3DFE691D);
//     }

//     // GetMinutesToTimeOfDay | 0x740C4C84
//     static Any GET_MINUTES_TO_TIME_OF_DAY(uint32_t hour, uint32_t minute)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x740C4C84, hour, minute);
//     }

//     // GetMissionFlag | 0x2BC64736
//     static Any GET_MISSION_FLAG()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BC64736);
//     }

//     // GetModelDimensions | 0x191B7021
//     static Any GET_MODEL_DIMENSIONS(uint32_t model, rage::vector3 *pMinVector, rage::vector3 *pMaxVector)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x191B7021, model, pMinVector, pMaxVector);
//     }

//     // GetModelNameForDebug | 0x4342350C
//     static Any GET_MODEL_NAME_FOR_DEBUG(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4342350C, model);
//     }

//     // GetMotionControlsEnabled | 0x6E936A1A
//     static Any GET_MOTION_CONTROLS_ENABLED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E936A1A);
//     }

//     // GetMouseInput | 0x447B154B
//     static Any GET_MOUSE_INPUT(int32_t *x, int32_t *y)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x447B154B, x, y);
//     }

//     // GetMouseSensitivity | 0x41401D46
//     static Any GET_MOUSE_SENSITIVITY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41401D46);
//     }

//     // GetMouseWheel | 0x51870C68
//     static Any GET_MOUSE_WHEEL(int32_t *a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51870C68, a1);
//     }

//     // GetNameOfInfoZone | 0x5CAD7949
//     static Any GET_NAME_OF_INFO_ZONE(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5CAD7949, x, y, z);
//     }

//     // GetNameOfZone | 0x25442DF7
//     static Any GET_NAME_OF_ZONE(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25442DF7, x, y, z);
//     }

//     // GetNavmeshRouteResult | 0x4EFE6B67
//     static Any GET_NAVMESH_ROUTE_RESULT(int32_t navmesh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4EFE6B67, navmesh);
//     }

//     // GetNextStationForTrain | 0x4835637D
//     static Any GET_NEXT_STATION_FOR_TRAIN(Train train)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4835637D, train);
//     }

//     // GetNthClosestWaterNodeWithHeading | 0x36F453FF
//     static Any GET_NTH_CLOSEST_WATER_NODE_WITH_HEADING(float x, float y, float z, bool flag0, bool flag1, rage::vector4 *node, float *heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36F453FF, x, y, z, flag0, flag1, node, heading);
//     }

//     // GetNthGroupMember | 0x48CE0609
//     static Any GET_NTH_GROUP_MEMBER(int32_t group, int32_t n, Ped *ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48CE0609, group, n, ped);
//     }

//     // GetNthIntegerInString | 0x301545FD
//     static Any GET_NTH_INTEGER_IN_STRING(char *gxtName, uint32_t index)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x301545FD, gxtName, index);
//     }

//     // GetNumConsoleCommandTokens | 0x205E2D92
//     static Any GET_NUM_CONSOLE_COMMAND_TOKENS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x205E2D92);
//     }

//     // GetNumKillsForRankPoints | 0x239C0EEC
//     static Any GET_NUM_KILLS_FOR_RANK_POINTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x239C0EEC);
//     }

//     // GetNumStreamingRequests | 0x53216168
//     static Any GET_NUM_STREAMING_REQUESTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x53216168);
//     }

//     // GetNumberLines | 0x67B725B2
//     static Any GET_NUMBER_LINES(float a1, float a2, char *a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67B725B2, a1, a2, a3);
//     }

//     // GetNumberLinesWithLiteralStrings | 0x71DE26A3
//     static Any GET_NUMBER_LINES_WITH_LITERAL_STRINGS(float a1, float a2, char *a3, char *a4, char *a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71DE26A3, a1, a2, a3, a4, a5);
//     }

//     // GetNumberOfFollowers | 0x303C3059
//     static Any GET_NUMBER_OF_FOLLOWERS(Ped ped, int32_t *followers)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x303C3059, ped, followers);
//     }

//     // GetNumberOfPassengers | 0x5BE30681
//     static Any GET_NUMBER_OF_PASSENGERS(Vehicle vehicle, uint32_t *pNumPassengers)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BE30681, vehicle, pNumPassengers);
//     }

//     // GetNumberOfWebPageLinks | 0x18A22AE4
//     static Any GET_NUMBER_OF_WEB_PAGE_LINKS(int32_t htmlviewport)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18A22AE4, htmlviewport);
//     }

//     // GetOffsetFromInteriorInWorldCoords | 0x68966670
//     static Any GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z, float *pOffset)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68966670, interior, x, y, z, pOffset);
//     }

//     // GetOnlineLan | 0x6B032A0B
//     static Any GET_ONLINE_LAN()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B032A0B);
//     }

//     // GetOnlineScore | 0x6CFD3E5F
//     static Any GET_ONLINE_SCORE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CFD3E5F, a1);
//     }

//     // GetPadOrientation | 0x58EF2B2B
//     static Any GET_PAD_ORIENTATION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58EF2B2B);
//     }

//     // GetPadPitchRoll | 0x767B7EC9
//     static Any GET_PAD_PITCH_ROLL(uint32_t padIndex, float *pPitch, float *pRoll)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x767B7EC9, padIndex, pPitch, pRoll);
//     }

//     // GetPadState | 0x5D4C1D59
//     static Any GET_PAD_STATE(int a1, int a2, int32_t *a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D4C1D59, a1, a2, a3);
//     }

//     // GetParkingNodeInArea | 0x70CB4DCE
//     static Any GET_PARKING_NODE_IN_AREA()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70CB4DCE);
//     }

//     // GetPetrolTankHealth | 0x2C835642
//     static Any GET_PETROL_TANK_HEALTH(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C835642, vehicle);
//     }

//     // GetPhysicalScreenResolution | 0x3CD830D0
//     static Any GET_PHYSICAL_SCREEN_RESOLUTION(float *x, float *y)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CD830D0, x, y);
//     }

//     // GetPositionOfAnalogueSticks | 0x4F7F4FAE
//     static Any GET_POSITION_OF_ANALOGUE_STICKS(uint32_t padIndex, uint32_t *pLeftX, uint32_t *pLeftY, uint32_t *pRightX, uint32_t *pRightY)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F7F4FAE, padIndex, pLeftX, pLeftY, pRightX, pRightY);
//     }

//     // GetProfileSetting | 0x575A3431
//     static Any GET_PROFILE_SETTING(int32_t settingid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x575A3431, settingid);
//     }

//     // GetProgressPercentage | 0x78E9500C
//     static Any GET_PROGRESS_PERCENTAGE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78E9500C);
//     }

//     // GetRadioName | 0x7EC9580E
//     static Any GET_RADIO_NAME(int32_t id)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EC9580E, id);
//     }

//     // GetRandomWaterNode | 0x6FBE6CE6
//     static Any GET_RANDOM_WATER_NODE(float x, float y, float z, float radius, bool flag0, bool flag1, bool flag2, bool flag3, float *pX, float *pY, float *pZ, float *heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6FBE6CE6, x, y, z, radius, flag0, flag1, flag2, flag3, pX, pY, pZ, heading);
//     }

//     // GetSafeLocalRestartCoords | 0x477450D4
//     static Any GET_SAFE_LOCAL_RESTART_COORDS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x477450D4);
//     }

//     // GetSequenceProgress | 0x1FBD3ACA
//     static Any GET_SEQUENCE_PROGRESS(int32_t seq, int32_t *progress)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1FBD3ACA, seq, progress);
//     }

//     // GetSequenceProgressRecursive | 0x60BC4116
//     static Any GET_SEQUENCE_PROGRESS_RECURSIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60BC4116);
//     }

//     // GetServerId | 0x51983F94
//     static Any GET_SERVER_ID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51983F94);
//     }

//     // GetSoundId | 0x6342018A
//     static Any GET_SOUND_ID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6342018A);
//     }

//     // GetSoundLevelAtCoords | 0x433E74C6
//     static Any GET_SOUND_LEVEL_AT_COORDS(Ped ped, float x, float y, float z, int32_t *level)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x433E74C6, ped, x, y, z, level);
//     }

//     // GetSpeechForEmergencyServiceCall | 0x1B915945
//     static Any GET_SPEECH_FOR_EMERGENCY_SERVICE_CALL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B915945);
//     }

//     // GetStatFrontendDisplayType | 0x347C4300
//     static Any GET_STAT_FRONTEND_DISPLAY_TYPE(int32_t stat)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x347C4300, stat);
//     }

//     // GetStatFrontendVisibility | 0x38905687
//     static Any GET_STAT_FRONTEND_VISIBILITY(int32_t stat)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38905687, stat);
//     }

//     // GetStateOfClosestDoorOfType | 0x14007AC6
//     static Any GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uint32_t model, float x, float y, float z, int32_t *state, float *a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14007AC6, model, x, y, z, state, a6);
//     }

//     // GetStationName | 0x46F87F55
//     static Any GET_STATION_NAME(Train train, uint32_t station)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46F87F55, train, station);
//     }

//     // GetStreamBeatInfo | 0x6A3A2C88
//     static Any GET_STREAM_BEAT_INFO(int32_t *a1, int32_t *a2, int32_t *a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A3A2C88, a1, a2, a3);
//     }

//     // GetStreamPlaytime | 0x4B6211F2
//     static Any GET_STREAM_PLAYTIME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B6211F2);
//     }

//     // GetStringFromHashKey | 0x16E14EA4
//     static Any GET_STRING_FROM_HASH_KEY(uint32_t hashKey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x16E14EA4, hashKey);
//     }

//     // GetStringFromString | 0x434534BE
//     static Any GET_STRING_FROM_STRING(char *str, int32_t startsymb, int32_t endsymb)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x434534BE, str, startsymb, endsymb);
//     }

//     // GetStringFromTextFile | 0x332F0E9A
//     static Any GET_STRING_FROM_TEXT_FILE(char *gxtentry)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x332F0E9A, gxtentry);
//     }

//     // GetStringWidth | 0x64660709
//     static Any GET_STRING_WIDTH(char *gxtName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64660709, gxtName);
//     }

//     // GetStringWidthWithNumber | 0x33E0601D
//     static Any GET_STRING_WIDTH_WITH_NUMBER(char *gxtName, int32_t number)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x33E0601D, gxtName, number);
//     }

//     // GetStringWidthWithString | 0x48850E66
//     static Any GET_STRING_WIDTH_WITH_STRING(char *gxtName, char *literalString)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48850E66, gxtName, literalString);
//     }

//     // GetTeamColour | 0x4FC96A24
//     static Any GET_TEAM_COLOUR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FC96A24);
//     }

//     // GetTeamRgbColour | 0x42F561F2
//     static Any GET_TEAM_RGB_COLOUR(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42F561F2, a1, a2, a3, a4);
//     }

//     // GetTextInputActive | 0x32A3647C
//     static Any GET_TEXT_INPUT_ACTIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32A3647C);
//     }

//     // GetTextureFromStreamedTxd | 0x32C24491
//     static Any GET_TEXTURE_FROM_STREAMED_TXD(char *txdName, const char *textureName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32C24491, txdName, textureName);
//     }

//     // GetTimeOfDay | 0x384B3876
//     static Any GET_TIME_OF_DAY(uint32_t *hour, uint32_t *minute)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x384B3876, hour, minute);
//     }

//     // GetTimeSinceLastArrest | 0x475D2BEA
//     static Any GET_TIME_SINCE_LAST_ARREST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x475D2BEA);
//     }

//     // GetTimeSinceLastDeath | 0x11162A93
//     static Any GET_TIME_SINCE_LAST_DEATH()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11162A93);
//     }

//     // GetTimeTilNextStation | 0x142E7C40
//     static Any GET_TIME_TIL_NEXT_STATION(Vehicle train)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x142E7C40, train);
//     }

//     // GetTotalNumberOfStats | 0x6D823703
//     static Any GET_TOTAL_NUMBER_OF_STATS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D823703);
//     }

//     // GetTrainCaboose | 0x3FB72D27
//     static Any GET_TRAIN_CABOOSE(Vehicle train, Vehicle *caboose)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FB72D27, train, caboose);
//     }

//     // GetTxd | 0x15D668D0
//     static Any GET_TXD(char *txdName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15D668D0, txdName);
//     }

//     // GetWaterHeight | 0x2BB9620F
//     static Any GET_WATER_HEIGHT(float x, float y, float z, float *pheight)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BB9620F, x, y, z, pheight);
//     }

//     // GetWaterHeightNoWaves | 0x67C82864
//     static Any GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float *height)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67C82864, x, y, z, height);
//     }

//     // GetWeapontypeModel | 0x4FE23F25
//     static Any GET_WEAPONTYPE_MODEL(int32_t weapontype, uint32_t *model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FE23F25, weapontype, model);
//     }

//     // GetWeapontypeSlot | 0x5E4F6DE3
//     static Any GET_WEAPONTYPE_SLOT(int32_t weapon, int32_t *slot)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E4F6DE3, weapon, slot);
//     }

//     // GetWebPageLinkHref | 0x750C1CD7
//     static Any GET_WEB_PAGE_LINK_HREF(int32_t htmlviewport, int32_t linkid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x750C1CD7, htmlviewport, linkid);
//     }

//     // GetWebPageLinkPosn | 0x717B5EFB
//     static Any GET_WEB_PAGE_LINK_POSN(int32_t htmlviewport, int32_t linkid, float *x, float *y)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x717B5EFB, htmlviewport, linkid, x, y);
//     }

//     // GetWidthOfLiteralString | 0x164B7363
//     static Any GET_WIDTH_OF_LITERAL_STRING(char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x164B7363, str);
//     }

//     // GetWidthOfSubstringGivenTextLabel | 0x64E51535
//     static Any GET_WIDTH_OF_SUBSTRING_GIVEN_TEXT_LABEL(char *gxtname, bool a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64E51535, gxtname, a2, a3, a4, a5);
//     }

//     // HandleAudioAnimEvent | 0x56C15139
//     static Any HANDLE_AUDIO_ANIM_EVENT(Ped ped, char *AudioAnimEventName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56C15139, ped, AudioAnimEventName);
//     }

//     // HasAchievementBeenPassed | 0x32765F37
//     static Any HAS_ACHIEVEMENT_BEEN_PASSED(uint32_t achievement)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32765F37, achievement);
//     }

//     // HasAdditionalTextLoaded | 0x4832644E
//     static Any HAS_ADDITIONAL_TEXT_LOADED(uint32_t textIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4832644E, textIndex);
//     }

//     // HasCollisionForModelLoaded | 0x7C3939E7
//     static Any HAS_COLLISION_FOR_MODEL_LOADED(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C3939E7, model);
//     }

//     // HasCutsceneFinished | 0x4ECE1AD2
//     static Any HAS_CUTSCENE_FINISHED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4ECE1AD2);
//     }

//     // HasCutsceneLoaded | 0x5DE43980
//     static Any HAS_CUTSCENE_LOADED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DE43980);
//     }

//     // HasDeatharrestExecuted | 0x3B0C6738
//     static Any HAS_DEATHARREST_EXECUTED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B0C6738);
//     }

//     // HasModelLoaded | 0x4E61480A
//     static Any HAS_MODEL_LOADED(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E61480A, model);
//     }

//     // HasNetIdBeenCloned | 0x1F0A3D73
//     static Any HAS_NET_ID_BEEN_CLONED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F0A3D73);
//     }

//     // HasOverridenSitIdleAnimFinished | 0x520A745D
//     static Any HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x520A745D, ped);
//     }

//     // HasResprayHappened | 0x465574B0
//     static Any HAS_RESPRAY_HAPPENED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x465574B0);
//     }

//     // HasSoundFinished | 0x2CA53AA1
//     static Any HAS_SOUND_FINISHED(uint32_t sound)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CA53AA1, sound);
//     }

//     // HasStreamedTxdLoaded | 0x5F9C43D4
//     static Any HAS_STREAMED_TXD_LOADED(char *txdName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F9C43D4, txdName);
//     }

//     // HasThisAdditionalTextLoaded | 0x6CF248FD
//     static Any HAS_THIS_ADDITIONAL_TEXT_LOADED(char *textName, uint32_t textIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CF248FD, textName, textIndex);
//     }

//     // HaveAnimsLoaded | 0x1D3F681D
//     static Any HAVE_ANIMS_LOADED(char *animName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D3F681D, animName);
//     }

//     // HaveRequestedPathNodesBeenLoaded | 0x54DD5868
//     static Any HAVE_REQUESTED_PATH_NODES_BEEN_LOADED(uint32_t requestId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x54DD5868, requestId);
//     }

//     // HeliAudioShouldSkipStartup | 0x4CC001AC
//     static Any HELI_AUDIO_SHOULD_SKIP_STARTUP(Vehicle heli, bool skip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4CC001AC, heli, skip);
//     }

//     // HideHelpTextThisFrame | 0x16AF6DEB
//     static Any HIDE_HELP_TEXT_THIS_FRAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x16AF6DEB);
//     }

//     // HideHudAndRadarThisFrame | 0x60320FEB
//     static Any HIDE_HUD_AND_RADAR_THIS_FRAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60320FEB);
//     }

//     // HighFallScream | 0x478976DB
//     static Any HIGH_FALL_SCREAM(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x478976DB, ped);
//     }

//     // IsAussieVersion | 0x1AE72F40
//     static Any IS_AUSSIE_VERSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1AE72F40);
//     }

//     // IsGermanVersion | 0x18CC0AB6
//     static Any IS_GERMAN_VERSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18CC0AB6);
//     }

//     // ImproveLowPerformanceMissionPerFrameFlag | 0x2B64229C
//     static Any IMPROVE_LOW_PERFORMANCE_MISSION_PER_FRAME_FLAG()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B64229C);
//     }

//     // IncrementFloatStat | 0x548E3AFC
//     static Any INCREMENT_FLOAT_STAT(int32_t stat, float val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x548E3AFC, stat, val);
//     }

//     // IncrementFloatStatNoMessage | 0x2C6564F2
//     static Any INCREMENT_FLOAT_STAT_NO_MESSAGE(uint32_t stat, float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C6564F2, stat, value);
//     }

//     // IncrementIntStat | 0x14D242D9
//     static Any INCREMENT_INT_STAT(uint32_t stat, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14D242D9, stat, value);
//     }

//     // IncrementIntStatNoMessage | 0x29827605
//     static Any INCREMENT_INT_STAT_NO_MESSAGE(uint32_t stat, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29827605, stat, value);
//     }

//     // InitCutscene | 0x47E50BD3
//     static Any INIT_CUTSCENE(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47E50BD3, name);
//     }

//     // InitFrontendHelperText | 0x617B191D
//     static Any INIT_FRONTEND_HELPER_TEXT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x617B191D);
//     }

//     // IsAmbientSpeechDisabled | 0x563F4CC2
//     static Any IS_AMBIENT_SPEECH_DISABLED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x563F4CC2, ped);
//     }

//     // IsAnySpeechPlaying | 0x170F7E75
//     static Any IS_ANY_SPEECH_PLAYING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x170F7E75, ped);
//     }

//     // IsAreaOccupied | 0x5BE1238D
//     static Any IS_AREA_OCCUPIED(float x1, float y1, float z1, float x2, float y2, float z2, bool unknownFalse1, bool unknownTrue, bool unknownFalse2, bool unknownFalse3, bool unknownFalse4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BE1238D, x1, y1, z1, x2, y2, z2, unknownFalse1, unknownTrue, unknownFalse2, unknownFalse3, unknownFalse4);
//     }

//     // IsAutoAimingOn | 0x366B0444
//     static Any IS_AUTO_AIMING_ON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x366B0444);
//     }

//     // IsAutoSaveInProgress | 0x601A5770
//     static Any IS_AUTO_SAVE_IN_PROGRESS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x601A5770);
//     }

//     // IsBitSet | 0x5373544E
//     static Any IS_BIT_SET(int32_t val, int32_t bitnum)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5373544E, val, bitnum);
//     }

//     // IsBulletInArea | 0x58493B8E
//     static Any IS_BULLET_IN_AREA(float x, float y, float z, float radius, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58493B8E, x, y, z, radius, unknownTrue);
//     }

//     // IsBulletInBox | 0x60964DB8
//     static Any IS_BULLET_IN_BOX(float x1, float y1, float z1, float x2, float y2, float z2, bool unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60964DB8, x1, y1, z1, x2, y2, z2, unknown);
//     }

//     // IsButtonPressed | 0x7FF21081
//     static Any IS_BUTTON_PRESSED(uint32_t padIndex, uint32_t button)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FF21081, padIndex, button);
//     }

//     // IsControlJustPressed | 0x4CB729F1
//     static Any IS_CONTROL_JUST_PRESSED(int padIndex, int32_t control)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4CB729F1, padIndex, control);
//     }

//     // IsEpisodeAvailable | 0x232800BD
//     static Any IS_EPISODE_AVAILABLE(int32_t episode)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x232800BD, episode);
//     }

//     // IsEpisodicDiscBuild | 0x511A2EC9
//     static Any IS_EPISODIC_DISC_BUILD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x511A2EC9);
//     }

//     // IsFontLoaded | 0x69B53ADA
//     static Any IS_FONT_LOADED(uint32_t font)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69B53ADA, font);
//     }

//     // IsGameInControlOfMusic | 0x4FF71989
//     static Any IS_GAME_IN_CONTROL_OF_MUSIC()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FF71989);
//     }

//     // IsGameKeyboardKeyJustPressed | 0x540D127D
//     static Any IS_GAME_KEYBOARD_KEY_JUST_PRESSED(int32_t key)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x540D127D, key);
//     }

//     // IsGameKeyboardKeyPressed | 0x5FA96262
//     static Any IS_GAME_KEYBOARD_KEY_PRESSED(int32_t key)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FA96262, key);
//     }

//     // IsGameKeyboardNavDownPressed | 0x45E45B1D
//     static Any IS_GAME_KEYBOARD_NAV_DOWN_PRESSED(bool a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45E45B1D, a1);
//     }

//     // IsGameKeyboardNavLeftPressed | 0x793F238A
//     static Any IS_GAME_KEYBOARD_NAV_LEFT_PRESSED(bool a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x793F238A, a1);
//     }

//     // IsGameKeyboardNavRightPressed | 0x3C156533
//     static Any IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED(bool a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C156533, a1);
//     }

//     // IsGameKeyboardNavUpPressed | 0x14AB75AE
//     static Any IS_GAME_KEYBOARD_NAV_UP_PRESSED(bool a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14AB75AE, a1);
//     }

//     // IsGarageClosed | 0x26BC1939
//     static Any IS_GARAGE_CLOSED(char *garageName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26BC1939, garageName);
//     }

//     // IsGarageOpen | 0x65A80992
//     static Any IS_GARAGE_OPEN(char *garageName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65A80992, garageName);
//     }

//     // IsGroupLeader | 0x2CEC22DA
//     static Any IS_GROUP_LEADER(Ped ped, Group group)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CEC22DA, ped, group);
//     }

//     // IsGroupMember | 0x674D6F8E
//     static Any IS_GROUP_MEMBER(Ped ped, Group g)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x674D6F8E, ped, g);
//     }

//     // IsHeliPartBroken | 0x1E2D5A7B
//     static Any IS_HELI_PART_BROKEN(Vehicle heli, bool flag0, bool flag1, bool flag2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E2D5A7B, heli, flag0, flag1, flag2);
//     }

//     // IsHelpMessageBeingDisplayed | 0x6E4E1BEC
//     static Any IS_HELP_MESSAGE_BEING_DISPLAYED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E4E1BEC);
//     }

//     // IsHintRunning | 0x323806B1
//     static Any IS_HINT_RUNNING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x323806B1);
//     }

//     // IsHudPreferenceSwitchedOn | 0x69604AE2
//     static Any IS_HUD_PREFERENCE_SWITCHED_ON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69604AE2);
//     }

//     // IsHudReticuleComplex | 0x4DDB5D59
//     static Any IS_HUD_RETICULE_COMPLEX()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DDB5D59);
//     }

//     // IsInLanMode | 0x1B8E7EED
//     static Any IS_IN_LAN_MODE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B8E7EED);
//     }

//     // IsInMpTutorial | 0x13750991
//     static Any IS_IN_MP_TUTORIAL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13750991);
//     }

//     // IsInteriorScene | 0x61DA102E
//     static Any IS_INTERIOR_SCENE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61DA102E);
//     }

//     // IsJapaneseVersion | 0x37D022E0
//     static Any IS_JAPANESE_VERSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37D022E0);
//     }

//     // IsKeyboardKeyJustPressed | 0x75C9772B
//     static Any IS_KEYBOARD_KEY_JUST_PRESSED(int32_t key)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75C9772B, key);
//     }

//     // IsKeyboardKeyPressed | 0x1D334237
//     static Any IS_KEYBOARD_KEY_PRESSED(int32_t key)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D334237, key);
//     }

//     // IsLazlowStationLocked | 0x1CB80079
//     static Any IS_LAZLOW_STATION_LOCKED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1CB80079);
//     }

//     // IsLcpdDataValid | 0x611D69BC
//     static Any IS_LCPD_DATA_VALID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x611D69BC);
//     }

//     // IsLookInverted | 0x1817000B
//     static Any IS_LOOK_INVERTED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1817000B);
//     }

//     // IsMessageBeingDisplayed | 0x68EA6EBE
//     static Any IS_MESSAGE_BEING_DISPLAYED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68EA6EBE);
//     }

//     // IsMinigameInProgress | 0x68F06A02
//     static Any IS_MINIGAME_IN_PROGRESS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68F06A02);
//     }

//     // IsMissionCompletePlaying | 0x6C3B5917
//     static Any IS_MISSION_COMPLETE_PLAYING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C3B5917);
//     }

//     // IsModelInCdimage | 0x771C2838
//     static Any IS_MODEL_IN_CDIMAGE(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x771C2838, model);
//     }

//     // IsMouseButtonJustPressed | 0x27323E51
//     static Any IS_MOUSE_BUTTON_JUST_PRESSED(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27323E51, a1);
//     }

//     // IsMouseButtonPressed | 0x39E600D0
//     static Any IS_MOUSE_BUTTON_PRESSED(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39E600D0, a1);
//     }

//     // IsMouseUsingVerticalInversion | 0x64655F10
//     static Any IS_MOUSE_USING_VERTICAL_INVERSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64655F10);
//     }

//     // IsNextStationAllowed | 0x7B8B1D10
//     static Any IS_NEXT_STATION_ALLOWED(Vehicle veh)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B8B1D10, veh);
//     }

//     // IsNumlockEnabled | 0x39487FB9
//     static Any IS_NUMLOCK_ENABLED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39487FB9);
//     }

//     // IsPainPlaying | 0x32422759
//     static Any IS_PAIN_PLAYING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32422759, ped);
//     }

//     // IsPartyMode | 0x2A3A77FD
//     static Any IS_PARTY_MODE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A3A77FD);
//     }

//     // IsPayNSprayActive | 0x1EE70376
//     static Any IS_PAY_NSPRAY_ACTIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1EE70376);
//     }

//     // IsPcUsingJoypad | 0x7E8E06F8
//     static Any IS_PC_USING_JOYPAD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E8E06F8);
//     }

//     // IsPointObscuredByAMissionEntity | 0x7FBC713E
//     static Any IS_POINT_OBSCURED_BY_AMISSION_ENTITY(float pX, float pY, float pZ, float sizeX, float sizeY, float sizeZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FBC713E, pX, pY, pZ, sizeX, sizeY, sizeZ);
//     }

//     // IsPosInCutsceneBlockingBounds | 0x593A553B
//     static Any IS_POS_IN_CUTSCENE_BLOCKING_BOUNDS(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x593A553B, x, y, z);
//     }

//     // IsProjectileInArea | 0x7BB35FCF
//     static Any IS_PROJECTILE_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BB35FCF, x0, y0, z0, x1, y1, z1);
//     }

//     // IsRadioHudOn | 0x45F249B7
//     static Any IS_RADIO_HUD_ON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45F249B7);
//     }

//     // IsRadioRetuning | 0x45C344AA
//     static Any IS_RADIO_RETUNING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45C344AA);
//     }

//     // IsRelationshipSet | 0x4C076B40
//     static Any IS_RELATIONSHIP_SET(int a1, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C076B40, a1, a2, a3);
//     }

//     // IsReplaySaving | 0x78021D03
//     static Any IS_REPLAY_SAVING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78021D03);
//     }

//     // IsReplaySystemSaving | 0x318F65E6
//     static Any IS_REPLAY_SYSTEM_SAVING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x318F65E6);
//     }

//     // IsScoreGreater | 0x517B7068
//     static Any IS_SCORE_GREATER(Player playerIndex, uint32_t score)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x517B7068, playerIndex, score);
//     }

//     // IsScreenFadedIn | 0x5E0713B2
//     static Any IS_SCREEN_FADED_IN()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E0713B2);
//     }

//     // IsScreenFadedOut | 0x59EE3A11
//     static Any IS_SCREEN_FADED_OUT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59EE3A11);
//     }

//     // IsScreenFading | 0x73700561
//     static Any IS_SCREEN_FADING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73700561);
//     }

//     // IsScreenFadingIn | 0x5D1425DF
//     static Any IS_SCREEN_FADING_IN()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D1425DF);
//     }

//     // IsSniperBulletInArea | 0x6E435BDE
//     static Any IS_SNIPER_BULLET_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E435BDE, x0, y0, z0, x1, y1, z1);
//     }

//     // IsSniperInverted | 0x50DC54B3
//     static Any IS_SNIPER_INVERTED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50DC54B3);
//     }

//     // IsSphereVisibleToAnotherMachine | 0x11EE28D5
//     static Any IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11EE28D5, a1, a2, a3, a4);
//     }

//     // IsStreamingAdditionalText | 0x23B00129
//     static Any IS_STREAMING_ADDITIONAL_TEXT(uint32_t textIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x23B00129, textIndex);
//     }

//     // IsStreamingPriorityRequests | 0x64342B55
//     static Any IS_STREAMING_PRIORITY_REQUESTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64342B55);
//     }

//     // IsStreamingThisAdditionalText | 0x4D077DBA
//     static Any IS_STREAMING_THIS_ADDITIONAL_TEXT(char *a1, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D077DBA, a1, a2, a3);
//     }

//     // IsStringNull | 0x49A75618
//     static Any IS_STRING_NULL(char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49A75618, str);
//     }

//     // IsSystemUiShowing | 0x5F643EE6
//     static Any IS_SYSTEM_UI_SHOWING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F643EE6);
//     }

//     // IsThisHelpMessageBeingDisplayed | 0x505D37D8
//     static Any IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char *gxtentry)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x505D37D8, gxtentry);
//     }

//     // IsThisHelpMessageWithStringBeingDisplayed | 0x4D155EE8
//     static Any IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED(char *gxtentry, char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D155EE8, gxtentry, str);
//     }

//     // IsThisMachineTheServer | 0x2E5E1600
//     static Any IS_THIS_MACHINE_THE_SERVER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E5E1600);
//     }

//     // IsThisModelABike | 0x57F46B33
//     static Any IS_THIS_MODEL_ABIKE(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57F46B33, model);
//     }

//     // IsThisModelABoat | 0x43CC0913
//     static Any IS_THIS_MODEL_ABOAT(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43CC0913, model);
//     }

//     // IsThisModelAHeli | 0x62EA75E0
//     static Any IS_THIS_MODEL_AHELI(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62EA75E0, model);
//     }

//     // IsThisModelAPlane | 0x176F4D4C
//     static Any IS_THIS_MODEL_APLANE(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x176F4D4C, model);
//     }

//     // IsThisModelATrain | 0x7B8537F7
//     static Any IS_THIS_MODEL_ATRAIN(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B8537F7, model);
//     }

//     // IsThisPrintBeingDisplayed | 0x459A7F23
//     static Any IS_THIS_PRINT_BEING_DISPLAYED(char *gxtentry, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x459A7F23, gxtentry, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
//     }

//     // IsUsingController | 0x669D053F
//     static Any IS_USING_CONTROLLER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x669D053F);
//     }

//     // IsVehDriveable | 0x17BC668D
//     static Any IS_VEH_DRIVEABLE(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17BC668D, vehicle);
//     }

//     // IsVehStuck | 0x460D2EBB
//     static Any IS_VEH_STUCK(Vehicle veh, int32_t time, bool flag0, bool flag1, bool flag2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x460D2EBB, veh, time, flag0, flag1, flag2);
//     }

//     // IsVehWindowIntact | 0x1D0B131A
//     static Any IS_VEH_WINDOW_INTACT(Vehicle vehicle, uint32_t window)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D0B131A, vehicle, window);
//     }

//     // IsWantedLevelGreater | 0x7DA4736D
//     static Any IS_WANTED_LEVEL_GREATER(Player playerIndex, uint32_t level)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DA4736D, playerIndex, level);
//     }

//     // IsWorldPointWithinBrainActivationRange | 0x5E7B0F23
//     static Any IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E7B0F23);
//     }

//     // LoadGroupDecisionMaker | 0x67B13AF7
//     static Any LOAD_GROUP_DECISION_MAKER(uint32_t type, DecisionMaker *pDM)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67B13AF7, type, pDM);
//     }

//     // LcpdFirstTime | 0x6C82562E
//     static Any LCPD_FIRST_TIME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C82562E);
//     }

//     // LcpdHasBeenConfigured | 0x23254427
//     static Any LCPD_HAS_BEEN_CONFIGURED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x23254427);
//     }

//     // LimitAngle | 0x4CAE3B65
//     static Any LIMIT_ANGLE(float angle, float *anglelimited)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4CAE3B65, angle, anglelimited);
//     }

//     // Line | 0x6C6F6052
//     static Any LINE(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C6F6052, x0, y0, z0, x1, y1, z1);
//     }

//     // LoadAdditionalText | 0x28897EBD
//     static Any LOAD_ADDITIONAL_TEXT(char *textName, uint32_t textIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28897EBD, textName, textIndex);
//     }

//     // LoadAllPathNodes | 0x356C2DDB
//     static Any LOAD_ALL_PATH_NODES(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x356C2DDB, value);
//     }

//     // LoadPathNodesInArea | 0x44640C28
//     static Any LOAD_PATH_NODES_IN_AREA(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44640C28, x, y, z, radius);
//     }

//     // LoadScene | 0x39F62BFB
//     static Any LOAD_SCENE(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39F62BFB, x, y, z);
//     }

//     // LoadSceneForRoomByKey | 0x6E904C1A
//     static Any LOAD_SCENE_FOR_ROOM_BY_KEY(int32_t interior, uint32_t roomhash)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E904C1A, interior, roomhash);
//     }

//     // LoadSettings | 0x77745390
//     static Any LOAD_SETTINGS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x77745390);
//     }

//     // LoadTextFont | 0x2D371601
//     static Any LOAD_TEXT_FONT(uint32_t font)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D371601, font);
//     }

//     // LoadTxd | 0x52FC763A
//     static Any LOAD_TXD(char *txdName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52FC763A, txdName);
//     }

//     // LoadWebPage | 0x78C17971
//     static Any LOAD_WEB_PAGE(int32_t htmlviewport, char *webaddress)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78C17971, htmlviewport, webaddress);
//     }

//     // LockLazlowStation | 0x1B215A3B
//     static Any LOCK_LAZLOW_STATION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B215A3B);
//     }

//     // LookAtNearbyEntityWithSpecialAttribute | 0x6EB639E8
//     static Any LOOK_AT_NEARBY_ENTITY_WITH_SPECIAL_ATTRIBUTE(int a1, rage::vector3 *a2, float *a3, Any *a4, Any *a5, Any *a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6EB639E8, a1, a2, a3, a4, a5, a6);
//     }

//     // LoopRaceTrack | 0x77FD5097
//     static Any LOOP_RACE_TRACK(bool loop)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x77FD5097, loop);
//     }

//     // MaintainFlashingStarAfterOffence | 0x68880DCD
//     static Any MAINTAIN_FLASHING_STAR_AFTER_OFFENCE(int32_t player, bool maintain)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68880DCD, player, maintain);
//     }

//     // MarkMissionTrainAsNoLongerNeeded | 0x37AC2A95
//     static Any MARK_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Train train)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37AC2A95, train);
//     }

//     // MarkRoadNodeAsDontWander | 0x4C2621B6
//     static Any MARK_ROAD_NODE_AS_DONT_WANDER(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C2621B6, x, y, z);
//     }

//     // MarkStreamedTxdAsNoLongerNeeded | 0x70EA2B89
//     static Any MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED(char *txdName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70EA2B89, txdName);
//     }

//     // MissionAudioBankNoLongerNeeded | 0x12C42F66
//     static Any MISSION_AUDIO_BANK_NO_LONGER_NEEDED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12C42F66);
//     }

//     // MpGetAmountOfAnchorPoints | 0x6C7566F3
//     static Any MP_GET_AMOUNT_OF_ANCHOR_POINTS(Ped ped, int32_t id)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C7566F3, ped, id);
//     }

//     // MpGetAmountOfVariationComponent | 0x54DD6ACF
//     static Any MP_GET_AMOUNT_OF_VARIATION_COMPONENT(Ped ped, int32_t componentid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x54DD6ACF, ped, componentid);
//     }

//     // MpGetPreferenceValue | 0x54F61C99
//     static Any MP_GET_PREFERENCE_VALUE(int32_t prefid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x54F61C99, prefid);
//     }

//     // MpGetPropSetup | 0x1C00658B
//     static Any MP_GET_PROP_SETUP(Ped ped, int a2, int a3, int a4, int a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C00658B, ped, a2, a3, a4, a5);
//     }

//     // MpGetVariationSetup | 0x3775138E
//     static Any MP_GET_VARIATION_SETUP(Ped ped, int a2, int a3, int a4, int a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3775138E, ped, a2, a3, a4, a5);
//     }

//     // MpSetPreferenceValue | 0x216804D3
//     static Any MP_SET_PREFERENCE_VALUE(int32_t prefid, int32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x216804D3, prefid, value);
//     }

//     // MuteGameworldAndPositionedRadioForTv | 0x79974E04
//     static Any MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV(bool mute)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79974E04, mute);
//     }

//     // MuteGameworldAudio | 0x446677C6
//     static Any MUTE_GAMEWORLD_AUDIO(bool mute)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x446677C6, mute);
//     }

//     // MutePositionedRadio | 0x32C75195
//     static Any MUTE_POSITIONED_RADIO(bool mute)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32C75195, mute);
//     }

//     // ObfuscateInt | 0x31A219FA
//     static Any OBFUSCATE_INT(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31A219FA, a1, a2);
//     }

//     // ObfuscateIntArray | 0x3EF15B6A
//     static Any OBFUSCATE_INT_ARRAY(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3EF15B6A, a1, a2);
//     }

//     // OpenDebugFile | 0x7A2B266D
//     static Any OPEN_DEBUG_FILE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A2B266D);
//     }

//     // OpenGarage | 0x5086785F
//     static Any OPEN_GARAGE(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5086785F, name);
//     }

//     // OpenSequenceTask | 0x14A67125
//     static Any OPEN_SEQUENCE_TASK(TaskSequence *pTaskSequence)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14A67125, pTaskSequence);
//     }

//     // OverrideFreezeFlags | 0x710E6D16
//     static Any OVERRIDE_FREEZE_FLAGS(bool a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x710E6D16, a1);
//     }

//     // OverrideNextRestart | 0x27636B69
//     static Any OVERRIDE_NEXT_RESTART(float x, float y, float z, float heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27636B69, x, y, z, heading);
//     }

//     // PanicScream | 0x4F8B4507
//     static Any PANIC_SCREAM(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F8B4507, ped);
//     }

//     // PauseGame | 0x7FB41425
//     static Any PAUSE_GAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FB41425);
//     }

//     // PlayAudioEvent | 0x486F3D93
//     static Any PLAY_AUDIO_EVENT(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x486F3D93, name);
//     }

//     // PlayMovie | 0x3CD60F11
//     static Any PLAY_MOVIE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CD60F11);
//     }

//     // PlaySound | 0x47CA7C53
//     static Any PLAY_SOUND(int32_t SoundId, char *SoundName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47CA7C53, SoundId, SoundName);
//     }

//     // PlaySoundFromPosition | 0x65752C65
//     static Any PLAY_SOUND_FROM_POSITION(int32_t sound_id, char *name, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65752C65, sound_id, name, x, y, z);
//     }

//     // PlaySoundFrontend | 0x4DAF2C87
//     static Any PLAY_SOUND_FRONTEND(uint32_t sound, char *soundName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DAF2C87, sound, soundName);
//     }

//     // PlayStreamFrontend | 0x133C257F
//     static Any PLAY_STREAM_FRONTEND()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x133C257F);
//     }

//     // PlaystatsInt | 0x41FA2D0C
//     static Any PLAYSTATS_INT(Any a1, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41FA2D0C, a1, a2);
//     }

//     // PlaystatsIntFloat | 0x511200C7
//     static Any PLAYSTATS_INT_FLOAT(Any a1, int a2, float a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x511200C7, a1, a2, a3);
//     }

//     // PlaystatsMissionCancelled | 0x60D94FA7
//     static Any PLAYSTATS_MISSION_CANCELLED(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60D94FA7, a1);
//     }

//     // PlaystatsMissionFailed | 0x50BB02F7
//     static Any PLAYSTATS_MISSION_FAILED(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50BB02F7, a1);
//     }

//     // PlaystatsMissionPassed | 0x437D3E19
//     static Any PLAYSTATS_MISSION_PASSED(char *a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x437D3E19, a1);
//     }

//     // PlaystatsMissionStarted | 0x26747EBE
//     static Any PLAYSTATS_MISSION_STARTED(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26747EBE, a1);
//     }

//     // PopulateNow | 0x7E3A7E2A
//     static Any POPULATE_NOW()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E3A7E2A);
//     }

//     // Pow | 0x5ADD1F46
//     static Any POW(float base, float power)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5ADD1F46, base, power);
//     }

//     // PreloadStream | 0x39DE515D
//     static Any PRELOAD_STREAM(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39DE515D, name);
//     }

//     // PreloadStreamWithStartOffset | 0x2B8836A6
//     static Any PRELOAD_STREAM_WITH_START_OFFSET(char *StreamName, int32_t StartOffset)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B8836A6, StreamName, StartOffset);
//     }

//     // PreviewRingtone | 0x79660015
//     static Any PREVIEW_RINGTONE(int32_t RingtoneId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79660015, RingtoneId);
//     }

//     // PrintBig | 0x2C8A5404
//     static Any PRINT_BIG(char *gxtName, uint32_t timeMS, uint8_t style)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C8A5404, gxtName, timeMS, style);
//     }

//     // PrintBigQ | 0x2B2E39BB
//     static Any PRINT_BIG_Q(char *gxtentry, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B2E39BB, gxtentry, time, flag);
//     }

//     // PrintHelp | 0x71076BBA
//     static Any PRINT_HELP(char *gxtName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71076BBA, gxtName);
//     }

//     // PrintHelpForever | 0x43F7517D
//     static Any PRINT_HELP_FOREVER(char *gxtName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43F7517D, gxtName);
//     }

//     // PrintHelpForeverWithNumber | 0x19836A5B
//     static Any PRINT_HELP_FOREVER_WITH_NUMBER(char *gxtName, int32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19836A5B, gxtName, value);
//     }

//     // PrintHelpForeverWithString | 0x36D60616
//     static Any PRINT_HELP_FOREVER_WITH_STRING(char *gxtName, char *gxtText)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36D60616, gxtName, gxtText);
//     }

//     // PrintHelpForeverWithStringNoSound | 0x55687797
//     static Any PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND(char *gxtName, char *gxtText)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55687797, gxtName, gxtText);
//     }

//     // PrintHelpForeverWithTwoNumbers | 0x795227EE
//     static Any PRINT_HELP_FOREVER_WITH_TWO_NUMBERS(char *gxtentry, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x795227EE, gxtentry, a2, a3);
//     }

//     // PrintHelpOverFrontend | 0x1C334022
//     static Any PRINT_HELP_OVER_FRONTEND(char *gxtentry)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C334022, gxtentry);
//     }

//     // PrintHelpWithNumber | 0x4475789E
//     static Any PRINT_HELP_WITH_NUMBER(char *gxtName, int32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4475789E, gxtName, value);
//     }

//     // PrintHelpWithString | 0x521035AA
//     static Any PRINT_HELP_WITH_STRING(char *gxtName, char *gxtText)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x521035AA, gxtName, gxtText);
//     }

//     // PrintHelpWithStringNoSound | 0x15734852
//     static Any PRINT_HELP_WITH_STRING_NO_SOUND(char *gxtName, char *gxtText)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15734852, gxtName, gxtText);
//     }

//     // PrintNow | 0x73B01573
//     static Any PRINT_NOW(char *gxtName, uint32_t timeMS, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73B01573, gxtName, timeMS, enable);
//     }

//     // PrintStringInString | 0x4DAA221F
//     static Any PRINT_STRING_IN_STRING(char *gxtName, char *gxtText, uint32_t timeMS, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DAA221F, gxtName, gxtText, timeMS, enable);
//     }

//     // PrintStringInStringNow | 0x2BB65467
//     static Any PRINT_STRING_IN_STRING_NOW(char *gxtName, char *gxtText, uint32_t timeMS, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BB65467, gxtName, gxtText, timeMS, enable);
//     }

//     // PrintStringWithLiteralString | 0x3F89280B
//     static Any PRINT_STRING_WITH_LITERAL_STRING(char *gxtentry, char *string, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F89280B, gxtentry, string, time, flag);
//     }

//     // PrintStringWithTwoLiteralStrings | 0x19486759
//     static Any PRINT_STRING_WITH_TWO_LITERAL_STRINGS(char *gxtentry, char *string1, char *string2, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19486759, gxtentry, string1, string2, time, flag);
//     }

//     // PrintStringWithTwoLiteralStringsNow | 0x7DE7708E
//     static Any PRINT_STRING_WITH_TWO_LITERAL_STRINGS_NOW(char *gxtentry, char *string1, char *string2, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DE7708E, gxtentry, string1, string2, time, flag);
//     }

//     // PrintWith2Numbers | 0x230A740F
//     static Any PRINT_WITH2NUMBERS(char *gxtName, int32_t value1, int32_t value2, uint32_t timeMS, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x230A740F, gxtName, value1, value2, timeMS, enable);
//     }

//     // PrintWith2NumbersBig | 0x43197215
//     static Any PRINT_WITH2NUMBERS_BIG(char *gxtentry, int a2, int a3, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43197215, gxtentry, a2, a3, time, flag);
//     }

//     // PrintWith2NumbersNow | 0x5D251D72
//     static Any PRINT_WITH2NUMBERS_NOW(char *gxtName, int32_t value1, int32_t value2, uint32_t timeMS, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D251D72, gxtName, value1, value2, timeMS, enable);
//     }

//     // PrintWith3Numbers | 0x5FE61572
//     static Any PRINT_WITH3NUMBERS(char *gxtentry, int a2, int a3, int a4, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FE61572, gxtentry, a2, a3, a4, time, flag);
//     }

//     // PrintWith3NumbersNow | 0x1A4D0C60
//     static Any PRINT_WITH3NUMBERS_NOW(char *gxtentry, int a2, int a3, int a4, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A4D0C60, gxtentry, a2, a3, a4, time, flag);
//     }

//     // PrintWith4Numbers | 0x4D4F65AE
//     static Any PRINT_WITH4NUMBERS(char *gxtentry, int a2, int a3, int a4, int a5, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D4F65AE, gxtentry, a2, a3, a4, a5, time, flag);
//     }

//     // PrintWith4NumbersNow | 0x5CCD150B
//     static Any PRINT_WITH4NUMBERS_NOW(char *gxtentry, int a2, int a3, int a4, int a5, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5CCD150B, gxtentry, a2, a3, a4, a5, time, flag);
//     }

//     // PrintWith5Numbers | 0x2CC356D0
//     static Any PRINT_WITH5NUMBERS(char *gxtentry, int a2, int a3, int a4, int a5, int a6, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CC356D0, gxtentry, a2, a3, a4, a5, a6, time, flag);
//     }

//     // PrintWith5NumbersNow | 0x5EC2479B
//     static Any PRINT_WITH5NUMBERS_NOW(char *gxtentry, int a2, int a3, int a4, int a5, int a6, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5EC2479B, gxtentry, a2, a3, a4, a5, a6, time, flag);
//     }

//     // PrintWith6NumbersNow | 0x156E12CA
//     static Any PRINT_WITH6NUMBERS_NOW(char *gxtentry, int a2, int a3, int a4, int a5, int a6, int a7, int32_t time, int32_t flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x156E12CA, gxtentry, a2, a3, a4, a5, a6, a7, time, flag);
//     }

//     // PrintWithNumber | 0x76A63B4C
//     static Any PRINT_WITH_NUMBER(char *gxtName, int32_t value, uint32_t timeMS, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76A63B4C, gxtName, value, timeMS, enable);
//     }

//     // PrintWithNumberBig | 0x49850843
//     static Any PRINT_WITH_NUMBER_BIG(char *gxtName, int32_t value, uint32_t timeMS, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49850843, gxtName, value, timeMS, enable);
//     }

//     // PrintWithNumberNow | 0x3BDA562E
//     static Any PRINT_WITH_NUMBER_NOW(char *gxtName, int32_t value, uint32_t timeMS, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BDA562E, gxtName, value, timeMS, enable);
//     }

//     // Printfloat | 0x2F206763
//     static Any PRINTFLOAT(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F206763, value);
//     }

//     // Printfloat2 | 0x108A527F
//     static Any PRINTFLOAT2()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x108A527F);
//     }

//     // Printint | 0x20421014
//     static Any PRINTINT(int32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20421014, value);
//     }

//     // Printint2 | 0x49B35C2D
//     static Any PRINTINT2()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49B35C2D);
//     }

//     // Printnl | 0x4013147B
//     static Any PRINTNL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4013147B);
//     }

//     // Printstring | 0x616F492C
//     static Any PRINTSTRING(char *value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x616F492C, value);
//     }

//     // Printvector | 0x61965EB3
//     static Any PRINTVECTOR(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61965EB3, x, y, z);
//     }

//     // PrioritizeStreamingRequest | 0x1DD926BA
//     static Any PRIORITIZE_STREAMING_REQUEST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DD926BA);
//     }

//     // ProcessMissionDeletionList | 0x33565078
//     static Any PROCESS_MISSION_DELETION_LIST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x33565078);
//     }

//     // RegisterTrackNumber | 0x519B3104
//     static Any REGISTER_TRACK_NUMBER(int32_t number)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x519B3104, number);
//     }

//     // ReadKillFrenzyStatus | 0x3F9F0CF5
//     static Any READ_KILL_FRENZY_STATUS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F9F0CF5);
//     }

//     // ReadLobbyPreference | 0x177A3DA4
//     static Any READ_LOBBY_PREFERENCE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x177A3DA4);
//     }

//     // RegisterClientBroadcastVariables | 0x499B6DB6
//     static Any REGISTER_CLIENT_BROADCAST_VARIABLES(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x499B6DB6, a1, a2, a3);
//     }

//     // RegisterFloatStat | 0x347E05F3
//     static Any REGISTER_FLOAT_STAT(int32_t stat, float val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x347E05F3, stat, val);
//     }

//     // RegisterHatedTargetsInArea | 0x619E7657
//     static Any REGISTER_HATED_TARGETS_IN_AREA(Ped a1, float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x619E7657, a1, x, y, z, radius);
//     }

//     // RegisterHostBroadcastVariables | 0x18DB4CAF
//     static Any REGISTER_HOST_BROADCAST_VARIABLES(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18DB4CAF, a1, a2, a3);
//     }

//     // RegisterIntStat | 0x609D07DB
//     static Any REGISTER_INT_STAT(int32_t stat, int32_t val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x609D07DB, stat, val);
//     }

//     // RegisterMissionPassed | 0x5FBE5F52
//     static Any REGISTER_MISSION_PASSED(char *a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FBE5F52, a1);
//     }

//     // RegisterMod | 0x327866F6
//     static Any REGISTER_MOD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x327866F6);
//     }

//     // RegisterModelForRankPoints | 0x39E61536
//     static Any REGISTER_MODEL_FOR_RANK_POINTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39E61536);
//     }

//     // RegisterOddjobMissionPassed | 0x1B0963AF
//     static Any REGISTER_ODDJOB_MISSION_PASSED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B0963AF);
//     }

//     // RegisterSaveHouse | 0x7DF45001
//     static Any REGISTER_SAVE_HOUSE(float x, float y, float z, float unkf, char *name, uint32_t unku)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DF45001, x, y, z, unkf, name, unku);
//     }

//     // RegisterStringForFrontendStat | 0x3C295451
//     static Any REGISTER_STRING_FOR_FRONTEND_STAT(int32_t stat, char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C295451, stat, str);
//     }

//     // RegisterTarget | 0x5F456B53
//     static Any REGISTER_TARGET(Ped ped, Ped target)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F456B53, ped, target);
//     }

//     // ReleaseMovie | 0x55C84CB7
//     static Any RELEASE_MOVIE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55C84CB7);
//     }

//     // ReleasePathNodes | 0x2CE231DC
//     static Any RELEASE_PATH_NODES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CE231DC);
//     }

//     // ReleaseSoundId | 0x211D390A
//     static Any RELEASE_SOUND_ID(uint32_t sound)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x211D390A, sound);
//     }

//     // ReleaseTexture | 0x58524B04
//     static Any RELEASE_TEXTURE(Texture texture)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58524B04, texture);
//     }

//     // ReleaseTimeOfDay | 0x2AD2206E
//     static Any RELEASE_TIME_OF_DAY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2AD2206E);
//     }

//     // ReloadWebPage | 0x565B0C3E
//     static Any RELOAD_WEB_PAGE(int32_t htmlviewport)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x565B0C3E, htmlviewport);
//     }

//     // RemoveAdditionalPopulationModel | 0x602112FC
//     static Any REMOVE_ADDITIONAL_POPULATION_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x602112FC, model);
//     }

//     // RemoveAllInactiveGroupsFromCleanupList | 0x622E3D34
//     static Any REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x622E3D34);
//     }

//     // RemoveAnims | 0x55E00E7E
//     static Any REMOVE_ANIMS(char *animName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55E00E7E, animName);
//     }

//     // RemoveCoverPoint | 0x4371502A
//     static Any REMOVE_COVER_POINT(CoverPoint coverPoint)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4371502A, coverPoint);
//     }

//     // RemoveDecisionMaker | 0x47147EC5
//     static Any REMOVE_DECISION_MAKER(DecisionMaker dm)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47147EC5, dm);
//     }

//     // RemoveGroup | 0x250C2D39
//     static Any REMOVE_GROUP(Group group)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x250C2D39, group);
//     }

//     // RemoveIpl | 0x787F38B5
//     static Any REMOVE_IPL(char *iplName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x787F38B5, iplName);
//     }

//     // RemoveIplDiscreetly | 0x658F21AF
//     static Any REMOVE_IPL_DISCREETLY(char *iplname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x658F21AF, iplname);
//     }

//     // RemoveNavmeshRequiredRegion | 0x772660D7
//     static Any REMOVE_NAVMESH_REQUIRED_REGION(float a1, float a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x772660D7, a1, a2);
//     }

//     // RemoveProjtexInRange | 0x170F0D58
//     static Any REMOVE_PROJTEX_IN_RANGE(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x170F0D58, x, y, z, radius);
//     }

//     // RemovePtfx | 0x4AF643D5
//     static Any REMOVE_PTFX(uint32_t ptfx)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AF643D5, ptfx);
//     }

//     // RemoveRcBuggy | 0x48BC2249
//     static Any REMOVE_RC_BUGGY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48BC2249);
//     }

//     // RemoveSphere | 0x12A909C9
//     static Any REMOVE_SPHERE(uint32_t sphere)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12A909C9, sphere);
//     }

//     // RemoveTxd | 0x44C27071
//     static Any REMOVE_TXD(TextureDict txd)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44C27071, txd);
//     }

//     // RenderRaceTrack | 0x5062055B
//     static Any RENDER_RACE_TRACK(bool render)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5062055B, render);
//     }

//     // RenderRadiohudSpriteInLobby | 0x11887D84
//     static Any RENDER_RADIOHUD_SPRITE_IN_LOBBY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11887D84);
//     }

//     // ReportDispatch | 0x388D6B44
//     static Any REPORT_DISPATCH(int32_t id, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x388D6B44, id, x, y, z);
//     }

//     // ReportSuspectDown | 0x6A660231
//     static Any REPORT_SUSPECT_DOWN()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A660231);
//     }

//     // RequestAdditionalText | 0x6A9F01AF
//     static Any REQUEST_ADDITIONAL_TEXT(char *textName, uint32_t textIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A9F01AF, textName, textIndex);
//     }

//     // RequestAllSlodsInWorld | 0x39264921
//     static Any REQUEST_ALL_SLODS_IN_WORLD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39264921);
//     }

//     // RequestAmbientAudioBank | 0x754E1999
//     static Any REQUEST_AMBIENT_AUDIO_BANK(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x754E1999, name);
//     }

//     // RequestAnims | 0x65F874DE
//     static Any REQUEST_ANIMS(char *animName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65F874DE, animName);
//     }

//     // RequestCollisionAtPosn | 0x12ED0BC9
//     static Any REQUEST_COLLISION_AT_POSN(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12ED0BC9, x, y, z);
//     }

//     // RequestCollisionForModel | 0x66E93537
//     static Any REQUEST_COLLISION_FOR_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66E93537, model);
//     }

//     // RequestInteriorModels | 0x302E113D
//     static Any REQUEST_INTERIOR_MODELS(uint32_t model, char *interiorName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x302E113D, model, interiorName);
//     }

//     // RequestIpl | 0x59FD4E83
//     static Any REQUEST_IPL(char *iplName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59FD4E83, iplName);
//     }

//     // RequestMissionAudioBank | 0x335E603B
//     static Any REQUEST_MISSION_AUDIO_BANK(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x335E603B, name);
//     }

//     // RequestModel | 0x502B5185
//     static Any REQUEST_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x502B5185, model);
//     }

//     // RequestStreamedTxd | 0x7C7B1237
//     static Any REQUEST_STREAMED_TXD(char *txdName, bool unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C7B1237, txdName, unknown);
//     }

//     // ResetAchievementsAward | 0x11E22D1B
//     static Any RESET_ACHIEVEMENTS_AWARD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11E22D1B);
//     }

//     // ResetConsoleCommand | 0x26B6430B
//     static Any RESET_CONSOLE_COMMAND()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26B6430B);
//     }

//     // ResetStuckTimer | 0x73260714
//     static Any RESET_STUCK_TIMER(Car car, int32_t timer_num)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73260714, car, timer_num);
//     }

//     // RetuneRadioToStationIndex | 0x48ED6432
//     static Any RETUNE_RADIO_TO_STATION_INDEX(uint32_t radioStation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48ED6432, radioStation);
//     }

//     // RetuneRadioToStationName | 0x58BA4401
//     static Any RETUNE_RADIO_TO_STATION_NAME(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58BA4401, name);
//     }

//     // RetuneRadioUp | 0x6B1C6027
//     static Any RETUNE_RADIO_UP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B1C6027);
//     }

//     // Round | 0x7CA5476A
//     static Any ROUND(float a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CA5476A, a1);
//     }

//     // SetGroupDecisionMaker | 0xB7F9858F
//     static Any SET_GROUP_DECISION_MAKER(Group group, DecisionMaker dm)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0xB7F9858F, group, dm);
//     }

//     // SetTextCentreWrapX | 0x2F9E362B
//     static Any SET_TEXT_CENTRE_WRAP_X(float wrapx)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F9E362B, wrapx);
//     }

//     // SaveFloatToDebugFile | 0x66317064
//     static Any SAVE_FLOAT_TO_DEBUG_FILE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66317064, a1);
//     }

//     // SaveIntToDebugFile | 0x65EF0CB8
//     static Any SAVE_INT_TO_DEBUG_FILE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65EF0CB8, a1);
//     }

//     // SaveNewlineToDebugFile | 0x69D90F11
//     static Any SAVE_NEWLINE_TO_DEBUG_FILE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69D90F11);
//     }

//     // SaveSettings | 0x584C3830
//     static Any SAVE_SETTINGS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x584C3830);
//     }

//     // SaveStringToDebugFile | 0x27FA32D4
//     static Any SAVE_STRING_TO_DEBUG_FILE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27FA32D4, a1);
//     }

//     // SayAmbientSpeech | 0x5CF149C8
//     static Any SAY_AMBIENT_SPEECH(Ped ped, char *phraseName, bool flag0, bool flag1, int32_t style)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5CF149C8, ped, phraseName, flag0, flag1, style);
//     }

//     // SayAmbientSpeechWithVoice | 0x2FA55669
//     static Any SAY_AMBIENT_SPEECH_WITH_VOICE(Ped ped, char *SpeechName, char *VoiceName, bool flag0, bool flag1, int32_t style)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FA55669, ped, SpeechName, VoiceName, flag0, flag1, style);
//     }

//     // SecuromSpotCheck1 | 0x63576E53
//     static Any SECUROM_SPOT_CHECK1()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63576E53);
//     }

//     // SecuromSpotCheck2 | 0x1F40505C
//     static Any SECUROM_SPOT_CHECK2()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F40505C);
//     }

//     // SecuromSpotCheck3 | 0x5D1C0A6A
//     static Any SECUROM_SPOT_CHECK3()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D1C0A6A);
//     }

//     // SecuromSpotCheck4 | 0x764236CE
//     static Any SECUROM_SPOT_CHECK4()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x764236CE);
//     }

//     // SendClientBroadcastVariablesNow | 0x36B40989
//     static Any SEND_CLIENT_BROADCAST_VARIABLES_NOW()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36B40989);
//     }

//     // SendNmMessage | 0x75AC2519
//     static Any SEND_NM_MESSAGE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75AC2519, ped);
//     }

//     // SetAdvancedBoolInDecisionMaker | 0x709D2036
//     static Any SET_ADVANCED_BOOL_IN_DECISION_MAKER(int32_t dm, int a2, int a3, int a4, bool a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x709D2036, dm, a2, a3, a4, a5);
//     }

//     // SetAmbientPlanesSpeedMultiplier | 0x4B470947
//     static Any SET_AMBIENT_PLANES_SPEED_MULTIPLIER(float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B470947, multiplier);
//     }

//     // SetAmbientVoiceName | 0x426A4ED8
//     static Any SET_AMBIENT_VOICE_NAME(Ped ped, char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x426A4ED8, ped, name);
//     }

//     // SetAmmoInClip | 0x6E1A0A84
//     static Any SET_AMMO_IN_CLIP(Ped ped, uint32_t weapon, uint32_t ammo)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E1A0A84, ped, weapon, ammo);
//     }

//     // SetAreaName | 0x3C3879C6
//     static Any SET_AREA_NAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C3879C6);
//     }

//     // SetBit | 0x39551B76
//     static Any SET_BIT(int32_t *val, int32_t bit)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39551B76, val, bit);
//     }

//     // SetBitsInRange | 0x14DD5F87
//     static Any SET_BITS_IN_RANGE(int32_t *a1, int32_t rangebegin, int32_t rangeend, int32_t val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14DD5F87, a1, rangebegin, rangeend, val);
//     }

//     // SetBlockingOfNonTemporaryEvents | 0x76247429
//     static Any SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76247429, ped, value);
//     }

//     // SetBriansMood | 0x34F128F9
//     static Any SET_BRIANS_MOOD(int32_t mood)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34F128F9, mood);
//     }

//     // SetClearHelpInMissionCleanup | 0x4371559F
//     static Any SET_CLEAR_HELP_IN_MISSION_CLEANUP(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4371559F, set);
//     }

//     // SetClearManifolds | 0x5B7A738C
//     static Any SET_CLEAR_MANIFOLDS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B7A738C, set);
//     }

//     // SetCollectable1Total | 0x79574B3B
//     static Any SET_COLLECTABLE1TOTAL(int32_t total)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79574B3B, total);
//     }

//     // SetCombatDecisionMaker | 0x526B048C
//     static Any SET_COMBAT_DECISION_MAKER(Ped ped, DecisionMaker dm)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x526B048C, ped, dm);
//     }

//     // SetConvertibleRoof | 0x3A9A0869
//     static Any SET_CONVERTIBLE_ROOF(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A9A0869, car, set);
//     }

//     // SetCreateRandomCops | 0x5C832C1F
//     static Any SET_CREATE_RANDOM_COPS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C832C1F, set);
//     }

//     // SetCreditsToRenderBeforeFade | 0x35FA026D
//     static Any SET_CREDITS_TO_RENDER_BEFORE_FADE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x35FA026D, set);
//     }

//     // SetCurrentMovie | 0x5AF23F31
//     static Any SET_CURRENT_MOVIE(char *filename)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AF23F31, filename);
//     }

//     // SetCutsceneExtraRoomPos | 0x226A7227
//     static Any SET_CUTSCENE_EXTRA_ROOM_POS(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x226A7227, x, y, z);
//     }

//     // SetDanceShakeActiveThisUpdate | 0x1E880709
//     static Any SET_DANCE_SHAKE_ACTIVE_THIS_UPDATE(float shake)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E880709, shake);
//     }

//     // SetDanceShakeInactiveImmediately | 0x2DAE50C0
//     static Any SET_DANCE_SHAKE_INACTIVE_IMMEDIATELY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2DAE50C0);
//     }

//     // SetDeathWeaponsPersist | 0x49F86791
//     static Any SET_DEATH_WEAPONS_PERSIST(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49F86791, ped, set);
//     }

//     // SetDebugTextVisible | 0x39D87BD6
//     static Any SET_DEBUG_TEXT_VISIBLE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39D87BD6, a1);
//     }

//     // SetDecisionMakerAttributeCanChangeTarget | 0x51F54148
//     static Any SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET(DecisionMaker dm, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51F54148, dm, value);
//     }

//     // SetDecisionMakerAttributeCaution | 0x6BAC2781
//     static Any SET_DECISION_MAKER_ATTRIBUTE_CAUTION(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6BAC2781, dm, value);
//     }

//     // SetDecisionMakerAttributeLowHealth | 0x2FFA6C89
//     static Any SET_DECISION_MAKER_ATTRIBUTE_LOW_HEALTH(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FFA6C89, dm, value);
//     }

//     // SetDecisionMakerAttributeNavigationStyle | 0x26A1722C
//     static Any SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26A1722C, dm, value);
//     }

//     // SetDecisionMakerAttributeRetreatingBehaviour | 0x67890049
//     static Any SET_DECISION_MAKER_ATTRIBUTE_RETREATING_BEHAVIOUR(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67890049, dm, value);
//     }

//     // SetDecisionMakerAttributeSightRange | 0x2F444F95
//     static Any SET_DECISION_MAKER_ATTRIBUTE_SIGHT_RANGE(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F444F95, dm, value);
//     }

//     // SetDecisionMakerAttributeStandingStyle | 0x7D767108
//     static Any SET_DECISION_MAKER_ATTRIBUTE_STANDING_STYLE(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D767108, dm, value);
//     }

//     // SetDecisionMakerAttributeTargetInjuredReaction | 0x7CAE2557
//     static Any SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CAE2557, dm, value);
//     }

//     // SetDecisionMakerAttributeTargetLossResponse | 0x65490A3D
//     static Any SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65490A3D, dm, value);
//     }

//     // SetDecisionMakerAttributeTeamwork | 0x7EAE7F2F
//     static Any SET_DECISION_MAKER_ATTRIBUTE_TEAMWORK(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EAE7F2F, dm, value);
//     }

//     // SetDecisionMakerAttributeWeaponAccuracy | 0x21B8337F
//     static Any SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21B8337F, dm, value);
//     }

//     // SetDefaultGlobalInstancePriority | 0x58E835E4
//     static Any SET_DEFAULT_GLOBAL_INSTANCE_PRIORITY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58E835E4);
//     }

//     // SetDitchPoliceModels | 0x25AC586E
//     static Any SET_DITCH_POLICE_MODELS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25AC586E, set);
//     }

//     // SetDoorState | 0x7E3D3430
//     static Any SET_DOOR_STATE(Object door, bool flag, float a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E3D3430, door, flag, a3);
//     }

//     // SetDriveTaskCruiseSpeed | 0x499700EF
//     static Any SET_DRIVE_TASK_CRUISE_SPEED(Ped ped, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x499700EF, ped, speed);
//     }

//     // SetEnableNearClipScan | 0x35CC3267
//     static Any SET_ENABLE_NEAR_CLIP_SCAN(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x35CC3267, set);
//     }

//     // SetEnableRcDetonate | 0x1FC96A99
//     static Any SET_ENABLE_RC_DETONATE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1FC96A99, set);
//     }

//     // SetEnableRcDetonateOnContact | 0x7BD06E31
//     static Any SET_ENABLE_RC_DETONATE_ON_CONTACT(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BD06E31, set);
//     }

//     // SetEngineHealth | 0x3F413561
//     static Any SET_ENGINE_HEALTH(Vehicle vehicle, float health)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F413561, vehicle, health);
//     }

//     // SetEventPrecedence | 0x40C54978
//     static Any SET_EVENT_PRECEDENCE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40C54978);
//     }

//     // SetExtraHospitalRestartPoint | 0x4B6E368D
//     static Any SET_EXTRA_HOSPITAL_RESTART_POINT(float x, float y, float z, float a4, float a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B6E368D, x, y, z, a4, a5);
//     }

//     // SetExtraPoliceStationRestartPoint | 0x1C4E7A79
//     static Any SET_EXTRA_POLICE_STATION_RESTART_POINT(float x, float y, float z, float a4, float a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C4E7A79, x, y, z, a4, a5);
//     }

//     // SetFadeInAfterLoad | 0x5384065B
//     static Any SET_FADE_IN_AFTER_LOAD(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5384065B, set);
//     }

//     // SetFakeWantedCircle | 0x3CEE0376
//     static Any SET_FAKE_WANTED_CIRCLE(float x, float y, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CEE0376, x, y, radius);
//     }

//     // SetFakeWantedLevel | 0x29D91F3D
//     static Any SET_FAKE_WANTED_LEVEL(int32_t lvl)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29D91F3D, lvl);
//     }

//     // SetFilterSaveSetting | 0x47F971E8
//     static Any SET_FILTER_SAVE_SETTING(int32_t filterid, int32_t setting)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47F971E8, filterid, setting);
//     }

//     // SetFloatStat | 0x5213511B
//     static Any SET_FLOAT_STAT(uint32_t stat, float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5213511B, stat, value);
//     }

//     // SetForceLookBehind | 0x64961488
//     static Any SET_FORCE_LOOK_BEHIND(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64961488, set);
//     }

//     // SetGlobalInstancePriority | 0x573F5B48
//     static Any SET_GLOBAL_INSTANCE_PRIORITY(int32_t priority)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x573F5B48, priority);
//     }

//     // SetGlobalRenderFlags | 0x4FE23851
//     static Any SET_GLOBAL_RENDER_FLAGS(bool a1, bool a2, bool a3, bool a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FE23851, a1, a2, a3, a4);
//     }

//     // SetGpsRemainsWhenTargetReachedFlag | 0x4C9B749F
//     static Any SET_GPS_REMAINS_WHEN_TARGET_REACHED_FLAG(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C9B749F, set);
//     }

//     // SetGpsTestIn3dFlag | 0x28D17798
//     static Any SET_GPS_TEST_IN3D_FLAG(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28D17798, set);
//     }

//     // SetGravityOff | 0x3CDA1A07
//     static Any SET_GRAVITY_OFF(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CDA1A07, set);
//     }

//     // SetGroupCombatDecisionMaker | 0x58123F7A
//     static Any SET_GROUP_COMBAT_DECISION_MAKER(Group group, DecisionMaker dm)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58123F7A, group, dm);
//     }

//     // SetGroupFollowStatus | 0x64B9757E
//     static Any SET_GROUP_FOLLOW_STATUS(Group group, uint32_t status)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64B9757E, group, status);
//     }

//     // SetGroupFormation | 0x6D05484F
//     static Any SET_GROUP_FORMATION(Group group, uint32_t formation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D05484F, group, formation);
//     }

//     // SetGroupFormationSpacing | 0x69315157
//     static Any SET_GROUP_FORMATION_SPACING(Group group, float space)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69315157, group, space);
//     }

//     // SetGroupMember | 0x5E0F611E
//     static Any SET_GROUP_MEMBER(Group group, Ped member)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E0F611E, group, member);
//     }

//     // SetGroupSeparationRange | 0x22DD329E
//     static Any SET_GROUP_SEPARATION_RANGE(Group group, float seperation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22DD329E, group, seperation);
//     }

//     // SetGunshotSenseRangeForRiot2 | 0x1A081F78
//     static Any SET_GUNSHOT_SENSE_RANGE_FOR_RIOT2(float range)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A081F78, range);
//     }

//     // SetHeliBladesFullSpeed | 0x557C3641
//     static Any SET_HELI_BLADES_FULL_SPEED(Vehicle heli)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x557C3641, heli);
//     }

//     // SetHeliForceEngineOn | 0x3B8F5E20
//     static Any SET_HELI_FORCE_ENGINE_ON(Vehicle heli, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B8F5E20, heli, set);
//     }

//     // SetHeliStabiliser | 0x4E653BCC
//     static Any SET_HELI_STABILISER(Vehicle heli, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E653BCC, heli, set);
//     }

//     // SetHelpMessageBoxSize | 0x4FB069ED
//     static Any SET_HELP_MESSAGE_BOX_SIZE(float a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FB069ED, a1);
//     }

//     // SetHelpMessageBoxSizeF | 0x7A521650
//     static Any SET_HELP_MESSAGE_BOX_SIZE_F(float size)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A521650, size);
//     }

//     // SetHintAdvancedParams | 0x2E096356
//     static Any SET_HINT_ADVANCED_PARAMS(float a1, float a2, float a3, float a4, bool a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E096356, a1, a2, a3, a4, a5);
//     }

//     // SetHintFov | 0x2F9751E2
//     static Any SET_HINT_FOV(float fov)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F9751E2, fov);
//     }

//     // SetHintMoveInDist | 0x661A0CCC
//     static Any SET_HINT_MOVE_IN_DIST(float dist)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x661A0CCC, dist);
//     }

//     // SetHintMoveInDistDefault | 0x449264B6
//     static Any SET_HINT_MOVE_IN_DIST_DEFAULT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x449264B6);
//     }

//     // SetHintTimes | 0x4CC81FCB
//     static Any SET_HINT_TIMES(float a1, float a2, float a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4CC81FCB, a1, a2, a3);
//     }

//     // SetHintTimesDefault | 0x6ADF2929
//     static Any SET_HINT_TIMES_DEFAULT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6ADF2929);
//     }

//     // SetHostMatchOn | 0x2C41421A
//     static Any SET_HOST_MATCH_ON(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C41421A, a1);
//     }

//     // SetHotWeaponSwap | 0x7FF260D0
//     static Any SET_HOT_WEAPON_SWAP(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FF260D0, set);
//     }

//     // SetIgnoreNoGpsFlag | 0x1FC06A1B
//     static Any SET_IGNORE_NO_GPS_FLAG(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1FC06A1B, set);
//     }

//     // SetIgnoreServerUpdate | 0x6B2F6234
//     static Any SET_IGNORE_SERVER_UPDATE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B2F6234);
//     }

//     // SetInMpTutorial | 0x1AEB793A
//     static Any SET_IN_MP_TUTORIAL(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1AEB793A, a1);
//     }

//     // SetInSpectatorMode | 0x40035D5D
//     static Any SET_IN_SPECTATOR_MODE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40035D5D, a1);
//     }

//     // SetInformRespectedFriends | 0x509F236D
//     static Any SET_INFORM_RESPECTED_FRIENDS(Ped ped, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x509F236D, ped, a2, a3);
//     }

//     // SetInstantWidescreenBorders | 0x728C1CC0
//     static Any SET_INSTANT_WIDESCREEN_BORDERS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x728C1CC0, set);
//     }

//     // SetIntStat | 0x1B64665B
//     static Any SET_INT_STAT(uint32_t stat, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B64665B, stat, value);
//     }

//     // SetInvincibilityTimerDuration | 0x3E4233F7
//     static Any SET_INVINCIBILITY_TIMER_DURATION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E4233F7);
//     }

//     // SetKillstreak | 0x7D070604
//     static Any SET_KILLSTREAK()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D070604);
//     }

//     // SetLcpdCopScore | 0x39C6699D
//     static Any SET_LCPD_COP_SCORE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39C6699D);
//     }

//     // SetLcpdCriminalScore | 0x7457458C
//     static Any SET_LCPD_CRIMINAL_SCORE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7457458C);
//     }

//     // SetLobbyMuteOverride | 0x10800FD6
//     static Any SET_LOBBY_MUTE_OVERRIDE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10800FD6, set);
//     }

//     // SetMaxWantedLevel | 0x5D622498
//     static Any SET_MAX_WANTED_LEVEL(uint32_t lvl)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D622498, lvl);
//     }

//     // SetMessageFormatting | 0x679A474E
//     static Any SET_MESSAGE_FORMATTING(bool a1, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x679A474E, a1, a2, a3);
//     }

//     // SetMessagesWaiting | 0x7DC061F5
//     static Any SET_MESSAGES_WAITING(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DC061F5, set);
//     }

//     // SetMinigameInProgress | 0x3ED135AD
//     static Any SET_MINIGAME_IN_PROGRESS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3ED135AD, set);
//     }

//     // SetMissionFlag | 0x4FE923DC
//     static Any SET_MISSION_FLAG(bool isMission)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FE923DC, isMission);
//     }

//     // SetMissionPassedCash | 0x60DC6E25
//     static Any SET_MISSION_PASSED_CASH(bool add, int32_t cash, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60DC6E25, add, cash, a3);
//     }

//     // SetMissionRespectTotal | 0x3FA46EB8
//     static Any SET_MISSION_RESPECT_TOTAL(float respect)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FA46EB8, respect);
//     }

//     // SetMissionTrainCoordinates | 0x2A3F654A
//     static Any SET_MISSION_TRAIN_COORDINATES(Vehicle train, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A3F654A, train, x, y, z);
//     }

//     // SetMovieTime | 0x37871A37
//     static Any SET_MOVIE_TIME(float time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37871A37, time);
//     }

//     // SetMovieVolume | 0x32486214
//     static Any SET_MOVIE_VOLUME(float volume)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32486214, volume);
//     }

//     // SetMsgForLoadingScreen | 0x4E4C2F92
//     static Any SET_MSG_FOR_LOADING_SCREEN(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E4C2F92, a1);
//     }

//     // SetNeedsToBeHotwired | 0x40A708A6
//     static Any SET_NEEDS_TO_BE_HOTWIRED(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40A708A6, veh, set);
//     }

//     // SetNmAnimPose | 0x50311928
//     static Any SET_NM_ANIM_POSE(Ped ped, char *AnimName0, char *AnimName1, float pose)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50311928, ped, AnimName0, AnimName1, pose);
//     }

//     // SetNmMessageBool | 0x202F384E
//     static Any SET_NM_MESSAGE_BOOL(int32_t id, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x202F384E, id, value);
//     }

//     // SetNmMessageFloat | 0x6CE00370
//     static Any SET_NM_MESSAGE_FLOAT(int32_t id, float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CE00370, id, value);
//     }

//     // SetNmMessageInstanceIndex | 0x48543AED
//     static Any SET_NM_MESSAGE_INSTANCE_INDEX(int32_t id, Ped ped, Car car, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48543AED, id, ped, car, obj);
//     }

//     // SetNmMessageInt | 0x49105005
//     static Any SET_NM_MESSAGE_INT(int32_t id, int32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49105005, id, value);
//     }

//     // SetNmMessageString | 0x3F296F78
//     static Any SET_NM_MESSAGE_STRING(int32_t id, char *string)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F296F78, id, string);
//     }

//     // SetNmMessageVec3 | 0x6E8F7FA4
//     static Any SET_NM_MESSAGE_VEC3(int32_t id, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E8F7FA4, id, x, y, z);
//     }

//     // SetNoResprays | 0x418D0889
//     static Any SET_NO_RESPRAYS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x418D0889, set);
//     }

//     // SetOnlineLan | 0x7E113020
//     static Any SET_ONLINE_LAN(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E113020, a1);
//     }

//     // SetOnlineScore | 0x6B9C7392
//     static Any SET_ONLINE_SCORE(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B9C7392, a1, a2);
//     }

//     // SetPetrolTankHealth | 0x17E2319C
//     static Any SET_PETROL_TANK_HEALTH(Vehicle vehicle, float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17E2319C, vehicle, value);
//     }

//     // SetPetrolTankWeakpoint | 0x667517AB
//     static Any SET_PETROL_TANK_WEAKPOINT(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x667517AB, car, set);
//     }

//     // SetRadarAsInteriorThisFrame | 0x5C3F7E39
//     static Any SET_RADAR_AS_INTERIOR_THIS_FRAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C3F7E39);
//     }

//     // SetRadarScale | 0x75ED39CF
//     static Any SET_RADAR_SCALE(float scale)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75ED39CF, scale);
//     }

//     // SetRadarZoom | 0x35E37826
//     static Any SET_RADAR_ZOOM(float zoom)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x35E37826, zoom);
//     }

//     // SetRailtrackResistanceMult | 0x3D7B10E7
//     static Any SET_RAILTRACK_RESISTANCE_MULT(float resistance)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D7B10E7, resistance);
//     }

//     // SetRandomSeed | 0x1BA8350B
//     static Any SET_RANDOM_SEED(int32_t seed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BA8350B, seed);
//     }

//     // SetRecordingToPointNearestToCoors | 0x7B732460
//     static Any SET_RECORDING_TO_POINT_NEAREST_TO_COORS(Car cat, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B732460, cat, x, y, z);
//     }

//     // SetRichPresence | 0x73AB2028
//     static Any SET_RICH_PRESENCE(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73AB2028, a1, a2, a3, a4, a5);
//     }

//     // SetRichPresenceTemplatefilter | 0x6B434D0D
//     static Any SET_RICH_PRESENCE_TEMPLATEFILTER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B434D0D);
//     }

//     // SetRichPresenceTemplatelobby | 0x77D72045
//     static Any SET_RICH_PRESENCE_TEMPLATELOBBY(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x77D72045, a1);
//     }

//     // SetRichPresenceTemplatemp1 | 0x6C236A54
//     static Any SET_RICH_PRESENCE_TEMPLATEMP1(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C236A54, a1, a2, a3, a4);
//     }

//     // SetRichPresenceTemplatemp2 | 0x5AFA67D7
//     static Any SET_RICH_PRESENCE_TEMPLATEMP2(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AFA67D7, a1);
//     }

//     // SetRichPresenceTemplatemp3 | 0x612062DB
//     static Any SET_RICH_PRESENCE_TEMPLATEMP3(int a1, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x612062DB, a1, a2);
//     }

//     // SetRichPresenceTemplatemp4 | 0x2BF8368E
//     static Any SET_RICH_PRESENCE_TEMPLATEMP4(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BF8368E, a1, a2);
//     }

//     // SetRichPresenceTemplatemp5 | 0x314F6DD3
//     static Any SET_RICH_PRESENCE_TEMPLATEMP5(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x314F6DD3, a1, a2, a3);
//     }

//     // SetRichPresenceTemplateparty | 0x422055C7
//     static Any SET_RICH_PRESENCE_TEMPLATEPARTY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x422055C7);
//     }

//     // SetRocketLauncherFreebieInHeli | 0x77A97169
//     static Any SET_ROCKET_LAUNCHER_FREEBIE_IN_HELI(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x77A97169, set);
//     }

//     // SetRomansMood | 0x126F1175
//     static Any SET_ROMANS_MOOD(int32_t moood)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x126F1175, moood);
//     }

//     // SetRotOrder | 0x662E4376
//     static Any SET_ROT_ORDER(int32_t order)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x662E4376, order);
//     }

//     // SetRoute | 0x7B8D68E7
//     static Any SET_ROUTE(Blip blip, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B8D68E7, blip, value);
//     }

//     // SetScreenFade | 0x188E0FAC
//     static Any SET_SCREEN_FADE(int32_t viewportid, int a2, int a3, bool a4, int32_t r, int32_t g, int32_t b, int32_t a, int a9, float a10, float a11)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x188E0FAC, viewportid, a2, a3, a4, r, g, b, a, a9, a10, a11);
//     }

//     // SetSenseRange | 0x44D56F66
//     static Any SET_SENSE_RANGE(Ped ped, float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44D56F66, ped, value);
//     }

//     // SetSequenceToRepeat | 0x22E91F1F
//     static Any SET_SEQUENCE_TO_REPEAT(int32_t seq, int32_t repeat)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22E91F1F, seq, repeat);
//     }

//     // SetServerId | 0x575136AC
//     static Any SET_SERVER_ID(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x575136AC, a1);
//     }

//     // SetSirenWithNoDriver | 0x47FD2517
//     static Any SET_SIREN_WITH_NO_DRIVER(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47FD2517, car, set);
//     }

//     // SetSleepModeActive | 0x1C5552E9
//     static Any SET_SLEEP_MODE_ACTIVE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C5552E9, set);
//     }

//     // SetSniperZoomFactor | 0x42690F6B
//     static Any SET_SNIPER_ZOOM_FACTOR(float factor)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42690F6B, factor);
//     }

//     // SetSpriteHdrMultiplier | 0x523F11FD
//     static Any SET_SPRITE_HDR_MULTIPLIER(float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x523F11FD, multiplier);
//     }

//     // SetSpritesDrawBeforeFade | 0x615959BA
//     static Any SET_SPRITES_DRAW_BEFORE_FADE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x615959BA, set);
//     }

//     // SetStatFrontendAlwaysVisible | 0x656F1A7A
//     static Any SET_STAT_FRONTEND_ALWAYS_VISIBLE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x656F1A7A, set);
//     }

//     // SetStatFrontendDisplayType | 0x10436A86
//     static Any SET_STAT_FRONTEND_DISPLAY_TYPE(int32_t stat, int32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10436A86, stat, type);
//     }

//     // SetStatFrontendNeverVisible | 0x3A6B0308
//     static Any SET_STAT_FRONTEND_NEVER_VISIBLE(int32_t stat)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A6B0308, stat);
//     }

//     // SetStatFrontendVisibility | 0x45D23711
//     static Any SET_STAT_FRONTEND_VISIBILITY(int32_t stat, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45D23711, stat, set);
//     }

//     // SetStatFrontendVisibleAfterIncremented | 0x12D67ADA
//     static Any SET_STAT_FRONTEND_VISIBLE_AFTER_INCREMENTED(int32_t stat)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12D67ADA, stat);
//     }

//     // SetStateOfClosestDoorOfType | 0x10974B70
//     static Any SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uint32_t model, float x, float y, float z, int32_t state, float a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10974B70, model, x, y, z, state, a6);
//     }

//     // SetStreamParams | 0x16CB4F86
//     static Any SET_STREAM_PARAMS(float rolloff, int32_t UnkTime)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x16CB4F86, rolloff, UnkTime);
//     }

//     // SetSuppressHeadlightSwitch | 0x43EF56EE
//     static Any SET_SUPPRESS_HEADLIGHT_SWITCH(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43EF56EE, set);
//     }

//     // SetSwimSpeed | 0x32B4293B
//     static Any SET_SWIM_SPEED(Ped ped, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32B4293B, ped, speed);
//     }

//     // SetTaxiGarageRadioState | 0x299C5EBC
//     static Any SET_TAXI_GARAGE_RADIO_STATE(bool radiostate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x299C5EBC, radiostate);
//     }

//     // SetTaxiLights | 0x460837F9
//     static Any SET_TAXI_LIGHTS(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x460837F9, car, set);
//     }

//     // SetTeamColour | 0x22780707
//     static Any SET_TEAM_COLOUR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22780707);
//     }

//     // SetTextBackground | 0x768F5140
//     static Any SET_TEXT_BACKGROUND(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x768F5140, value);
//     }

//     // SetTextCentre | 0x204A6AA4
//     static Any SET_TEXT_CENTRE(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x204A6AA4, value);
//     }

//     // SetTextColour | 0x19C967B5
//     static Any SET_TEXT_COLOUR(uint32_t r, uint32_t g, uint32_t b, uint32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19C967B5, r, g, b, a);
//     }

//     // SetTextDrawBeforeFade | 0x6CFD0610
//     static Any SET_TEXT_DRAW_BEFORE_FADE(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CFD0610, value);
//     }

//     // SetTextDropshadow | 0x58F5023F
//     static Any SET_TEXT_DROPSHADOW(bool displayShadow, uint32_t r, uint32_t g, uint32_t b, uint32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58F5023F, displayShadow, r, g, b, a);
//     }

//     // SetTextEdge | 0x2D7A725D
//     static Any SET_TEXT_EDGE(bool displayEdge, uint32_t r, uint32_t g, uint32_t b, uint32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D7A725D, displayEdge, r, g, b, a);
//     }

//     // SetTextFont | 0x75363BB5
//     static Any SET_TEXT_FONT(uint32_t font)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75363BB5, font);
//     }

//     // SetTextInputActive | 0x2A28684C
//     static Any SET_TEXT_INPUT_ACTIVE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A28684C, set);
//     }

//     // SetTextLineDisplay | 0x1F6A54B6
//     static Any SET_TEXT_LINE_DISPLAY(uint32_t unk1, uint32_t unk2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F6A54B6, unk1, unk2);
//     }

//     // SetTextLineHeightMult | 0x5BF53817
//     static Any SET_TEXT_LINE_HEIGHT_MULT(float lineHeight)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BF53817, lineHeight);
//     }

//     // SetTextProportional | 0x15585A65
//     static Any SET_TEXT_PROPORTIONAL(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15585A65, value);
//     }

//     // SetTextRenderId | 0x2B1B0290
//     static Any SET_TEXT_RENDER_ID(uint32_t renderId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B1B0290, renderId);
//     }

//     // SetTextRightJustify | 0x748B78B6
//     static Any SET_TEXT_RIGHT_JUSTIFY(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x748B78B6, value);
//     }

//     // SetTextToUseTextFileColours | 0x52CE650B
//     static Any SET_TEXT_TO_USE_TEXT_FILE_COLOURS(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52CE650B, value);
//     }

//     // SetTextWrap | 0x19D006EB
//     static Any SET_TEXT_WRAP(float unk1, float unk2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19D006EB, unk1, unk2);
//     }

//     // SetTimeCycleFarClipDisabled | 0x13C75E16
//     static Any SET_TIME_CYCLE_FAR_CLIP_DISABLED(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13C75E16, set);
//     }

//     // SetTimeOfDay | 0x52100540
//     static Any SET_TIME_OF_DAY(uint32_t hour, uint32_t minute)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52100540, hour, minute);
//     }

//     // SetTimeOneDayBack | 0x18136217
//     static Any SET_TIME_ONE_DAY_BACK()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18136217);
//     }

//     // SetTimeOneDayForward | 0x79CF27AC
//     static Any SET_TIME_ONE_DAY_FORWARD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79CF27AC);
//     }

//     // SetTimeScale | 0x24D467CC
//     static Any SET_TIME_SCALE(float scale)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24D467CC, scale);
//     }

//     // SetTimecycleModifier | 0x3C997E4C
//     static Any SET_TIMECYCLE_MODIFIER(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C997E4C, name);
//     }

//     // SetTimerBeepCountdownTime | 0x66B93E8C
//     static Any SET_TIMER_BEEP_COUNTDOWN_TIME(int32_t timerid, int32_t beeptime)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66B93E8C, timerid, beeptime);
//     }

//     // SetTrainForcedToSlowDown | 0x475267B0
//     static Any SET_TRAIN_FORCED_TO_SLOW_DOWN(Vehicle train, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x475267B0, train, set);
//     }

//     // SetTrainSpeed | 0x3F4950AC
//     static Any SET_TRAIN_SPEED(Vehicle train, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F4950AC, train, speed);
//     }

//     // SetTrainStopsForStations | 0x5D154995
//     static Any SET_TRAIN_STOPS_FOR_STATIONS(Vehicle train, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D154995, train, set);
//     }

//     // SetUpTripSkip | 0x27B724F1
//     static Any SET_UP_TRIP_SKIP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27B724F1);
//     }

//     // SetUpTripSkipAfterMission | 0x6C3D04C3
//     static Any SET_UP_TRIP_SKIP_AFTER_MISSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C3D04C3);
//     }

//     // SetUseHighdof | 0x4A1D15D5
//     static Any SET_USE_HIGHDOF(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A1D15D5, set);
//     }

//     // SetUseLegIk | 0x4F705478
//     static Any SET_USE_LEG_IK(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F705478, player, set);
//     }

//     // SetUsePoolGamePhysicsSettings | 0x5C162D0D
//     static Any SET_USE_POOL_GAME_PHYSICS_SETTINGS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C162D0D, set);
//     }

//     // SetVariableOnSound | 0x39200B83
//     static Any SET_VARIABLE_ON_SOUND(uint32_t sound, char *varname, float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39200B83, sound, varname, value);
//     }

//     // SetVehAlarmDuration | 0x5FFE33EC
//     static Any SET_VEH_ALARM_DURATION(Vehicle veh, int32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FFE33EC, veh, duration);
//     }

//     // SetVehHasStrongAxles | 0x63DE7A05
//     static Any SET_VEH_HAS_STRONG_AXLES(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63DE7A05, veh, set);
//     }

//     // SetVehHazardlights | 0x24B42ED2
//     static Any SET_VEH_HAZARDLIGHTS(Vehicle vehicle, bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24B42ED2, vehicle, on);
//     }

//     // SetVehIndicatorlights | 0x71D72486
//     static Any SET_VEH_INDICATORLIGHTS(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71D72486, veh, set);
//     }

//     // SetVehInteriorlight | 0x49EA22C8
//     static Any SET_VEH_INTERIORLIGHT(Vehicle veh, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49EA22C8, veh, set);
//     }

//     // SetVisibilityOfNearbyEntityWithSpecialAttribute | 0x6DDD201D
//     static Any SET_VISIBILITY_OF_NEARBY_ENTITY_WITH_SPECIAL_ATTRIBUTE(int32_t attribute, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6DDD201D, attribute, set);
//     }

//     // SetWantedMultiplier | 0x51E14C1B
//     static Any SET_WANTED_MULTIPLIER(float multiplier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51E14C1B, multiplier);
//     }

//     // SetWebPageLinkActive | 0x5F5E7F39
//     static Any SET_WEB_PAGE_LINK_ACTIVE(int32_t htmlviewport, int32_t linkid, bool active)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F5E7F39, htmlviewport, linkid, active);
//     }

//     // SetWebPageScroll | 0x55DE40EE
//     static Any SET_WEB_PAGE_SCROLL(int32_t htmlviewport, float scroll)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55DE40EE, htmlviewport, scroll);
//     }

//     // SetWidescreenFormat | 0x7BDE2CAF
//     static Any SET_WIDESCREEN_FORMAT(int32_t wideformatid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BDE2CAF, wideformatid);
//     }

//     // SetZoneNoCops | 0x64F37F05
//     static Any SET_ZONE_NO_COPS(char *name, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64F37F05, name, set);
//     }

//     // SetZonePopulationType | 0x70582D53
//     static Any SET_ZONE_POPULATION_TYPE(char *zone, int32_t poptype)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70582D53, zone, poptype);
//     }

//     // SetZoneScumminess | 0x5E5E4252
//     static Any SET_ZONE_SCUMMINESS(char *zone, int32_t scumminess)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E5E4252, zone, scumminess);
//     }

//     // Settimera | 0x32501B1E
//     static Any SETTIMERA(uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32501B1E, value);
//     }

//     // Settimerb | 0x3B4C2E2E
//     static Any SETTIMERB(uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B4C2E2E, value);
//     }

//     // Settimerc | 0x499852DB
//     static Any SETTIMERC(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x499852DB, a1);
//     }

//     // ShakePad | 0x66CC16BD
//     static Any SHAKE_PAD(int a1, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66CC16BD, a1, a2, a3);
//     }

//     // ShakePadInCutscene | 0x2D040DA9
//     static Any SHAKE_PAD_IN_CUTSCENE(int a1, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D040DA9, a1, a2, a3);
//     }

//     // ShiftLeft | 0x102A0A6C
//     static Any SHIFT_LEFT(int32_t val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x102A0A6C, val);
//     }

//     // ShiftRight | 0x64DD173C
//     static Any SHIFT_RIGHT(int32_t val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64DD173C, val);
//     }

//     // ShowSigninUi | 0x72397ECD
//     static Any SHOW_SIGNIN_UI()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72397ECD);
//     }

//     // ShowUpdateStats | 0x59486829
//     static Any SHOW_UPDATE_STATS(bool show)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59486829, show);
//     }

//     // SimulateUpdateLoadScene | 0x246D47CE
//     static Any SIMULATE_UPDATE_LOAD_SCENE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x246D47CE);
//     }

//     // Sin | 0x1EC10CE1
//     static Any SIN(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1EC10CE1, value);
//     }

//     // SkipRadioForward | 0x12A86E89
//     static Any SKIP_RADIO_FORWARD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12A86E89);
//     }

//     // SkipToNextAllowedStation | 0x653B5374
//     static Any SKIP_TO_NEXT_ALLOWED_STATION(Vehicle train)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x653B5374, train);
//     }

//     // SpotCheck5 | 0x6B4D6FC6
//     static Any SPOT_CHECK5()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B4D6FC6);
//     }

//     // SpotCheck6 | 0x52277FB2
//     static Any SPOT_CHECK6()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52277FB2);
//     }

//     // SpotCheck7 | 0x46CC31B4
//     static Any SPOT_CHECK7()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46CC31B4);
//     }

//     // SpotCheck8 | 0x7B1B14BD
//     static Any SPOT_CHECK8()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B1B14BD);
//     }

//     // Sqrt | 0x2C297C5D
//     static Any SQRT(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C297C5D, value);
//     }

//     // StartCredits | 0x7F3222FD
//     static Any START_CREDITS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F3222FD);
//     }

//     // StartCutscene | 0x5F752F19
//     static Any START_CUTSCENE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F752F19);
//     }

//     // StartCutsceneNow | 0x53591DD7
//     static Any START_CUTSCENE_NOW(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x53591DD7, name);
//     }

//     // StartEndCreditsMusic | 0x587E55D3
//     static Any START_END_CREDITS_MUSIC()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x587E55D3);
//     }

//     // StartFiringAmnesty | 0x5DB83661
//     static Any START_FIRING_AMNESTY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DB83661);
//     }

//     // StartGpsRaceTrack | 0x422C1818
//     static Any START_GPS_RACE_TRACK(int32_t trackid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x422C1818, trackid);
//     }

//     // StartLoadScene | 0x54320B58
//     static Any START_LOAD_SCENE(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x54320B58, x, y, z);
//     }

//     // StartProfileTimer | 0x78EE47F9
//     static Any START_PROFILE_TIMER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78EE47F9);
//     }

//     // StartPtfx | 0x3A774777
//     static Any START_PTFX(char *name, float x, float y, float z, float a5, float a6, float a7, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A774777, name, x, y, z, a5, a6, a7, flags);
//     }

//     // StartPtfxOnObjBone | 0x60980323
//     static Any START_PTFX_ON_OBJ_BONE(char *name, Object obj, float x, float y, float z, float a6, float a7, float a8, int32_t objbone, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60980323, name, obj, x, y, z, a6, a7, a8, objbone, flags);
//     }

//     // StartPtfxOnVeh | 0x5C4B1A8A
//     static Any START_PTFX_ON_VEH(char *name, Vehicle veh, float x, float y, float z, float a6, float a7, float a8, float a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C4B1A8A, name, veh, x, y, z, a6, a7, a8, a9);
//     }

//     // StartStreamingRequestList | 0x7858750E
//     static Any START_STREAMING_REQUEST_LIST(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7858750E, name);
//     }

//     // StopCredits | 0x4F0F2AA8
//     static Any STOP_CREDITS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F0F2AA8);
//     }

//     // StopCutscene | 0x50FF1428
//     static Any STOP_CUTSCENE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50FF1428);
//     }

//     // StopEndCreditsMusic | 0x47E93CB8
//     static Any STOP_END_CREDITS_MUSIC()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47E93CB8);
//     }

//     // StopKillTracking | 0x28CA0AFE
//     static Any STOP_KILL_TRACKING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28CA0AFE);
//     }

//     // StopMovie | 0x2E6F4C82
//     static Any STOP_MOVIE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E6F4C82);
//     }

//     // StopPreviewRingtone | 0x5B1D57EF
//     static Any STOP_PREVIEW_RINGTONE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B1D57EF);
//     }

//     // StopProfileTimer | 0x1C5C19E8
//     static Any STOP_PROFILE_TIMER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C5C19E8);
//     }

//     // StopStream | 0x66915CE9
//     static Any STOP_STREAM()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66915CE9);
//     }

//     // StoreScore | 0x1E203014
//     static Any STORE_SCORE(Player playerIndex, uint32_t *value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E203014, playerIndex, value);
//     }

//     // StoreWantedLevel | 0x12AA6D71
//     static Any STORE_WANTED_LEVEL(Player playerIndex, uint32_t *value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12AA6D71, playerIndex, value);
//     }

//     // StringDifference | 0x25204F8B
//     static Any STRING_DIFFERENCE(char *str0, char *str1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25204F8B, str0, str1);
//     }

//     // StringString | 0x6C0E191F
//     static Any STRING_STRING(char *a1, char *a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C0E191F, a1, a2);
//     }

//     // StringToInt | 0x5C3248B5
//     static Any STRING_TO_INT(char *str, int32_t *intval)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C3248B5, str, intval);
//     }

//     // SuppressFadeInAfterDeathArrest | 0x3FB83379
//     static Any SUPPRESS_FADE_IN_AFTER_DEATH_ARREST(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FB83379, set);
//     }

//     // SwapNearestBuildingModel | 0x5E077484
//     static Any SWAP_NEAREST_BUILDING_MODEL(float x, float y, float z, float radius, uint32_t modelfrom, uint32_t modelto)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E077484, x, y, z, radius, modelfrom, modelto);
//     }

//     // SwitchAmbientPlanes | 0x4E637988
//     static Any SWITCH_AMBIENT_PLANES(bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E637988, on);
//     }

//     // SwitchMadDrivers | 0x34CB6291
//     static Any SWITCH_MAD_DRIVERS(bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34CB6291, on);
//     }

//     // SwitchOffWaypoint | 0x1B5B4ED9
//     static Any SWITCH_OFF_WAYPOINT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B5B4ED9);
//     }

//     // SwitchRandomBoats | 0x7FC65855
//     static Any SWITCH_RANDOM_BOATS(bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FC65855, on);
//     }

//     // SwitchRoadsBackToOriginal | 0x6251618F
//     static Any SWITCH_ROADS_BACK_TO_ORIGINAL(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6251618F, x0, y0, z0, x1, y1, z1);
//     }

//     // SwitchRoadsOff | 0x4C3C1F3C
//     static Any SWITCH_ROADS_OFF(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C3C1F3C, x0, y0, z0, x1, y1, z1);
//     }

//     // SwitchRoadsOn | 0x56553F38
//     static Any SWITCH_ROADS_ON(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56553F38, x0, y0, z0, x1, y1, z1);
//     }

//     // SwitchStreaming | 0x6E397D96
//     static Any SWITCH_STREAMING(bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E397D96, on);
//     }

//     // SynchAmbientPlanes | 0x5AFD2049
//     static Any SYNCH_AMBIENT_PLANES(int a1, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AFD2049, a1, a2);
//     }

//     // TakeScreenShot | 0x76BB510A
//     static Any TAKE_SCREEN_SHOT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76BB510A);
//     }

//     // Tan | 0x24CC682B
//     static Any TAN(float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24CC682B, value);
//     }

//     // TaskAchieveHeading | 0x6D6A1261
//     static Any TASK_ACHIEVE_HEADING(Ped ped, float heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D6A1261, ped, heading);
//     }

//     // TaskClimb | 0x4678769C
//     static Any TASK_CLIMB(Ped ped, bool a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4678769C, ped, a2);
//     }

//     // TaskCombat | 0x1F157FD3
//     static Any TASK_COMBAT(Ped ped, Ped target)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F157FD3, ped, target);
//     }

//     // TaskCombatRoll | 0x131A0C84
//     static Any TASK_COMBAT_ROLL(Ped ped, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x131A0C84, ped, a2);
//     }

//     // TaskCombatTimed | 0x56F04A05
//     static Any TASK_COMBAT_TIMED(Ped ped, Char target, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56F04A05, ped, target, duration);
//     }

//     // TaskCower | 0x29103E08
//     static Any TASK_COWER(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29103E08, ped);
//     }

//     // TaskDead | 0x3E1051E0
//     static Any TASK_DEAD(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E1051E0, ped);
//     }

//     // TaskDie | 0x7EED364B
//     static Any TASK_DIE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EED364B, ped);
//     }

//     // TaskDriveBy | 0x3FB22EE2
//     static Any TASK_DRIVE_BY(Ped ped, Ped pednext, int a3, float x, float y, float z, float angle, int a8, bool a9, int a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FB22EE2, ped, pednext, a3, x, y, z, angle, a8, a9, a10);
//     }

//     // TaskDrivePointRoute | 0x2C18736E
//     static Any TASK_DRIVE_POINT_ROUTE(Ped ped, int32_t point, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C18736E, ped, point, radius);
//     }

//     // TaskDrivePointRouteAdvanced | 0x7A0A1063
//     static Any TASK_DRIVE_POINT_ROUTE_ADVANCED(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A0A1063, ped, a2, a3, a4, a5, a6);
//     }

//     // TaskDuck | 0x72BF79F1
//     static Any TASK_DUCK(Ped ped, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72BF79F1, ped, a2);
//     }

//     // TaskExtendRoute | 0x75353EA4
//     static Any TASK_EXTEND_ROUTE(Ped ped, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75353EA4, ped, a2, a3);
//     }

//     // TaskFlushRoute | 0x760E0A0F
//     static Any TASK_FLUSH_ROUTE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x760E0A0F);
//     }

//     // TaskFollowFootsteps | 0x45DF7CCA
//     static Any TASK_FOLLOW_FOOTSTEPS(Ped ped, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45DF7CCA, ped, a2);
//     }

//     // TaskFollowNavMeshAndSlideToCoord | 0x36537CE1
//     static Any TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD(Ped ped, float x, float y, float z, int a5, int a6, float a7, float angle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36537CE1, ped, x, y, z, a5, a6, a7, angle);
//     }

//     // TaskFollowNavMeshAndSlideToCoordHdgRate | 0x38824BFE
//     static Any TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, int a5, int a6, float a7, float angle, float rate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38824BFE, ped, x, y, z, a5, a6, a7, angle, rate);
//     }

//     // TaskFollowNavMeshToCoord | 0x1B31390E
//     static Any TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, uint32_t unknown0_2, uint32_t unknown1_minus1, float unknown2_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B31390E, ped, x, y, z, unknown0_2, unknown1_minus1, unknown2_1);
//     }

//     // TaskFollowNavMeshToCoordNoStop | 0x1BF67441
//     static Any TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP(Ped ped, float x, float y, float z, uint32_t unknown0_2, uint32_t unknown1_minus1, float unknown2_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BF67441, ped, x, y, z, unknown0_2, unknown1_minus1, unknown2_1);
//     }

//     // TaskFollowPatrolRoute | 0x72F02B67
//     static Any TASK_FOLLOW_PATROL_ROUTE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72F02B67);
//     }

//     // TaskFollowPointRoute | 0x1C430F41
//     static Any TASK_FOLLOW_POINT_ROUTE(Ped ped, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C430F41, ped, a2, a3);
//     }

//     // TaskGetOffBoat | 0x6C63251D
//     static Any TASK_GET_OFF_BOAT(Ped ped, int32_t timeout)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C63251D, ped, timeout);
//     }

//     // TaskGoStraightToCoord | 0x19591255
//     static Any TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, uint32_t unknown2, uint32_t unknown45000)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19591255, ped, x, y, z, unknown2, unknown45000);
//     }

//     // TaskGoToCoordWhileAiming | 0x2A2959DA
//     static Any TASK_GO_TO_COORD_WHILE_AIMING(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10, Any a11, Any a12)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A2959DA, ped, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
//     }

//     // TaskGoToCoordWhileShooting | 0x10CB1413
//     static Any TASK_GO_TO_COORD_WHILE_SHOOTING(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10CB1413, ped, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // TaskGuardCurrentPosition | 0x3E6137CB
//     static Any TASK_GUARD_CURRENT_POSITION(Ped ped, float unknown0_15, float unknown1_10, uint32_t unknown2_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E6137CB, ped, unknown0_15, unknown1_10, unknown2_1);
//     }

//     // TaskHandsUp | 0x68232D31
//     static Any TASK_HANDS_UP(Ped ped, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68232D31, ped, duration);
//     }

//     // TaskJetpack | 0x690233B1
//     static Any TASK_JETPACK()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x690233B1);
//     }

//     // TaskJump | 0x5E97106E
//     static Any TASK_JUMP(Ped ped, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E97106E, ped, flag);
//     }

//     // TaskLeaveGroup | 0x1905109F
//     static Any TASK_LEAVE_GROUP(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1905109F, ped);
//     }

//     // TaskLookAtCoord | 0x26E27605
//     static Any TASK_LOOK_AT_COORD(Ped ped, float x, float y, float z, uint32_t duration, uint32_t unknown_0)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26E27605, ped, x, y, z, duration, unknown_0);
//     }

//     // TaskOpenDriverDoor | 0x1FA41244
//     static Any TASK_OPEN_DRIVER_DOOR(Ped ped, Vehicle vehicle, uint32_t unknown0)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1FA41244, ped, vehicle, unknown0);
//     }

//     // TaskOpenPassengerDoor | 0x58F814C4
//     static Any TASK_OPEN_PASSENGER_DOOR(Ped ped, Vehicle vehicle, uint32_t seatIndex, uint32_t unknown0)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58F814C4, ped, vehicle, seatIndex, unknown0);
//     }

//     // TaskPause | 0x5E702E2C
//     static Any TASK_PAUSE(Ped ped, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E702E2C, ped, duration);
//     }

//     // TaskPerformSequence | 0x36A33C21
//     static Any TASK_PERFORM_SEQUENCE(Ped ped, TaskSequence taskSequence)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36A33C21, ped, taskSequence);
//     }

//     // TaskPerformSequenceFromProgress | 0x62701AF8
//     static Any TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62701AF8, ped, a2, a3, a4);
//     }

//     // TaskPerformSequenceLocally | 0x326B576F
//     static Any TASK_PERFORM_SEQUENCE_LOCALLY(Ped ped, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x326B576F, ped, a2);
//     }

//     // TaskPlayAnim | 0x28EE78D8
//     static Any TASK_PLAY_ANIM(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28EE78D8, ped, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // TaskPlayAnimFacial | 0x71F001D2
//     static Any TASK_PLAY_ANIM_FACIAL(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71F001D2, ped, a2, a3, a4, a5, a6, a7);
//     }

//     // TaskPlayAnimNonInterruptable | 0x52202E76
//     static Any TASK_PLAY_ANIM_NON_INTERRUPTABLE(Ped ped, char *animname0, char *animname1, float a4, int a5, int a6, int a7, int a8, int a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52202E76, ped, animname0, animname1, a4, a5, a6, a7, a8, a9);
//     }

//     // TaskPlayAnimOnClone | 0x10FB7B5F
//     static Any TASK_PLAY_ANIM_ON_CLONE(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10FB7B5F, ped, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // TaskPlayAnimSecondary | 0x273C2D35
//     static Any TASK_PLAY_ANIM_SECONDARY(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x273C2D35, ped, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // TaskPlayAnimSecondaryNoInterrupt | 0x56524B94
//     static Any TASK_PLAY_ANIM_SECONDARY_NO_INTERRUPT(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56524B94, ped, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // TaskPlayAnimSecondaryUpperBody | 0x34574B2A
//     static Any TASK_PLAY_ANIM_SECONDARY_UPPER_BODY(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34574B2A, ped, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // TaskPlayAnimWithAdvancedFlags | 0x30BA2716
//     static Any TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10, Any a11, Any a12)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30BA2716, ped, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
//     }

//     // TaskPlayAnimWithFlags | 0x75533E74
//     static Any TASK_PLAY_ANIM_WITH_FLAGS(Ped ped, char *animName, char *animSet, float unknown0_8, uint32_t unknown1_0, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75533E74, ped, animName, animSet, unknown0_8, unknown1_0, flags);
//     }

//     // TaskPlayAnimWithFlagsAndStartPhase | 0x1A122D03
//     static Any TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A122D03, ped, a2, a3, a4, a5, a6, a7);
//     }

//     // TaskSay | 0x4C624B9B
//     static Any TASK_SAY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C624B9B);
//     }

//     // TaskSeekCoverFromPos | 0x2BDF7B7E
//     static Any TASK_SEEK_COVER_FROM_POS(Ped ped, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BDF7B7E, ped, a2, a3, a4, a5);
//     }

//     // TaskSeekCoverToCoords | 0x142F31EF
//     static Any TASK_SEEK_COVER_TO_COORDS(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x142F31EF, ped, a2, a3, a4, a5, a6, a7, a8);
//     }

//     // TaskSeekCoverToCoverPoint | 0x143358D3
//     static Any TASK_SEEK_COVER_TO_COVER_POINT(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x143358D3, ped, a2, a3, a4, a5, a6);
//     }

//     // TaskSetCombatDecisionMaker | 0x499C0C01
//     static Any TASK_SET_COMBAT_DECISION_MAKER(Ped ped, DecisionMaker dm)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x499C0C01, ped, dm);
//     }

//     // TaskSetIgnoreWeaponRangeFlag | 0x6CE277E7
//     static Any TASK_SET_IGNORE_WEAPON_RANGE_FLAG(Ped ped, bool ignore)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CE277E7, ped, ignore);
//     }

//     // TaskShimmy | 0x53230256
//     static Any TASK_SHIMMY(Ped ped, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x53230256, ped, a2);
//     }

//     // TaskShimmyClimbUp | 0x36AD6480
//     static Any TASK_SHIMMY_CLIMB_UP(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36AD6480, ped);
//     }

//     // TaskShimmyInDirection | 0x7B1A5333
//     static Any TASK_SHIMMY_IN_DIRECTION(Ped ped, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B1A5333, ped, a2);
//     }

//     // TaskShimmyLetGo | 0x1AA32729
//     static Any TASK_SHIMMY_LET_GO(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1AA32729, ped);
//     }

//     // TaskShootAtCoord | 0x705231A9
//     static Any TASK_SHOOT_AT_COORD(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x705231A9, ped, a2, a3, a4, a5, a6);
//     }

//     // TaskSitDown | 0x264C5448
//     static Any TASK_SIT_DOWN(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x264C5448, ped, a2, a3, a4);
//     }

//     // TaskSitDownInstantly | 0x6CC1560F
//     static Any TASK_SIT_DOWN_INSTANTLY(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CC1560F, ped, a2, a3, a4);
//     }

//     // TaskSitDownOnSeat | 0x2CBE4DAF
//     static Any TASK_SIT_DOWN_ON_SEAT(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CBE4DAF, ped, a2, a3, a4, a5, a6, a7, a8);
//     }

//     // TaskSitDownPlayAnim | 0x6B5500A5
//     static Any TASK_SIT_DOWN_PLAY_ANIM()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B5500A5);
//     }

//     // TaskSmartFleePoint | 0x7381337A
//     static Any TASK_SMART_FLEE_POINT(Ped ped, float x, float y, float z, float unknown0_100, uint32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7381337A, ped, x, y, z, unknown0_100, duration);
//     }

//     // TaskSmartFleePointPreferringPavements | 0x3CEB6C7B
//     static Any TASK_SMART_FLEE_POINT_PREFERRING_PAVEMENTS(Ped ped, float x, float y, float z, float radius, int32_t time_prob)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CEB6C7B, ped, x, y, z, radius, time_prob);
//     }

//     // TaskSpaceShipGoToCoord | 0x2960330A
//     static Any TASK_SPACE_SHIP_GO_TO_COORD()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2960330A);
//     }

//     // TaskStandGuard | 0x59523479
//     static Any TASK_STAND_GUARD(Ped ped, float x, float y, float z, float a5, float a6, bool a7, int a8)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59523479, ped, x, y, z, a5, a6, a7, a8);
//     }

//     // TaskStandStill | 0x524C4CB5
//     static Any TASK_STAND_STILL(Ped ped, int32_t duration)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x524C4CB5, ped, duration);
//     }

//     // TaskStartScenarioInPlace | 0x261F18A3
//     static Any TASK_START_SCENARIO_IN_PLACE(Ped ped, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x261F18A3, ped, a2, a3);
//     }

//     // TaskSwapWeapon | 0x72AE63C8
//     static Any TASK_SWAP_WEAPON(Ped ped, uint32_t weapon)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72AE63C8, ped, weapon);
//     }

//     // TaskTired | 0x702041F2
//     static Any TASK_TIRED(Ped ped, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x702041F2, ped, a2);
//     }

//     // TaskToggleDuck | 0x319E3A87
//     static Any TASK_TOGGLE_DUCK(Ped ped, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x319E3A87, ped, a2);
//     }

//     // TaskUseNearestScenarioToPos | 0x743F30B3
//     static Any TASK_USE_NEAREST_SCENARIO_TO_POS(Ped ped, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x743F30B3, ped, a2, a3, a4, a5);
//     }

//     // TaskUseNearestScenarioToPosWarp | 0x47787A40
//     static Any TASK_USE_NEAREST_SCENARIO_TO_POS_WARP(Ped ped, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47787A40, ped, a2, a3, a4, a5);
//     }

//     // TaskWanderStandard | 0x43F5151F
//     static Any TASK_WANDER_STANDARD(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43F5151F, ped);
//     }

//     // TimerA | 0x75706300
//     static Any TIMER_A()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75706300);
//     }

//     // TimerB | 0x62984AB7
//     static Any TIMER_B()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62984AB7);
//     }

//     // TimerC | 0x1BF55D6F
//     static Any TIMER_C()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BF55D6F);
//     }

//     // Timestep | 0x35694DDC
//     static Any TIMESTEP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x35694DDC);
//     }

//     // ToFloat | 0x259E305F
//     static Any TO_FLOAT(uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x259E305F, value);
//     }

//     // ToggleToplevelSprite | 0x51643697
//     static Any TOGGLE_TOPLEVEL_SPRITE(bool toggle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51643697, toggle);
//     }

//     // TrainLeaveStation | 0x37890B14
//     static Any TRAIN_LEAVE_STATION(Vehicle train)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37890B14, train);
//     }

//     // TriggerLoadingMusicOnNextFade | 0x1C4B1189
//     static Any TRIGGER_LOADING_MUSIC_ON_NEXT_FADE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C4B1189);
//     }

//     // TriggerMissionCompleteAudio | 0x4BAF0213
//     static Any TRIGGER_MISSION_COMPLETE_AUDIO(int32_t id)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4BAF0213, id);
//     }

//     // TriggerPoliceReport | 0x78D01893
//     static Any TRIGGER_POLICE_REPORT(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78D01893, name);
//     }

//     // TriggerPtfx | 0x21C44026
//     static Any TRIGGER_PTFX(char *name, float x, float y, float z, float a5, float a6, float a7, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21C44026, name, x, y, z, a5, a6, a7, flags);
//     }

//     // TriggerPtfxOnObj | 0x50307F63
//     static Any TRIGGER_PTFX_ON_OBJ(char *name, Object obj, float x, float y, float z, float a6, float a7, float a8, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50307F63, name, obj, x, y, z, a6, a7, a8, flags);
//     }

//     // TriggerPtfxOnObjBone | 0x3A2A77F9
//     static Any TRIGGER_PTFX_ON_OBJ_BONE(char *name, Object obj, float x, float y, float z, float a6, float a7, float a8, int32_t objbone, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A2A77F9, name, obj, x, y, z, a6, a7, a8, objbone, flags);
//     }

//     // TriggerPtfxOnVeh | 0x3C7B6092
//     static Any TRIGGER_PTFX_ON_VEH(char *name, Vehicle veh, float x, float y, float z, float a6, float a7, float a8, float a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C7B6092, name, veh, x, y, z, a6, a7, a8, a9);
//     }

//     // TriggerVehAlarm | 0x5E5047AC
//     static Any TRIGGER_VEH_ALARM(Vehicle car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E5047AC, car);
//     }

//     // TriggerVigilanteCrime | 0x195D582E
//     static Any TRIGGER_VIGILANTE_CRIME(int32_t id, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x195D582E, id, x, y, z);
//     }

//     // TurnOffRadiohudInLobby | 0x4ED6764C
//     static Any TURN_OFF_RADIOHUD_IN_LOBBY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4ED6764C);
//     }

//     // TurnOnRadiohudInLobby | 0x331411D9
//     static Any TURN_ON_RADIOHUD_IN_LOBBY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x331411D9);
//     }

//     // UnfreezeRadioStation | 0x3E5B7E59
//     static Any UNFREEZE_RADIO_STATION(char *radiostation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E5B7E59, radiostation);
//     }

//     // UnloadTextFont | 0x3E0229EB
//     static Any UNLOAD_TEXT_FONT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E0229EB);
//     }

//     // UnlockLazlowStation | 0x7B6F4B91
//     static Any UNLOCK_LAZLOW_STATION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B6F4B91);
//     }

//     // UnlockMissionNewsStory | 0x2F0718CA
//     static Any UNLOCK_MISSION_NEWS_STORY(int32_t id)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F0718CA, id);
//     }

//     // UnlockRagdoll | 0x2F2F51E9
//     static Any UNLOCK_RAGDOLL(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F2F51E9, ped, value);
//     }

//     // UnmarkAllRoadNodesAsDontWander | 0x2BBA7BF0
//     static Any UNMARK_ALL_ROAD_NODES_AS_DONT_WANDER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BBA7BF0);
//     }

//     // UnobfuscateInt | 0x118D1AA3
//     static Any UNOBFUSCATE_INT(int32_t count, int32_t *val)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x118D1AA3, count, val);
//     }

//     // UnobfuscateIntArray | 0x6314421A
//     static Any UNOBFUSCATE_INT_ARRAY(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6314421A, a1, a2);
//     }

//     // UnobfuscateString | 0x2186777E
//     static Any UNOBFUSCATE_STRING(char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2186777E, str);
//     }

//     // UnpauseGame | 0x2A783A43
//     static Any UNPAUSE_GAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A783A43);
//     }

//     // UnpauseRadio | 0x78F7286F
//     static Any UNPAUSE_RADIO()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78F7286F);
//     }

//     // UpdateLoadScene | 0x513D68DB
//     static Any UPDATE_LOAD_SCENE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x513D68DB);
//     }

//     // UpdatePtfxOffsets | 0x45472E9D
//     static Any UPDATE_PTFX_OFFSETS(uint32_t ptfx, float x, float y, float z, float a5, float a6, float a7)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45472E9D, ptfx, x, y, z, a5, a6, a7);
//     }

//     // UpdatePtfxTint | 0x42FC2C31
//     static Any UPDATE_PTFX_TINT(uint32_t ptfx, float r, float g, float b, float a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42FC2C31, ptfx, r, g, b, a);
//     }

//     // UseDetonator | 0x29742C66
//     static Any USE_DETONATOR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29742C66);
//     }

//     // UseMask | 0x6A9B79D8
//     static Any USE_MASK(bool use)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A9B79D8, use);
//     }

//     // UsePreviousFontSettings | 0x36FC5CFB
//     static Any USE_PREVIOUS_FONT_SETTINGS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36FC5CFB);
//     }

//     // UsingStandardControls | 0x5F4571E5
//     static Any USING_STANDARD_CONTROLS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F4571E5);
//     }

//     // Vdist | 0x4674049B
//     static Any VDIST(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4674049B, x0, y0, z0, x1, y1, z1);
//     }

//     // Vdist2 | 0x69AE0805
//     static Any VDIST2(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69AE0805, x0, y0, z0, x1, y1, z1);
//     }

//     // Vmag | 0x405B02B7
//     static Any VMAG(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x405B02B7, x, y, z);
//     }

//     // Vmag2 | 0x787206F8
//     static Any VMAG2(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x787206F8, x, y, z);
//     }

//     // Wait | 0x266716AC
//     static Any WAIT(int32_t timeMS)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x266716AC, timeMS);
//     }

//     // WaitUnpaused | 0x3F0434E5
//     static Any WAIT_UNPAUSED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F0434E5);
//     }

//     // WriteLobbyPreference | 0x10431377
//     static Any WRITE_LOBBY_PREFERENCE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10431377);
//     }

// } // namespace MISC

// namespace NETWORK
// {

//     // AddAreaToNetworkRestartNodeGroupMapping | 0x52DF5310
//     static Any ADD_AREA_TO_NETWORK_RESTART_NODE_GROUP_MAPPING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52DF5310);
//     }

//     // AddGroupToNetworkRestartNodeGroupList | 0x592E0E0F
//     static Any ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x592E0E0F, a1);
//     }

//     // AddNetworkRestart | 0x6A6A12D7
//     static Any ADD_NETWORK_RESTART()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A6A12D7);
//     }

//     // AllowNetworkPopulationGroupCycling | 0x61C100F5
//     static Any ALLOW_NETWORK_POPULATION_GROUP_CYCLING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61C100F5);
//     }

//     // ClearNetworkRestartNodeGroupList | 0x1BDA1F9A
//     static Any CLEAR_NETWORK_RESTART_NODE_GROUP_LIST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BDA1F9A);
//     }

//     // DoesGameCodeWantToLeaveNetworkSession | 0x7E412AC8
//     static Any DOES_GAME_CODE_WANT_TO_LEAVE_NETWORK_SESSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E412AC8);
//     }

//     // FindNetworkRestartPoint | 0x66F445BB
//     static Any FIND_NETWORK_RESTART_POINT(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66F445BB, a1, a2, a3);
//     }

//     // GetClosestNetworkRestartNode | 0x46CD1D73
//     static Any GET_CLOSEST_NETWORK_RESTART_NODE(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46CD1D73, a1, a2, a3, a4, a5);
//     }

//     // GetCoordinatesForNetworkRestartNode | 0x2EAA3C4A
//     static Any GET_COORDINATES_FOR_NETWORK_RESTART_NODE(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2EAA3C4A, a1, a2, a3);
//     }

//     // GetDestroyerOfNetworkId | 0x11E80442
//     static Any GET_DESTROYER_OF_NETWORK_ID(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11E80442, a1, a2);
//     }

//     // GetFurthestNetworkRestartNode | 0x2FEF2477
//     static Any GET_FURTHEST_NETWORK_RESTART_NODE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FEF2477);
//     }

//     // GetGamerNetworkScore | 0x6C507EAC
//     static Any GET_GAMER_NETWORK_SCORE(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C507EAC, a1, a2, a3);
//     }

//     // GetLastTimeNetworkIdDamaged | 0x3A8D7BA4
//     static Any GET_LAST_TIME_NETWORK_ID_DAMAGED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A8D7BA4);
//     }

//     // GetNetworkJoinFail | 0x4A164056
//     static Any GET_NETWORK_JOIN_FAIL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A164056);
//     }

//     // GetNetworkRestartNodeDebug | 0x6629119D
//     static Any GET_NETWORK_RESTART_NODE_DEBUG()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6629119D);
//     }

//     // GetNetworkTimer | 0x20FD4F4E
//     static Any GET_NETWORK_TIMER(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20FD4F4E, a1);
//     }

//     // GetRandomNetworkRestartNodeOfGroup | 0x1A7C1AA7
//     static Any GET_RANDOM_NETWORK_RESTART_NODE_OF_GROUP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A7C1AA7);
//     }

//     // GetSortedNetworkRestartNode | 0x5BF71B87
//     static Any GET_SORTED_NETWORK_RESTART_NODE(Any a1, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BF71B87, a1, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // GetSortedNetworkRestartNodeExcludingGroup | 0x55AC75E2
//     static Any GET_SORTED_NETWORK_RESTART_NODE_EXCLUDING_GROUP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55AC75E2);
//     }

//     // GetSortedNetworkRestartNodeOfGroup | 0x209F734C
//     static Any GET_SORTED_NETWORK_RESTART_NODE_OF_GROUP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x209F734C);
//     }

//     // GetSortedNetworkRestartNodeUsingGroupList | 0x22463E22
//     static Any GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST(Any a1, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22463E22, a1, a2, a3, a4, a5, a6, a7, a8, a9);
//     }

//     // HasControlOfNetworkId | 0x176C2DB5
//     static Any HAS_CONTROL_OF_NETWORK_ID(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x176C2DB5, a1);
//     }

//     // HasGamerChangedNetworkModelSettings | 0x7EBB00D7
//     static Any HAS_GAMER_CHANGED_NETWORK_MODEL_SETTINGS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EBB00D7);
//     }

//     // IsDamageTrackerActiveOnNetworkId | 0x5A2F2DD1
//     static Any IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A2F2DD1, a1);
//     }

//     // IsNetworkConnected | 0x43945A83
//     static Any IS_NETWORK_CONNECTED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43945A83);
//     }

//     // IsNetworkGamePending | 0x7563071D
//     static Any IS_NETWORK_GAME_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7563071D);
//     }

//     // IsNetworkGameRunning | 0x1CF773D4
//     static Any IS_NETWORK_GAME_RUNNING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1CF773D4);
//     }

//     // IsNetworkSession | 0x6E2B38F3
//     static Any IS_NETWORK_SESSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E2B38F3);
//     }

//     // NetworkAcceptInvite | 0x4FDD00CE
//     static Any NETWORK_ACCEPT_INVITE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FDD00CE, a1);
//     }

//     // NetworkAdvertiseSession | 0x1B9E5D07
//     static Any NETWORK_ADVERTISE_SESSION(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B9E5D07, a1);
//     }

//     // NetworkAllPartyMembersPresent | 0x59C53FBA
//     static Any NETWORK_ALL_PARTY_MEMBERS_PRESENT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59C53FBA);
//     }

//     // NetworkChangeExtendedGameConfig | 0x4CFE3998
//     static Any NETWORK_CHANGE_EXTENDED_GAME_CONFIG(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4CFE3998, a1);
//     }

//     // NetworkChangeGameMode | 0x3F054F44
//     static Any NETWORK_CHANGE_GAME_MODE(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F054F44, a1, a2, a3, a4);
//     }

//     // NetworkChangeGameModePending | 0x379930F3
//     static Any NETWORK_CHANGE_GAME_MODE_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x379930F3);
//     }

//     // NetworkChangeGameModeSucceeded | 0x6D302DA9
//     static Any NETWORK_CHANGE_GAME_MODE_SUCCEEDED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D302DA9);
//     }

//     // NetworkCheckInviteArrival | 0x308E3719
//     static Any NETWORK_CHECK_INVITE_ARRIVAL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x308E3719);
//     }

//     // NetworkClearInviteArrival | 0x37282D4F
//     static Any NETWORK_CLEAR_INVITE_ARRIVAL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37282D4F);
//     }

//     // NetworkClearSummons | 0x6289239F
//     static Any NETWORK_CLEAR_SUMMONS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6289239F);
//     }

//     // NetworkDidInviteFriend | 0x3CAA1340
//     static Any NETWORK_DID_INVITE_FRIEND(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CAA1340, a1);
//     }

//     // NetworkEndSession | 0x75291BEC
//     static Any NETWORK_END_SESSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75291BEC);
//     }

//     // NetworkEndSessionPending | 0x489B0BB9
//     static Any NETWORK_END_SESSION_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x489B0BB9);
//     }

//     // NetworkFindGame | 0x5D4D0C86
//     static Any NETWORK_FIND_GAME(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D4D0C86, a1, a2, a3, a4);
//     }

//     // NetworkFindGamePending | 0x23D60810
//     static Any NETWORK_FIND_GAME_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x23D60810);
//     }

//     // NetworkFinishExtendedSearch | 0x1E0A7AD8
//     static Any NETWORK_FINISH_EXTENDED_SEARCH()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E0A7AD8);
//     }

//     // NetworkGetFindResult | 0x282D2CAA
//     static Any NETWORK_GET_FIND_RESULT(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x282D2CAA, a1, a2);
//     }

//     // NetworkGetFriendCount | 0x5EEA3F25
//     static Any NETWORK_GET_FRIEND_COUNT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5EEA3F25);
//     }

//     // NetworkGetFriendName | 0x17FD0934
//     static Any NETWORK_GET_FRIEND_NAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17FD0934, a1);
//     }

//     // NetworkGetFriendlyFireOption | 0x577144A0
//     static Any NETWORK_GET_FRIENDLY_FIRE_OPTION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x577144A0);
//     }

//     // NetworkGetGameMode | 0x29A75D1F
//     static Any NETWORK_GET_GAME_MODE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29A75D1F);
//     }

//     // NetworkGetHealthReticuleOption | 0x546F581F
//     static Any NETWORK_GET_HEALTH_RETICULE_OPTION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x546F581F);
//     }

//     // NetworkGetHostLatency | 0x74093768
//     static Any NETWORK_GET_HOST_LATENCY(int32_t host)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74093768, host);
//     }

//     // NetworkGetHostMatchProgress | 0x59AA0635
//     static Any NETWORK_GET_HOST_MATCH_PROGRESS(int32_t host)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59AA0635, host);
//     }

//     // NetworkGetHostName | 0x4A8048F8
//     static Any NETWORK_GET_HOST_NAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A8048F8);
//     }

//     // NetworkGetLanSession | 0x48A723C1
//     static Any NETWORK_GET_LAN_SESSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48A723C1);
//     }

//     // NetworkGetMaxPrivateSlots | 0x2EF80425
//     static Any NETWORK_GET_MAX_PRIVATE_SLOTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2EF80425);
//     }

//     // NetworkGetMaxSlots | 0x524F7543
//     static Any NETWORK_GET_MAX_SLOTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x524F7543);
//     }

//     // NetworkGetNextTextChat | 0x314E106A
//     static Any NETWORK_GET_NEXT_TEXT_CHAT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x314E106A);
//     }

//     // NetworkGetNumOpenPublicSlots | 0x4E323A0A
//     static Any NETWORK_GET_NUM_OPEN_PUBLIC_SLOTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E323A0A);
//     }

//     // NetworkGetNumPartyMembers | 0x27F65637
//     static Any NETWORK_GET_NUM_PARTY_MEMBERS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27F65637);
//     }

//     // NetworkGetNumUnacceptedInvites | 0x13244634
//     static Any NETWORK_GET_NUM_UNACCEPTED_INVITES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13244634);
//     }

//     // NetworkGetNumberOfGames | 0x10DF4CED
//     static Any NETWORK_GET_NUMBER_OF_GAMES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10DF4CED);
//     }

//     // NetworkGetTeamOption | 0x52152E04
//     static Any NETWORK_GET_TEAM_OPTION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52152E04);
//     }

//     // NetworkGetUnacceptedInviteEpisode | 0x3432536A
//     static Any NETWORK_GET_UNACCEPTED_INVITE_EPISODE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3432536A, a1);
//     }

//     // NetworkGetUnacceptedInviteGameMode | 0x5E44065D
//     static Any NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E44065D, a1);
//     }

//     // NetworkGetUnacceptedInviterName | 0x1A7B3125
//     static Any NETWORK_GET_UNACCEPTED_INVITER_NAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A7B3125, a1);
//     }

//     // NetworkHasStrictNat | 0x2704460E
//     static Any NETWORK_HAS_STRICT_NAT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2704460E);
//     }

//     // NetworkHaveOnlinePrivileges | 0x4B907716
//     static Any NETWORK_HAVE_ONLINE_PRIVILEGES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B907716);
//     }

//     // NetworkHaveSummons | 0x48726B45
//     static Any NETWORK_HAVE_SUMMONS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48726B45);
//     }

//     // NetworkHostGameCnc | 0x26CF21AF
//     static Any NETWORK_HOST_GAME_CNC()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26CF21AF);
//     }

//     // NetworkHostGameE1 | 0x5BEA05E2
//     static Any NETWORK_HOST_GAME_E1(Any a1, Any a2, Any a3, Any a4, Any a5, Any a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BEA05E2, a1, a2, a3, a4, a5, a6);
//     }

//     // NetworkHostGamePending | 0x391E4575
//     static Any NETWORK_HOST_GAME_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x391E4575);
//     }

//     // NetworkHostGameSucceeded | 0x1CA77E94
//     static Any NETWORK_HOST_GAME_SUCCEEDED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1CA77E94);
//     }

//     // NetworkHostRendezvousE1 | 0x48032420
//     static Any NETWORK_HOST_RENDEZVOUS_E1(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48032420, a1, a2, a3);
//     }

//     // NetworkInviteFriend | 0x62B15CD7
//     static Any NETWORK_INVITE_FRIEND(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62B15CD7, a1, a2);
//     }

//     // NetworkIsBeingKicked | 0x52364369
//     static Any NETWORK_IS_BEING_KICKED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52364369);
//     }

//     // NetworkIsCommonEpisode | 0x26094A53
//     static Any NETWORK_IS_COMMON_EPISODE(int32_t id)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26094A53, id);
//     }

//     // NetworkIsFindResultUpdated | 0x7ED34379
//     static Any NETWORK_IS_FIND_RESULT_UPDATED(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7ED34379, a1);
//     }

//     // NetworkIsFindResultValid | 0x51DF00D8
//     static Any NETWORK_IS_FIND_RESULT_VALID(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51DF00D8, a1);
//     }

//     // NetworkIsFriendInSameTitle | 0x4B5C4957
//     static Any NETWORK_IS_FRIEND_IN_SAME_TITLE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B5C4957, a1);
//     }

//     // NetworkIsGameRanked | 0x50C72493
//     static Any NETWORK_IS_GAME_RANKED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50C72493);
//     }

//     // NetworkIsInviteeOnline | 0x772B01CC
//     static Any NETWORK_IS_INVITEE_ONLINE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x772B01CC);
//     }

//     // NetworkIsLinkConnected | 0x14332DE0
//     static Any NETWORK_IS_LINK_CONNECTED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14332DE0);
//     }

//     // NetworkIsOperationPending | 0x71AE456A
//     static Any NETWORK_IS_OPERATION_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71AE456A);
//     }

//     // NetworkIsRendezvous | 0x60560DAE
//     static Any NETWORK_IS_RENDEZVOUS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60560DAE);
//     }

//     // NetworkIsRendezvousHost | 0x6EB3047F
//     static Any NETWORK_IS_RENDEZVOUS_HOST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6EB3047F);
//     }

//     // NetworkIsRockstartSessionIdValid | 0x6C434E0B
//     static Any NETWORK_IS_ROCKSTART_SESSION_ID_VALID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C434E0B);
//     }

//     // NetworkIsSessionAdvertise | 0x1B6716B8
//     static Any NETWORK_IS_SESSION_ADVERTISE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B6716B8);
//     }

//     // NetworkIsSessionInvitable | 0x4A8245F1
//     static Any NETWORK_IS_SESSION_INVITABLE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A8245F1);
//     }

//     // NetworkIsSessionStarted | 0x65B83AFB
//     static Any NETWORK_IS_SESSION_STARTED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65B83AFB);
//     }

//     // NetworkIsTvt | 0x73D87A5F
//     static Any NETWORK_IS_TVT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73D87A5F);
//     }

//     // NetworkJoinGame | 0x60806A0C
//     static Any NETWORK_JOIN_GAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60806A0C, a1);
//     }

//     // NetworkJoinGameCnc | 0x358F40E9
//     static Any NETWORK_JOIN_GAME_CNC()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x358F40E9);
//     }

//     // NetworkJoinGamePending | 0x76C53927
//     static Any NETWORK_JOIN_GAME_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76C53927);
//     }

//     // NetworkJoinGameSucceeded | 0x59F24327
//     static Any NETWORK_JOIN_GAME_SUCCEEDED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59F24327);
//     }

//     // NetworkJoinSummons | 0x360751AE
//     static Any NETWORK_JOIN_SUMMONS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x360751AE);
//     }

//     // NetworkLeaveGame | 0x55D66E24
//     static Any NETWORK_LEAVE_GAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55D66E24);
//     }

//     // NetworkLeaveGamePending | 0x497E6745
//     static Any NETWORK_LEAVE_GAME_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x497E6745);
//     }

//     // NetworkRestoreGameConfig | 0x1E1B5C26
//     static Any NETWORK_RESTORE_GAME_CONFIG(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E1B5C26, a1);
//     }

//     // NetworkResultMatchesSearchCriteria | 0x767F1E44
//     static Any NETWORK_RESULT_MATCHES_SEARCH_CRITERIA(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x767F1E44, a1);
//     }

//     // NetworkReturnToRendezvousPending | 0x6A66149A
//     static Any NETWORK_RETURN_TO_RENDEZVOUS_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A66149A);
//     }

//     // NetworkReturnToRendezvousSucceeded | 0x208F671C
//     static Any NETWORK_RETURN_TO_RENDEZVOUS_SUCCEEDED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x208F671C);
//     }

//     // NetworkSendTextChat | 0x18C67E6D
//     static Any NETWORK_SEND_TEXT_CHAT(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18C67E6D, a1, a2);
//     }

//     // NetworkSetFriendlyFireOption | 0x5AC43965
//     static Any NETWORK_SET_FRIENDLY_FIRE_OPTION(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AC43965, a1);
//     }

//     // NetworkSetHealthReticuleOption | 0x3998154E
//     static Any NETWORK_SET_HEALTH_RETICULE_OPTION(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3998154E, a1);
//     }

//     // NetworkSetLanSession | 0x6FDA43A3
//     static Any NETWORK_SET_LAN_SESSION(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6FDA43A3, a1);
//     }

//     // NetworkSetMatchProgress | 0x5C8D66EA
//     static Any NETWORK_SET_MATCH_PROGRESS(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C8D66EA, a1);
//     }

//     // NetworkSetServerName | 0x580E1C3D
//     static Any NETWORK_SET_SERVER_NAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x580E1C3D, a1);
//     }

//     // NetworkSetSessionInvitable | 0x5FB15E81
//     static Any NETWORK_SET_SESSION_INVITABLE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FB15E81, a1);
//     }

//     // NetworkSetTalkerFocus | 0x753714F8
//     static Any NETWORK_SET_TALKER_FOCUS(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x753714F8, a1);
//     }

//     // NetworkSetTalkerProximity | 0x2F542797
//     static Any NETWORK_SET_TALKER_PROXIMITY(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F542797, a1);
//     }

//     // NetworkSetTeamOnlyChat | 0x31492174
//     static Any NETWORK_SET_TEAM_ONLY_CHAT(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31492174, a1);
//     }

//     // NetworkSetTextChatRecipients | 0x3A2246BB
//     static Any NETWORK_SET_TEXT_CHAT_RECIPIENTS(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A2246BB, a1);
//     }

//     // NetworkShowFriendProfileUi | 0x696021E6
//     static Any NETWORK_SHOW_FRIEND_PROFILE_UI(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x696021E6, a1);
//     }

//     // NetworkStartSession | 0x58802CE5
//     static Any NETWORK_START_SESSION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58802CE5);
//     }

//     // NetworkStartSessionPending | 0x7F853FF4
//     static Any NETWORK_START_SESSION_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F853FF4);
//     }

//     // NetworkStartSessionSucceeded | 0x5873667B
//     static Any NETWORK_START_SESSION_SUCCEEDED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5873667B);
//     }

//     // NetworkStoreGameConfig | 0x30D373DF
//     static Any NETWORK_STORE_GAME_CONFIG(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30D373DF, a1);
//     }

//     // NetworkStringVerifyPending | 0x44AA32A7
//     static Any NETWORK_STRING_VERIFY_PENDING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44AA32A7);
//     }

//     // NetworkStringVerifySucceeded | 0x3F1D4677
//     static Any NETWORK_STRING_VERIFY_SUCCEEDED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F1D4677);
//     }

//     // NetworkVerifyUserString | 0x59884407
//     static Any NETWORK_VERIFY_USER_STRING(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59884407, a1);
//     }

//     // RegisterNetworkBestGameScores | 0x4ADB10A4
//     static Any REGISTER_NETWORK_BEST_GAME_SCORES(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4ADB10A4, a1, a2, a3);
//     }

//     // RemoveAllNetworkRestartPoints | 0x3FC034EB
//     static Any REMOVE_ALL_NETWORK_RESTART_POINTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FC034EB);
//     }

//     // RequestControlOfNetworkId | 0x29926B20
//     static Any REQUEST_CONTROL_OF_NETWORK_ID(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29926B20, a1);
//     }

//     // SetNetworkIdCanMigrate | 0x2FA5601D
//     static Any SET_NETWORK_ID_CAN_MIGRATE(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FA5601D, a1, a2);
//     }

//     // SetNetworkIdExistsOnAllMachines | 0x4E2C764D
//     static Any SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E2C764D, a1, a2);
//     }

//     // SetNetworkIdStopCloningForEnemies | 0x320B3D0C
//     static Any SET_NETWORK_ID_STOP_CLONING_FOR_ENEMIES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x320B3D0C);
//     }

//     // SetNetworkJoinFail | 0x5849311B
//     static Any SET_NETWORK_JOIN_FAIL(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5849311B, a1);
//     }

//     // SetNetworkVisibility | 0x24403F44
//     static Any SET_NETWORK_VISIBILITY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24403F44);
//     }

//     // ShutdownAndLaunchNetworkGame | 0x1BC5050E
//     static Any SHUTDOWN_AND_LAUNCH_NETWORK_GAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1BC5050E, a1);
//     }

//     // UpdateNetworkRelativeScore | 0x384E3F3A
//     static Any UPDATE_NETWORK_RELATIVE_SCORE(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x384E3F3A, a1, a2, a3);
//     }

//     // UpdateNetworkStatistics | 0x70B45E01
//     static Any UPDATE_NETWORK_STATISTICS(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70B45E01, a1, a2, a3, a4);
//     }

// } // namespace NETWORK

// namespace OBJECT
// {

//     // AddObjectToInteriorRoomByKey | 0x67D83807
//     static Any ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY(Object obj, uint32_t roomKey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67D83807, obj, roomKey);
//     }

//     // AddStringToHtmlScriptObject | 0x7EB70379
//     static Any ADD_STRING_TO_HTML_SCRIPT_OBJECT(int32_t htmlobj, char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EB70379, htmlobj, str);
//     }

//     // AddToHtmlScriptObject | 0x3ECC0086
//     static Any ADD_TO_HTML_SCRIPT_OBJECT(int32_t htmlobj, char *htmlcode)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3ECC0086, htmlobj, htmlcode);
//     }

//     // AllocateScriptToObject | 0x71C30148
//     static Any ALLOCATE_SCRIPT_TO_OBJECT(char *ScriptName, uint32_t model, int32_t unk, float radius, int32_t UnkTime)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71C30148, ScriptName, model, unk, radius, UnkTime);
//     }

//     // AnchorObject | 0x5785181B
//     static Any ANCHOR_OBJECT(Object obj, bool anchor, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5785181B, obj, anchor, flags);
//     }

//     // ApplyForceToObject | 0x438F6ECB
//     static Any APPLY_FORCE_TO_OBJECT(Object obj, uint32_t uk0_3, float pX, float pY, float pZ, float spinX, float spinY, float spinZ, uint32_t uk4_0, uint32_t uk5_1, uint32_t uk6_1, uint32_t uk7_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x438F6ECB, obj, uk0_3, pX, pY, pZ, spinX, spinY, spinZ, uk4_0, uk5_1, uk6_1, uk7_1);
//     }

//     // AttachObjectToObjectPhysically | 0x28663AA6
//     static Any ATTACH_OBJECT_TO_OBJECT_PHYSICALLY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28663AA6);
//     }

//     // CanRegisterMissionObject | 0x42F1557D
//     static Any CAN_REGISTER_MISSION_OBJECT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x42F1557D);
//     }

//     // ClearAreaOfObjects | 0x118A67C9
//     static Any CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x118A67C9, x, y, z, radius);
//     }

//     // ClearObjectLastDamageEntity | 0x64BE2E39
//     static Any CLEAR_OBJECT_LAST_DAMAGE_ENTITY(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64BE2E39, obj);
//     }

//     // ClearObjectLastWeaponDamage | 0x15F11BAB
//     static Any CLEAR_OBJECT_LAST_WEAPON_DAMAGE(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15F11BAB, obj);
//     }

//     // ClearRoomForObject | 0x12ED69A6
//     static Any CLEAR_ROOM_FOR_OBJECT(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12ED69A6, obj);
//     }

//     // ConvertThenAddStringToHtmlScriptObject | 0x72EC0AA6
//     static Any CONVERT_THEN_ADD_STRING_TO_HTML_SCRIPT_OBJECT(int32_t htmlobj, char *strgxtkey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72EC0AA6, htmlobj, strgxtkey);
//     }

//     // CreateHtmlScriptObject | 0x6AA63375
//     static Any CREATE_HTML_SCRIPT_OBJECT(char *objname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6AA63375, objname);
//     }

//     // CreateObject | 0x4DE152A0
//     static Any CREATE_OBJECT(uint32_t model, float x, float y, float z, Object *pObj, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DE152A0, model, x, y, z, pObj, unknownTrue);
//     }

//     // CreateObjectNoOffset | 0x75C51A26
//     static Any CREATE_OBJECT_NO_OFFSET(uint32_t model, float x, float y, float z, Object *pObj, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75C51A26, model, x, y, z, pObj, unknownTrue);
//     }

//     // DeleteAllHtmlScriptObjects | 0x31A77970
//     static Any DELETE_ALL_HTML_SCRIPT_OBJECTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31A77970);
//     }

//     // DeleteHtmlScriptObject | 0x53456730
//     static Any DELETE_HTML_SCRIPT_OBJECT(int32_t htmlobj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x53456730, htmlobj);
//     }

//     // DeleteObject | 0x62FE6290
//     static Any DELETE_OBJECT(Object *pObj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62FE6290, pObj);
//     }

//     // DetachObjectNoCollide | 0x6B2E49CD
//     static Any DETACH_OBJECT_NO_COLLIDE(Object obj, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B2E49CD, obj, flag);
//     }

//     // DoesObjectExist | 0x6DAB78CD
//     static Any DOES_OBJECT_EXIST(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6DAB78CD, obj);
//     }

//     // DoesObjectExistWithNetworkId | 0x5BBC62CB
//     static Any DOES_OBJECT_EXIST_WITH_NETWORK_ID(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5BBC62CB, a1);
//     }

//     // DoesObjectHavePhysics | 0x39587D51
//     static Any DOES_OBJECT_HAVE_PHYSICS(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39587D51, obj);
//     }

//     // DoesObjectHaveThisModel | 0x7505765B
//     static Any DOES_OBJECT_HAVE_THIS_MODEL(Object obj, uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7505765B, obj, model);
//     }

//     // DoesObjectOfTypeExistAtCoords | 0x1F881A88
//     static Any DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F881A88, x, y, z, radius, model);
//     }

//     // DontRemoveObject | 0x74FF26F9
//     static Any DONT_REMOVE_OBJECT(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74FF26F9, obj);
//     }

//     // DropObject | 0x24C45D0D
//     static Any DROP_OBJECT(Ped ped, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24C45D0D, ped, unknownTrue);
//     }

//     // EnableDisabledAttractorsOnObject | 0x17F62193
//     static Any ENABLE_DISABLED_ATTRACTORS_ON_OBJECT(Object obj, bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17F62193, obj, enable);
//     }

//     // ExtinguishObjectFire | 0x5FBC5FFF
//     static Any EXTINGUISH_OBJECT_FIRE(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FBC5FFF, obj);
//     }

//     // FreezeObjectPosition | 0x7CA8382B
//     static Any FREEZE_OBJECT_POSITION(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CA8382B, obj, set);
//     }

//     // FreezeObjectPositionAndDontLoadCollision | 0x668F64C7
//     static Any FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION(Object obj, bool freeze)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x668F64C7, obj, freeze);
//     }

//     // FreezePositionOfClosestObjectOfType | 0x5A196B79
//     static Any FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, uint32_t model, bool frozen)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A196B79, x, y, z, radius, model, frozen);
//     }

//     // GetClosestStealableObject | 0x27045521
//     static Any GET_CLOSEST_STEALABLE_OBJECT(float x, float y, float z, float radius, Object *obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27045521, x, y, z, radius, obj);
//     }

//     // GetLevelDesignCoordsForObject | 0x3E762D9D
//     static Any GET_LEVEL_DESIGN_COORDS_FOR_OBJECT(Object obj, int a2, float *x, float *y, float *z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E762D9D, obj, a2, x, y, z);
//     }

//     // GetNetworkIdFromObject | 0x50424095
//     static Any GET_NETWORK_ID_FROM_OBJECT(Object obj, int32_t *id)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50424095, obj, id);
//     }

//     // GetNumberOfStickyBombsStuckToObject | 0x4AD026EE
//     static Any GET_NUMBER_OF_STICKY_BOMBS_STUCK_TO_OBJECT(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AD026EE, obj);
//     }

//     // GetObjectAnimCurrentTime | 0x29F02CB1
//     static Any GET_OBJECT_ANIM_CURRENT_TIME(Object obj, char *animname0, char *animname1, float *time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29F02CB1, obj, animname0, animname1, time);
//     }

//     // GetObjectAnimTotalTime | 0x26E66DF3
//     static Any GET_OBJECT_ANIM_TOTAL_TIME(Object obj, char *animname0, char *animname1, float *time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x26E66DF3, obj, animname0, animname1, time);
//     }

//     // GetObjectCoordinates | 0x49DA4F9E
//     static Any GET_OBJECT_COORDINATES(Object obj, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49DA4F9E, obj, pX, pY, pZ);
//     }

//     // GetObjectFragmentDamageHealth | 0x79CA30B1
//     static Any GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Object obj, bool unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79CA30B1, obj, unknown);
//     }

//     // GetObjectFromNetworkId | 0x7AA91131
//     static Any GET_OBJECT_FROM_NETWORK_ID(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7AA91131, a1, a2);
//     }

//     // GetObjectHeading | 0x791D1778
//     static Any GET_OBJECT_HEADING(Object obj, float *pHeading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x791D1778, obj, pHeading);
//     }

//     // GetObjectHealth | 0x4ACB039B
//     static Any GET_OBJECT_HEALTH(Object obj, float *pHealth)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4ACB039B, obj, pHealth);
//     }

//     // GetObjectModel | 0x5CC55619
//     static Any GET_OBJECT_MODEL(Object obj, uint32_t *pModel)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5CC55619, obj, pModel);
//     }

//     // GetObjectRotationVelocity | 0x492A71E2
//     static Any GET_OBJECT_ROTATION_VELOCITY(Object obj, float *pX, float *pY, float *pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x492A71E2, obj, pX, pY, pZ);
//     }

//     // GetObjectSpeed | 0x1C2F57FB
//     static Any GET_OBJECT_SPEED(Object obj, float *pSpeed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C2F57FB, obj, pSpeed);
//     }

//     // GetObjectTurnMass | 0x3C85109F
//     static Any GET_OBJECT_TURN_MASS(Object obj, float *turnmass)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C85109F, obj, turnmass);
//     }

//     // GetOffsetFromObjectInWorldCoords | 0x449F4165
//     static Any GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS(Object obj, float x, float y, float z, float *pOffX, float *pOffY, float *pOffZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x449F4165, obj, x, y, z, pOffX, pOffY, pOffZ);
//     }

//     // GetRoomKeyFromObject | 0x561509AD
//     static Any GET_ROOM_KEY_FROM_OBJECT(Object obj, uint32_t *pRoomKey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x561509AD, obj, pRoomKey);
//     }

//     // GetRopeHeightForObject | 0x473B1371
//     static Any GET_ROPE_HEIGHT_FOR_OBJECT(Object obj, float *height)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x473B1371, obj, height);
//     }

//     // GetTimeSincePlayerHitObject | 0x43C2796B
//     static Any GET_TIME_SINCE_PLAYER_HIT_OBJECT(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43C2796B, playerIndex);
//     }

//     // GrabEntityOnRopeForObject | 0x309F1F4B
//     static Any GRAB_ENTITY_ON_ROPE_FOR_OBJECT(Object obj, int32_t *a2, int32_t *a3, int32_t *a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x309F1F4B, obj, a2, a3, a4);
//     }

//     // GrabNearbyObjectWithSpecialAttribute | 0x256472F1
//     static Any GRAB_NEARBY_OBJECT_WITH_SPECIAL_ATTRIBUTE(int32_t attribute, Object *obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x256472F1, attribute, obj);
//     }

//     // HasFragmentRootOfClosestObjectOfTypeBeenDamaged | 0x31B64D2B
//     static Any HAS_FRAGMENT_ROOT_OF_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED(float x, float y, float z, float radius, uint32_t a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31B64D2B, x, y, z, radius, a5);
//     }

//     // HasObjectBeenDamaged | 0x7E0D6CB8
//     static Any HAS_OBJECT_BEEN_DAMAGED(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E0D6CB8, obj);
//     }

//     // HasObjectBeenDamagedByWeapon | 0x547C42B1
//     static Any HAS_OBJECT_BEEN_DAMAGED_BY_WEAPON(Object obj, int32_t unk)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x547C42B1, obj, unk);
//     }

//     // HasObjectBeenPhotographed | 0x57895F38
//     static Any HAS_OBJECT_BEEN_PHOTOGRAPHED(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57895F38, obj);
//     }

//     // HasObjectBeenUprooted | 0x58737620
//     static Any HAS_OBJECT_BEEN_UPROOTED(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58737620, obj);
//     }

//     // HasObjectCollidedWithAnything | 0x106811E4
//     static Any HAS_OBJECT_COLLIDED_WITH_ANYTHING(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x106811E4, obj);
//     }

//     // HasObjectFragmentRootBeenDamaged | 0x3162071D
//     static Any HAS_OBJECT_FRAGMENT_ROOT_BEEN_DAMAGED(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3162071D, obj);
//     }

//     // HasPoolObjectCollidedWithCushion | 0x3E8D7D3F
//     static Any HAS_POOL_OBJECT_COLLIDED_WITH_CUSHION(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E8D7D3F, obj);
//     }

//     // HasPoolObjectCollidedWithObject | 0x24D70069
//     static Any HAS_POOL_OBJECT_COLLIDED_WITH_OBJECT(Object obj, Object otherObj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24D70069, obj, otherObj);
//     }

//     // IsClosestObjectOfTypeSmashedOrDamaged | 0x788026F4
//     static Any IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED(float x, float y, float z, float radius, uint32_t type_or_model, bool flag0, bool flag1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x788026F4, x, y, z, radius, type_or_model, flag0, flag1);
//     }

//     // IsNonFragObjectSmashed | 0x5C723F31
//     static Any IS_NON_FRAG_OBJECT_SMASHED(float x, float y, float z, float radius, uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C723F31, x, y, z, radius, model);
//     }

//     // IsObjectAttached | 0x701F4004
//     static Any IS_OBJECT_ATTACHED(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x701F4004, obj);
//     }

//     // IsObjectInAngledArea3d | 0x5D5A06F7
//     static Any IS_OBJECT_IN_ANGLED_AREA3D(Object obj, float x0, float y0, float z0, float x1, float y1, float z1, float a8, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D5A06F7, obj, x0, y0, z0, x1, y1, z1, a8, flag);
//     }

//     // IsObjectInArea2d | 0x2C6D65AD
//     static Any IS_OBJECT_IN_AREA2D()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C6D65AD);
//     }

//     // IsObjectInArea3d | 0x6D717883
//     static Any IS_OBJECT_IN_AREA3D(Object obj, float x0, float y0, float z0, float x1, float y1, float z1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D717883, obj, x0, y0, z0, x1, y1, z1, flag);
//     }

//     // IsObjectInWater | 0x7BF7646F
//     static Any IS_OBJECT_IN_WATER(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BF7646F, obj);
//     }

//     // IsObjectOnFire | 0x7A240412
//     static Any IS_OBJECT_ON_FIRE(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A240412, obj);
//     }

//     // IsObjectOnScreen | 0x6A9A3B1F
//     static Any IS_OBJECT_ON_SCREEN(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A9A3B1F, obj);
//     }

//     // IsObjectPlayingAnim | 0x4D2E58D5
//     static Any IS_OBJECT_PLAYING_ANIM(Object obj, char *animname0, char *animname1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D2E58D5, obj, animname0, animname1);
//     }

//     // IsObjectReassignmentInProgress | 0x7D0D6779
//     static Any IS_OBJECT_REASSIGNMENT_IN_PROGRESS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D0D6779);
//     }

//     // IsObjectStatic | 0x7B181EB0
//     static Any IS_OBJECT_STATIC(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B181EB0, obj);
//     }

//     // IsObjectTouchingObject | 0x6A2E514F
//     static Any IS_OBJECT_TOUCHING_OBJECT(Object obj0, Object obj1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A2E514F, obj0, obj1);
//     }

//     // IsObjectUpright | 0x1EE13E29
//     static Any IS_OBJECT_UPRIGHT(Object obj, float angle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1EE13E29, obj, angle);
//     }

//     // IsObjectWithinBrainActivationRange | 0x472C710B
//     static Any IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x472C710B, obj);
//     }

//     // IsPlayerTargettingObject | 0x679934F9
//     static Any IS_PLAYER_TARGETTING_OBJECT(Player playerIndex, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x679934F9, playerIndex, obj);
//     }

//     // IsSittingObjectNear | 0x120B4F15
//     static Any IS_SITTING_OBJECT_NEAR(float x, float y, float z, int a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x120B4F15, x, y, z, a4);
//     }

//     // LoadAllObjectsNow | 0x4BF36A32
//     static Any LOAD_ALL_OBJECTS_NOW()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4BF36A32);
//     }

//     // LocateObject2d | 0x59A57BA8
//     static Any LOCATE_OBJECT2D(Object obj, float x0, float y0, float x1, float y1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59A57BA8, obj, x0, y0, x1, y1, flag);
//     }

//     // LocateObject3d | 0x6DB47487
//     static Any LOCATE_OBJECT3D(Object obj, float x, float y, float z, float xr, float yr, float zr, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6DB47487, obj, x, y, z, xr, yr, zr, flag);
//     }

//     // MakeObjectTargettable | 0x228F1801
//     static Any MAKE_OBJECT_TARGETTABLE(Object obj, bool targettable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x228F1801, obj, targettable);
//     }

//     // MarkObjectAsNoLongerNeeded | 0x493B655B
//     static Any MARK_OBJECT_AS_NO_LONGER_NEEDED(Object *pObj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x493B655B, pObj);
//     }

//     // PlayAudioEventFromObject | 0x4BB9178A
//     static Any PLAY_AUDIO_EVENT_FROM_OBJECT(char *EventName, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4BB9178A, EventName, obj);
//     }

//     // PlayObjectAnim | 0x5D3241E4
//     static Any PLAY_OBJECT_ANIM(Object obj, char *animname0, char *animname1, float unk, bool flag0, bool flag1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D3241E4, obj, animname0, animname1, unk, flag0, flag1);
//     }

//     // PlaySoundFromObject | 0x60AE0867
//     static Any PLAY_SOUND_FROM_OBJECT(int32_t sound_id, char *name, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x60AE0867, sound_id, name, obj);
//     }

//     // PlayStreamFromObject | 0x4AA86394
//     static Any PLAY_STREAM_FROM_OBJECT(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AA86394, obj);
//     }

//     // ReleaseEntityFromRopeForObject | 0x7A575AC9
//     static Any RELEASE_ENTITY_FROM_ROPE_FOR_OBJECT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A575AC9);
//     }

//     // RemoveProjtexFromObject | 0x7330132C
//     static Any REMOVE_PROJTEX_FROM_OBJECT(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7330132C, obj);
//     }

//     // RemovePtfxFromObject | 0x4D7775BA
//     static Any REMOVE_PTFX_FROM_OBJECT(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D7775BA, obj);
//     }

//     // ReserveNetworkMissionObjects | 0x720A4D47
//     static Any RESERVE_NETWORK_MISSION_OBJECTS(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x720A4D47, a1);
//     }

//     // ReserveNetworkMissionObjectsForHost | 0x2F7508E7
//     static Any RESERVE_NETWORK_MISSION_OBJECTS_FOR_HOST(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F7508E7, a1);
//     }

//     // RotateObject | 0x12B524B7
//     static Any ROTATE_OBJECT(Object obj, float x, float y, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12B524B7, obj, x, y, flag);
//     }

//     // SetActivateObjectPhysicsAsSoonAsItIsUnfrozen | 0x378531F8
//     static Any SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x378531F8, obj, set);
//     }

//     // SetHeadingOfClosestObjectOfType | 0x7ABD4D4D
//     static Any SET_HEADING_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, uint32_t type_or_model, float heading)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7ABD4D4D, x, y, z, radius, type_or_model, heading);
//     }

//     // SetLoadCollisionForObjectFlag | 0x70D13342
//     static Any SET_LOAD_COLLISION_FOR_OBJECT_FLAG(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70D13342, obj, set);
//     }

//     // SetObjectAlpha | 0x7F0040DE
//     static Any SET_OBJECT_ALPHA(Object obj, int32_t alpha)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F0040DE, obj, alpha);
//     }

//     // SetObjectAnimCurrentTime | 0x368274DA
//     static Any SET_OBJECT_ANIM_CURRENT_TIME(Object obj, char *animname0, char *animname1, float time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x368274DA, obj, animname0, animname1, time);
//     }

//     // SetObjectAnimPlayingFlag | 0x6A7236C9
//     static Any SET_OBJECT_ANIM_PLAYING_FLAG(Object obj, char *animname0, char *animname1, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A7236C9, obj, animname0, animname1, flag);
//     }

//     // SetObjectAnimSpeed | 0x168B18ED
//     static Any SET_OBJECT_ANIM_SPEED(Object obj, char *animname0, char *animname1, float speed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x168B18ED, obj, animname0, animname1, speed);
//     }

//     // SetObjectAsStealable | 0x2DDE3785
//     static Any SET_OBJECT_AS_STEALABLE(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2DDE3785, obj, set);
//     }

//     // SetObjectCcd | 0x677861E1
//     static Any SET_OBJECT_CCD(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x677861E1, obj, set);
//     }

//     // SetObjectCollision | 0x24A40229
//     static Any SET_OBJECT_COLLISION(Object obj, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24A40229, obj, value);
//     }

//     // SetObjectCoordinates | 0x52FD30EB
//     static Any SET_OBJECT_COORDINATES(Object obj, float pX, float pY, float pZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52FD30EB, obj, pX, pY, pZ);
//     }

//     // SetObjectDrawLast | 0x19DD44F2
//     static Any SET_OBJECT_DRAW_LAST(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19DD44F2, obj, set);
//     }

//     // SetObjectDynamic | 0x2C591CCD
//     static Any SET_OBJECT_DYNAMIC(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2C591CCD, obj, set);
//     }

//     // SetObjectExistsOnAllMachines | 0x672139F0
//     static Any SET_OBJECT_EXISTS_ON_ALL_MACHINES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x672139F0);
//     }

//     // SetObjectHeading | 0x4F5D027C
//     static Any SET_OBJECT_HEADING(Object obj, float value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F5D027C, obj, value);
//     }

//     // SetObjectHealth | 0x46C41EA8
//     static Any SET_OBJECT_HEALTH(Object obj, float health)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46C41EA8, obj, health);
//     }

//     // SetObjectInitialRotationVelocity | 0x1C7C4B89
//     static Any SET_OBJECT_INITIAL_ROTATION_VELOCITY(Object obj, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C7C4B89, obj, x, y, z);
//     }

//     // SetObjectInitialVelocity | 0x41ED206B
//     static Any SET_OBJECT_INITIAL_VELOCITY(Object obj, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41ED206B, obj, x, y, z);
//     }

//     // SetObjectInvincible | 0x1D2F46AE
//     static Any SET_OBJECT_INVINCIBLE(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D2F46AE, obj, set);
//     }

//     // SetObjectLights | 0x45D71590
//     static Any SET_OBJECT_LIGHTS(Object obj, bool lights)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45D71590, obj, lights);
//     }

//     // SetObjectOnlyDamagedByPlayer | 0x2E321155
//     static Any SET_OBJECT_ONLY_DAMAGED_BY_PLAYER(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E321155, obj, set);
//     }

//     // SetObjectPhysicsParams | 0x1B9A44D4
//     static Any SET_OBJECT_PHYSICS_PARAMS(Object obj, float a2, float a3, float v0x00000000, float v0y, float v0z, float v1x, float v1y, float v1z, uint32_t flag0, uint32_t flag1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B9A44D4, obj, a2, a3, v0x00000000, v0y, v0z, v1x, v1y, v1z, flag0, flag1);
//     }

//     // SetObjectProofs | 0x352865D2
//     static Any SET_OBJECT_PROOFS(Object obj, bool unknown0, bool fallingDamage, bool unknown1, bool unknown2, bool unknown3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x352865D2, obj, unknown0, fallingDamage, unknown1, unknown2, unknown3);
//     }

//     // SetObjectQuaternion | 0x71270D73
//     static Any SET_OBJECT_QUATERNION(Object obj, float a2, float a3, float a4, float a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71270D73, obj, a2, a3, a4, a5);
//     }

//     // SetObjectRenderScorched | 0x1AD3394A
//     static Any SET_OBJECT_RENDER_SCORCHED(Object obj, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1AD3394A, obj, set);
//     }

//     // SetObjectScale | 0x145B13C7
//     static Any SET_OBJECT_SCALE(Object obj, float scale)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x145B13C7, obj, scale);
//     }

//     // SetObjectStopCloning | 0x2F400F5F
//     static Any SET_OBJECT_STOP_CLONING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F400F5F);
//     }

//     // SetObjectVisible | 0x372C7B2A
//     static Any SET_OBJECT_VISIBLE(Object obj, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x372C7B2A, obj, value);
//     }

//     // SetRopeHeightForObject | 0x3D79554A
//     static Any SET_ROPE_HEIGHT_FOR_OBJECT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D79554A);
//     }

//     // SetVisibilityOfClosestObjectOfType | 0x20A04BEE
//     static Any SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, uint32_t type_or_model, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20A04BEE, x, y, z, radius, type_or_model, set);
//     }

//     // SlideObject | 0x11B76EDF
//     static Any SLIDE_OBJECT(Object obj, float x, float y, float z, float xs, float ys, float zs, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x11B76EDF, obj, x, y, z, xs, ys, zs, flag);
//     }

//     // SmashGlassOnObject | 0x2F877E8A
//     static Any SMASH_GLASS_ON_OBJECT(float x, float y, float z, float a4, uint32_t model, float a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F877E8A, x, y, z, a4, model, a6);
//     }

//     // StartObjectFire | 0x2D7D5DD2
//     static Any START_OBJECT_FIRE(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D7D5DD2, obj);
//     }

//     // SwitchObjectBrains | 0x35213375
//     static Any SWITCH_OBJECT_BRAINS(int32_t brain, bool switchstate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x35213375, brain, switchstate);
//     }

//     // TaskGoToObject | 0x5B1B2699
//     static Any TASK_GO_TO_OBJECT(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B1B2699, ped, a2, a3, a4);
//     }

//     // TaskLookAtObject | 0x27C740D0
//     static Any TASK_LOOK_AT_OBJECT(Ped ped, Object targetObject, uint32_t duration, uint32_t unknown_0)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27C740D0, ped, targetObject, duration, unknown_0);
//     }

//     // TaskSeekCoverToObject | 0x4DB55DF5
//     static Any TASK_SEEK_COVER_TO_OBJECT(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DB55DF5, ped, a2, a3, a4, a5, a6);
//     }

//     // TaskSitDownOnNearestObject | 0x725654F4
//     static Any TASK_SIT_DOWN_ON_NEAREST_OBJECT(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x725654F4, ped, a2, a3, a4, a5, a6, a7, a8, a9, a10);
//     }

//     // TaskSitDownOnObject | 0x515C3218
//     static Any TASK_SIT_DOWN_ON_OBJECT(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x515C3218, ped, a2, a3, a4, a5, a6, a7, a8, a9, a10);
//     }

//     // WinchCanPickObjectUp | 0x73246FC0
//     static Any WINCH_CAN_PICK_OBJECT_UP(Object obj, bool can)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73246FC0, obj, can);
//     }

// } // namespace OBJECT

// namespace PED
// {

//     // AddPedQueue | 0x4E043F3C
//     static Any ADD_PED_QUEUE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E043F3C);
//     }

//     // AddPedToCinematographyAi | 0x62687944
//     static Any ADD_PED_TO_CINEMATOGRAPHY_AI(int a1, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62687944, a1, ped);
//     }

//     // AddPedToMissionDeletionList | 0x10F64FBF
//     static Any ADD_PED_TO_MISSION_DELETION_LIST(Ped ped, bool a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10F64FBF, ped, a2);
//     }

//     // AllocateScriptToRandomPed | 0x19DB19D8
//     static Any ALLOCATE_SCRIPT_TO_RANDOM_PED(char *ScriptName, uint32_t model, int32_t unk, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19DB19D8, ScriptName, model, unk, flag);
//     }

//     // AllowLockonToRandomPeds | 0x6FE455D8
//     static Any ALLOW_LOCKON_TO_RANDOM_PEDS(int32_t player, bool allow)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6FE455D8, player, allow);
//     }

//     // AllowScenarioPedsToBeReturnedByNextCommand | 0x6EEE7E6C
//     static Any ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6EEE7E6C, value);
//     }

//     // ApplyForceToPed | 0x7305301D
//     static Any APPLY_FORCE_TO_PED(Ped ped, uint32_t unknown0_3, float x, float y, float z, float spinX, float spinY, float spinZ, uint32_t unknown4_0, uint32_t unknown5_1, uint32_t unknown6_1, uint32_t unknown7_1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7305301D, ped, unknown0_3, x, y, z, spinX, spinY, spinZ, unknown4_0, unknown5_1, unknown6_1, unknown7_1);
//     }

//     // AreEnemyPedsInArea | 0x5C081186
//     static Any ARE_ENEMY_PEDS_IN_AREA(Ped ped, float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C081186, ped, x, y, z, radius);
//     }

//     // AttachCamToPed | 0x78B00CB2
//     static Any ATTACH_CAM_TO_PED(int32_t cam, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78B00CB2, cam, ped);
//     }

//     // AttachObjectToPed | 0x577A699E
//     static Any ATTACH_OBJECT_TO_PED(Object obj, Ped c, uint32_t bone, float pX, float pY, float pZ, float rX, float rY, float rZ, uint32_t unknown1_0)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x577A699E, obj, c, bone, pX, pY, pZ, rX, rY, rZ, unknown1_0);
//     }

//     // AttachObjectToPedPhysically | 0x1F760E1A
//     static Any ATTACH_OBJECT_TO_PED_PHYSICALLY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F760E1A);
//     }

//     // AttachPedToCar | 0x3EFC1A7D
//     static Any ATTACH_PED_TO_CAR(Ped ped, Vehicle vehicle, uint32_t unknown0_0, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, bool a9, bool a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3EFC1A7D, ped, vehicle, unknown0_0, offsetX, offsetY, offsetZ, rotX, rotY, a9, a10);
//     }

//     // AttachPedToCar2 | 0x10C91E4D
//     static Any ATTACH_PED_TO_CAR2()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10C91E4D);
//     }

//     // AttachPedToCarPhysically | 0x7FF3248C
//     static Any ATTACH_PED_TO_CAR_PHYSICALLY(Ped ped, Car car, int32_t pedbone, float x, float y, float z, float angle, float a8, bool a9, bool a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FF3248C, ped, car, pedbone, x, y, z, angle, a8, a9, a10);
//     }

//     // AttachPedToObject | 0x376917AB
//     static Any ATTACH_PED_TO_OBJECT(Ped ped, Object obj, int32_t pedbone, float x, float y, float z, float angle, float a8, bool a9, bool a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x376917AB, ped, obj, pedbone, x, y, z, angle, a8, a9, a10);
//     }

//     // AttachPedToObjectPhysically | 0x782E78BF
//     static Any ATTACH_PED_TO_OBJECT_PHYSICALLY(Ped ped, Object obj, int32_t pedbone, float x, float y, float z, float angle, float a8, bool a9, bool a10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x782E78BF, ped, obj, pedbone, x, y, z, angle, a8, a9, a10);
//     }

//     // AttachPedToWorldPhysically | 0x58086CC7
//     static Any ATTACH_PED_TO_WORLD_PHYSICALLY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58086CC7);
//     }

//     // BeginPedQueueMembershipList | 0x28CA3430
//     static Any BEGIN_PED_QUEUE_MEMBERSHIP_LIST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28CA3430);
//     }

//     // BlockPedWeaponSwitching | 0x315238D5
//     static Any BLOCK_PED_WEAPON_SWITCHING(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x315238D5, ped, value);
//     }

//     // CanPedShimmyInDirection | 0x6D1E5C25
//     static Any CAN_PED_SHIMMY_IN_DIRECTION(Ped ped, int32_t direction)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D1E5C25, ped, direction);
//     }

//     // CanRegisterMissionPed | 0x1DC730B8
//     static Any CAN_REGISTER_MISSION_PED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DC730B8);
//     }

//     // ClearPlayerHasDamagedAtLeastOnePed | 0x45AB718F
//     static Any CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45AB718F, playerIndex);
//     }

//     // CloseMicPed | 0x14B06047
//     static Any CLOSE_MIC_PED(int32_t id, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x14B06047, id, ped);
//     }

//     // DETACH_PED | 0x2CD52C5C
//     static Any DETACH_PED(Ped ped, bool unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CD52C5C, ped, unknown);
//     }

//     // DETACH_PED_FROM_WITHIN_CAR | 0x15F70500
//     static Any DETACH_PED_FROM_WITHIN_CAR(Ped ped, bool unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15F70500, ped, unknown);
//     }

//     // DestroyPedGenerationConstraintArea | 0x3CC5682F
//     static Any DESTROY_PED_GENERATION_CONSTRAINT_AREA()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CC5682F);
//     }

//     // DoesPedExistWithNetworkId | 0x21641887
//     static Any DOES_PED_EXIST_WITH_NETWORK_ID(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21641887, a1);
//     }

//     // DontSuppressAnyPedModels | 0x72EF466E
//     static Any DONT_SUPPRESS_ANY_PED_MODELS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72EF466E);
//     }

//     // DontSuppressPedModel | 0x7CF256D0
//     static Any DONT_SUPPRESS_PED_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CF256D0, model);
//     }

//     // EnableAllPedHelmets | 0x6C305137
//     static Any ENABLE_ALL_PED_HELMETS(bool enable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C305137, enable);
//     }

//     // EndPedQueueMembershipList | 0x4449534F
//     static Any END_PED_QUEUE_MEMBERSHIP_LIST()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4449534F);
//     }

//     // FirePedWeapon | 0x25BB7D67
//     static Any FIRE_PED_WEAPON(Ped ped, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25BB7D67, ped, x, y, z);
//     }

//     // ForcePedPinnedDown | 0x56A70F57
//     static Any FORCE_PED_PINNED_DOWN(Ped ped, bool force, uint32_t timerMaybe)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56A70F57, ped, force, timerMaybe);
//     }

//     // ForcePedToFleeWhilstDrivingVehicle | 0x2FED14F5
//     static Any FORCE_PED_TO_FLEE_WHILST_DRIVING_VEHICLE(Ped ped, Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FED14F5, ped, vehicle);
//     }

//     // ForcePedToLoadCover | 0x61D07789
//     static Any FORCE_PED_TO_LOAD_COVER(Ped ped, bool force)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61D07789, ped, force);
//     }

//     // ForceRandomPedType | 0x57E37103
//     static Any FORCE_RANDOM_PED_TYPE(uint32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57E37103, type);
//     }

//     // ForceSpawnScenarioPedsInArea | 0x186D42A4
//     static Any FORCE_SPAWN_SCENARIO_PEDS_IN_AREA(float x, float y, float z, float radius, int a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x186D42A4, x, y, z, radius, a5);
//     }

//     // GetBlipInfoIdPedIndex | 0x5FD47B45
//     static Any GET_BLIP_INFO_ID_PED_INDEX(Blip blip)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FD47B45, blip);
//     }

//     // GetCutscenePedPosition | 0x366B549F
//     static Any GET_CUTSCENE_PED_POSITION(int32_t unkped, rage::vector3 *pos)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x366B549F, unkped, pos);
//     }

//     // GetNetworkIdFromPed | 0x7BEE5003
//     static Any GET_NETWORK_ID_FROM_PED(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7BEE5003, a1, a2);
//     }

//     // GetNumberOfActiveStickyBombsOwnedByPed | 0x21B85DA9
//     static Any GET_NUMBER_OF_ACTIVE_STICKY_BOMBS_OWNED_BY_PED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x21B85DA9, ped);
//     }

//     // GetNumberOfInjuredPedsInRange | 0x3BB313CB
//     static Any GET_NUMBER_OF_INJURED_PEDS_IN_RANGE(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BB313CB, x, y, z, radius);
//     }

//     // GetObjectPedIsHolding | 0x45345838
//     static Any GET_OBJECT_PED_IS_HOLDING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45345838, ped);
//     }

//     // GetPedBonePosition | 0x43475BB3
//     static Any GET_PED_BONE_POSITION(Ped ped, uint32_t bone, float x, float y, float z, rage::vector3 *pPosition)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43475BB3, ped, bone, x, y, z, pPosition);
//     }

//     // GetPedClimbState | 0x391822A7
//     static Any GET_PED_CLIMB_STATE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x391822A7, ped);
//     }

//     // GetPedFromNetworkId | 0x69F11716
//     static Any GET_PED_FROM_NETWORK_ID(int32_t id, Ped *ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69F11716, id, ped);
//     }

//     // GetPedGroupIndex | 0x58E53B06
//     static Any GET_PED_GROUP_INDEX(Ped ped, uint32_t *pIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58E53B06, ped, pIndex);
//     }

//     // GetPedModelFromIndex | 0x124D4571
//     static Any GET_PED_MODEL_FROM_INDEX(int32_t index)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x124D4571, index);
//     }

//     // GetPedObjectIsAttachedTo | 0x755D6DF8
//     static Any GET_PED_OBJECT_IS_ATTACHED_TO(Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x755D6DF8, obj);
//     }

//     // GetPedPathMayDropFromHeight | 0x45AA529D
//     static Any GET_PED_PATH_MAY_DROP_FROM_HEIGHT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45AA529D, ped);
//     }

//     // GetPedPathMayUseClimbovers | 0x714C1031
//     static Any GET_PED_PATH_MAY_USE_CLIMBOVERS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x714C1031, ped);
//     }

//     // GetPedPathMayUseLadders | 0x503E2D1E
//     static Any GET_PED_PATH_MAY_USE_LADDERS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x503E2D1E, ped);
//     }

//     // GetPedPathWillAvoidDynamicObjects | 0x74F97CF8
//     static Any GET_PED_PATH_WILL_AVOID_DYNAMIC_OBJECTS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74F97CF8, ped);
//     }

//     // GetPedSteersAroundObjects | 0x75E32257
//     static Any GET_PED_STEERS_AROUND_OBJECTS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75E32257, ped);
//     }

//     // GetPedSteersAroundPeds | 0x179848E4
//     static Any GET_PED_STEERS_AROUND_PEDS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x179848E4, ped);
//     }

//     // GetPedType | 0x18F477E1
//     static Any GET_PED_TYPE(Ped ped, uint32_t *pType)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18F477E1, ped, pType);
//     }

//     // GetPlayerIdForThisPed | 0x733B61C6
//     static Any GET_PLAYER_ID_FOR_THIS_PED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x733B61C6, ped);
//     }

//     // GetTimeSincePlayerHitPed | 0x40602B66
//     static Any GET_TIME_SINCE_PLAYER_HIT_PED(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40602B66, playerIndex);
//     }

//     // GivePedAmbientObject | 0x44AA71F9
//     static Any GIVE_PED_AMBIENT_OBJECT(Ped ped, uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44AA71F9, ped, model);
//     }

//     // GivePedFakeNetworkName | 0x55E0158B
//     static Any GIVE_PED_FAKE_NETWORK_NAME(Ped ped, char *name, int32_t r, int32_t g, int32_t b, int32_t a)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55E0158B, ped, name, r, g, b, a);
//     }

//     // GivePedHelmetWithOpts | 0x3B6E1D1E
//     static Any GIVE_PED_HELMET_WITH_OPTS(Ped ped, bool a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B6E1D1E, ped, a2);
//     }

//     // GivePedPickupObject | 0x684D1517
//     static Any GIVE_PED_PICKUP_OBJECT(Ped ped, Object obj, bool flag)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x684D1517, ped, obj, flag);
//     }

//     // HasCarStoppedBecauseOfLight | 0x40CD2BD4
//     static Any HAS_CAR_STOPPED_BECAUSE_OF_LIGHT(Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40CD2BD4, car);
//     }

//     // HasPlayerDamagedAtLeastOnePed | 0x64E06CBB
//     static Any HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64E06CBB, playerIndex);
//     }

//     // IsCarStopped | 0x4A000F52
//     static Any IS_CAR_STOPPED(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A000F52, vehicle);
//     }

//     // IsCarStoppedAtTrafficLights | 0x141B23A9
//     static Any IS_CAR_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x141B23A9, vehicle);
//     }

//     // IsCarStoppedInArea2d | 0x2ED27636
//     static Any IS_CAR_STOPPED_IN_AREA2D()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2ED27636);
//     }

//     // IsPedAttachedToAnyCar | 0x78DC034E
//     static Any IS_PED_ATTACHED_TO_ANY_CAR(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78DC034E, ped);
//     }

//     // IsPedBeingJacked | 0x68B829C7
//     static Any IS_PED_BEING_JACKED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68B829C7, ped);
//     }

//     // IsPedClimbing | 0x66F5118F
//     static Any IS_PED_CLIMBING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66F5118F, ped);
//     }

//     // IsPedFleeing | 0x5E486AA1
//     static Any IS_PED_FLEEING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E486AA1, ped);
//     }

//     // IsPedHoldingAnObject | 0x22811897
//     static Any IS_PED_HOLDING_AN_OBJECT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22811897, ped);
//     }

//     // IsPedInCover | 0x5C825D83
//     static Any IS_PED_IN_COVER(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C825D83, ped);
//     }

//     // IsPedInCutsceneBlockingBounds | 0x55916D7A
//     static Any IS_PED_IN_CUTSCENE_BLOCKING_BOUNDS(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x55916D7A, ped);
//     }

//     // IsPedInGroup | 0x365054A7
//     static Any IS_PED_IN_GROUP(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x365054A7, ped);
//     }

//     // IsPedJacking | 0x676F0004
//     static Any IS_PED_JACKING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x676F0004, ped);
//     }

//     // IsPedLookingAtCar | 0x4859273F
//     static Any IS_PED_LOOKING_AT_CAR(Ped ped, Car car)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4859273F, ped, car);
//     }

//     // IsPedLookingAtObject | 0x5DD231A2
//     static Any IS_PED_LOOKING_AT_OBJECT(Ped ped, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DD231A2, ped, obj);
//     }

//     // IsPedLookingAtPed | 0x7F206A7F
//     static Any IS_PED_LOOKING_AT_PED(Ped ped, Ped otherChar)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F206A7F, ped, otherChar);
//     }

//     // IsPedRagdoll | 0x3E251ADE
//     static Any IS_PED_RAGDOLL(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E251ADE, ped);
//     }

//     // IsPedRetreating | 0x7A0B156B
//     static Any IS_PED_RETREATING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A0B156B, ped);
//     }

//     // IsPedsVehicleHot | 0x470A7CBD
//     static Any IS_PEDS_VEHICLE_HOT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x470A7CBD, ped);
//     }

//     // IsThisPedAPlayer | 0x37C85316
//     static Any IS_THIS_PED_APLAYER(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37C85316, ped);
//     }

//     // KnockPedOffBike | 0x6CA57960
//     static Any KNOCK_PED_OFF_BIKE(Vehicle vehicle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6CA57960, vehicle);
//     }

//     // MakeRoomInPlayerGangForMissionPeds | 0x210E265E
//     static Any MAKE_ROOM_IN_PLAYER_GANG_FOR_MISSION_PEDS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x210E265E);
//     }

//     // PedQueueConsiderPedsWithFlagFalse | 0x555213B4
//     static Any PED_QUEUE_CONSIDER_PEDS_WITH_FLAG_FALSE(int32_t flagid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x555213B4, flagid);
//     }

//     // PedQueueConsiderPedsWithFlagTrue | 0x489C3A48
//     static Any PED_QUEUE_CONSIDER_PEDS_WITH_FLAG_TRUE(int32_t flagid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x489C3A48, flagid);
//     }

//     // PedQueueRejectPedsWithFlagFalse | 0x61A812F5
//     static Any PED_QUEUE_REJECT_PEDS_WITH_FLAG_FALSE(int32_t flagid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61A812F5, flagid);
//     }

//     // PedQueueRejectPedsWithFlagTrue | 0x79E5237B
//     static Any PED_QUEUE_REJECT_PEDS_WITH_FLAG_TRUE(int32_t flagid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79E5237B, flagid);
//     }

//     // PlayAudioEventFromPed | 0x61064783
//     static Any PLAY_AUDIO_EVENT_FROM_PED(char *name, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61064783, name, ped);
//     }

//     // PlaySoundFromPed | 0x56F37A81
//     static Any PLAY_SOUND_FROM_PED(int32_t SoundId, char *SoundName, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x56F37A81, SoundId, SoundName, ped);
//     }

//     // PointCamAtPed | 0x495B0B6F
//     static Any POINT_CAM_AT_PED(int32_t cam, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x495B0B6F, cam, ped);
//     }

//     // PointFixedCamAtPed | 0x3D3B5D94
//     static Any POINT_FIXED_CAM_AT_PED(Ped ped, int32_t cam)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D3B5D94, ped, cam);
//     }

//     // RegisterHatedTargetsAroundPed | 0x70A62140
//     static Any REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70A62140, ped, radius);
//     }

//     // RemoveCloseMicPed | 0x72B73FBA
//     static Any REMOVE_CLOSE_MIC_PED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72B73FBA, ped);
//     }

//     // RemoveFakeNetworkNameFromPed | 0x37A86FBD
//     static Any REMOVE_FAKE_NETWORK_NAME_FROM_PED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37A86FBD, ped);
//     }

//     // RemovePedHelmet | 0x15F033A6
//     static Any REMOVE_PED_HELMET(Ped ped, bool removed)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15F033A6, ped, removed);
//     }

//     // RemovePedQueue | 0x2FB410E4
//     static Any REMOVE_PED_QUEUE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FB410E4);
//     }

//     // RemovePtfxFromPed | 0x2FC9782A
//     static Any REMOVE_PTFX_FROM_PED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FC9782A, ped);
//     }

//     // ReserveNetworkMissionPeds | 0x4B2F6DDC
//     static Any RESERVE_NETWORK_MISSION_PEDS(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B2F6DDC, a1);
//     }

//     // ReserveNetworkMissionPedsForHost | 0x557C7C4A
//     static Any RESERVE_NETWORK_MISSION_PEDS_FOR_HOST(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x557C7C4A, a1);
//     }

//     // ResetVisiblePedDamage | 0x2A7247EF
//     static Any RESET_VISIBLE_PED_DAMAGE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A7247EF, ped);
//     }

//     // ReviveInjuredPed | 0x54EB576A
//     static Any REVIVE_INJURED_PED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x54EB576A, ped);
//     }

//     // SearchCriteriaConsiderPedsWithFlagFalse | 0x2A860E89
//     static Any SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_FALSE(int32_t flagid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A860E89, flagid);
//     }

//     // SearchCriteriaConsiderPedsWithFlagTrue | 0x20EC5B84
//     static Any SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE(uint32_t flagId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20EC5B84, flagId);
//     }

//     // SearchCriteriaRejectPedsWithFlagTrue | 0x27211B1A
//     static Any SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE(uint32_t flagId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27211B1A, flagId);
//     }

//     // SetAllPedsSpawnedAreCops | 0x632630C5
//     static Any SET_ALL_PEDS_SPAWNED_ARE_COPS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x632630C5);
//     }

//     // SetAllRandomPedsFlee | 0x110957EF
//     static Any SET_ALL_RANDOM_PEDS_FLEE(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x110957EF, player, set);
//     }

//     // SetAlternativeHeadForPedQueue | 0x5B814784
//     static Any SET_ALTERNATIVE_HEAD_FOR_PED_QUEUE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B814784);
//     }

//     // SetBikeRiderWillPutFootDownWhenStopped | 0x6E77153D
//     static Any SET_BIKE_RIDER_WILL_PUT_FOOT_DOWN_WHEN_STOPPED(Vehicle bike, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E77153D, bike, set);
//     }

//     // SetCamBehindPed | 0x48740598
//     static Any SET_CAM_BEHIND_PED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48740598, ped);
//     }

//     // SetCamInFrontOfPed | 0x423661A7
//     static Any SET_CAM_IN_FRONT_OF_PED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x423661A7, ped);
//     }

//     // SetCamTargetPed | 0x50E21E4C
//     static Any SET_CAM_TARGET_PED(Camera camera, Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50E21E4C, camera, ped);
//     }

//     // SetCollideWithPeds | 0x5FDF1493
//     static Any SET_COLLIDE_WITH_PEDS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5FDF1493, set);
//     }

//     // SetDeadPedsDropWeapons | 0x2A5262C0
//     static Any SET_DEAD_PEDS_DROP_WEAPONS(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A5262C0, set);
//     }

//     // SetFollowPedPitchLimitDown | 0x31DB4020
//     static Any SET_FOLLOW_PED_PITCH_LIMIT_DOWN(float pitchdownlim)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31DB4020, pitchdownlim);
//     }

//     // SetFollowPedPitchLimitUp | 0x360E2977
//     static Any SET_FOLLOW_PED_PITCH_LIMIT_UP(float pitchuplim)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x360E2977, pitchuplim);
//     }

//     // SetHeadingLimitForAttachedPed | 0x15B07D4D
//     static Any SET_HEADING_LIMIT_FOR_ATTACHED_PED(Ped ped, float heading0, float heading1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x15B07D4D, ped, heading0, heading1);
//     }

//     // SetMinMaxPedAccuracy | 0x74627538
//     static Any SET_MIN_MAX_PED_ACCURACY(Ped ped, float min, float max)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74627538, ped, min, max);
//     }

//     // SetMoneyCarriedByAllNewPeds | 0x64CA2868
//     static Any SET_MONEY_CARRIED_BY_ALL_NEW_PEDS(int32_t money)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64CA2868, money);
//     }

//     // SetNetworkPedUsingParachute | 0x6E8B7611
//     static Any SET_NETWORK_PED_USING_PARACHUTE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E8B7611, a1);
//     }

//     // SetPedAllowMissionOnlyDrivebyUse | 0x6E7C6687
//     static Any SET_PED_ALLOW_MISSION_ONLY_DRIVEBY_USE(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E7C6687, ped, set);
//     }

//     // SetPedAlpha | 0x5AA1795C
//     static Any SET_PED_ALPHA(Ped ped, int32_t alpha)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AA1795C, ped, alpha);
//     }

//     // SetPedComponentsToNetworkPlayersettingsModel | 0x5C3053C0
//     static Any SET_PED_COMPONENTS_TO_NETWORK_PLAYERSETTINGS_MODEL(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C3053C0, ped);
//     }

//     // SetPedDensityMultiplier | 0x540F2DF7
//     static Any SET_PED_DENSITY_MULTIPLIER(float density)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x540F2DF7, density);
//     }

//     // SetPedDiesWhenInjured | 0x3BF93ED7
//     static Any SET_PED_DIES_WHEN_INJURED(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BF93ED7, ped, value);
//     }

//     // SetPedDontDoEvasiveDives | 0x1EAD1D7D
//     static Any SET_PED_DONT_DO_EVASIVE_DIVES(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1EAD1D7D, ped, value);
//     }

//     // SetPedEnableLegIk | 0x695C429D
//     static Any SET_PED_ENABLE_LEG_IK(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x695C429D, ped, set);
//     }

//     // SetPedExistsOnAllMachines | 0x79700852
//     static Any SET_PED_EXISTS_ON_ALL_MACHINES(Ped ped, bool exists)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79700852, ped, exists);
//     }

//     // SetPedFallOffBikesWhenShot | 0x78E00C86
//     static Any SET_PED_FALL_OFF_BIKES_WHEN_SHOT(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78E00C86, ped, set);
//     }

//     // SetPedFireFxLodScaler | 0x679C4276
//     static Any SET_PED_FIRE_FX_LOD_SCALER(float scale)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x679C4276, scale);
//     }

//     // SetPedForceFlyThroughWindscreen | 0x6E354B41
//     static Any SET_PED_FORCE_FLY_THROUGH_WINDSCREEN(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E354B41, ped, set);
//     }

//     // SetPedForceVisualiseHeadDamageFromBullets | 0x2BA92322
//     static Any SET_PED_FORCE_VISUALISE_HEAD_DAMAGE_FROM_BULLETS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BA92322, ped, set);
//     }

//     // SetPedGeneratesDeadBodyEvents | 0x3DBF53E0
//     static Any SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3DBF53E0, ped, set);
//     }

//     // SetPedHeedsTheEveryoneIgnorePlayerFlag | 0x3BBE6DBE
//     static Any SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BBE6DBE, ped, set);
//     }

//     // SetPedHeliPilotRespectsMinimummHeight | 0x20BB5507
//     static Any SET_PED_HELI_PILOT_RESPECTS_MINIMUMM_HEIGHT(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x20BB5507, ped, set);
//     }

//     // SetPedHelmetTextureIndex | 0x6AC14091
//     static Any SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int32_t index)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6AC14091, ped, index);
//     }

//     // SetPedInstantBlendsWeaponAnims | 0x2CB572B5
//     static Any SET_PED_INSTANT_BLENDS_WEAPON_ANIMS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CB572B5, ped, set);
//     }

//     // SetPedIsDrunk | 0x67CC007C
//     static Any SET_PED_IS_DRUNK(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67CC007C, ped, value);
//     }

//     // SetPedMobileRingType | 0x7E1C01D7
//     static Any SET_PED_MOBILE_RING_TYPE(Ped ped, int32_t RingtoneId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E1C01D7, ped, RingtoneId);
//     }

//     // SetPedMotionBlur | 0x73E6005B
//     static Any SET_PED_MOTION_BLUR(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73E6005B, ped, set);
//     }

//     // SetPedNonCreationArea | 0x3DAB7D72
//     static Any SET_PED_NON_CREATION_AREA(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3DAB7D72, x0, y0, z0, x1, y1, z1);
//     }

//     // SetPedNonRemovalArea | 0x52D34ED3
//     static Any SET_PED_NON_REMOVAL_AREA(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52D34ED3, x0, y0, z0, x1, y1, z1);
//     }

//     // SetPedPathMayDropFromHeight | 0x4F37648C
//     static Any SET_PED_PATH_MAY_DROP_FROM_HEIGHT(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F37648C, ped, value);
//     }

//     // SetPedPathMayUseClimbovers | 0x34BD72D7
//     static Any SET_PED_PATH_MAY_USE_CLIMBOVERS(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34BD72D7, ped, value);
//     }

//     // SetPedPathMayUseLadders | 0x6B2838C7
//     static Any SET_PED_PATH_MAY_USE_LADDERS(Ped ped, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B2838C7, ped, value);
//     }

//     // SetPedPathWillAvoidDynamicObjects | 0x1E901BB6
//     static Any SET_PED_PATH_WILL_AVOID_DYNAMIC_OBJECTS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E901BB6, ped, set);
//     }

//     // SetPedSkipsComplexCoverCollisionChecks | 0x2CD33526
//     static Any SET_PED_SKIPS_COMPLEX_COVER_COLLISION_CHECKS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CD33526, ped, set);
//     }

//     // SetPedSteersAroundObjects | 0x7D071EE0
//     static Any SET_PED_STEERS_AROUND_OBJECTS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D071EE0, ped, set);
//     }

//     // SetPedSteersAroundPeds | 0x57A236F0
//     static Any SET_PED_STEERS_AROUND_PEDS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57A236F0, ped, set);
//     }

//     // SetPedStopCloning | 0x74C55395
//     static Any SET_PED_STOP_CLONING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74C55395);
//     }

//     // SetPedWindyClothingScale | 0x12865550
//     static Any SET_PED_WINDY_CLOTHING_SCALE(Ped ped, float scale)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12865550, ped, scale);
//     }

//     // SetPedWithBrainCanBeConvertedToDummyPed | 0x1461418C
//     static Any SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1461418C, ped, set);
//     }

//     // SetPedWontAttackPlayerWithoutWantedLevel | 0x3BF06336
//     static Any SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BF06336, ped, set);
//     }

//     // SetReducePedModelBudget | 0x44474526
//     static Any SET_REDUCE_PED_MODEL_BUDGET(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44474526, set);
//     }

//     // SetRotationForAttachedPed | 0x1FE21CF0
//     static Any SET_ROTATION_FOR_ATTACHED_PED(Ped ped, float xr, float yr, float zr)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1FE21CF0, ped, xr, yr, zr);
//     }

//     // SetScenarioPedDensityMultiplier | 0x3F0022F7
//     static Any SET_SCENARIO_PED_DENSITY_MULTIPLIER(float density, float densitynext)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F0022F7, density, densitynext);
//     }

//     // SetTrainIsStoppedAtStation | 0x270C7AB3
//     static Any SET_TRAIN_IS_STOPPED_AT_STATION(Vehicle train)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x270C7AB3, train);
//     }

//     // SpecifyScriptPopulationZoneNumPeds | 0x159A4ED4
//     static Any SPECIFY_SCRIPT_POPULATION_ZONE_NUM_PEDS(int32_t num)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x159A4ED4, num);
//     }

//     // SpecifyScriptPopulationZoneNumScenarioPeds | 0x6A733E6C
//     static Any SPECIFY_SCRIPT_POPULATION_ZONE_NUM_SCENARIO_PEDS(int32_t num)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A733E6C, num);
//     }

//     // StartPedMobileRinging | 0x79A12A52
//     static Any START_PED_MOBILE_RINGING(Ped ped, int32_t unk)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79A12A52, ped, unk);
//     }

//     // StartPtfxOnPed | 0x381C1F1C
//     static Any START_PTFX_ON_PED(char *name, Ped ped, float x, float y, float z, float a6, float a7, float a8, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x381C1F1C, name, ped, x, y, z, a6, a7, a8, flags);
//     }

//     // StartPtfxOnPedBone | 0x2209116C
//     static Any START_PTFX_ON_PED_BONE(char *name, Ped ped, float x, float y, float z, float a6, float a7, float a8, int32_t pedbone, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2209116C, name, ped, x, y, z, a6, a7, a8, pedbone, flags);
//     }

//     // StopPedDoingFallOffTestsWhenShot | 0x4E386C7B
//     static Any STOP_PED_DOING_FALL_OFF_TESTS_WHEN_SHOT(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E386C7B, ped);
//     }

//     // StopPedSpeaking | 0x710B2BD3
//     static Any STOP_PED_SPEAKING(Ped ped, bool stopspeaking)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x710B2BD3, ped, stopspeaking);
//     }

//     // StopPedWeaponFiringWhenDropped | 0x6E0026EF
//     static Any STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E0026EF, ped);
//     }

//     // SuppressPedModel | 0x4C5475E3
//     static Any SUPPRESS_PED_MODEL(uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C5475E3, model);
//     }

//     // SwitchArrowAboveBlippedPickups | 0x3A323C67
//     static Any SWITCH_ARROW_ABOVE_BLIPPED_PICKUPS(bool on)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A323C67, on);
//     }

//     // SwitchPedPathsOn | 0x67D908DF
//     static Any SWITCH_PED_PATHS_ON(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67D908DF, x0, y0, z0, x1, y1, z1);
//     }

//     // SwitchPedRoadsBackToOriginal | 0x6AA20B7E
//     static Any SWITCH_PED_ROADS_BACK_TO_ORIGINAL(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6AA20B7E, x0, y0, z0, x1, y1, z1);
//     }

//     // SwitchPedToAnimated | 0x762301C8
//     static Any SWITCH_PED_TO_ANIMATED(Ped ped, bool unknownTrue)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x762301C8, ped, unknownTrue);
//     }

//     // SwitchPedToRagdoll | 0x1A0F56C5
//     static Any SWITCH_PED_TO_RAGDOLL(Ped ped, int32_t unk, int32_t time, bool flag0, bool flag1, bool flag2, bool flag3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A0F56C5, ped, unk, time, flag0, flag1, flag2, flag3);
//     }

//     // SwitchPedToRagdollWithFall | 0x13E4042D
//     static Any SWITCH_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int a2, int a3, int a4, float a5, float a6, int a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13E4042D, ped, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
//     }

//     // TaskCarMissionPedTarget | 0x39C2663E
//     static Any TASK_CAR_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped target, uint32_t unknown0_4, float speed, uint32_t unknown2_1, uint32_t unknown3_5, uint32_t unknown4_10)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39C2663E, ped, vehicle, target, unknown0_4, speed, unknown2_1, unknown3_5, unknown4_10);
//     }

//     // TaskCarMissionPedTargetNotAgainstTraffic | 0x178332FF
//     static Any TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC(Ped ped, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x178332FF, ped, a2, a3, a4, a5, a6, a7, a8);
//     }

//     // TaskSeekCoverFromPed | 0x2D9C3D5E
//     static Any TASK_SEEK_COVER_FROM_PED(Ped ped, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2D9C3D5E, ped, a2, a3);
//     }

//     // TaskTogglePedThreatScanner | 0x5D515C4D
//     static Any TASK_TOGGLE_PED_THREAT_SCANNER(Ped ped, bool a2, bool a3, bool a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D515C4D, ped, a2, a3, a4);
//     }

//     // TimestepUnwarped | 0x49283645
//     static Any TIMESTEP_UNWARPED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49283645);
//     }

//     // TriggerPtfxOnPedBone | 0x7D3C3C9D
//     static Any TRIGGER_PTFX_ON_PED_BONE(char *name, Ped ped, float x, float y, float z, float a6, float a7, float a8, int32_t pedbone, uint32_t flags)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D3C3C9D, name, ped, x, y, z, a6, a7, a8, pedbone, flags);
//     }

//     // UpdatePedPhysicalAttachmentPosition | 0x10A62603
//     static Any UPDATE_PED_PHYSICAL_ATTACHMENT_POSITION(Ped ped, float x0, float y0, float z0, float x1, float y1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10A62603, ped, x0, y0, z0, x1, y1);
//     }

//     // WaitUnwarped | 0x771A298A
//     static Any WAIT_UNWARPED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x771A298A);
//     }

//     // WasCutsceneSkipped | 0x18F01E80
//     static Any WAS_CUTSCENE_SKIPPED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18F01E80);
//     }

//     // WasPedSkeletonUpdated | 0x3E8443E0
//     static Any WAS_PED_SKELETON_UPDATED(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E8443E0, ped);
//     }

// } // namespace PED

// namespace PHONE
// {

//     // AddFollowNavmeshToPhoneTask | 0x7F5D69C4
//     static Any ADD_FOLLOW_NAVMESH_TO_PHONE_TASK(Ped ped, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F5D69C4, ped, a2, a3, a4);
//     }

//     // CanPhoneBeSeenOnScreen | 0x5C9863F6
//     static Any CAN_PHONE_BE_SEEN_ON_SCREEN()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C9863F6);
//     }

//     // CanRenderRadiohudSpriteInMobilePhone | 0x58F209BD
//     static Any CAN_RENDER_RADIOHUD_SPRITE_IN_MOBILE_PHONE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58F209BD);
//     }

//     // CodeWantsMobilePhoneRemoved | 0x63DA2195
//     static Any CODE_WANTS_MOBILE_PHONE_REMOVED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63DA2195);
//     }

//     // CodeWantsMobilePhoneRemovedForWeaponSwitching | 0x736027E6
//     static Any CODE_WANTS_MOBILE_PHONE_REMOVED_FOR_WEAPON_SWITCHING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x736027E6);
//     }

//     // CreateMobilePhone | 0x2FEE095B
//     static Any CREATE_MOBILE_PHONE(int a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FEE095B, a1);
//     }

//     // DestroyMobilePhone | 0x38BE5BF6
//     static Any DESTROY_MOBILE_PHONE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38BE5BF6);
//     }

//     // GetCellphoneRanked | 0x6B6019DB
//     static Any GET_CELLPHONE_RANKED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B6019DB);
//     }

//     // GetMobilePhonePosition | 0x67C45774
//     static Any GET_MOBILE_PHONE_POSITION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67C45774);
//     }

//     // GetMobilePhoneRenderId | 0x5E7B3816
//     static Any GET_MOBILE_PHONE_RENDER_ID(uint32_t *pRenderId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E7B3816, pRenderId);
//     }

//     // GetMobilePhoneRotation | 0x13A83A28
//     static Any GET_MOBILE_PHONE_ROTATION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13A83A28);
//     }

//     // GetMobilePhoneScale | 0x1E951606
//     static Any GET_MOBILE_PHONE_SCALE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E951606);
//     }

//     // GetMobilePhoneTaskSubTask | 0x517B226E
//     static Any GET_MOBILE_PHONE_TASK_SUB_TASK(Ped ped, int32_t *a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x517B226E, ped, a2);
//     }

//     // IsMobilePhoneCallOngoing | 0x698F6172
//     static Any IS_MOBILE_PHONE_CALL_ONGOING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x698F6172);
//     }

//     // IsMobilePhoneRadioActive | 0x4AF14146
//     static Any IS_MOBILE_PHONE_RADIO_ACTIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AF14146);
//     }

//     // NewMobilePhoneCall | 0x720E7EA6
//     static Any NEW_MOBILE_PHONE_CALL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x720E7EA6);
//     }

//     // RenderRadiohudSpriteInMobilePhone | 0x704D5747
//     static Any RENDER_RADIOHUD_SPRITE_IN_MOBILE_PHONE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x704D5747);
//     }

//     // SetCellphoneRanked | 0x47E03E87
//     static Any SET_CELLPHONE_RANKED(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47E03E87, a1);
//     }

//     // SetMobilePhonePosition | 0x463832F7
//     static Any SET_MOBILE_PHONE_POSITION(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x463832F7, x, y, z);
//     }

//     // SetMobilePhoneRadioState | 0x52C83902
//     static Any SET_MOBILE_PHONE_RADIO_STATE(bool state)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52C83902, state);
//     }

//     // SetMobilePhoneRotation | 0x7E7E4879
//     static Any SET_MOBILE_PHONE_ROTATION(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E7E4879, x, y, z);
//     }

//     // SetMobilePhoneScale | 0x61C921EF
//     static Any SET_MOBILE_PHONE_SCALE(float scale)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61C921EF, scale);
//     }

//     // SetMobileRadioEnabledDuringGameplay | 0x688557E4
//     static Any SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x688557E4, set);
//     }

//     // SetMobileRingType | 0x24885050
//     static Any SET_MOBILE_RING_TYPE(int32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24885050, type);
//     }

//     // SetPhoneHudItem | 0x43A13718
//     static Any SET_PHONE_HUD_ITEM(int32_t id, char *gxttext, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43A13718, id, gxttext, a3);
//     }

//     // StartCustomMobilePhoneRinging | 0x59406EB1
//     static Any START_CUSTOM_MOBILE_PHONE_RINGING(int32_t RingtoneId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59406EB1, RingtoneId);
//     }

//     // StartMobilePhoneCall | 0x7939764F
//     static Any START_MOBILE_PHONE_CALL(Ped callfrom, char *callfromvoice, Ped callto, char *calltovoice, bool flag0, bool flag1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7939764F, callfrom, callfromvoice, callto, calltovoice, flag0, flag1);
//     }

//     // StartMobilePhoneCalling | 0x67114B98
//     static Any START_MOBILE_PHONE_CALLING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x67114B98);
//     }

//     // StartMobilePhoneRinging | 0x372C0DF1
//     static Any START_MOBILE_PHONE_RINGING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x372C0DF1);
//     }

//     // StopMobilePhoneRinging | 0x27356F3A
//     static Any STOP_MOBILE_PHONE_RINGING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27356F3A);
//     }

//     // TaskMobileConversation | 0x64903364
//     static Any TASK_MOBILE_CONVERSATION(Ped ped, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x64903364, ped, a2);
//     }

//     // TaskUseMobilePhone | 0x417F6EBD
//     static Any TASK_USE_MOBILE_PHONE(Ped ped, bool use)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x417F6EBD, ped, use);
//     }

// } // namespace PHONE

// namespace PICKUP
// {

//     // AddPickupToInteriorRoomByKey | 0x198B786F
//     static Any ADD_PICKUP_TO_INTERIOR_ROOM_BY_KEY(Object pickup, uint32_t room_hash)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x198B786F, pickup, room_hash);
//     }

//     // AllowMultipleDrivebyPickups | 0x7FC02528
//     static Any ALLOW_MULTIPLE_DRIVEBY_PICKUPS(bool allow)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FC02528, allow);
//     }

//     // CountPickupsOfType | 0x2E921B0F
//     static Any COUNT_PICKUPS_OF_TYPE(int32_t type)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E921B0F, type);
//     }

//     // CreatePickup | 0x7E2868D4
//     static Any CREATE_PICKUP(uint32_t model, uint32_t pickupType, float x, float y, float z, Pickup *pPickup, bool unknownFalse)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E2868D4, model, pickupType, x, y, z, pPickup, unknownFalse);
//     }

//     // CreatePickupRotate | 0x675E5940
//     static Any CREATE_PICKUP_ROTATE(uint32_t model, uint32_t pickupType, uint32_t unknown, float x, float y, float z, float rX, float rY, float rZ, Pickup *pPickup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x675E5940, model, pickupType, unknown, x, y, z, rX, rY, rZ, pPickup);
//     }

//     // CreatePickupWithAmmo | 0x1F736F00
//     static Any CREATE_PICKUP_WITH_AMMO(uint32_t model, uint32_t pickupType, uint32_t unknown, float x, float y, float z, Pickup *pPickup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F736F00, model, pickupType, unknown, x, y, z, pPickup);
//     }

//     // DoesPickupExist | 0x7B567F1A
//     static Any DOES_PICKUP_EXIST(Pickup pickup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B567F1A, pickup);
//     }

//     // GetRoomKeyFromPickup | 0x28045C47
//     static Any GET_ROOM_KEY_FROM_PICKUP(int32_t pickup, uint32_t *hash)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28045C47, pickup, hash);
//     }

//     // GetSafePickupCoords | 0x1AE44443
//     static Any GET_SAFE_PICKUP_COORDS(float x, float y, float z, float *pSafeX, float *pSafeY, float *pSafeZ)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1AE44443, x, y, z, pSafeX, pSafeY, pSafeZ);
//     }

//     // HasPickupBeenCollected | 0x2F2226E5
//     static Any HAS_PICKUP_BEEN_COLLECTED(Pickup pickup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F2226E5, pickup);
//     }

//     // IsAnyPickupAtCoords | 0x75DC4737
//     static Any IS_ANY_PICKUP_AT_COORDS(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75DC4737, x, y, z);
//     }

//     // IsMoneyPickupAtCoords | 0x43167C6E
//     static Any IS_MONEY_PICKUP_AT_COORDS(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43167C6E, x, y, z);
//     }

//     // PickupsPassTime | 0x59DA4975
//     static Any PICKUPS_PASS_TIME(uint32_t time)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x59DA4975, time);
//     }

//     // RemovePickup | 0x2119007F
//     static Any REMOVE_PICKUP(Pickup pickup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2119007F, pickup);
//     }

//     // ResetArmourPickupNetworkRegenTime | 0x5B4F27F9
//     static Any RESET_ARMOUR_PICKUP_NETWORK_REGEN_TIME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B4F27F9);
//     }

//     // ResetMoneyPickupNetworkRegenTime | 0x12FB7D2A
//     static Any RESET_MONEY_PICKUP_NETWORK_REGEN_TIME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12FB7D2A);
//     }

//     // ResetWeaponPickupNetworkRegenTime | 0x5F3459B2
//     static Any RESET_WEAPON_PICKUP_NETWORK_REGEN_TIME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5F3459B2);
//     }

//     // SetAlwaysDisplayWeaponPickupMessage | 0x3F0A2A72
//     static Any SET_ALWAYS_DISPLAY_WEAPON_PICKUP_MESSAGE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F0A2A72, set);
//     }

//     // SetArmourPickupNetworkRegenTime | 0x53CC1D3C
//     static Any SET_ARMOUR_PICKUP_NETWORK_REGEN_TIME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x53CC1D3C, a1);
//     }

//     // SetMissionPickupSound | 0x3F0F4E0C
//     static Any SET_MISSION_PICKUP_SOUND(uint32_t model, char *SoundName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F0F4E0C, model, SoundName);
//     }

//     // SetMoneyPickupNetworkRegenTime | 0x61243F34
//     static Any SET_MONEY_PICKUP_NETWORK_REGEN_TIME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61243F34);
//     }

//     // SetWeaponPickupNetworkRegenTime | 0x40D01439
//     static Any SET_WEAPON_PICKUP_NETWORK_REGEN_TIME(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40D01439, a1, a2);
//     }

// } // namespace PICKUP

// namespace PLAYER
// {

//     // AllowLockonToFriendlyPlayers | 0x362B5D1B
//     static Any ALLOW_LOCKON_TO_FRIENDLY_PLAYERS(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x362B5D1B, a1, a2);
//     }

//     // AttachParachuteModelToPlayer | 0x7EDD58E1
//     static Any ATTACH_PARACHUTE_MODEL_TO_PLAYER(Ped ped, Object obj)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EDD58E1, ped, obj);
//     }

//     // AwardPlayerMissionRespect | 0x7783449D
//     static Any AWARD_PLAYER_MISSION_RESPECT(float respect)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7783449D, respect);
//     }

//     // ChangePlayerModel | 0x232F1A85
//     static Any CHANGE_PLAYER_MODEL(Player playerIndex, uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x232F1A85, playerIndex, model);
//     }

//     // ChangePlayerPhoneModel | 0x7F2A71FD
//     static Any CHANGE_PLAYER_PHONE_MODEL(int32_t player, uint32_t model)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7F2A71FD, player, model);
//     }

//     // ChangePlayerPhoneModelOffsets | 0x481E2BE7
//     static Any CHANGE_PLAYER_PHONE_MODEL_OFFSETS(int32_t player, float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x481E2BE7, player, x0, y0, z0, x1, y1, z1);
//     }

//     // ClearShakePlayerpadWhenControllerDisabled | 0x3F1F51E0
//     static Any CLEAR_SHAKE_PLAYERPAD_WHEN_CONTROLLER_DISABLED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F1F51E0);
//     }

//     // ConvertIntToPlayerIndex | 0x5996315E
//     static Any CONVERT_INT_TO_PLAYER_INDEX(uint32_t playerId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5996315E, playerId);
//     }

//     // CreatePlayer | 0x335E3951
//     static Any CREATE_PLAYER(uint32_t playerId, float x, float y, float z, Player *pPlayerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x335E3951, playerId, x, y, z, pPlayerIndex);
//     }

//     // DeletePlayer | 0x627A3586
//     static Any DELETE_PLAYER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x627A3586);
//     }

//     // DisableLocalPlayerPickups | 0x19211E9D
//     static Any DISABLE_LOCAL_PLAYER_PICKUPS(bool disable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19211E9D, disable);
//     }

//     // DisablePlayerLockon | 0x711214F3
//     static Any DISABLE_PLAYER_LOCKON(Player playerIndex, bool disabled)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x711214F3, playerIndex, disabled);
//     }

//     // DisablePlayerSprint | 0x3A244927
//     static Any DISABLE_PLAYER_SPRINT(Player playerIndex, bool disabled)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A244927, playerIndex, disabled);
//     }

//     // DisplayPlayerIcons | 0x39B22A89
//     static Any DISPLAY_PLAYER_ICONS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x39B22A89);
//     }

//     // DoesPlayerHaveControlOfNetworkId | 0x3D0B5E56
//     static Any DOES_PLAYER_HAVE_CONTROL_OF_NETWORK_ID(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3D0B5E56, a1, a2);
//     }

//     // DontDispatchCopsForPlayer | 0x63B87EBE
//     static Any DONT_DISPATCH_COPS_FOR_PLAYER(int32_t player, bool dont)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63B87EBE, player, dont);
//     }

//     // FindNetworkKillerOfPlayer | 0x766E78A3
//     static Any FIND_NETWORK_KILLER_OF_PLAYER(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x766E78A3, a1);
//     }

//     // FlushAllPlayerRespawnCoords | 0x187B3202
//     static Any FLUSH_ALL_PLAYER_RESPAWN_COORDS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x187B3202);
//     }

//     // ForceInitialPlayerStation | 0x32D3165D
//     static Any FORCE_INITIAL_PLAYER_STATION(char *stationName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32D3165D, stationName);
//     }

//     // ForceInteriorLightingForPlayer | 0x45DF1D92
//     static Any FORCE_INTERIOR_LIGHTING_FOR_PLAYER(int32_t player, bool force)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45DF1D92, player, force);
//     }

//     // ForceNetPlayerInvisible | 0x162D395E
//     static Any FORCE_NET_PLAYER_INVISIBLE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x162D395E);
//     }

//     // GetGfwlIsReturningToSinglePlayer | 0x2FDF565D
//     static Any GET_GFWL_IS_RETURNING_TO_SINGLE_PLAYER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FDF565D);
//     }

//     // GetLeftPlayerCashToReachLevel | 0x6DD754DD
//     static Any GET_LEFT_PLAYER_CASH_TO_REACH_LEVEL(uint32_t playerRank)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6DD754DD, playerRank);
//     }

//     // GetLocalPlayerMpCash | 0x76B068CA
//     static Any GET_LOCAL_PLAYER_MP_CASH()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x76B068CA);
//     }

//     // GetLocalPlayerWeaponStat | 0x3CCC5AFD
//     static Any GET_LOCAL_PLAYER_WEAPON_STAT(int32_t wtype, int32_t wid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CCC5AFD, wtype, wid);
//     }

//     // GetNeededPlayerCashForLevel | 0x3C14367C
//     static Any GET_NEEDED_PLAYER_CASH_FOR_LEVEL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3C14367C);
//     }

//     // GetNoOfPlayersInTeam | 0x1CFD32E5
//     static Any GET_NO_OF_PLAYERS_IN_TEAM(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1CFD32E5, a1);
//     }

//     // GetNumOfModelsKilledByPlayer | 0x75B43A72
//     static Any GET_NUM_OF_MODELS_KILLED_BY_PLAYER(int32_t player, uint32_t model, int32_t *num)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75B43A72, player, model, num);
//     }

//     // GetNumberOfPlayers | 0x62405882
//     static Any GET_NUMBER_OF_PLAYERS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62405882);
//     }

//     // GetOverrideNoSprintingOnPhoneInMultiplayer | 0x5B652681
//     static Any GET_OVERRIDE_NO_SPRINTING_ON_PHONE_IN_MULTIPLAYER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B652681);
//     }

//     // GetPlayerColour | 0x25270A4B
//     static Any GET_PLAYER_COLOUR(int32_t Player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25270A4B, Player);
//     }

//     // GetPlayerGroup | 0x41AB3C30
//     static Any GET_PLAYER_GROUP(Player playerIndex, Group *pGroup)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x41AB3C30, playerIndex, pGroup);
//     }

//     // GetPlayerHasTracks | 0x396844BE
//     static Any GET_PLAYER_HAS_TRACKS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x396844BE);
//     }

//     // GetPlayerId | 0x62E319C6
//     static Any GET_PLAYER_ID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x62E319C6);
//     }

//     // GetPlayerLcpdScore | 0x2BEB02D6
//     static Any GET_PLAYER_LCPD_SCORE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BEB02D6);
//     }

//     // GetPlayerMaxArmour | 0x17265607
//     static Any GET_PLAYER_MAX_ARMOUR(Player playerIndex, uint32_t *pMaxArmour)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17265607, playerIndex, pMaxArmour);
//     }

//     // GetPlayerMaxHealth | 0x52F27084
//     static Any GET_PLAYER_MAX_HEALTH(int32_t player, int32_t *maxhealth)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x52F27084, player, maxhealth);
//     }

//     // GetPlayerName | 0x570F5725
//     static Any GET_PLAYER_NAME(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x570F5725, playerIndex);
//     }

//     // GetPlayerRadioMode | 0x32795678
//     static Any GET_PLAYER_RADIO_MODE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32795678);
//     }

//     // GetPlayerRadioStationIndex | 0x4E493AAF
//     static Any GET_PLAYER_RADIO_STATION_INDEX()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E493AAF);
//     }

//     // GetPlayerRadioStationName | 0x25136AC2
//     static Any GET_PLAYER_RADIO_STATION_NAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25136AC2);
//     }

//     // GetPlayerRadioStationNameRoll | 0x1A936344
//     static Any GET_PLAYER_RADIO_STATION_NAME_ROLL()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A936344);
//     }

//     // GetPlayerRankLevelDuringMp | 0x7B31633E
//     static Any GET_PLAYER_RANK_LEVEL_DURING_MP(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7B31633E, a1);
//     }

//     // GetPlayerRgbColour | 0x73BD71A9
//     static Any GET_PLAYER_RGB_COLOUR(int32_t Player, int32_t *r, int32_t *g, int32_t *b)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73BD71A9, Player, r, g, b);
//     }

//     // GetPlayerTeam | 0x4C2879AD
//     static Any GET_PLAYER_TEAM(int32_t Player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C2879AD, Player);
//     }

//     // GetPlayerWantedLevelIncrement | 0x44BB2306
//     static Any GET_PLAYER_WANTED_LEVEL_INCREMENT(int32_t player, int32_t *increment)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44BB2306, player, increment);
//     }

//     // GetPlayersettingsModelChoice | 0x116E5A1F
//     static Any GET_PLAYERSETTINGS_MODEL_CHOICE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x116E5A1F);
//     }

//     // GetTimeSincePlayerDroveAgainstTraffic | 0x3B007E58
//     static Any GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3B007E58, playerIndex);
//     }

//     // GetTimeSincePlayerDroveOnPavement | 0x19610E35
//     static Any GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x19610E35, playerIndex);
//     }

//     // GetTimeSincePlayerHitBuilding | 0x126C0B99
//     static Any GET_TIME_SINCE_PLAYER_HIT_BUILDING(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x126C0B99, playerIndex);
//     }

//     // GetTimeSincePlayerRanLight | 0x65D95395
//     static Any GET_TIME_SINCE_PLAYER_RAN_LIGHT(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65D95395, playerIndex);
//     }

//     // GetTrainPlayerWouldEnter | 0x30481141
//     static Any GET_TRAIN_PLAYER_WOULD_ENTER(int32_t player, int32_t *train)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30481141, player, train);
//     }

//     // GivePlayerHelmet | 0x463F190F
//     static Any GIVE_PLAYER_HELMET()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x463F190F);
//     }

//     // GivePlayerRagdollControl | 0x5A1D7A2F
//     static Any GIVE_PLAYER_RAGDOLL_CONTROL(int32_t player, bool give)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A1D7A2F, player, give);
//     }

//     // GiveRemoteControlledModelToPlayer | 0x663979D9
//     static Any GIVE_REMOTE_CONTROLLED_MODEL_TO_PLAYER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x663979D9);
//     }

//     // HasNetworkPlayerLeftGame | 0x135154B0
//     static Any HAS_NETWORK_PLAYER_LEFT_GAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x135154B0, a1);
//     }

//     // HasPlayerRankBeenUpgraded | 0x6A842382
//     static Any HAS_PLAYER_RANK_BEEN_UPGRADED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6A842382);
//     }

//     // HowLongHasNetworkPlayerBeenDeadFor | 0x4E6120A9
//     static Any HOW_LONG_HAS_NETWORK_PLAYER_BEEN_DEAD_FOR(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E6120A9, a1);
//     }

//     // IncreasePlayerMaxArmour | 0x2232704D
//     static Any INCREASE_PLAYER_MAX_ARMOUR(int32_t player, float armour)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2232704D, player, armour);
//     }

//     // IncreasePlayerMaxHealth | 0x40A703A6
//     static Any INCREASE_PLAYER_MAX_HEALTH(int32_t player, int32_t maxhealth)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40A703A6, player, maxhealth);
//     }

//     // Is2playerGameGoingOn | 0x604E1C46
//     static Any IS2PLAYER_GAME_GOING_ON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x604E1C46);
//     }

//     // IsAttachedPlayerHeadingAchieved | 0x487A1886
//     static Any IS_ATTACHED_PLAYER_HEADING_ACHIEVED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x487A1886);
//     }

//     // IsInPlayerSettingsMenu | 0x18CA2D3A
//     static Any IS_IN_PLAYER_SETTINGS_MENU()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18CA2D3A);
//     }

//     // IsNetworkPlayerActive | 0x4E237943
//     static Any IS_NETWORK_PLAYER_ACTIVE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E237943, a1);
//     }

//     // IsNetworkPlayerVisible | 0x1031625F
//     static Any IS_NETWORK_PLAYER_VISIBLE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1031625F);
//     }

//     // IsPlayerBeingArrested | 0x79A95BF9
//     static Any IS_PLAYER_BEING_ARRESTED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79A95BF9);
//     }

//     // IsPlayerClimbing | 0x3BF5404E
//     static Any IS_PLAYER_CLIMBING(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BF5404E, playerIndex);
//     }

//     // IsPlayerControlOn | 0x30CD2F1F
//     static Any IS_PLAYER_CONTROL_ON(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30CD2F1F, playerIndex);
//     }

//     // IsPlayerDead | 0x12AE0E27
//     static Any IS_PLAYER_DEAD(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12AE0E27, playerIndex);
//     }

//     // IsPlayerFreeForAmbientTask | 0x63E7509E
//     static Any IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63E7509E, playerIndex);
//     }

//     // IsPlayerInRemoteMode | 0x526B7BA9
//     static Any IS_PLAYER_IN_REMOTE_MODE(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x526B7BA9, player);
//     }

//     // IsPlayerInShortcutTaxi | 0x44052D59
//     static Any IS_PLAYER_IN_SHORTCUT_TAXI()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x44052D59);
//     }

//     // IsPlayerOnline | 0x61C65FDE
//     static Any IS_PLAYER_ONLINE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61C65FDE);
//     }

//     // IsPlayerPerformingStoppie | 0x2E815A94
//     static Any IS_PLAYER_PERFORMING_STOPPIE(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E815A94, player);
//     }

//     // IsPlayerPerformingWheelie | 0x613510D0
//     static Any IS_PLAYER_PERFORMING_WHEELIE(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x613510D0, player);
//     }

//     // IsPlayerPressingHorn | 0x583A7A8B
//     static Any IS_PLAYER_PRESSING_HORN(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x583A7A8B, playerIndex);
//     }

//     // IsPlayerReadyForCutscene | 0x29D46FF4
//     static Any IS_PLAYER_READY_FOR_CUTSCENE(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29D46FF4, player);
//     }

//     // IsPlayerScriptControlOn | 0x38861F3A
//     static Any IS_PLAYER_SCRIPT_CONTROL_ON(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38861F3A, player);
//     }

//     // IsPlayerSignedInLocally | 0x547523EE
//     static Any IS_PLAYER_SIGNED_IN_LOCALLY()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x547523EE);
//     }

//     // IsPlayerTargettingAnything | 0x665F6BB7
//     static Any IS_PLAYER_TARGETTING_ANYTHING(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x665F6BB7, playerIndex);
//     }

//     // LaunchLocalPlayerInNetworkGame | 0x70FE415C
//     static Any LAUNCH_LOCAL_PLAYER_IN_NETWORK_GAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70FE415C);
//     }

//     // LimitTwoPlayerDistance | 0x50AD1F3E
//     static Any LIMIT_TWO_PLAYER_DISTANCE(float distance)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x50AD1F3E, distance);
//     }

//     // ListenToPlayerGroupCommands | 0x34AC73D6
//     static Any LISTEN_TO_PLAYER_GROUP_COMMANDS(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34AC73D6, ped, set);
//     }

//     // LocalPlayerIsReadyToStartPlaying | 0x5C03585C
//     static Any LOCAL_PLAYER_IS_READY_TO_START_PLAYING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5C03585C);
//     }

//     // LockPlayerSettingsGenreChange | 0x33F4498E
//     static Any LOCK_PLAYER_SETTINGS_GENRE_CHANGE(int32_t lock_bit_mask)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x33F4498E, lock_bit_mask);
//     }

//     // MakePlayerFireProof | 0x38293796
//     static Any MAKE_PLAYER_FIRE_PROOF(int32_t player, bool proof)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38293796, player, proof);
//     }

//     // MakePlayerGangDisappear | 0x34211CDA
//     static Any MAKE_PLAYER_GANG_DISAPPEAR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x34211CDA);
//     }

//     // MakePlayerGangReappear | 0x295A652A
//     static Any MAKE_PLAYER_GANG_REAPPEAR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x295A652A);
//     }

//     // MakePlayerSafeForCutscene | 0x45852A03
//     static Any MAKE_PLAYER_SAFE_FOR_CUTSCENE(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45852A03, player);
//     }

//     // NetworkAmIBlockedByPlayer | 0x4FAF2007
//     static Any NETWORK_AM_IBLOCKED_BY_PLAYER(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4FAF2007, a1);
//     }

//     // NetworkAmIMutedByPlayer | 0x448F486A
//     static Any NETWORK_AM_IMUTED_BY_PLAYER(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x448F486A, a1);
//     }

//     // NetworkExpandTo32Players | 0x36511E0A
//     static Any NETWORK_EXPAND_TO32PLAYERS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x36511E0A);
//     }

//     // NetworkGetNumPlayersMet | 0x33500089
//     static Any NETWORK_GET_NUM_PLAYERS_MET()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x33500089);
//     }

//     // NetworkGetPlayerIdOfNextTextChat | 0x145B50AF
//     static Any NETWORK_GET_PLAYER_ID_OF_NEXT_TEXT_CHAT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x145B50AF);
//     }

//     // NetworkGetRendezvousHostPlayerId | 0x282D29FE
//     static Any NETWORK_GET_RENDEZVOUS_HOST_PLAYER_ID()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x282D29FE);
//     }

//     // NetworkIsPlayerBlockedByMe | 0x23B76F88
//     static Any NETWORK_IS_PLAYER_BLOCKED_BY_ME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x23B76F88, a1);
//     }

//     // NetworkIsPlayerMutedByMe | 0x120962E7
//     static Any NETWORK_IS_PLAYER_MUTED_BY_ME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x120962E7, a1);
//     }

//     // NetworkIsPlayerTalking | 0x544625D9
//     static Any NETWORK_IS_PLAYER_TALKING(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x544625D9, a1);
//     }

//     // NetworkIsPlayerTyping | 0x5AE1245E
//     static Any NETWORK_IS_PLAYER_TYPING(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5AE1245E, a1);
//     }

//     // NetworkKickPlayer | 0x7E8C1C45
//     static Any NETWORK_KICK_PLAYER(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E8C1C45, a1, a2);
//     }

//     // NetworkPlayerHasCommPrivs | 0x2854024A
//     static Any NETWORK_PLAYER_HAS_COMM_PRIVS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2854024A);
//     }

//     // NetworkPlayerHasDiedRecently | 0x75CD1A28
//     static Any NETWORK_PLAYER_HAS_DIED_RECENTLY(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75CD1A28, a1);
//     }

//     // NetworkPlayerHasHeadset | 0x408E2F70
//     static Any NETWORK_PLAYER_HAS_HEADSET(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x408E2F70, a1);
//     }

//     // NetworkSetLocalPlayerCanTalk | 0x4CC379D0
//     static Any NETWORK_SET_LOCAL_PLAYER_CAN_TALK()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4CC379D0);
//     }

//     // NetworkSetLocalPlayerIsTyping | 0x141D24A6
//     static Any NETWORK_SET_LOCAL_PLAYER_IS_TYPING(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x141D24A6, a1);
//     }

//     // NetworkShowMetPlayerFeedbackUi | 0x2CD73270
//     static Any NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CD73270, a1);
//     }

//     // NetworkShowMetPlayerProfileUi | 0x1B183AFE
//     static Any NETWORK_SHOW_MET_PLAYER_PROFILE_UI(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B183AFE, a1);
//     }

//     // NetworkShowPlayerFeedbackUi | 0x6FC54C6B
//     static Any NETWORK_SHOW_PLAYER_FEEDBACK_UI()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6FC54C6B);
//     }

//     // NetworkShowPlayerProfileUi | 0x6F2A5430
//     static Any NETWORK_SHOW_PLAYER_PROFILE_UI(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6F2A5430, a1);
//     }

//     // PlayerHasFlashingStarsAboutToDrop | 0x69804B35
//     static Any PLAYER_HAS_FLASHING_STARS_ABOUT_TO_DROP(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69804B35, playerIndex);
//     }

//     // PlayerHasGreyedOutStars | 0x2B670CD0
//     static Any PLAYER_HAS_GREYED_OUT_STARS(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B670CD0, playerIndex);
//     }

//     // PlayerIsInteractingWithGarage | 0x2B446480
//     static Any PLAYER_IS_INTERACTING_WITH_GARAGE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B446480);
//     }

//     // PlayerIsNearFirstPigeon | 0x6D631CED
//     static Any PLAYER_IS_NEAR_FIRST_PIGEON(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6D631CED, x, y, z);
//     }

//     // PlayerIsPissedOff | 0x7FA21A1E
//     static Any PLAYER_IS_PISSED_OFF(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7FA21A1E, player);
//     }

//     // PlayerWantsToJoinNetworkGame | 0x7D99343C
//     static Any PLAYER_WANTS_TO_JOIN_NETWORK_GAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D99343C, a1);
//     }

//     // RegisterKillInMultiplayerGame | 0x7D6D0A6C
//     static Any REGISTER_KILL_IN_MULTIPLAYER_GAME(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7D6D0A6C, a1, a2, a3);
//     }

//     // RegisterMultiplayerGameWin | 0x43E41D81
//     static Any REGISTER_MULTIPLAYER_GAME_WIN(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43E41D81, a1, a2);
//     }

//     // ReleaseTwoPlayerDistance | 0x6423636D
//     static Any RELEASE_TWO_PLAYER_DISTANCE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6423636D);
//     }

//     // RemovePlayerHelmet | 0x5CF1303D
//     static Any REMOVE_PLAYER_HELMET(Player playerIndex, bool remove)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5CF1303D, playerIndex, remove);
//     }

//     // ResetLocalPlayerWeaponStat | 0x6C1344C6
//     static Any RESET_LOCAL_PLAYER_WEAPON_STAT(int32_t wtype, int32_t wid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C1344C6, wtype, wid);
//     }

//     // ResurrectNetworkPlayer | 0x17901684
//     static Any RESURRECT_NETWORK_PLAYER(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17901684, a1, a2, a3, a4, a5);
//     }

//     // SetDisablePlayerShoveAnimation | 0x73F869CF
//     static Any SET_DISABLE_PLAYER_SHOVE_ANIMATION(Ped ped, bool disable)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73F869CF, ped, disable);
//     }

//     // SetDontActivateRagdollFromPlayerImpact | 0x5A676BCD
//     static Any SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A676BCD, ped, set);
//     }

//     // SetDrawPlayerComponent | 0x3EFE3DC8
//     static Any SET_DRAW_PLAYER_COMPONENT(int32_t component, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3EFE3DC8, component, set);
//     }

//     // SetForcePlayerToEnterThroughDirectDoor | 0x79B73666
//     static Any SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR(Ped ped, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x79B73666, ped, set);
//     }

//     // SetGfwlIsReturningToSinglePlayer | 0x755F292D
//     static Any SET_GFWL_IS_RETURNING_TO_SINGLE_PLAYER(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x755F292D, a1);
//     }

//     // SetHasBeenOwnedByPlayer | 0x25750E4F
//     static Any SET_HAS_BEEN_OWNED_BY_PLAYER(Car car, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25750E4F, car, set);
//     }

//     // SetHeadingForAttachedPlayer | 0x6B247B9E
//     static Any SET_HEADING_FOR_ATTACHED_PLAYER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B247B9E);
//     }

//     // SetIkDisabledForNetworkPlayer | 0x13B27FFE
//     static Any SET_IK_DISABLED_FOR_NETWORK_PLAYER(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13B27FFE, a1, a2);
//     }

//     // SetLocalPlayerPainVoice | 0x1DDD0073
//     static Any SET_LOCAL_PLAYER_PAIN_VOICE(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DDD0073, name);
//     }

//     // SetMultiplayerBrief | 0x1F5A6C94
//     static Any SET_MULTIPLAYER_BRIEF()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1F5A6C94);
//     }

//     // SetMultiplayerHudTime | 0x3A820D46
//     static Any SET_MULTIPLAYER_HUD_TIME(char *str)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A820D46, str);
//     }

//     // SetNetworkPlayerAsVip | 0x28251E62
//     static Any SET_NETWORK_PLAYER_AS_VIP(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x28251E62, a1, a2);
//     }

//     // SetOverrideNoSprintingOnPhoneInMultiplayer | 0x75F85826
//     static Any SET_OVERRIDE_NO_SPRINTING_ON_PHONE_IN_MULTIPLAYER(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x75F85826, a1);
//     }

//     // SetPlayerAsCop | 0x1D161BB8
//     static Any SET_PLAYER_AS_COP(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D161BB8, player, set);
//     }

//     // SetPlayerAsDamagedPlayer | 0x633A012B
//     static Any SET_PLAYER_AS_DAMAGED_PLAYER(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x633A012B, a1, a2, a3);
//     }

//     // SetPlayerCanDoDriveBy | 0x561471FB
//     static Any SET_PLAYER_CAN_DO_DRIVE_BY(Player playerIndex, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x561471FB, playerIndex, value);
//     }

//     // SetPlayerCanUseCover | 0x4AC023C4
//     static Any SET_PLAYER_CAN_USE_COVER(Player playerIndex, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AC023C4, playerIndex, value);
//     }

//     // SetPlayerColour | 0x6C8F2EEE
//     static Any SET_PLAYER_COLOUR()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C8F2EEE);
//     }

//     // SetPlayerControl | 0x1A6203EA
//     static Any SET_PLAYER_CONTROL(Player playerIndex, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1A6203EA, playerIndex, value);
//     }

//     // SetPlayerControlAdvanced | 0x31E25160
//     static Any SET_PLAYER_CONTROL_ADVANCED(Player playerIndex, bool unknown1, bool unknown2, bool unknown3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31E25160, playerIndex, unknown1, unknown2, unknown3);
//     }

//     // SetPlayerControlForAmbientScript | 0x647E2BF7
//     static Any SET_PLAYER_CONTROL_FOR_AMBIENT_SCRIPT(int32_t player, bool flag0, bool flag1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x647E2BF7, player, flag0, flag1);
//     }

//     // SetPlayerControlForNetwork | 0x2AF07CC8
//     static Any SET_PLAYER_CONTROL_FOR_NETWORK(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2AF07CC8, a1, a2, a3);
//     }

//     // SetPlayerControlForTextChat | 0x13267663
//     static Any SET_PLAYER_CONTROL_FOR_TEXT_CHAT(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13267663, player, set);
//     }

//     // SetPlayerDisableCrouch | 0x3BB57426
//     static Any SET_PLAYER_DISABLE_CROUCH(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3BB57426, player, set);
//     }

//     // SetPlayerDisableJump | 0x4B5832BE
//     static Any SET_PLAYER_DISABLE_JUMP(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B5832BE, player, set);
//     }

//     // SetPlayerFastReload | 0x29B53DFF
//     static Any SET_PLAYER_FAST_RELOAD(Player playerIndex, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x29B53DFF, playerIndex, value);
//     }

//     // SetPlayerForcedAim | 0x7E603872
//     static Any SET_PLAYER_FORCED_AIM(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E603872, player, set);
//     }

//     // SetPlayerGroupRecruitment | 0x7A9B6E17
//     static Any SET_PLAYER_GROUP_RECRUITMENT(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A9B6E17, player, set);
//     }

//     // SetPlayerGroupToFollowAlways | 0x700165C2
//     static Any SET_PLAYER_GROUP_TO_FOLLOW_ALWAYS(Player playerIndex, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x700165C2, playerIndex, value);
//     }

//     // SetPlayerGroupToFollowNever | 0x4F29072E
//     static Any SET_PLAYER_GROUP_TO_FOLLOW_NEVER(int32_t player, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F29072E, player, set);
//     }

//     // SetPlayerIconColour | 0x689D5EEE
//     static Any SET_PLAYER_ICON_COLOUR(int32_t colour)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x689D5EEE, colour);
//     }

//     // SetPlayerInvincible | 0x7E9E02E1
//     static Any SET_PLAYER_INVINCIBLE(Player playerIndex, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7E9E02E1, playerIndex, value);
//     }

//     // SetPlayerInvisibleToAi | 0x68083431
//     static Any SET_PLAYER_INVISIBLE_TO_AI(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68083431, set);
//     }

//     // SetPlayerIsInStadium | 0x349D5C27
//     static Any SET_PLAYER_IS_IN_STADIUM(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x349D5C27, set);
//     }

//     // SetPlayerKeepsWeaponsWhenRespawned | 0x6C321179
//     static Any SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C321179, set);
//     }

//     // SetPlayerMoodNormal | 0x546F5326
//     static Any SET_PLAYER_MOOD_NORMAL(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x546F5326, playerIndex);
//     }

//     // SetPlayerMoodPissedOff | 0x5E061170
//     static Any SET_PLAYER_MOOD_PISSED_OFF(Player playerIndex, uint32_t unknown150)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E061170, playerIndex, unknown150);
//     }

//     // SetPlayerMpModifier | 0x2B111E69
//     static Any SET_PLAYER_MP_MODIFIER(int32_t player, int a2, float modifier)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2B111E69, player, a2, modifier);
//     }

//     // SetPlayerPainRootBankName | 0x70AF1D38
//     static Any SET_PLAYER_PAIN_ROOT_BANK_NAME(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70AF1D38, name);
//     }

//     // SetPlayerPlayerTargetting | 0x46920944
//     static Any SET_PLAYER_PLAYER_TARGETTING(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x46920944, set);
//     }

//     // SetPlayerSettingsGenre | 0x379B0A8F
//     static Any SET_PLAYER_SETTINGS_GENRE(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x379B0A8F, ped);
//     }

//     // SetPlayerTeam | 0x3E733990
//     static Any SET_PLAYER_TEAM(int32_t Player, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3E733990, Player, a2);
//     }

//     // SetPlayersettingsModelVariationsChoice | 0x27650F37
//     static Any SET_PLAYERSETTINGS_MODEL_VARIATIONS_CHOICE(Player playerIndex)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27650F37, playerIndex);
//     }

//     // SetPoliceIgnorePlayer | 0x619D51D3
//     static Any SET_POLICE_IGNORE_PLAYER(Player playerIndex, bool value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x619D51D3, playerIndex, value);
//     }

//     // ShakePlayerpadWhenControllerDisabled | 0x691970FD
//     static Any SHAKE_PLAYERPAD_WHEN_CONTROLLER_DISABLED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x691970FD);
//     }

//     // ShutdownAndLaunchSinglePlayerGame | 0x49FD2621
//     static Any SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49FD2621);
//     }

//     // StoreDamageTrackerForNetworkPlayer | 0x68373878
//     static Any STORE_DAMAGE_TRACKER_FOR_NETWORK_PLAYER(Any a1, Any a2, Any a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68373878, a1, a2, a3);
//     }

//     // TeleportNetworkPlayer | 0x2EE310C5
//     static Any TELEPORT_NETWORK_PLAYER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2EE310C5);
//     }

//     // TellNetPlayerToStartPlaying | 0x465D424D
//     static Any TELL_NET_PLAYER_TO_START_PLAYING(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x465D424D, a1, a2);
//     }

//     // UpdatePlayerLcpdScore | 0x49EC44CA
//     static Any UPDATE_PLAYER_LCPD_SCORE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49EC44CA);
//     }

//     // UsePlayerColourInsteadOfTeamColour | 0x759B6BBE
//     static Any USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x759B6BBE, a1);
//     }

//     // WhatWillPlayerPickup | 0x2F9B0583
//     static Any WHAT_WILL_PLAYER_PICKUP(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F9B0583, player);
//     }

// } // namespace PLAYER

// namespace SCRIPT
// {

//     // AbortScriptedConversation | 0x57DB70CE
//     static Any ABORT_SCRIPTED_CONVERSATION(bool abort)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57DB70CE, abort);
//     }

//     // AddLineToScriptedConversation | 0x416413F6
//     static Any ADD_LINE_TO_SCRIPTED_CONVERSATION(uint32_t conversation, int a2, int a3)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x416413F6, conversation, a2, a3);
//     }

//     // AllowThisScriptToBePaused | 0x3514533B
//     static Any ALLOW_THIS_SCRIPT_TO_BE_PAUSED(bool allows)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3514533B, allows);
//     }

//     // ClearScriptArrayFromScratchpad | 0x6E120246
//     static Any CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6E120246, a1);
//     }

//     // ClearScriptedConversionCentre | 0x2E4662B3
//     static Any CLEAR_SCRIPTED_CONVERSION_CENTRE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2E4662B3);
//     }

//     // DeactivateScriptPopulationZone | 0x66BB737D
//     static Any DEACTIVATE_SCRIPT_POPULATION_ZONE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66BB737D);
//     }

//     // DestroyThread | 0x47381E59
//     static Any DESTROY_THREAD(int32_t ScriptHandle)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47381E59, ScriptHandle);
//     }

//     // DisplayLoadingThisFrameWithScriptSprites | 0x38A10933
//     static Any DISPLAY_LOADING_THIS_FRAME_WITH_SCRIPT_SPRITES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x38A10933);
//     }

//     // DoesScriptExist | 0x1D1B266B
//     static Any DOES_SCRIPT_EXIST(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1D1B266B, name);
//     }

//     // DoesScriptFireExist | 0x637E1D42
//     static Any DOES_SCRIPT_FIRE_EXIST(int32_t fire)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x637E1D42, fire);
//     }

//     // DoesThisMinigameScriptAllowNonMinigameHelpMessages | 0x73A1443F
//     static Any DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73A1443F);
//     }

//     // EnableScriptControlledMicrophone | 0x3EA0648D
//     static Any ENABLE_SCRIPT_CONTROLLED_MICROPHONE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3EA0648D);
//     }

//     // FixScriptMicToCurrentPosisition | 0x456C0C43
//     static Any FIX_SCRIPT_MIC_TO_CURRENT_POSISITION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x456C0C43);
//     }

//     // GetNameOfScriptToAutomaticallyStart | 0x72C13404
//     static Any GET_NAME_OF_SCRIPT_TO_AUTOMATICALLY_START()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72C13404);
//     }

//     // GetNumberOfInstancesOfStreamedScript | 0x5A1C52C7
//     static Any GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(char *scriptName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A1C52C7, scriptName);
//     }

//     // GetScriptFireCoords | 0x4F256F49
//     static Any GET_SCRIPT_FIRE_COORDS(int32_t fire, float *x, float *y, float *z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F256F49, fire, x, y, z);
//     }

//     // GetScriptRendertargetRenderId | 0x58296B19
//     static Any GET_SCRIPT_RENDERTARGET_RENDER_ID(uint32_t *pRenderId)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x58296B19, pRenderId);
//     }

//     // GetScriptTaskStatus | 0x74C14D31
//     static Any GET_SCRIPT_TASK_STATUS(Ped ped, int32_t task, int32_t *status)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x74C14D31, ped, task, status);
//     }

//     // HasScriptLoaded | 0x2A171915
//     static Any HAS_SCRIPT_LOADED(char *scriptName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A171915, scriptName);
//     }

//     // IsScriptFireExtinguished | 0x394C1E55
//     static Any IS_SCRIPT_FIRE_EXTINGUISHED(FireId fire)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x394C1E55, fire);
//     }

//     // IsScriptedConversationOngoing | 0x3CA23254
//     static Any IS_SCRIPTED_CONVERSATION_ONGOING()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3CA23254);
//     }

//     // IsScriptedSpeechPlaying | 0x12D71B44
//     static Any IS_SCRIPTED_SPEECH_PLAYING(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x12D71B44, ped);
//     }

//     // IsThisAMinigameScript | 0x219A3AF6
//     static Any IS_THIS_AMINIGAME_SCRIPT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x219A3AF6);
//     }

//     // NetworkSetScriptLobbyState | 0x17767D95
//     static Any NETWORK_SET_SCRIPT_LOBBY_STATE(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17767D95, a1);
//     }

//     // NewScriptedConversation | 0x6C213305
//     static Any NEW_SCRIPTED_CONVERSATION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C213305);
//     }

//     // PauseScriptedConversation | 0x2A491A70
//     static Any PAUSE_SCRIPTED_CONVERSATION(bool pause)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A491A70, pause);
//     }

//     // PrintMissionDescription | 0x65712730
//     static Any PRINT_MISSION_DESCRIPTION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x65712730);
//     }

//     // RegisterScriptWithAudio | 0x5B4452F3
//     static Any REGISTER_SCRIPT_WITH_AUDIO(bool reg)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B4452F3, reg);
//     }

//     // RegisterWorldPointScriptBrain | 0x32563E09
//     static Any REGISTER_WORLD_POINT_SCRIPT_BRAIN(char *ScriptName, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32563E09, ScriptName, radius);
//     }

//     // ReleaseScriptControlledMicrophone | 0x2F907FF2
//     static Any RELEASE_SCRIPT_CONTROLLED_MICROPHONE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2F907FF2);
//     }

//     // RemoveAllScriptFires | 0x488CBB60
//     static Any REMOVE_ALL_SCRIPT_FIRES()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x488CBB60);
//     }

//     // RemoveScriptMic | 0x4307784F
//     static Any REMOVE_SCRIPT_MIC()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4307784F);
//     }

//     // RequestScript | 0x6FFE0DFD
//     static Any REQUEST_SCRIPT(char *scriptName)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6FFE0DFD, scriptName);
//     }

//     // RestartScriptedConversation | 0x43A67F1B
//     static Any RESTART_SCRIPTED_CONVERSATION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43A67F1B);
//     }

//     // RestoreScriptArrayFromScratchpad | 0x522B182B
//     static Any RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x522B182B, a1, a2, a3, a4);
//     }

//     // RestoreScriptValuesForNetworkGame | 0x37CD55AA
//     static Any RESTORE_SCRIPT_VALUES_FOR_NETWORK_GAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x37CD55AA, a1);
//     }

//     // SaveScriptArrayInScratchpad | 0x331F7E6F
//     static Any SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD(Any a1, Any a2, Any a3, Any a4)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x331F7E6F, a1, a2, a3, a4);
//     }

//     // ScriptAssert | 0x10C75BDA
//     static Any SCRIPT_ASSERT(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10C75BDA, a1);
//     }

//     // ScriptIsUsingMobilePhone | 0x1B0741BA
//     static Any SCRIPT_IS_USING_MOBILE_PHONE(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1B0741BA, set);
//     }

//     // SetFovChannelScript | 0x68AB6E72
//     static Any SET_FOV_CHANNEL_SCRIPT(bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x68AB6E72, set);
//     }

//     // SetInterpFromGameToScript | 0x45CE21CA
//     static Any SET_INTERP_FROM_GAME_TO_SCRIPT(bool a1, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45CE21CA, a1, a2);
//     }

//     // SetInterpFromScriptToGame | 0x69B140F6
//     static Any SET_INTERP_FROM_SCRIPT_TO_GAME(bool a1, int a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x69B140F6, a1, a2);
//     }

//     // SetScriptFireAudio | 0x6DFFBCD0
//     static Any SET_SCRIPT_FIRE_AUDIO()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6DFFBCD0);
//     }

//     // SetScriptLimitToGangSize | 0x352921C4
//     static Any SET_SCRIPT_LIMIT_TO_GANG_SIZE(int32_t size)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x352921C4, size);
//     }

//     // SetScriptMicLookAt | 0x4DD43FFD
//     static Any SET_SCRIPT_MIC_LOOK_AT(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DD43FFD, x, y, z);
//     }

//     // SetScriptMicPosition | 0x295D3A87
//     static Any SET_SCRIPT_MIC_POSITION(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x295D3A87, x, y, z);
//     }

//     // SetScriptedAnimSeatOffset | 0x718939EF
//     static Any SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float offset)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x718939EF, ped, offset);
//     }

//     // SetScriptedConversionCentre | 0x40F61D4A
//     static Any SET_SCRIPTED_CONVERSION_CENTRE(float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x40F61D4A, x, y, z);
//     }

//     // SetThisMachineRunningServerScript | 0x382A19BE
//     static Any SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x382A19BE, a1);
//     }

//     // SetUpTripSkipToBeFinishedByScript | 0x5CEB0360
//     static Any SET_UP_TRIP_SKIP_TO_BE_FINISHED_BY_SCRIPT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5CEB0360);
//     }

//     // SkipToNextScriptedConversationLine | 0x294C35B0
//     static Any SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x294C35B0);
//     }

//     // SpecifyScriptPopulationZoneArea | 0x5A07394A
//     static Any SPECIFY_SCRIPT_POPULATION_ZONE_AREA(int a1, int a2, int a3, int a4, int a5, int a6)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5A07394A, a1, a2, a3, a4, a5, a6);
//     }

//     // SpecifyScriptPopulationZoneGroups | 0x70F0538F
//     static Any SPECIFY_SCRIPT_POPULATION_ZONE_GROUPS(int a1, int a2, int a3, int a4, int a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70F0538F, a1, a2, a3, a4, a5);
//     }

//     // SpecifyScriptPopulationZonePercentageCops | 0x49FF799A
//     static Any SPECIFY_SCRIPT_POPULATION_ZONE_PERCENTAGE_COPS(int32_t percentage)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x49FF799A, percentage);
//     }

//     // StartNewScript | 0x4E2260B9
//     static Any START_NEW_SCRIPT(char *scriptName, uint32_t stacksize)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4E2260B9, scriptName, stacksize);
//     }

//     // StartNewScriptWithArgs | 0x706707E6
//     static Any START_NEW_SCRIPT_WITH_ARGS(char *scriptname, void *params, int32_t paramcount, int32_t stacksize)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x706707E6, scriptname, params, paramcount, stacksize);
//     }

//     // StartScriptConversation | 0x288E50A3
//     static Any START_SCRIPT_CONVERSATION(bool flag0, bool flag1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x288E50A3, flag0, flag1);
//     }

//     // StartScriptFire | 0x24742BB9
//     static Any START_SCRIPT_FIRE(float x, float y, float z, uint32_t numGenerationsAllowed, uint32_t strength)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x24742BB9, x, y, z, numGenerationsAllowed, strength);
//     }

//     // StopSyncingScriptAnimations | 0x47F430BE
//     static Any STOP_SYNCING_SCRIPT_ANIMATIONS(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47F430BE, a1);
//     }

//     // StoreScriptValuesForNetworkGame | 0x1DFF5B06
//     static Any STORE_SCRIPT_VALUES_FOR_NETWORK_GAME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1DFF5B06, a1);
//     }

//     // TerminateAllScriptsForNetworkGame | 0x2CEA47E9
//     static Any TERMINATE_ALL_SCRIPTS_FOR_NETWORK_GAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CEA47E9);
//     }

//     // TerminateAllScriptsWithThisName | 0x72452672
//     static Any TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(char *name)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x72452672, name);
//     }

//     // TerminateThisScript | 0x2BCD1ECA
//     static Any TERMINATE_THIS_SCRIPT()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2BCD1ECA);
//     }

//     // ThisScriptIsSafeForNetworkGame | 0x63AB65DC
//     static Any THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63AB65DC);
//     }

//     // ThisScriptShouldBeSaved | 0x48573CF7
//     static Any THIS_SCRIPT_SHOULD_BE_SAVED()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x48573CF7);
//     }

//     // UnregisterScriptWithAudio | 0x698F762E
//     static Any UNREGISTER_SCRIPT_WITH_AUDIO()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x698F762E);
//     }

// } // namespace SCRIPT

// namespace UI
// {

//     // ActivateMenuItem | 0x608237A4
//     static Any ACTIVATE_MENU_ITEM(int32_t menuid, int32_t item, bool activate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x608237A4, menuid, item, activate);
//     }

//     // ActivateNetworkSettingsMenu | 0x609D0203
//     static Any ACTIVATE_NETWORK_SETTINGS_MENU()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x609D0203);
//     }

//     // ActivateReplayMenu | 0x61040B08
//     static Any ACTIVATE_REPLAY_MENU()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61040B08);
//     }

//     // ActivateSaveMenu | 0x78AC735F
//     static Any ACTIVATE_SAVE_MENU()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x78AC735F);
//     }

//     // ActivateViewport | 0x4D7D105A
//     static Any ACTIVATE_VIEWPORT(int32_t viewportid, bool activate)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D7D105A, viewportid, activate);
//     }

//     // AddTextWidget | 0x7537050D
//     static Any ADD_TEXT_WIDGET(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7537050D, a1);
//     }

//     // AddToWidgetCombo | 0x4F0D4AC7
//     static Any ADD_TO_WIDGET_COMBO(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4F0D4AC7, a1);
//     }

//     // AddWidgetFloatReadOnly | 0x4C8A7614
//     static Any ADD_WIDGET_FLOAT_READ_ONLY(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4C8A7614, a1, a2);
//     }

//     // AddWidgetFloatSlider | 0x6F9256DF
//     static Any ADD_WIDGET_FLOAT_SLIDER(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6F9256DF, a1, a2, a3, a4, a5);
//     }

//     // AddWidgetReadOnly | 0x4A2E3BCA
//     static Any ADD_WIDGET_READ_ONLY(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A2E3BCA, a1, a2);
//     }

//     // AddWidgetSlider | 0x4A904476
//     static Any ADD_WIDGET_SLIDER(Any a1, Any a2, Any a3, Any a4, Any a5)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A904476, a1, a2, a3, a4, a5);
//     }

//     // AddWidgetString | 0x27D20F21
//     static Any ADD_WIDGET_STRING(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27D20F21, a1);
//     }

//     // AddWidgetToggle | 0x66F47727
//     static Any ADD_WIDGET_TOGGLE(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x66F47727, a1, a2);
//     }

//     // BlockStatsMenuActions | 0x734E3F62
//     static Any BLOCK_STATS_MENU_ACTIONS(int32_t player)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x734E3F62, player);
//     }

//     // ClearRoomForViewport | 0x7A583068
//     static Any CLEAR_ROOM_FOR_VIEWPORT(int32_t viewportid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7A583068, viewportid);
//     }

//     // CreateHtmlViewport | 0x2FAE4C6E
//     static Any CREATE_HTML_VIEWPORT(int32_t *htmlviewport)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2FAE4C6E, htmlviewport);
//     }

//     // CreateMenu | 0x7DCA398F
//     static Any CREATE_MENU(char *gxtentry, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, int32_t *menuid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7DCA398F, gxtentry, a2, a3, a4, a5, a6, a7, a8, menuid);
//     }

//     // CreateViewport | 0x13134CCD
//     static Any CREATE_VIEWPORT(int32_t *viewport)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x13134CCD, viewport);
//     }

//     // CreateWidgetGroup | 0x558C4259
//     static Any CREATE_WIDGET_GROUP(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x558C4259, a1);
//     }

//     // DeactivateNetworkSettingsMenu | 0x4AD22B80
//     static Any DEACTIVATE_NETWORK_SETTINGS_MENU()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4AD22B80);
//     }

//     // DeleteMenu | 0x252138B3
//     static Any DELETE_MENU(int32_t menuid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x252138B3, menuid);
//     }

//     // DeleteWidget | 0x267D5146
//     static Any DELETE_WIDGET(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x267D5146, a1);
//     }

//     // DeleteWidgetGroup | 0x17D72833
//     static Any DELETE_WIDGET_GROUP(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x17D72833, a1);
//     }

//     // DestroyAllScriptViewports | 0x5E4327D2
//     static Any DESTROY_ALL_SCRIPT_VIEWPORTS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5E4327D2);
//     }

//     // DestroyViewport | 0x651E50EC
//     static Any DESTROY_VIEWPORT(int32_t viewportid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x651E50EC, viewportid);
//     }

//     // DoesWidgetGroupExist | 0x3AAF5BE5
//     static Any DOES_WIDGET_GROUP_EXIST(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3AAF5BE5, a1);
//     }

//     // EndWidgetGroup | 0x6F760759
//     static Any END_WIDGET_GROUP()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6F760759);
//     }

//     // FinishWidgetCombo | 0x2CCA0D6A
//     static Any FINISH_WIDGET_COMBO(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2CCA0D6A, a1, a2);
//     }

//     // GetContentsOfTextWidget | 0x742E3376
//     static Any GET_CONTENTS_OF_TEXT_WIDGET(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x742E3376, a1);
//     }

//     // GetFilterMenuOn | 0x509D75E8
//     static Any GET_FILTER_MENU_ON()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x509D75E8);
//     }

//     // GetGameViewportId | 0x57F7558B
//     static Any GET_GAME_VIEWPORT_ID(int32_t *viewportid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x57F7558B, viewportid);
//     }

//     // GetKeyForViewportInRoom | 0x10776AAE
//     static Any GET_KEY_FOR_VIEWPORT_IN_ROOM(int32_t viewportid, int32_t *roomkey)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x10776AAE, viewportid, roomkey);
//     }

//     // GetMenuItemSelected | 0x22442A7F
//     static Any GET_MENU_ITEM_SELECTED(int32_t menuid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x22442A7F, menuid);
//     }

//     // GetMenuPosition | 0x5B576767
//     static Any GET_MENU_POSITION(int32_t menuid, float *x, float *y)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5B576767, menuid, x, y);
//     }

//     // GetRadarViewportId | 0x4A7C19FE
//     static Any GET_RADAR_VIEWPORT_ID(int32_t *viewport)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4A7C19FE, viewport);
//     }

//     // GetReturnToFilterMenu | 0x2A055AFA
//     static Any GET_RETURN_TO_FILTER_MENU()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x2A055AFA);
//     }

//     // GetScreenViewportId | 0x25271044
//     static Any GET_SCREEN_VIEWPORT_ID(int32_t *viewportid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x25271044, viewportid);
//     }

//     // GetStartFromFilterMenu | 0x45073C46
//     static Any GET_START_FROM_FILTER_MENU()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x45073C46);
//     }

//     // GetViewportPosAndSize | 0x4DDC6FB4
//     static Any GET_VIEWPORT_POS_AND_SIZE(int32_t viewportid, float *x, float *y, float *xsize, float *ysize)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4DDC6FB4, viewportid, x, y, xsize, ysize);
//     }

//     // GetViewportPositionOfCoord | 0x287A49A5
//     static Any GET_VIEWPORT_POSITION_OF_COORD(float x, float y, float z, float *vx, float *vy, float *vz)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x287A49A5, x, y, z, vx, vy, vz);
//     }

//     // HighlightMenuItem | 0x1ABE6A4C
//     static Any HIGHLIGHT_MENU_ITEM(int32_t menuid, int32_t item, bool highlight)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1ABE6A4C, menuid, item, highlight);
//     }

//     // InitDebugWidgets | 0x73E911E8
//     static Any INIT_DEBUG_WIDGETS()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x73E911E8);
//     }

//     // IsPauseMenuActive | 0x6C4568A7
//     static Any IS_PAUSE_MENU_ACTIVE()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6C4568A7);
//     }

//     // IsViewportActive | 0x5D2B2A9A
//     static Any IS_VIEWPORT_ACTIVE(int32_t viewportid)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5D2B2A9A, viewportid);
//     }

//     // SetContentsOfTextWidget | 0x6B9C6127
//     static Any SET_CONTENTS_OF_TEXT_WIDGET(Any a1, Any a2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6B9C6127, a1, a2);
//     }

//     // SetFilterMenuOn | 0x18F43649
//     static Any SET_FILTER_MENU_ON(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x18F43649, a1);
//     }

//     // SetMenuColumn | 0x4D317353
//     static Any SET_MENU_COLUMN(int32_t menuid, Any a2, Any a3, Any a4, Any a5, Any a6, Any a7, Any a8, Any a9, Any a10, Any a11, Any a12, Any a13, Any a14, Any a15)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4D317353, menuid, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
//     }

//     // SetMenuColumnOrientation | 0x7CC63464
//     static Any SET_MENU_COLUMN_ORIENTATION(int32_t menuid, int32_t column, int32_t orientation)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7CC63464, menuid, column, orientation);
//     }

//     // SetMenuItemWith2Numbers | 0x7C4E54ED
//     static Any SET_MENU_ITEM_WITH2NUMBERS(int32_t menuid, int32_t item, int a3, char *gxtkey, int32_t number0, int32_t number1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7C4E54ED, menuid, item, a3, gxtkey, number0, number1);
//     }

//     // SetMenuItemWithNumber | 0x32E45138
//     static Any SET_MENU_ITEM_WITH_NUMBER(int32_t menuid, int32_t item, int a3, char *gxtkey, int32_t number)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32E45138, menuid, item, a3, gxtkey, number);
//     }

//     // SetReturnToFilterMenu | 0x733846D5
//     static Any SET_RETURN_TO_FILTER_MENU(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x733846D5, a1);
//     }

//     // SetRoomForViewportByName | 0x3DAF3F94
//     static Any SET_ROOM_FOR_VIEWPORT_BY_NAME(int32_t viewportid, char *roomname)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3DAF3F94, viewportid, roomname);
//     }

//     // SetSelectedMenuItem | 0x70291096
//     static Any SET_SELECTED_MENU_ITEM(int32_t menuid, int32_t item)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x70291096, menuid, item);
//     }

//     // SetStartFromFilterMenu | 0x3F6B5975
//     static Any SET_START_FROM_FILTER_MENU(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F6B5975, a1);
//     }

//     // SetTextViewportId | 0x3F9B2DD6
//     static Any SET_TEXT_VIEWPORT_ID(int32_t id)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3F9B2DD6, id);
//     }

//     // SetViewportDestination | 0x1C810358
//     static Any SET_VIEWPORT_DESTINATION(int32_t viewportid, float x, float y, float z, float a5, int a6, int a7)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1C810358, viewportid, x, y, z, a5, a6, a7);
//     }

//     // SetViewportMirrored | 0x61784349
//     static Any SET_VIEWPORT_MIRRORED(int32_t viewportid, bool set)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x61784349, viewportid, set);
//     }

//     // SetViewportPriority | 0x5DA1752F
//     static Any SET_VIEWPORT_PRIORITY(int32_t viewportid, int32_t priority)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x5DA1752F, viewportid, priority);
//     }

//     // SetViewportShape | 0x43ED66E3
//     static Any SET_VIEWPORT_SHAPE(int32_t cam, int32_t shape)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x43ED66E3, cam, shape);
//     }

// } // namespace UI

// namespace WORLD
// {

//     // AddExplosion | 0x32DA5E3A
//     static Any ADD_EXPLOSION(float x, float y, float z, ExplosionType exptype, float radius, bool playsound, bool novisual, float camshake)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x32DA5E3A, x, y, z, exptype, radius, playsound, novisual, camshake);
//     }

//     // AddExplosionWithDirection | 0x71855E7C
//     static Any ADD_EXPLOSION_WITH_DIRECTION()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x71855E7C);
//     }

//     // ExtinguishFireAtPoint | 0x35A97B73
//     static Any EXTINGUISH_FIRE_AT_POINT(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x35A97B73, x, y, z, radius);
//     }

//     // FireSingleBullet | 0x30975326
//     static Any FIRE_SINGLE_BULLET(float x, float y, float z, float targetX, float targetY, float targetZ, uint32_t unknown)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x30975326, x, y, z, targetX, targetY, targetZ, unknown);
//     }

//     // ForceWeather | 0x7EFB5077
//     static Any FORCE_WEATHER(uint32_t weather)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x7EFB5077, weather);
//     }

//     // ForceWeatherNow | 0x63737D31
//     static Any FORCE_WEATHER_NOW(uint32_t weather)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x63737D31, weather);
//     }

//     // GetCurrentWeather | 0x27E421EA
//     static Any GET_CURRENT_WEATHER(uint32_t *pWeather)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x27E421EA, pWeather);
//     }

//     // GetCurrentWeatherFull | 0x3FFA65EE
//     static Any GET_CURRENT_WEATHER_FULL(int32_t *weatherparam0, int32_t *weatherparam1, int32_t *weatherparam2)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3FFA65EE, weatherparam0, weatherparam1, weatherparam2);
//     }

//     // GetNumberOfFiresInArea | 0x1E144C8B
//     static Any GET_NUMBER_OF_FIRES_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x1E144C8B, x0, y0, z0, x1, y1, z1);
//     }

//     // GetNumberOfFiresInRange | 0x283821D2
//     static Any GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x283821D2, x, y, z, radius);
//     }

//     // IsExplosionInArea | 0x676B6BCA
//     static Any IS_EXPLOSION_IN_AREA(int32_t expnum, float x0, float y0, float z0, float x1, float y1, float z1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x676B6BCA, expnum, x0, y0, z0, x1, y1, z1);
//     }

//     // IsExplosionInSphere | 0x47A77D2E
//     static Any IS_EXPLOSION_IN_SPHERE(int32_t expnum, float x, float y, float z, float radius)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x47A77D2E, expnum, x, y, z, radius);
//     }

//     // OnFireScream | 0x6BE062DF
//     static Any ON_FIRE_SCREAM(Ped ped)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x6BE062DF, ped);
//     }

//     // PlayFireSoundFromPosition | 0x4B6135E8
//     static Any PLAY_FIRE_SOUND_FROM_POSITION(int32_t sound_id, float x, float y, float z)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x4B6135E8, sound_id, x, y, z);
//     }

//     // ReleaseWeather | 0x3A115D9D
//     static Any RELEASE_WEATHER()
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x3A115D9D);
//     }

//     // SetDecisionMakerAttributeFireRate | 0x31FC3392
//     static Any SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE(DecisionMaker dm, uint32_t value)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x31FC3392, dm, value);
//     }

//     // SetSyncWeatherAndGameTime | 0x51112E95
//     static Any SET_SYNC_WEATHER_AND_GAME_TIME(Any a1)
//     {
//         return NyManager::Get()->GetComp<NativeInvoker>()->Call<Any>(0x51112E95, a1);
//     }

// } // namespace WORLD