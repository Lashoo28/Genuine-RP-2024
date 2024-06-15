// Anti Car Troll (C) 2023 | Jax Teller

#if defined jat_included
	#endinput
#endif
 
#define jat_included

#tryinclude <a_samp>

#if !defined CAR_TROLL_TIME
    #define CAR_TROLL_TIME 550 // best value !
#endif

#if !defined TROLLED_CAR_FIX
    #define TROLLED_CAR_FIX true
#endif

#if !defined IsValidVehicle
    native IsValidVehicle(vehicleid);
#endif

new JAT_PlayerVehicle[MAX_PLAYERS],
    JAT_PlayerStateTime[MAX_PLAYERS];

forward OnPlayerTrollCar(playerid, vehicleid);

stock jat_IsNearVehicle(playerid, vehicleid, Float:range)
{
    new Float:x, Float:y, Float:z;
    GetVehiclePos(vehicleid, x, y, z);
    return IsPlayerInRangeOfPoint(playerid, range, x, y, z);
}
stock jat_PutPlayerInVehicle(playerid, vehicleid, seatid)
{
    JAT_PlayerVehicle[playerid] = vehicleid;
    return PutPlayerInVehicle(playerid, vehicleid, seatid);
}
#if defined _ALS_PutPlayerInVehicle
	#undef PutPlayerInVehicle
#else
	#define _ALS_PutPlayerInVehicle
#endif
#define PutPlayerInVehicle jat_PutPlayerInVehicle
#if defined jat_PutPlayerInVehicle
	forward jat_PutPlayerInVehicle(playerid, vehicleid, seatid);
#endif

public OnPlayerConnect(playerid)
{
    JAT_PlayerVehicle[playerid] = INVALID_VEHICLE_ID;
    JAT_PlayerStateTime[playerid] = -1;
    #if defined jat_OnPlayerConnect
		return jat_OnPlayerConnect(playerid);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerConnect
	#undef OnPlayerConnect
#else
	#define _ALS_OnPlayerConnect
#endif
#define OnPlayerConnect jat_OnPlayerConnect
#if defined jat_OnPlayerConnect
	forward jat_OnPlayerConnect(playerid);
#endif

public OnPlayerStateChange(playerid, newstate, oldstate)
{
    switch(newstate)
    {
        case PLAYER_STATE_DRIVER, PLAYER_STATE_PASSENGER:
        {
            JAT_PlayerVehicle[playerid] = GetPlayerVehicleID(playerid);
            JAT_PlayerStateTime[playerid] = GetTickCount();
        }
        case PLAYER_STATE_ONFOOT:
        {
            new diff = GetTickCount() - JAT_PlayerStateTime[playerid];
            if(diff < CAR_TROLL_TIME)
            {
                if(jat_IsNearVehicle(playerid, JAT_PlayerVehicle[playerid], 80))
                {

                    if(IsValidVehicle(JAT_PlayerVehicle[playerid])) {
                        CallRemoteFunction("OnPlayerTrollCar", "ii", playerid, JAT_PlayerVehicle[playerid]);
                                
                        #if TROLLED_CAR_FIX == true
                            new Float:x, Float:y, Float:z;           
                            GetVehiclePos(JAT_PlayerVehicle[playerid], x, y, z);
                            SetVehiclePos(JAT_PlayerVehicle[playerid], x, y, z);
                            SetVehicleVelocity(JAT_PlayerVehicle[playerid], 0, 0, -0.4);
                        #endif
                    }
                }
            }
            JAT_PlayerVehicle[playerid] = INVALID_VEHICLE_ID;
            JAT_PlayerStateTime[playerid] = -1;
        }
    }
    #if defined jat_OnPlayerStateChange
		return jat_OnPlayerStateChange(playerid, newstate, oldstate);
	#else
		return 1;
	#endif
}
#if defined _ALS_OnPlayerStateChange
	#undef OnPlayerStateChange
#else
	#define _ALS_OnPlayerStateChange
#endif
#define OnPlayerStateChange jat_OnPlayerStateChange
#if defined jat_OnPlayerStateChange
	forward jat_OnPlayerStateChange(playerid, newstate, oldstate);
#endif