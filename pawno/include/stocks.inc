stock LoadVoiceChannels()
{
    for(new i = 0; i < 40; i++) FractionWalkie[i] = SvCreateGStream(0x85A57Bff, "Racia");
}
/* ========================== << [ GPS System ] >> ========================== */
stock GetDistanceBetweenPoints(Float: X, Float: Y, Float: Z, Float: PointX, Float: PointY, Float: PointZ)
{
	new Float: Distance;
	Distance = floatabs(floatsub(X, PointX)) + floatabs(floatsub(Y, PointY)) + floatabs(floatsub(Z, PointZ));
	return floatround(Distance);
}
stock IsOnline(name[])
{
    new Pname[24];
    for(new i; i<MAX_PLAYERS; i++)
    {
        if(!IsPlayerConnected(i)) continue;
        GetPlayerName(i, Pname, 24);
        if(!strcmp(Pname, name, true)) return true;
    }
    return false;
}
stock IPAddressRemove(IP[])
{
    new string[200];
	if(IPAddressCheck(IP))
	{
        format(string, sizeof(string), "DELETE FROM `IPAddress` WHERE `IPAddress` = '%s'", IP);
        mysql_tquery(connect, string, "", "");
	}
	return true;
}
stock IPAddressAdd(IP[])
{
	new string[200];
	format(string, sizeof(string), "INSERT INTO `IPAddress` (`IPAddress`) VALUE ('%s')", IP);
	mysql_query(connect, string);
	return true;
}
stock SendDOwnerMessage(color, string[])
{
    foreach(new i:Player)
    {
		if(!login[i]) continue;
       	if(PI[i][pAdmin] < 10) continue;
       	SendClientMessage(i, color, string);
       	PlayerPlaySound(i, 21001, 0.0, 0.0, 0.0);
	}
}
stock IPAddressCheck(IP[])
{
	new string[200];
	format(string, sizeof(string), "SELECT * FROM `IPAddress` WHERE `IPAddress` = '%s' LIMIT 1", IP);
	mysql_query(connect,string);
	new rows;
	cache_get_row_count(rows);
	if(rows)
	{
		return true;
	}
	return false;
}
stock GetClientVehicleName(carid)
{
	new carname[85];
	if(carid >= 399 && carid <= 611) SetString(carname, VehNames[carid-399]);
	else if(carid >= 12300 && carid <= 12326) SetString(carname, LauncherCars[carid-12300]);
	return carname;
}
stock UpdateDonate()
{
	new str[100];
	format(str,sizeof(str),"%d",donate_requests_made);
}
stock GetVehicleName(model)
{
	new nameee[85];
	switch(model)
	{
		case 400..611:SetString(nameee, VehNames[model-399]);
	    default:
	    {
			for(new i; i < sizeof(NewCaro); i++)
			{
				if(NewCaro[i][NewCarLauncher] == model)
				{
					SetString(nameee, NewCaro[i][NewCarName]);
					break;
				}
			}
		}
	}
    return nameee;
}
stock CreateLog(filename[], text[])
{
	new logs_str[100], loged_str[250];
	new year, month, day, hour, minuite, second, data[30];
	gettime(hour,minuite,second);
	getdate(year, month, day);
	format(data,sizeof(data), "%d/%d/%d", day, month, year);
	format(logs_str, sizeof(logs_str), "Logs/%s", filename);
	new File:file = fopen(logs_str, io_append);
	format(loged_str, sizeof(loged_str), "[%s - %i:%i:%i] %s\n", data, hour, minuite, second, text);
	for(new io = 0; io <strlen(loged_str); io++)
	{
		fputchar(file, loged_str[io], false);
	}
	fclose(file);
}
stock SetPlayerWeapon(id, gunid, bullets)
{
	WeaponInfo[id][WeaponID][gunid] = 1;
	WeaponInfo[id][WeaponBullets][gunid] += bullets;
    GivePlayerWeapon(id, gunid, bullets);
}
stock RemovePlayerWeapons(id)
{
	for(new m; m != 48; m++) WeaponInfo[id][WeaponID][m] = 0, WeaponInfo[id][WeaponBullets][m] = 0;
	ResetPlayerWeapons(id);
}
stock WeaponName(gunid)
{
	new weapstr[16];
	switch(gunid)
	{
		case 16: format(weapstr, sizeof(weapstr), "Grenades");
		case 17: format(weapstr, sizeof(weapstr), "Tear Gas");
		case 18: format(weapstr, sizeof(weapstr), "Molotov cocktail");
		case 22: format(weapstr, sizeof(weapstr), "9mm Pistol");
		case 23: format(weapstr, sizeof(weapstr), "Silenced Pistol");
		case 24: format(weapstr, sizeof(weapstr), "Desert Eagle");
		case 25: format(weapstr, sizeof(weapstr), "Shotgun");
		case 26: format(weapstr, sizeof(weapstr), "Sawn-Off Shotgun");
		case 27: format(weapstr, sizeof(weapstr), "Combat Shotgun");
		case 28: format(weapstr, sizeof(weapstr), "Micro Uzi (Mac 10)");
		case 29: format(weapstr, sizeof(weapstr), "MP5");
		case 30: format(weapstr, sizeof(weapstr), "AK47");
		case 31: format(weapstr, sizeof(weapstr), "M4A");
		case 32: format(weapstr, sizeof(weapstr), "Tec 9");
		case 33: format(weapstr, sizeof(weapstr), "Country Rifle");
		case 34: format(weapstr, sizeof(weapstr), "Sniper Rifle");
		case 35: format(weapstr, sizeof(weapstr), "RPG");
		case 36: format(weapstr, sizeof(weapstr), "Heat Seeking Rocket");
		case 37: format(weapstr, sizeof(weapstr), "Flame-Thrower");
		case 38: format(weapstr, sizeof(weapstr), "Mini Gun");
		case 39: format(weapstr, sizeof(weapstr), "Satchel Charges");
		case 41: format(weapstr, sizeof(weapstr), "Spray Can");
		case 42: format(weapstr, sizeof(weapstr), "Fire Extinguisher");
	}
	return weapstr;
}
fpublic FactoryTimer(playerid)
{
	TogglePlayerControllable(playerid, 1);
	RemovePlayerAttachedObject(playerid, 8), RemovePlayerAttachedObject(playerid, 9);
	ClearAnimations(playerid);
	SetPlayerSpecialAction(playerid, SPECIAL_ACTION_CARRY);
	SetPlayerAttachedObject(playerid, 8, 2358, 6, 0.0, 0.10, -0.2, -110.0, 0.0, 78.0);
    SetPVarInt(playerid, "FactoryWork", 3);
    return true;
}
stock ShowPlayerInventory(playerid)
{
    new data_str[60], day, month, year, hour, minuite, second;
	getdate(year, month, day);
	gettime(hour, minuite, second);
	if(minuite < 10) format(data_str,sizeof(data_str), "%d-%d-%d__%d:0%d", day, month, year, hour, minuite);
	else format(data_str,sizeof(data_str), "%d-%d-%d__%d:%d", day, month, year, hour, minuite);
	TextDrawSetString(MainMenu_TD[28], data_str);
    for(new e; e != 25; e++) PlayerTextDrawSetPreviewModel(playerid, MainMenu_PTD[playerid][e], PI[playerid][pAccessories][e]);
    PlayerTextDrawSetPreviewModel(playerid, MainMenu_PTD[playerid][25], GetPlayerSkin(playerid));
	PlayerTextDrawSetPreviewModel(playerid, MainMenu_PTD[playerid][26], PI[playerid][pSkin][0]);
    PlayerTextDrawSetPreviewModel(playerid, MainMenu_PTD[playerid][27], PI[playerid][pSkin][1]);
    PlayerTextDrawSetPreviewModel(playerid, MainMenu_PTD[playerid][28], PI[playerid][pSkin][2]);
    PlayerTextDrawSetPreviewModel(playerid, MainMenu_PTD[playerid][29], PI[playerid][pSkin][3]);
	for(new m; m != 30; m++) PlayerTextDrawShow(playerid, MainMenu_PTD[playerid][m]);
    for(new t; t != 49; t++) TextDrawShowForPlayer(playerid, MainMenu_TD[t]);
    SelectTextDraw(playerid, 0xFF6C6CFF);
    MainMenuStatus[playerid] = true;
}
stock HidePlayerInventory(playerid)
{
	if(AccessoriesInfo[playerid][FunctionStatus] == true)
	{
	    AccessoriesInfo[playerid][FunctionStatus] = false;
	   	for(new m; m != 9; m++) PlayerTextDrawHide(playerid, Accessories_PTD[playerid][m]);
    	for(new t; t != 9; t++) PlayerTextDrawDestroy(playerid, Accessories_PTD[playerid][t]);
	}
	for(new m; m != 30; m++) PlayerTextDrawHide(playerid, MainMenu_PTD[playerid][m]);
  	for(new t; t != 49; t++) TextDrawHideForPlayer(playerid, MainMenu_TD[t]);
  	MainMenuStatus[playerid] = false;
  	CancelSelectTextDraw(playerid);
}
stock AccessoriesLoadInfo(playerid)
{
	if(GetPVarInt(playerid, "AccessoriesBuy") == 0) AccessoriesEditShow(playerid, GetPVarInt(playerid, "SlotID"));
	else if(GetPVarInt(playerid, "AccessoriesBuy") == 1)
	{
		if(PI[playerid][pAccessories][GetPVarInt(playerid, "SlotID")] != 19475) return errortxt(playerid, "Es Slot Dakavebulia!");
		if(PI[playerid][pMoney] < AccessoriesPrice[AccessoriesNumber[playerid]][1]) return errortxt(playerid, "Tkven Ar Gakvt Sakmarisi Raodenobis Tanxa!");
		PI[playerid][pAccessories][GetPVarInt(playerid, "SlotID")] = AccessoriesPrice[AccessoriesNumber[playerid]][0];
		PI[playerid][pMoney] -= AccessoriesPrice[AccessoriesNumber[playerid]][1];
		UpdatePlayerData(playerid, "Money", PI[playerid][pMoney]);
		new str[10];
		format(str, sizeof(str), "~r~-%d$", AccessoriesPrice[AccessoriesNumber[playerid]][1]);
		GameTextForPlayer(playerid, str, 1000, 1);
		format(log_str, sizeof(log_str), "%s'm(a) Sheidzina Accessories, ID: %d Da Gadaixada: %d$", Name(playerid), AccessoriesPrice[AccessoriesNumber[playerid]][0], AccessoriesPrice[AccessoriesNumber[playerid]][1]);
		CreateLog("Money", log_str);
		if(AccessoriesInfo[playerid][FunctionStatus] == true)
		{
		    AccessoriesInfo[playerid][FunctionStatus] = false;
		   	for(new m; m != 9; m++) PlayerTextDrawHide(playerid, Accessories_PTD[playerid][m]);
	    	for(new t; t != 9; t++) PlayerTextDrawDestroy(playerid, Accessories_PTD[playerid][t]);
		}
		for(new m; m != 30; m++) PlayerTextDrawHide(playerid, MainMenu_PTD[playerid][m]);
	  	for(new t; t != 49; t++) TextDrawHideForPlayer(playerid, MainMenu_TD[t]);
	  	MainMenuStatus[playerid] = false;
		SelectTextDraw(playerid, 0xB0C4DEFF);
		SavePlayerAll(playerid);
	}
	return true;
}
stock Mtavari(playerid)
{
	new ip[MAX_PLAYER_NAME];
	GetPlayerIp(playerid,ip,sizeof(ip));
	new string[200];
	format(string, sizeof(string), "SELECT * FROM `Mtavari` WHERE `IP` = '%s' LIMIT 1", ip);
	mysql_query(connect,string);
	new rows;
	cache_get_row_count(rows);
	if(rows)
	{
		return true;
	}
	return false;
}
stock MtavariRemove(IP[])
{
    new string[200];
 	format(string, sizeof(string), "DELETE FROM `Mtavari` WHERE `IP` = '%s'", IP);
  	mysql_tquery(connect, string, "", "");

}
stock AccessoriesEditShow(playerid, slotid)
{
    for(new m; m != 9; m++) PlayerTextDrawHide(playerid, Accessories_PTD[playerid][m]);
    for(new t; t != 9; t++) PlayerTextDrawDestroy(playerid, Accessories_PTD[playerid][t]);
	for(new s; s != 9; s++) AccessoriesInfo[playerid][AccessoriesX][s] = AccessoriesPosX[slotid][s];
	for(new s; s != 9; s++) AccessoriesInfo[playerid][AccessoriesY][s] = AccessoriesPosY[slotid][s];
	AccessoriesInfo[playerid][FunctionStatus] = true;
    #include <TextDraws/Player/Accessories>
}
stock AccessoriesChangeSkin(playerid, slotid)
{
    if(PI[playerid][pMember] != 0 && PI[playerid][pFracStatus] == 1) return errortxt(playerid, "Tkven Imyofebit Organizaciashi Da Ver Gamoicvlit Tansacmels!");
	if(slotid == 0) SetPlayerSkin(playerid, PI[playerid][pSkin][0]), PI[playerid][pSkinSlot] = slotid, UpdatePlayerData(playerid, "SkinSlot", PI[playerid][pSkinSlot]);
	else if(slotid == 1) SetPlayerSkin(playerid, PI[playerid][pSkin][1]), PI[playerid][pSkinSlot] = slotid, UpdatePlayerData(playerid, "SkinSlot", PI[playerid][pSkinSlot]);
	else if(slotid == 2) SetPlayerSkin(playerid, PI[playerid][pSkin][2]), PI[playerid][pSkinSlot] = slotid, UpdatePlayerData(playerid, "SkinSlot", PI[playerid][pSkinSlot]);
	else if(slotid == 3) SetPlayerSkin(playerid, PI[playerid][pSkin][3]), PI[playerid][pSkinSlot] = slotid, UpdatePlayerData(playerid, "SkinSlot", PI[playerid][pSkinSlot]);
    PlayerTextDrawHide(playerid, MainMenu_PTD[playerid][25]);
	PlayerTextDrawSetPreviewModel(playerid, MainMenu_PTD[playerid][25], GetPlayerSkin(playerid));
	PlayerTextDrawShow(playerid, MainMenu_PTD[playerid][25]);
	RemovePlayerAttachedObject(playerid, 1), RemovePlayerAttachedObject(playerid, 2), RemovePlayerAttachedObject(playerid, 3), RemovePlayerAttachedObject(playerid, 4), RemovePlayerAttachedObject(playerid, 5), RemovePlayerAttachedObject(playerid, 6);
    return true;
}
stock TrailerCarRespawn(playerid)
{
	if(TrailerCar[playerid] != -1)
	{
		DestroyVehicle(TrailerCar[playerid]);
		TrailerCar[playerid] = -1;
	}
	TrailerCar[playerid] = CreateVehicle(508, PI[playerid][pTrailerCarPos][0], PI[playerid][pTrailerCarPos][1], PI[playerid][pTrailerCarPos][2], PI[playerid][pTrailerCarPos][3], PI[playerid][pTrailerCarTuning][0], PI[playerid][pTrailerCarTuning][1], 1800);
   	LinkVehicleToInterior(TrailerCar[playerid], 0);
   	SetVehicleVirtualWorld(TrailerCar[playerid], 0);
    SetVehicleHealth(TrailerCar[playerid], 999);
	RepairVehicle(TrailerCar[playerid]);
  	GetVehicleParamsEx(TrailerCar[playerid],engine,lights,alarm,doors,bonnet,boot,objective);
	SetVehicleParamsEx(TrailerCar[playerid],VEHICLE_PARAMS_OFF,lights,alarm,1,bonnet,boot,objective);
	VehicleFuel[TrailerCar[playerid]] = 50;
	EngineCar[TrailerCar[playerid]] = 0;
	LightCar[TrailerCar[playerid]] = 0;
	SetTrailerCarTuning(playerid, TrailerCar[playerid]);
}
stock HideSpeedometr_PTD(playerid)
{
    if(Speed_Timer[playerid] != -1)
	{
	    KillTimer(Speed_Timer[playerid]);
	    Speed_Timer[playerid] = -1;
	    Kilometrs[playerid] = 0;
	}
	if(GetLauncherStatus(playerid))
 	{
		cef_emit_event(playerid, "speedometr:visible", CEFINT(-1));
	}
	for(new i; i != 42; i++) PlayerTextDrawHide(playerid, Speed_PTD[playerid][i]);
}
stock SetAccessories(playerid, objectid)
{
	switch(objectid)
	{
	    case 2469: SetAccessoriesToSkin(playerid, 1, GetPlayerSkin(playerid), objectid);
	    case 3026: SetAccessoriesToSkin(playerid, 2, GetPlayerSkin(playerid), objectid);
	    case 18968,18969: SetAccessoriesToSkin(playerid, 3, GetPlayerSkin(playerid), objectid);
	    case 19624: SetAccessoriesToSkin(playerid, 4, GetPlayerSkin(playerid), objectid);
	    case 1607: SetAccessoriesToSkin(playerid, 5, GetPlayerSkin(playerid), objectid);
	    case 18910, 18909, 18908, 18907, 18906: SetAccessoriesToSkin(playerid, 6, GetPlayerSkin(playerid), objectid);
	    case 19035, 19034, 19033, 19032, 19031, 19030, 19029, 19028, 19027, 19026, 19025, 19024, 19023, 19022, 19021, 19020, 19019, 19018, 19017, 19016, 19015, 19014, 19013, 19012, 19011, 19010, 19009, 19008,19007, 19006: SetAccessoriesToSkin(playerid, 7, GetPlayerSkin(playerid), objectid);
	    case 19068, 19067: SetAccessoriesToSkin(playerid, 8, GetPlayerSkin(playerid), objectid);
		case 19039, 19040, 19041, 19042, 19043, 19044, 19045, 19046, 19048, 19049, 19050, 19051, 19053: SetAccessoriesToSkin(playerid, 9, GetPlayerSkin(playerid), objectid);
		case 19332: SetAccessoriesToSkin(playerid, 10, GetPlayerSkin(playerid), objectid);
		case 2404, 2406: SetAccessoriesToSkin(playerid, 11, GetPlayerSkin(playerid), objectid);
		case 19515: SetAccessoriesToSkin(playerid, 12, GetPlayerSkin(playerid), objectid);
		case 19076: SetAccessoriesToSkin(playerid, 13, GetPlayerSkin(playerid), objectid);
		case 1609: SetAccessoriesToSkin(playerid, 14, GetPlayerSkin(playerid), objectid);
		case 19878: SetAccessoriesToSkin(playerid, 15, GetPlayerSkin(playerid), objectid);
		case 19079: SetAccessoriesToSkin(playerid, 16, GetPlayerSkin(playerid), objectid);
		case 2226: SetAccessoriesToSkin(playerid, 17, GetPlayerSkin(playerid), objectid);
		case 11704: SetAccessoriesToSkin(playerid, 18, GetPlayerSkin(playerid), objectid);
	}
	return true;
}
stock ShowPlayerGPS(playerid, Float:PosX, Float:PosY, Float:PosZ, Float:PosSize, const LocalName[])
{
    if(GetPVarInt(playerid, "GPSCode") == 1) return errortxt(playerid, "Tkven Ukve Chartuli Gakvt GPS!");
    new Float:PlayerPos[3];
    GetPlayerPos(playerid, PlayerPos[0], PlayerPos[1], PlayerPos[2]);
	DisablePlayerCheckpoint(playerid);
    SetPlayerCheckpoint(playerid, PosX, PosY, PosZ, PosSize);
    SetPVarInt(playerid, "GPSCode", 1);
	if(GetLauncherStatus(playerid))
	{
		cef_emit_event(playerid, "gps:visible", CEFINT(1));
        cef_emit_event(playerid, "gps:location", CEFSTR(LocalName));
	}
    format(other_string, sizeof(other_string), "{38AF91}[GPS]{FFFFFF} Tkven Airchiet AdgilMdebareoba: {38AF91}%s{FFFFFF}, Distance: {38AF91}%d{FFFFFF}Metri", LocalName, GetDistanceBetweenPoints(PlayerPos[0], PlayerPos[1], PlayerPos[2], PosX, PosY, PosZ));
    SendClientMessage(playerid, COLOR_WHITE, other_string);
    return true;
}
stock AddFactionVehicle(carid, fracid, Float:PosX, Float:PosY, Float:PosZ, Float:PosC = 0.0, color1, color2)
{
	FracID[VehicleTotal] = fracid;
	FracCarID[VehicleTotal] = AddStaticVehicleEx(carid, PosX, PosY, PosZ, PosC, color1, color2,900);
	new number = Random(100,999), numstr[15];
	if(fracid == 1) format(numstr, sizeof(numstr), "FZ-%d-ZF", number), SetVehicleNumberPlate(FracCarID[VehicleTotal], numstr);
	else if(fracid == 2) format(numstr, sizeof(numstr), "GP-%d-PG", number), SetVehicleNumberPlate(FracCarID[VehicleTotal], numstr);
	else if(fracid == 3) format(numstr, sizeof(numstr), "AR-%d-MY", number), SetVehicleNumberPlate(FracCarID[VehicleTotal], numstr);
	else if(fracid == 4) format(numstr, sizeof(numstr), "EM-%d-SC", number), SetVehicleNumberPlate(FracCarID[VehicleTotal], numstr);
	else if(fracid == 5) format(numstr, sizeof(numstr), "WW-%d-WO", number), SetVehicleNumberPlate(FracCarID[VehicleTotal], numstr);
	else if(fracid == 14) format(numstr, sizeof(numstr), "NE-%d-WS", number), SetVehicleNumberPlate(FracCarID[VehicleTotal], numstr);
	else if(fracid == 15) format(numstr, sizeof(numstr), "PR-%d-RP", number), SetVehicleNumberPlate(FracCarID[VehicleTotal], numstr);
	return VehicleTotal++;
}
stock IPBanCheck(playerip[])
{
	format(sql_str, sizeof(sql_str), "SELECT * FROM `IPBan` WHERE `IP` = '%s' LIMIT 1", playerip);
	mysql_query(connect, sql_str);
	new rows;
	cache_get_row_count(rows);
	if(rows)
	{
		return true;
	}
	return false;
}
stock UpdateVehicleData(playerid, field[], data)
{
	new sqlsstr[200];
	mysql_format(connect, sqlsstr, sizeof(sqlsstr), "UPDATE `Cars` SET `%e` = '%d' WHERE `CarOwner` = '%e' LIMIT 1", field, data, PI[playerid][pName]);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
stock UpdatePlayerData(playerid, field[], data)
{
	new sqlsstr[200];
	mysql_format(connect, sqlsstr, sizeof(sqlsstr), "UPDATE `accounts` SET `%e` = '%d' WHERE `Name` = '%e' LIMIT 1", field, data, PI[playerid][pName]);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
stock UpdateAdminData(playerid, field[], data)
{
	new sqlsstr[200];
	mysql_format(connect, sqlsstr, sizeof(sqlsstr), "UPDATE `Staff` SET `%e` = '%d' WHERE `Name` = '%e' LIMIT 1", field, data, Name(playerid));
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
HouseUpdateData(idx, field[], data)
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `House` SET %s = %d WHERE HouseID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
HouseUpdateDataString(idx, field[], data[])
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `House` SET %s = '%s' WHERE HouseID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
BizzUpdateData(idx, field[], data)
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `bizz` SET %s = %d WHERE bID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
BizzUpdateDataString(idx, field[], data[])
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `bizz` SET %s = '%s' WHERE bID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
UpdateFamilyData(idx, field[], data)
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `Family` SET %s = %d WHERE ID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
UpdateFamilyDataString(idx, field[], data[])
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `Family` SET %s = '%s' WHERE ID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
UpdateMansionData(idx, field[], data)
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `Mansion` SET %s = %d WHERE ID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
UpdateMansionDataString(idx, field[], data[])
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `Mansion` SET %s = '%s' WHERE ID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
new Cenzuras[][] =
{
	"naxui","Naxui","yleo","Yleo","siro","Siro","mogityan","Mogityan","traki","Traki","xui","Xui","shegeci","Shegeci","Siriko","siriko","movtyan","Movtyan",
	"Bicho","bicho","BICHO","gnaxav","Gnaxav","YLE","Yle","yle","Gaafsi","EDRP","GRP","kleo","kle",
	"Moejvi","moejvi","Dagajvi","dagajvi","gaafsi","mainc","Mainc","Bajaglo","bajaglo","Kle","siro","Siro","Siri","siri","fusheni","Fusheni","FuSheni","YLExar","ylexar","Ylexar","YLEXar"
};
new MGS[][] =
{
	"SAMP","samp","Samp","internet","Internet","gta","Gta","GTA","Skaipi","Skaip","skype","Skype","Warn","warn","Kick","kick","Mute","mute","AFK","AFk","Afk","afk","BAN","Ban","ban","+C","Yleo","yleo","Cleo","cleo","CLEO","PING","Ping","ping","FPS","FPs","Fps","fps","/","YOUTUBE","Youtube","youtube","DISCORD","Instagram","Discord","discord","FACEBOOK","Facebook","facebook","MESSENJER","Messenjer","messenjer","METAGAMING","Metagaming","MG","Mg",
	"RP","rp","RolePlay","ROLEPLAY","Roleplay","role","play","Cheat","cheat","Airbreak","AIRBREAK","Online","ONLINE","Offline","OFFLINE","online","offline","ADMIN","Admin",",admin","LEADER","Leader","leader","UNDER","Under","under","Serveri","SERVERI","serveri","GRP","Grp","grp","EDRP","Edrp","edrp","SERVER","Sever","server","PG","pg","TK","tk","SK","sk","NJ","nj","DB","db","DM","dm","aim"
};
new Zedmetis[][] =
{
	"genuine","Genuine","GRP","gRP","grP","Grp","GRp","grp","EDRP","EDRp","EDrp","Edrp","edrp","eDRP","edRP","edrP","Server","Serveri",
	"gamodi","Gamodi","Damsvi","damsvi","dasvi","Dasvi","Gadadi","gadadi","Gadaajvi","gadaajvi","gaajmevine","Gaajmevine","ylea",
	"Ylea","Ylearis","YleAris","ylearis","yleAris","YLEAris","Ylearis","Mdzgneri","mdzgneri","Chamosxma","chamosxma","Dagchri","dagchri","gipovi","Gipovi","mogtyna","Mogtyna","Mogtynav","mogtynav","Mogitynav","mogitynav"
};
fpublic Cenzura(text[])
{
	for(new i; i < sizeof(Cenzuras); i ++)
	{
		new find = strfind(text, Cenzuras[i], true);
		if(find != -1) if(IsASymbol(text, find - 2, find))return true;
	}
	return false;
}
fpublic Zedmeti(text[])
{
	for(new i; i < sizeof(Zedmetis); i ++)
	{
		new find = strfind(text, Zedmetis[i], true);
		if(find != -1) if(IsASymbol(text, find - 2, find))return true;
	}
	return false;
}
SendCopsMessage(color,const string[])
{
	foreach(Player,i)
	{
		if(!login[i]) continue;
		if(IsACop(i)) SendClientMessage(i,color,string);
	}
	return true;
}
stock LoadSettings()
{
    GangWH[0] = 1;
    GangWH[1] = 1;
    GangWH[2] = 1;
    GangWH[3] = 1;
    GangWH[4] = 1;
}
stock Goverment(playerid)
{
	if(PI[playerid][pLeader] >= 1) return true;
	new rank = PI[playerid][pRank];
	switch(PI[playerid][pMember])
	{
		case 1:
		{
			switch(rank)
			{
				case 10:return true;
				case 9:return true;
			}
		}
		case 2:
		{
			switch(rank)
			{
				case 10:return true;
				case 9:return true;
			}
		}
		case 3:
		{
			switch(rank)
			{
				case 10:return true;
				case 9:return true;
			}
		}
		case 4:
		{
			switch(rank)
			{
				case 10:return true;
				case 9:return true;
			}
		}
		case 5:
		{
			switch(rank)
			{
				case 10:return true;
				case 9:return true;
			}
		}
		case 15:
		{
			switch(rank)
			{
				case 10:return true;
				case 9:return true;
			}
		}
	}
	return false;
}
stock AdvertiseList(playerid)
{
	new full, str[90], strrr[600];
	switch(PI[playerid][pMember])
	{
		case 14: full = 0;
	}
	for(new i = 1; i <= TotalAdvertise[full];i++)
	{
		format(str, sizeof(str), " [%i] Gamogzavna: %s, Number: %i\n",i, AdvertInfo[i][full][adName], AdvertInfo[i][full][adPhone]);
		strcat(strrr, str);
	}
	if(TotalAdvertise[full] == 0) return errortxt(playerid, "Am Droistvis Ar Aris Reklamebi!");
	ShowPlayerDialog(playerid, 31, DIALOG_STYLE_LIST, "Advertises", strrr, "Archeva", "Daxurva");
	return true;
}
stock GetHouseClass(classid)
{
	new n_str[50];
	switch(classid)
	{
		case 0: format(n_str,sizeof(n_str), "NOPE");
		case 1: format(n_str,sizeof(n_str), "C");
		case 2: format(n_str,sizeof(n_str), "D");
		case 3: format(n_str,sizeof(n_str), "B");
		case 4: format(n_str,sizeof(n_str), "A");
		case 5: format(n_str,sizeof(n_str), "VIP");
	}
	return n_str;
}
stock GetCarClass(carid)
{
	new n_str[50];
	switch(carid)
	{
		case 1: format(n_str,sizeof(n_str), "Economy");
		case 2: format(n_str,sizeof(n_str), "Standard");
		case 3: format(n_str,sizeof(n_str), "Sport");
	}
	return n_str;
}
stock DestroyPlayerCar(playerid)
{
	if(TrailerCar[playerid] != -1)
	{
	    DestroyVehicle(TrailerCar[playerid]);
	    TrailerCar[playerid] = -1;
	}
	if(Speed_Timer[playerid] != -1)
	{
	    KillTimer(Speed_Timer[playerid]);
	    Speed_Timer[playerid] = -1;
	    Kilometrs[playerid] = 0;
	}
	if(VehID[playerid][0] != -1)
	{
    	DestroyVehicle(VehID[playerid][0]);
    	VehID[playerid][0] = -1;
	}
	if(VehID[playerid][1] != -1)
	{
    	DestroyVehicle(VehID[playerid][1]);
    	VehID[playerid][1] = -1;
	}
	if(VehID[playerid][2] != -1)
	{
    	DestroyVehicle(VehID[playerid][2]);
    	VehID[playerid][2] = -1;
	}
	return true;
}
stock acc_float_strcat(query[], len, name[], Float:number)
{
	new string[100];
	format(string, sizeof(string), "`%s` = '%f',", name, number);
	strcat(query, string, len);
	return true;
}
stock acc_str_strcat(query[], len, name[], str[])
{
	new string[100];
	format(string, sizeof(string), "`%s` = '%s',",name, str);
	strcat(query, string, len);
	return true;
}
@LoadRadars();
@LoadRadars()
{
    new time = GetTickCount();
    new rows;
	cache_get_row_count(rows);
	if(rows)
	{
	    for(new i = 1; i <= rows; i++)
		{
		    cache_get_value_index_int(i-1, 0, RadarInfo[i][RadarID]);
		    cache_get_value_index_float(i-1, 1, RadarInfo[i][RadarPosX]);
			cache_get_value_index_float(i-1, 2, RadarInfo[i][RadarPosY]);
			cache_get_value_index_float(i-1, 3, RadarInfo[i][RadarPosZ]);
			cache_get_value_index_float(i-1, 4, RadarInfo[i][RadarPosC]);
			cache_get_value_index_int(i-1, 5, RadarInfo[i][RadarSpeed]);
			RadarInfo[i][RadarObject] = CreateDynamicObject(18880, RadarInfo[i][RadarPosX], RadarInfo[i][RadarPosY], RadarInfo[i][RadarPosZ], 0, 0, RadarInfo[i][RadarPosC]);
	    	format(b_string, sizeof(b_string), "{FFFFFF}Police Camera: #{FF4545}%d\n{FFFFFF}Maxsimaluri Sichkare: {FF4545}%d{FFFFFF}KM/H", i, RadarInfo[i][RadarSpeed]);
			RadarInfo[i][RadarText] = CreateDynamic3DTextLabel(b_string, COLOR_WHITE, RadarInfo[i][RadarPosX], RadarInfo[i][RadarPosY], RadarInfo[i][RadarPosZ]+4.0,40.0);
			RadarInfo[i][RadarArea] = CreateDynamicSphere(RadarInfo[i][RadarPosX], RadarInfo[i][RadarPosY], RadarInfo[i][RadarPosZ], 30.0);
			TotalRadar += 1;
        }
    }
	printf("[Radars Loaded]: <%i>. TIME: <%i ms>.", TotalRadar, GetTickCount() - time);
	return true;
}
stock SaveRadars(i)
{
    new query[500];
	new string[128];
	query = "UPDATE `Radars` SET ";
	acc_float_strcat(query, sizeof(query), "RadarPosX", RadarInfo[i][RadarPosX]);
	acc_float_strcat(query, sizeof(query), "RadarPosY", RadarInfo[i][RadarPosY]);
	acc_float_strcat(query, sizeof(query), "RadarPosZ", RadarInfo[i][RadarPosZ]);
	acc_float_strcat(query, sizeof(query), "RadarPosC", RadarInfo[i][RadarPosC]);
	strdel(query, strlen(query)-1, strlen(query));
	format(string,sizeof(string)," WHERE `RadarID` = '%d'", RadarInfo[i][RadarID]);
	strcat(query, string);
	mysql_tquery(connect, query, "", "");
}
stock SaveHouse(i)
{
    new query[1000];
	new string[128];
	query = "UPDATE `House` SET ";
	acc_int_strcat(query, sizeof(query), "HouseID", HouseInfo[i][HouseID]);
	acc_int_strcat(query, sizeof(query), "HouseOwned", HouseInfo[i][HouseOwned]);
	acc_str_strcat(query, sizeof(query), "HouseOwner", HouseInfo[i][HouseOwner]);
	/* ====================== << [ Gachenis Adgili] >> ====================== */
	acc_float_strcat(query, sizeof(query), "HouseSpawnX", HouseInfo[i][HouseSpawnX]);
	acc_float_strcat(query, sizeof(query), "HouseSpawnY", HouseInfo[i][HouseSpawnY]);
	acc_float_strcat(query, sizeof(query), "HouseSpawnZ", HouseInfo[i][HouseSpawnZ]);
	acc_float_strcat(query, sizeof(query), "HouseSpawnC", HouseInfo[i][HouseSpawnC]);
	/* ======================== << [ Shesasvleli] >> ======================== */
	acc_float_strcat(query, sizeof(query), "HouseEnterX", HouseInfo[i][HouseEnterX]);
	acc_float_strcat(query, sizeof(query), "HouseEnterY", HouseInfo[i][HouseEnterY]);
	acc_float_strcat(query, sizeof(query), "HouseEnterZ", HouseInfo[i][HouseEnterZ]);
	acc_float_strcat(query, sizeof(query), "HouseEnterC", HouseInfo[i][HouseEnterC]);
	/* ======================= << [ Gamosasvleli] >> ======================== */
	acc_float_strcat(query, sizeof(query), "HouseExitX", HouseInfo[i][HouseExitX]);
	acc_float_strcat(query, sizeof(query), "HouseExitY", HouseInfo[i][HouseExitY]);
	acc_float_strcat(query, sizeof(query), "HouseExitZ", HouseInfo[i][HouseExitZ]);
	/* ========================== << [ Transporti] >> ======================= */
	acc_float_strcat(query, sizeof(query), "HouseCarX", HouseInfo[i][HouseCarX]);
	acc_float_strcat(query, sizeof(query), "HouseCarY", HouseInfo[i][HouseCarY]);
	acc_float_strcat(query, sizeof(query), "HouseCarZ", HouseInfo[i][HouseCarZ]);
	acc_float_strcat(query, sizeof(query), "HouseCarC", HouseInfo[i][HouseCarC]);
	/* ====================================================================== */
	acc_int_strcat(query, sizeof(query), "HousePrice", HouseInfo[i][HousePrice]);
	acc_int_strcat(query, sizeof(query), "HouseTax", HouseInfo[i][HouseTax]);
	acc_int_strcat(query, sizeof(query), "HouseBalance", HouseInfo[i][HouseBalance]);
	acc_int_strcat(query, sizeof(query), "HouseClass", HouseInfo[i][HouseClass]);
	acc_int_strcat(query, sizeof(query), "HouseVirtualWorld", HouseInfo[i][HouseVirtualWorld]);
	acc_int_strcat(query, sizeof(query), "HouseInterior", HouseInfo[i][HouseInterior]);
	acc_int_strcat(query, sizeof(query), "HouseLock", HouseInfo[i][HouseLock]);
	acc_int_strcat(query, sizeof(query), "HousePick", HouseInfo[i][HousePick]);
	acc_int_strcat(query, sizeof(query), "HouseIcon", HouseInfo[i][HouseIcon]);
	/* ========================== << [ Mdgmurebi] >> ======================== */
	acc_str_strcat(query, sizeof(query), "HouseResidentOne", HouseInfo[i][HouseResidentOne]);
	acc_str_strcat(query, sizeof(query), "HouseResidentTwo", HouseInfo[i][HouseResidentTwo]);
	acc_str_strcat(query, sizeof(query), "HouseResidentThree", HouseInfo[i][HouseResidentThree]);
	strdel(query, strlen(query)-1, strlen(query));
	format(string,sizeof(string)," WHERE `HouseID` = '%d'", HouseInfo[i][HouseID]);
	strcat(query, string);
	mysql_tquery(connect, query, "", "");
}
@LoadHouse();
@LoadHouse()
{
    new time = GetTickCount();
    new rows;
	cache_get_row_count(rows);
	if(rows)
	{
	    for(new i = 1; i <= rows; i++)
		{
		    cache_get_value_index_int(i-1, 0, HouseInfo[i][HouseID]);
		    cache_get_value_index_int(i-1, 1, HouseInfo[i][HouseOwned]);
		    cache_get_value_name(i-1, "HouseOwner", HouseInfo[i][HouseOwner], 20);

		    cache_get_value_index_float(i-1, 3, HouseInfo[i][HouseSpawnX]);
			cache_get_value_index_float(i-1, 4, HouseInfo[i][HouseSpawnY]);
			cache_get_value_index_float(i-1, 5, HouseInfo[i][HouseSpawnZ]);
			cache_get_value_index_float(i-1, 6, HouseInfo[i][HouseSpawnC]);

			cache_get_value_index_float(i-1, 7, HouseInfo[i][HouseEnterX]);
			cache_get_value_index_float(i-1, 8, HouseInfo[i][HouseEnterY]);
			cache_get_value_index_float(i-1, 9, HouseInfo[i][HouseEnterZ]);
			cache_get_value_index_float(i-1, 10, HouseInfo[i][HouseEnterC]);

			cache_get_value_index_float(i-1, 11, HouseInfo[i][HouseExitX]);
			cache_get_value_index_float(i-1, 12, HouseInfo[i][HouseExitY]);
			cache_get_value_index_float(i-1, 13, HouseInfo[i][HouseExitZ]);

			cache_get_value_index_float(i-1, 14, HouseInfo[i][HouseCarX]);
			cache_get_value_index_float(i-1, 15, HouseInfo[i][HouseCarY]);
			cache_get_value_index_float(i-1, 16, HouseInfo[i][HouseCarZ]);
			cache_get_value_index_float(i-1, 17, HouseInfo[i][HouseCarC]);

			cache_get_value_index_int(i-1, 18, HouseInfo[i][HousePrice]);
			cache_get_value_index_int(i-1, 19, HouseInfo[i][HouseTax]);
			cache_get_value_index_int(i-1, 20, HouseInfo[i][HouseBalance]);
			cache_get_value_index_int(i-1, 21, HouseInfo[i][HouseClass]);
			cache_get_value_index_int(i-1, 22, HouseInfo[i][HouseVirtualWorld]);
			cache_get_value_index_int(i-1, 23, HouseInfo[i][HouseInterior]);
			cache_get_value_index_int(i-1, 24, HouseInfo[i][HouseLock]);
			cache_get_value_index_int(i-1, 25, HouseInfo[i][HousePick]);
			cache_get_value_index_int(i-1, 26, HouseInfo[i][HouseIcon]);

			cache_get_value_name(i-1, "HouseResidentOne", HouseInfo[i][HouseResidentOne], 20);
			cache_get_value_name(i-1, "HouseResidentTwo", HouseInfo[i][HouseResidentTwo], 20);
			cache_get_value_name(i-1, "HouseResidentThree", HouseInfo[i][HouseResidentThree], 20);
			if(HouseInfo[i][HouseOwned] == 0)
			{
			    HouseInfo[i][HousePick] = CreatePickupAC(1273, 23, HouseInfo[i][HouseEnterX], HouseInfo[i][HouseEnterY], HouseInfo[i][HouseEnterZ],-1);
			    HouseInfo[i][HouseIcon] = CreateDynamicMapIcon(HouseInfo[i][HouseEnterX], HouseInfo[i][HouseEnterY], HouseInfo[i][HouseEnterZ], 31, COLOR_WHITE, 0, -1, -1, 50);
			}
			else if(HouseInfo[i][HouseOwned] == 1)
			{
			    HouseInfo[i][HousePick] = CreatePickupAC(19522, 23, HouseInfo[i][HouseEnterX], HouseInfo[i][HouseEnterY], HouseInfo[i][HouseEnterZ],-1);
			    HouseInfo[i][HouseIcon] = CreateDynamicMapIcon(HouseInfo[i][HouseEnterX], HouseInfo[i][HouseEnterY], HouseInfo[i][HouseEnterZ], 32, COLOR_WHITE, 0, -1, -1, 50);
			}
			if(HouseInfo[i][HouseClass] == 0) HouseInfo[i][HouseHangerPick] = CreatePickupAC(1275, 23, 416.0220,2539.6543,10.0000, HouseInfo[i][HouseVirtualWorld]);
			else if(HouseInfo[i][HouseClass] == 1) HouseInfo[i][HouseHangerPick] = CreatePickupAC(1275, 23, -72.3139,1366.9077,1080.2185, HouseInfo[i][HouseVirtualWorld]);
			else if(HouseInfo[i][HouseClass] == 2) HouseInfo[i][HouseHangerPick] = CreatePickupAC(1275, 23, -45.2173,1412.7670,1084.4297, HouseInfo[i][HouseVirtualWorld]);
			else if(HouseInfo[i][HouseClass] == 3) HouseInfo[i][HouseHangerPick] = CreatePickupAC(1275, 23, 2337.9927,-1141.6932,1054.3047, HouseInfo[i][HouseVirtualWorld]);
			else if(HouseInfo[i][HouseClass] == 4) HouseInfo[i][HouseHangerPick] = CreatePickupAC(1275, 23, 145.1043,1384.3580,1088.3672, HouseInfo[i][HouseVirtualWorld]);
			else if(HouseInfo[i][HouseClass] == 5) HouseInfo[i][HouseHangerPick] = CreatePickupAC(1275, 23, 235.5739,1079.4843,1087.8126, HouseInfo[i][HouseVirtualWorld]);
			TotalHouse += 1;
        }
    }
	printf("[House Loaded]: <%i>. TIME: <%i ms>.", TotalHouse, GetTickCount() - time);
	return true;
}
stock HouseUpdate(houseid)
{
	if(HouseInfo[houseid][HouseOwned] == 0)
	{
		DestroyDynamicMapIcon(HouseInfo[houseid][HouseIcon]);
		DestroyDynamicPickup(HouseInfo[houseid][HousePick]);
		HouseInfo[houseid][HousePick] = CreatePickupAC(1273, 23, HouseInfo[houseid][HouseEnterX], HouseInfo[houseid][HouseEnterY], HouseInfo[houseid][HouseEnterZ],-1);
		HouseInfo[houseid][HouseIcon] = CreateDynamicMapIcon(HouseInfo[houseid][HouseEnterX], HouseInfo[houseid][HouseEnterY], HouseInfo[houseid][HouseEnterZ], 31, COLOR_WHITE, 0, -1, -1, 50);
	}
	if(HouseInfo[houseid][HouseOwned] == 1)
	{
		DestroyDynamicMapIcon(HouseInfo[houseid][HouseIcon]);
		DestroyDynamicPickup(HouseInfo[houseid][HousePick]);
		HouseInfo[houseid][HousePick] = CreatePickupAC(19522, 23, HouseInfo[houseid][HouseEnterX], HouseInfo[houseid][HouseEnterY], HouseInfo[houseid][HouseEnterZ],-1);
		HouseInfo[houseid][HouseIcon] = CreateDynamicMapIcon(HouseInfo[houseid][HouseEnterX], HouseInfo[houseid][HouseEnterY], HouseInfo[houseid][HouseEnterZ], 32, COLOR_WHITE, 0, -1, -1, 50);
	}
	return true;
}
fpublic LoadBizz()
{
    new bizstr[300], BizID = 1, time = GetTickCount();
	if(!cache_num_rows()) return printf("[Function LoadBizz] Biznesebis Chatvirtva Ver Moxerxda!");
	for (new i = 0;i != cache_num_rows();i ++)
	{
        cache_get_value_name_int(i, "bOwned", BizzInfo[BizID][bOwned]);
       	cache_get_value_name(i, "bOwner", BizzInfo[BizID][bOwner], 32);
		cache_get_value_name(i, "bName", BizzInfo[BizID][bName], 64);
        /* ================= << [ Shesasvleli / Shevedi ] >> ================ */
        cache_get_value_name_float(i, "bEntranceX", BizzInfo[BizID][bEntranceX]);
        cache_get_value_name_float(i, "bEntranceY", BizzInfo[BizID][bEntranceY]);
        cache_get_value_name_float(i, "bEntranceZ", BizzInfo[BizID][bEntranceZ]);
        cache_get_value_name_float(i, "bEnterPosX", BizzInfo[BizID][bEnterPosX]);
        cache_get_value_name_float(i, "bEnterPosY", BizzInfo[BizID][bEnterPosY]);
        cache_get_value_name_float(i, "bEnterPosZ", BizzInfo[BizID][bEnterPosZ]);
        cache_get_value_name_float(i, "bEnterPosC", BizzInfo[BizID][bEnterPosC]);
        /* ================ << [ Gamosasvleli / Gamovedi ] >> =============== */
        cache_get_value_name_float(i, "bExitX", BizzInfo[BizID][bExitX]);
        cache_get_value_name_float(i, "bExitY", BizzInfo[BizID][bExitY]);
        cache_get_value_name_float(i, "bExitZ", BizzInfo[BizID][bExitZ]);
        cache_get_value_name_float(i, "bExitPosX", BizzInfo[BizID][bExitPosX]);
        cache_get_value_name_float(i, "bExitPosY", BizzInfo[BizID][bExitPosY]);
        cache_get_value_name_float(i, "bExitPosZ", BizzInfo[BizID][bExitPosZ]);
        cache_get_value_name_float(i, "bExitPosC", BizzInfo[BizID][bExitPosC]);
        /* ================================================================== */
        cache_get_value_name_int(i, "bBuyPrice", BizzInfo[BizID][bBuyPrice]);
        cache_get_value_name_int(i, "bEntranceCost", BizzInfo[BizID][bEntranceCost]);
        cache_get_value_name_int(i, "bTill", BizzInfo[BizID][bTill]);
        cache_get_value_name_int(i, "bTax", BizzInfo[BizID][bTax]);
        cache_get_value_name_int(i, "bLocked", BizzInfo[BizID][bLocked]);
        cache_get_value_name_int(i, "bInterior", BizzInfo[BizID][bInterior]);
        cache_get_value_name_int(i, "bProducts", BizzInfo[BizID][bProducts]);
        cache_get_value_name_int(i, "bPrice", BizzInfo[BizID][bPrice]);
		cache_get_value_name_int(i, "bType", BizzInfo[BizID][bType]);
		cache_get_value_name_int(i, "bLockTime", BizzInfo[BizID][bLockTime]);
		cache_get_value_name_int(i, "bVirtualWorld", BizzInfo[BizID][bVirtualWorld]);
		cache_get_value_name_int(i, "bMafia", BizzInfo[BizID][bMafia]);
		if(BizzInfo[BizID][bOwned] == 0 && BizzInfo[BizID][bType] != 2)
		{
			BizzInfo[BizID][bEnterPic] = CreatePickupAC(1318, 23, BizzInfo[BizID][bEntranceX], BizzInfo[BizID][bEntranceY], BizzInfo[BizID][bEntranceZ]);
			BizzInfo[BizID][bExitPic] = CreatePickupAC(1318, 23, BizzInfo[BizID][bExitX], BizzInfo[BizID][bExitY], BizzInfo[BizID][bExitZ], BizzInfo[BizID][bVirtualWorld]);
			format(bizstr, sizeof(bizstr), "{FFFFFF}Biznesis Saxeli:{3899C6} %s\n{FFFFFF}Type: {3899C6}%s\n{FFFFFF}Statusi: {3899C6}Gayidvashia\n{FFFFFF}Mflobeli: {3899C6}Ar Yavs\n{FFFFFF}Kontroli:{3899C6} %s\n{FFFFFF}Fasi: {3899C6}%d$", BizzInfo[BizID][bName], GetTypeName(BizzInfo[BizID][bType]), GetMafiaName(BizzInfo[BizID][bMafia]), BizzInfo[BizID][bBuyPrice]);
			BizzInfo[BizID][bLocked] = 1;
			BizzInfo[BizID][bLabel] = Create3DTextLabel(bizstr, 0xEAC700FF,BizzInfo[BizID][bEntranceX], BizzInfo[BizID][bEntranceY], BizzInfo[BizID][bEntranceZ],20.0,0,1);
		}
		if(BizzInfo[BizID][bOwned] == 1 && BizzInfo[BizID][bType] != 2)
		{
			BizzInfo[BizID][bEnterPic] = CreatePickupAC(1318, 23, BizzInfo[BizID][bEntranceX], BizzInfo[BizID][bEntranceY], BizzInfo[BizID][bEntranceZ]);
			BizzInfo[BizID][bExitPic] = CreatePickupAC(1318, 23, BizzInfo[BizID][bExitX], BizzInfo[BizID][bExitY], BizzInfo[BizID][bExitZ],BizzInfo[BizID][bVirtualWorld]);
			format(bizstr,sizeof(bizstr), "{FFFFFF}Biznesis Saxeli:{3899C6} %s\n{FFFFFF}Type: {3899C6}%s\n{FFFFFF}Statusi: {3899C6}Gayidulia\n{FFFFFF}Mflobeli:{3899C6} %s\n{FFFFFF}Kontroli:{3899C6} %s", BizzInfo[BizID][bName], GetTypeName(BizzInfo[BizID][bType]), BizzInfo[BizID][bOwner], GetMafiaName(BizzInfo[BizID][bMafia]));
			BizzInfo[BizID][bLabel] = Create3DTextLabel(bizstr,0x00D900FF,BizzInfo[BizID][bEntranceX], BizzInfo[BizID][bEntranceY], BizzInfo[BizID][bEntranceZ],20.0,0,1);
		}
		if(BizzInfo[BizID][bType] == 2)
		{
		    if(BizzInfo[BizID][bOwned] == 0)
			{
				format(bizstr, sizeof(bizstr), "{FFFFFF}Biznesis Saxeli: {3899C6}: %s\n{FFFFFF}Type: {3899C6}%s\n{FFFFFF}Statusi: {3899C6}Gayidvashia\n{FFFFFF}Mflobeli: {3899C6}Ar Yavs\n{FFFFFF}Kontroli:{3899C6} %s\n{FFFFFF}Fasi: {3899C6}%d$\n{FFFFFF}Daachiret:{3899C6}H{FFFFFF}'s", BizzInfo[BizID][bName], GetTypeName(BizzInfo[BizID][bType]), GetMafiaName(BizzInfo[BizID][bMafia]), BizzInfo[BizID][bBuyPrice]);
				BizzInfo[BizID][bLocked] = 1;
				BizzInfo[BizID][bLabel] = Create3DTextLabel(bizstr, 0xEAC700FF,BizzInfo[BizID][bEntranceX], BizzInfo[BizID][bEntranceY], BizzInfo[BizID][bEntranceZ],20.0,0,1);
			}
			if(BizzInfo[BizID][bOwned] == 1)
			{
				format(bizstr,sizeof(bizstr), "{FFFFFF}Biznesis Saxeli:{3899C6} %s\n{FFFFFF}Type: {3899C6}%s\n{FFFFFF}Statusi: {3899C6}Gayidulia\n{FFFFFF}Mflobeli:{3899C6} %s\n{FFFFFF}Kontroli:{3899C6} %s\n{FFFFFF}Sawvavis Fasi:{3899C6} %d$\n{FFFFFF}Daachiret: {3899C6}H{FFFFFF}'s", BizzInfo[BizID][bName], GetTypeName(BizzInfo[BizID][bType]), BizzInfo[BizID][bOwner], GetMafiaName(BizzInfo[BizID][bMafia]), BizzInfo[BizID][bPrice]);
				BizzInfo[BizID][bLabel] = Create3DTextLabel(bizstr,0x00D900FF,BizzInfo[BizID][bEntranceX], BizzInfo[BizID][bEntranceY], BizzInfo[BizID][bEntranceZ],5.0,0,1);
			}
		}
	 	if(BizzInfo[BizID][bType] == 3)
		{
		    if(BizzInfo[BizID][bOwned] == 0)
			{
				format(bizstr, sizeof(bizstr), "{FFFFFF}Biznesis Saxeli: {3899C6} %s\n{FFFFFF}Statusi: {3899C6}Gayidvashia\n{FFFFFF}Mflobeli: {3899C6}Ar Yavs\n{FFFFFF}Kontroli:{3899C6} %s\n{FFFFFF}Fasi: {3899C6}%d$", BizzInfo[BizID][bName], GetMafiaName(BizzInfo[BizID][bMafia]), BizzInfo[BizID][bBuyPrice]);
				BizzInfo[BizID][bLocked] = 1;
                Update3DTextLabelText(BizzInfo[BizID][bLabel], 0xEAC700FF, bizstr);
			}
			if(BizzInfo[BizID][bOwned] == 1)
			{
				format(bizstr,sizeof(bizstr), "{FFFFFF}Biznesis Saxeli:{3899C6} %s\n{FFFFFF}Statusi: {3899C6}Gayidulia\n{FFFFFF}Mflobeli:{3899C6} %s\n{FFFFFF}Kontroli:{3899C6} %s", BizzInfo[BizID][bName], BizzInfo[BizID][bOwner], GetMafiaName(BizzInfo[BizID][bMafia]));
                Update3DTextLabelText(BizzInfo[BizID][bLabel], 0xEAC700FF, bizstr);
			}
		}
		if(BizzInfo[BizID][bType] == 5)
		{
		    if(BizzInfo[BizID][bOwned] == 0)
			{
				format(bizstr, sizeof(bizstr), "{FFFFFF}Biznesis Saxeli: {3899C6} %s\n{FFFFFF}Statusi: {3899C6}Gayidvashia\n{FFFFFF}Mflobeli: {3899C6}Ar Yavs\n{FFFFFF}Kontroli:{3899C6} %s\n{FFFFFF}Fasi: {3899C6}%d$", BizzInfo[BizID][bName], GetMafiaName(BizzInfo[BizID][bMafia]), BizzInfo[BizID][bBuyPrice]);
				BizzInfo[BizID][bLocked] = 1;
                Update3DTextLabelText(BizzInfo[BizID][bLabel], 0xEAC700FF, bizstr);
			}
			if(BizzInfo[BizID][bOwned] == 1)
			{
				format(bizstr,sizeof(bizstr), "{FFFFFF}Biznesis Saxeli:{3899C6} %s\n{FFFFFF}Statusi: {3899C6}Gayidulia\n{FFFFFF}Mflobeli:{3899C6} %s\n{FFFFFF}Kontroli:{3899C6} %s", BizzInfo[BizID][bName], BizzInfo[BizID][bOwner], GetMafiaName(BizzInfo[BizID][bMafia]));
                Update3DTextLabelText(BizzInfo[BizID][bLabel], 0xEAC700FF, bizstr);
			}
		}
		if(BizzInfo[BizID][bType] == 1)
		{
		    Create3DTextLabel("{3899C6}[Market 24/7]\n{FFFFFF}Daachiret: {3899C6}H{FFFFFF}'s", 0x36A8CFAA, -23.2747,-55.1114,1003.5469, 10.0, BizzInfo[BizID][bVirtualWorld], 1);
		}
		BizID += 1;
		TotalBizz += 1;
	}
	printf("[Buisness Loaded]: <%i>. TIME: <%i ms>.", TotalBizz, GetTickCount() - time);
	return true;
}
fpublic LoadAutoSalon()
{
    new time = GetTickCount();
	if(!cache_num_rows()) return printf("[Function LoadAutoSalon] AutoSalon Chatvirtva Ver Moxerxda!");
	for(new i = 0 ; i != cache_num_rows(); i ++)
	{
	    cache_get_value_name_int(i, "ID", CarInfo[i][ID]);
	    cache_get_value_name_float(i, "CarPosX", CarInfo[i][CarPosX]);
		cache_get_value_name_float(i, "CarPosY", CarInfo[i][CarPosY]);
		cache_get_value_name_float(i, "CarPosZ", CarInfo[i][CarPosZ]);
		cache_get_value_name_float(i, "CarPosC", CarInfo[i][CarPosC]);
		cache_get_value_name(i, "CarOwner", CarInfo[i][CarOwner], 32);
		cache_get_value_name_int(i,"CarID", CarInfo[i][CarID]);
		cache_get_value_name_int(i, "CarPrice", CarInfo[i][CarPrice]);
		cache_get_value_name_int(i, "CarStatus", CarInfo[i][CarStatus]);
		cache_get_value_name_int(i, "CarSlot", CarInfo[i][CarSlot]);
		cache_get_value_name_int(i, "CarTime", CarInfo[i][CarTime]);
		if(CarInfo[i][CarStatus] == 0) format(Salon_String, sizeof(Salon_String), "¹{FF4545}%d\n{FFFFFF}Adgili: {FF4545}Tavisufalia\n{FFFFFF}Fasi: {FF4545}5.000$\n{FFFFFF}Daachiret: {FF4545}H{FFFFFF}'s", CarInfo[i][ID]);
		else if(CarInfo[i][CarStatus] == 1)
		{
		    format(Salon_String, sizeof(Salon_String), "¹{FF4545}%d\n{FFFFFF}Adgili: {FF4545}Dakavebulia\n{FFFFFF}Dro: {FF4545}%d {FFFFFF}Saati\n{FFFFFF}Mflobeli: {FF4545}%s\n{FFFFFF}Model: {FF4545}%s\n{FFFFFF}Fasi: {FF4545}%d$\n{FFFFFF}Daachiret: {FF4545}ALT{FFFFFF}'s", CarInfo[i][ID], CarInfo[i][CarTime], CarInfo[i][CarOwner], GetClientVehicleName(CarInfo[i][CarID]), CarInfo[i][CarPrice]);
			CarInfo[i][CarIDInfo] = CreateVehicle(CarInfo[i][CarID], CarInfo[i][CarPosX], CarInfo[i][CarPosY], CarInfo[i][CarPosZ], CarInfo[i][CarPosC], 0, 0, 1800);
		  	GetVehicleParamsEx(CarInfo[i][CarIDInfo], engine,lights,alarm,doors,bonnet,boot,objective);
			SetVehicleParamsEx(CarInfo[i][CarIDInfo], VEHICLE_PARAMS_OFF,lights,alarm,1,bonnet,boot,objective);
		}
		CarInfo[i][CarText] = CreateDynamic3DTextLabel(Salon_String, COLOR_WHITE, CarInfo[i][CarPosX], CarInfo[i][CarPosY], CarInfo[i][CarPosZ], 10.0);
		TotalCar += 1;
    }
	printf("[Cars Loaded]: <%i>. TIME: <%i ms>.", TotalCar, GetTickCount() - time);
	return true;
}
fpublic LoadFamily()
{
    new time = GetTickCount(), FamilyID = 1, mansion_str[150];
	if(!cache_num_rows()) return printf("[Function LoadFamily] Family Chatvirtva Ver Moxerxda!");
	for(new i = 0; i != cache_num_rows(); i ++)
	{
	    cache_get_value_name_int(i, "ID", FamilyInfo[FamilyID][fID]);
        cache_get_value_name(i, "Name", FamilyInfo[FamilyID][fName], 25);
       	cache_get_value_name(i, "Leader", FamilyInfo[FamilyID][fLeader], 128);
       	cache_get_value_name_int(i, "Type", FamilyInfo[FamilyID][fType]);
       	cache_get_value_name(i, "Color", FamilyInfo[FamilyID][fColor], 10);
       	cache_get_value_name_int(i, "Mansion", FamilyInfo[FamilyID][fMansion]);
        format(mansion_str, sizeof(mansion_str), "{%s}Mansion: {FFFFFF}#%d\n\n{%s}Mflobeli: {FFFFFF}%s\n{%s}Type: {FFFFFF}%s", FamilyInfo[FamilyID][fColor], MansionInfo[FamilyInfo[FamilyID][fMansion]][mID], FamilyInfo[FamilyID][fColor], MansionInfo[FamilyInfo[FamilyID][fMansion]][mName], FamilyInfo[FamilyID][fColor], GetFamilyType(MansionInfo[FamilyInfo[FamilyID][fMansion]][mType]));
		Update3DTextLabelText(MansionInfo[FamilyInfo[FamilyID][fMansion]][mText], COLOR_WHITE, mansion_str);
       	FamilyID += 1;
		TotalFamily += 1;
	}
	printf("[Family Loaded]: <%i>. TIME: <%i ms>.", TotalFamily, GetTickCount() - time);
	return true;
}
fpublic LoadMansion()
{
    new time = GetTickCount(), MansionID = 1, mansion_str[150];
	if(!cache_num_rows()) return printf("[Function LoadMansion] Family Chatvirtva Ver Moxerxda!");
	for(new i = 0; i != cache_num_rows();i ++)
	{
        cache_get_value_name_int(i, "ID", MansionInfo[MansionID][mID]);
        cache_get_value_name_int(i, "Owned", MansionInfo[MansionID][mOwned]);
       	cache_get_value_name(i, "Name", MansionInfo[MansionID][mName], 25);
       	cache_get_value_name_int(i, "Type", MansionInfo[MansionID][mType]);
       	cache_get_value_name_int(i, "Price", MansionInfo[MansionID][mPrice]);
       	cache_get_value_name_float(i, "EntranceX", MansionInfo[MansionID][mEntranceX]);
        cache_get_value_name_float(i, "EntranceY", MansionInfo[MansionID][mEntranceY]);
        cache_get_value_name_float(i, "EntranceZ", MansionInfo[MansionID][mEntranceZ]);
        cache_get_value_name_float(i, "ExitX", MansionInfo[MansionID][mExitX]);
        cache_get_value_name_float(i, "ExitY", MansionInfo[MansionID][mExitY]);
        cache_get_value_name_float(i, "ExitZ", MansionInfo[MansionID][mExitZ]);
		cache_get_value_name_float(i, "ExitPosX", MansionInfo[MansionID][mExitPosX]);
        cache_get_value_name_float(i, "ExitPosY", MansionInfo[MansionID][mExitPosY]);
        cache_get_value_name_float(i, "ExitPosZ", MansionInfo[MansionID][mExitPosZ]);
        cache_get_value_name_float(i, "ExitPosC", MansionInfo[MansionID][mExitPosC]);
        cache_get_value_name_int(i, "Car1", MansionInfo[MansionID][mCarID][0]);
        cache_get_value_name_int(i, "Car2", MansionInfo[MansionID][mCarID][1]);
        cache_get_value_name_int(i, "Car3", MansionInfo[MansionID][mCarID][2]);
        cache_get_value_name_int(i, "Car4", MansionInfo[MansionID][mCarID][3]);
        cache_get_value_name_int(i, "Car5", MansionInfo[MansionID][mCarID][4]);
        cache_get_value_name_int(i, "Car6", MansionInfo[MansionID][mCarID][5]);
        cache_get_value_name_int(i, "Car7", MansionInfo[MansionID][mCarID][6]);
        cache_get_value_name_float(i, "Car1PosX", MansionInfo[MansionID][mCarPosX][0]);
		cache_get_value_name_float(i, "Car1PosY", MansionInfo[MansionID][mCarPosY][0]);
		cache_get_value_name_float(i, "Car1PosZ", MansionInfo[MansionID][mCarPosZ][0]);
		cache_get_value_name_float(i, "Car1PosC", MansionInfo[MansionID][mCarPosC][0]);
		cache_get_value_name_float(i, "Car2PosX", MansionInfo[MansionID][mCarPosX][1]);
		cache_get_value_name_float(i, "Car2PosY", MansionInfo[MansionID][mCarPosY][1]);
		cache_get_value_name_float(i, "Car2PosZ", MansionInfo[MansionID][mCarPosZ][1]);
		cache_get_value_name_float(i, "Car2PosC", MansionInfo[MansionID][mCarPosC][1]);
		cache_get_value_name_float(i, "Car3PosX", MansionInfo[MansionID][mCarPosX][2]);
		cache_get_value_name_float(i, "Car3PosY", MansionInfo[MansionID][mCarPosY][2]);
		cache_get_value_name_float(i, "Car3PosZ", MansionInfo[MansionID][mCarPosZ][2]);
		cache_get_value_name_float(i, "Car3PosC", MansionInfo[MansionID][mCarPosC][2]);
		cache_get_value_name_float(i, "Car4PosX", MansionInfo[MansionID][mCarPosX][3]);
		cache_get_value_name_float(i, "Car4PosY", MansionInfo[MansionID][mCarPosY][3]);
		cache_get_value_name_float(i, "Car4PosZ", MansionInfo[MansionID][mCarPosZ][3]);
		cache_get_value_name_float(i, "Car4PosC", MansionInfo[MansionID][mCarPosC][3]);
		cache_get_value_name_float(i, "Car5PosX", MansionInfo[MansionID][mCarPosX][4]);
		cache_get_value_name_float(i, "Car5PosY", MansionInfo[MansionID][mCarPosY][4]);
		cache_get_value_name_float(i, "Car5PosZ", MansionInfo[MansionID][mCarPosZ][4]);
		cache_get_value_name_float(i, "Car5PosC", MansionInfo[MansionID][mCarPosC][4]);
		cache_get_value_name_float(i, "Car6PosX", MansionInfo[MansionID][mCarPosX][5]);
		cache_get_value_name_float(i, "Car6PosY", MansionInfo[MansionID][mCarPosY][5]);
		cache_get_value_name_float(i, "Car6PosZ", MansionInfo[MansionID][mCarPosZ][5]);
		cache_get_value_name_float(i, "Car6PosC", MansionInfo[MansionID][mCarPosC][5]);
		cache_get_value_name_float(i, "Car7PosX", MansionInfo[MansionID][mCarPosX][6]);
		cache_get_value_name_float(i, "Car7PosY", MansionInfo[MansionID][mCarPosY][6]);
		cache_get_value_name_float(i, "Car7PosZ", MansionInfo[MansionID][mCarPosZ][6]);
		cache_get_value_name_float(i, "Car7PosC", MansionInfo[MansionID][mCarPosC][6]);
		MansionInfo[MansionID][mIcon] = CreateDynamicMapIcon(MansionInfo[MansionID][mEntranceX], MansionInfo[MansionID][mEntranceY], MansionInfo[MansionID][mEntranceZ],35,0);
		if(MansionInfo[MansionID][mOwned] == 0)
		{
			MansionInfo[MansionID][mEntrancePick] = CreatePickupAC(19523, 23, MansionInfo[MansionID][mEntranceX], MansionInfo[MansionID][mEntranceY], MansionInfo[MansionID][mEntranceZ]);
            MansionInfo[MansionID][mExitPick] = CreatePickupAC(19523, 23, MansionInfo[MansionID][mExitX], MansionInfo[MansionID][mExitY], MansionInfo[MansionID][mExitZ], MansionID);
			format(mansion_str, sizeof(mansion_str), "{FFA118}Mansion: {FFFFFF}#%d\n{FFA118}Fasi: {FFFFFF}%d$\n\n{FFA118}Mflobeli: {FFFFFF}Ar Yavs", MansionInfo[MansionID][mID], MansionInfo[MansionID][mPrice]);
			MansionInfo[MansionID][mText] = Create3DTextLabel(mansion_str, COLOR_WHITE, MansionInfo[MansionID][mEntranceX], MansionInfo[MansionID][mEntranceY], MansionInfo[MansionID][mEntranceZ], 20.0, 0, 1);
            for(new c; c != 7; c++) MansionInfo[MansionID][mCarStatus][c] = -1;
		}
		else if(MansionInfo[MansionID][mOwned] == 1)
		{
			MansionInfo[MansionID][mEntrancePick] = CreatePickupAC(1277, 23, MansionInfo[MansionID][mEntranceX], MansionInfo[MansionID][mEntranceY], MansionInfo[MansionID][mEntranceZ]);
            MansionInfo[MansionID][mExitPick] = CreatePickupAC(1277, 23, MansionInfo[MansionID][mExitX], MansionInfo[MansionID][mExitY], MansionInfo[MansionID][mExitZ], MansionID);
			format(mansion_str, sizeof(mansion_str), "{FFA118}Mansion: {FFFFFF}#%d\n\n{FFA118}Mflobeli: {FFFFFF}%s\n{FFA118}Type: {FFFFFF}%s", MansionInfo[MansionID][mID], MansionInfo[MansionID][mName], GetFamilyType(MansionInfo[MansionID][mType]));
			MansionInfo[MansionID][mText] = Create3DTextLabel(mansion_str, COLOR_WHITE, MansionInfo[MansionID][mEntranceX], MansionInfo[MansionID][mEntranceY], MansionInfo[MansionID][mEntranceZ], 20.0, 0, 1);
   			if(MansionInfo[MansionID][mCarID][0] != 0)
			{
		    	MansionInfo[MansionID][mCarStatus][0] = CreateVehicle(MansionInfo[MansionID][mCarID][0], MansionInfo[MansionID][mCarPosX][0], MansionInfo[MansionID][mCarPosY][0], MansionInfo[MansionID][mCarPosZ][0], MansionInfo[MansionID][mCarPosC][0], 0, 0, 1800);
            	GetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][0], engine,lights,alarm,doors,bonnet,boot,objective);
				SetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][0], VEHICLE_PARAMS_OFF,lights,alarm,0,bonnet,boot,objective);
				format(mansion_str, sizeof(mansion_str), "{7CFA81}Mansion #{FFFFFF}%d", MansionID);
            	MansionInfo[MansionID][mCarText][0] = CreateDynamic3DTextLabel(mansion_str, 0x85BB65FF, 0.0000, 0.0000, 0.3000, 15.0000, INVALID_PLAYER_ID, MansionInfo[MansionID][mCarStatus][0], 0, -1, -1);
			}
			else if(MansionInfo[MansionID][mCarID][0] == 0) MansionInfo[MansionID][mCarStatus][0] = -1, DestroyDynamic3DTextLabel(MansionInfo[MansionID][mCarText][0]);
			if(MansionInfo[MansionID][mCarID][1] != 0)
			{
		    	MansionInfo[MansionID][mCarStatus][1] = CreateVehicle(MansionInfo[MansionID][mCarID][1], MansionInfo[MansionID][mCarPosX][1], MansionInfo[MansionID][mCarPosY][1], MansionInfo[MansionID][mCarPosZ][1], MansionInfo[MansionID][mCarPosC][1], 0, 0, 1800);
            	GetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][1], engine,lights,alarm,doors,bonnet,boot,objective);
				SetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][1], VEHICLE_PARAMS_OFF,lights,alarm,0,bonnet,boot,objective);
				format(mansion_str, sizeof(mansion_str), "{7CFA81}Mansion #{FFFFFF}%d", MansionID);
            	MansionInfo[MansionID][mCarText][1] = CreateDynamic3DTextLabel(mansion_str, 0x85BB65FF, 0.0000, 0.0000, 0.3000, 15.0000, INVALID_PLAYER_ID, MansionInfo[MansionID][mCarStatus][1], 0, -1, -1);
			}
			else if(MansionInfo[MansionID][mCarID][1] == 0) MansionInfo[MansionID][mCarStatus][1] = -1, DestroyDynamic3DTextLabel(MansionInfo[MansionID][mCarText][1]);
			if(MansionInfo[MansionID][mCarID][2] != 0)
			{
		    	MansionInfo[MansionID][mCarStatus][2] = CreateVehicle(MansionInfo[MansionID][mCarID][2], MansionInfo[MansionID][mCarPosX][2], MansionInfo[MansionID][mCarPosY][2], MansionInfo[MansionID][mCarPosZ][2], MansionInfo[MansionID][mCarPosC][2], 0, 0, 1800);
            	GetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][2], engine,lights,alarm,doors,bonnet,boot,objective);
				SetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][2], VEHICLE_PARAMS_OFF,lights,alarm,0,bonnet,boot,objective);
				format(mansion_str, sizeof(mansion_str), "{7CFA81}Mansion #{FFFFFF}%d", MansionID);
            	MansionInfo[MansionID][mCarText][2] = CreateDynamic3DTextLabel(mansion_str, 0x85BB65FF, 0.0000, 0.0000, 0.3000, 15.0000, INVALID_PLAYER_ID, MansionInfo[MansionID][mCarStatus][2], 0, -1, -1);
			}
			else if(MansionInfo[MansionID][mCarID][2] == 0) MansionInfo[MansionID][mCarStatus][2] = -1, DestroyDynamic3DTextLabel(MansionInfo[MansionID][mCarText][2]);
			if(MansionInfo[MansionID][mCarID][3] != 0)
			{
		    	MansionInfo[MansionID][mCarStatus][3] = CreateVehicle(MansionInfo[MansionID][mCarID][3], MansionInfo[MansionID][mCarPosX][3], MansionInfo[MansionID][mCarPosY][3], MansionInfo[MansionID][mCarPosZ][3], MansionInfo[MansionID][mCarPosC][3], 0, 0, 1800);
            	GetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][3], engine,lights,alarm,doors,bonnet,boot,objective);
				SetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][3], VEHICLE_PARAMS_OFF,lights,alarm,0,bonnet,boot,objective);
				format(mansion_str, sizeof(mansion_str), "{7CFA81}Mansion #{FFFFFF}%d", MansionID);
            	MansionInfo[MansionID][mCarText][3] = CreateDynamic3DTextLabel(mansion_str, 0x85BB65FF, 0.0000, 0.0000, 0.3000, 15.0000, INVALID_PLAYER_ID, MansionInfo[MansionID][mCarStatus][3], 0, -1, -1);
			}
			else if(MansionInfo[MansionID][mCarID][3] == 0) MansionInfo[MansionID][mCarStatus][3] = -1, DestroyDynamic3DTextLabel(MansionInfo[MansionID][mCarText][3]);
			if(MansionInfo[MansionID][mCarID][4] != 0)
			{
		    	MansionInfo[MansionID][mCarStatus][4] = CreateVehicle(MansionInfo[MansionID][mCarID][4], MansionInfo[MansionID][mCarPosX][4], MansionInfo[MansionID][mCarPosY][4], MansionInfo[MansionID][mCarPosZ][4], MansionInfo[MansionID][mCarPosC][4], 0, 0, 1800);
            	GetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][4], engine,lights,alarm,doors,bonnet,boot,objective);
				SetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][4], VEHICLE_PARAMS_OFF,lights,alarm,0,bonnet,boot,objective);
				format(mansion_str, sizeof(mansion_str), "{7CFA81}Mansion #{FFFFFF}%d", MansionID);
            	MansionInfo[MansionID][mCarText][4] = CreateDynamic3DTextLabel(mansion_str, 0x85BB65FF, 0.0000, 0.0000, 0.3000, 15.0000, INVALID_PLAYER_ID, MansionInfo[MansionID][mCarStatus][4], 0, -1, -1);
			}
			else if(MansionInfo[MansionID][mCarID][4] == 0) MansionInfo[MansionID][mCarStatus][4] = -1, DestroyDynamic3DTextLabel(MansionInfo[MansionID][mCarText][4]);
			if(MansionInfo[MansionID][mCarID][5] != 0)
			{
		    	MansionInfo[MansionID][mCarStatus][5] = CreateVehicle(MansionInfo[MansionID][mCarID][5], MansionInfo[MansionID][mCarPosX][5], MansionInfo[MansionID][mCarPosY][5], MansionInfo[MansionID][mCarPosZ][5], MansionInfo[MansionID][mCarPosC][5], 0, 0, 1800);
            	GetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][5], engine,lights,alarm,doors,bonnet,boot,objective);
				SetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][5], VEHICLE_PARAMS_OFF,lights,alarm,0,bonnet,boot,objective);
				format(mansion_str, sizeof(mansion_str), "{7CFA81}Mansion #{FFFFFF}%d", MansionID);
            	MansionInfo[MansionID][mCarText][5] = CreateDynamic3DTextLabel(mansion_str, 0x85BB65FF, 0.0000, 0.0000, 0.3000, 15.0000, INVALID_PLAYER_ID, MansionInfo[MansionID][mCarStatus][5], 0, -1, -1);
			}
			else if(MansionInfo[MansionID][mCarID][5] == 0) MansionInfo[MansionID][mCarStatus][5] = -1, DestroyDynamic3DTextLabel(MansionInfo[MansionID][mCarText][5]);
			if(MansionInfo[MansionID][mCarID][6] != 0)
			{
		    	MansionInfo[MansionID][mCarStatus][6] = CreateVehicle(MansionInfo[MansionID][mCarID][6], MansionInfo[MansionID][mCarPosX][6], MansionInfo[MansionID][mCarPosY][6], MansionInfo[MansionID][mCarPosZ][6], MansionInfo[MansionID][mCarPosC][6], 0, 0, 1800);
            	GetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][6], engine,lights,alarm,doors,bonnet,boot,objective);
				SetVehicleParamsEx(MansionInfo[MansionID][mCarStatus][6], VEHICLE_PARAMS_OFF,lights,alarm,0,bonnet,boot,objective);
				format(mansion_str, sizeof(mansion_str), "{7CFA81}Mansion #{FFFFFF}%d", MansionID);
            	MansionInfo[MansionID][mCarText][6] = CreateDynamic3DTextLabel(mansion_str, 0x85BB65FF, 0.0000, 0.0000, 0.3000, 15.0000, INVALID_PLAYER_ID, MansionInfo[MansionID][mCarStatus][6], 0, -1, -1);
			}
			else if(MansionInfo[MansionID][mCarID][6] == 0) MansionInfo[MansionID][mCarStatus][6] = -1, DestroyDynamic3DTextLabel(MansionInfo[MansionID][mCarText][6]);
		}
	   	MansionID += 1;
		TotalMansion += 1;
	}
	printf("[Mansion Loaded]: <%i>. TIME: <%i ms>.", TotalMansion, GetTickCount() - time);
	return true;
}
@LoadPromoCode();
@LoadPromoCode()
{
    new time = GetTickCount();
    new rows;
	cache_get_row_count(rows);
	if(rows)
	{
	    for(new i = 1; i <= rows; i++)
		{
		    cache_get_value_index_int(i-1, 0, PromoCode[i][PromoCodeID]);
		    cache_get_value_name(i-1, "PromoCodeName", PromoCode[i][PromoCodeName], 20);
		    cache_get_value_index_int(i-1, 2, PromoCode[i][PromoCodeCash]);
			cache_get_value_index_int(i-1, 3, PromoCode[i][PromoCodeLevel]);
			cache_get_value_index_int(i-1, 4, PromoCode[i][PromoCodeUsed]);
			cache_get_value_index_int(i-1, 5, PromoCode[i][PromoCodeMaxUsed]);
			TotalPromoCode += 1;
        }
    }
	printf("[PromoCode Loaded]: <%i>. TIME: <%i ms>.", TotalPromoCode, GetTickCount() - time);
	return true;
}
fpublic OfflineLeaders(playerid)
{
    new rows, PlayerName[128], fracid, OfflineLeaderName, TotalOfflineLeaders = 0, leader_str[220];
	cache_get_row_count(rows);
	if(rows)
	{
	  	for(new i; i < rows; i++)
	    {
	    	cache_get_value_name(i, "Name", PlayerName);
	    	cache_get_value_name_int(i, "Leader", fracid);
			OfflineLeaderName = ReturnUser(PlayerName);
			if(OfflineLeaderName == INVALID_PLAYER_ID)
			{
				format(leader_str, sizeof(leader_str), "{38AF91}%s{FFFFFF}, Fraction: {38AF91}%s", PlayerName, GetFracName(fracid));
	            SendClientMessage(playerid, COLOR_WHITE, leader_str);
	            TotalOfflineLeaders += 1;
			}
	    }
	    if(TotalOfflineLeaders == 0) return errortxt(playerid, "Serveris Arcerti Leader Arimyofeba Offline!");
	    else if(TotalOfflineLeaders > 0)
	    {
	    	format(other_string, sizeof(other_string), "Offline: {38AF91}%d {FFFFFF}Leaders", TotalOfflineLeaders);
	    	SendClientMessage(playerid, COLOR_WHITE, other_string);
	    }
	}
    return true;
}
fpublic OfflineAdmins(playerid)
{
    new rows, PlayerName[128], adminlevel, OfflineAdminName, TotalOfflineAdmins = 0, admin_str[300];
	cache_get_row_count(rows);
	if(rows)
	{
	  	for(new i; i < rows; i++)
	    {
	    	cache_get_value_name(i, "Name", PlayerName);
	    	cache_get_value_name_int(i, "Admin", adminlevel);
			OfflineAdminName = ReturnUser(PlayerName);
			if(OfflineAdminName == INVALID_PLAYER_ID)
			{
				if(GetString(PlayerName, "Aleksandre_Kinkladze") && adminlevel) format(admin_str, sizeof(admin_str), "{38AF91}%s{FFFFFF}, Level: {38AF91}%d [Developer]", PlayerName, adminlevel);
	            else if(GetString(PlayerName, "Nikusha_Rizhamadze") && adminlevel) format(admin_str, sizeof(admin_str), "{38AF91}%s{FFFFFF}, Level: {38AF91}%d [Scripter]", PlayerName, adminlevel);
	            else if(GetString(PlayerName, "Love_Castle") && adminlevel) format(admin_str, sizeof(admin_str), "{38AF91}%s{FFFFFF}, Level: {38AF91}%d [Scripter]", PlayerName, adminlevel);
				else if(adminlevel == 10) format(admin_str, sizeof(admin_str), "{38AF91}%s{FFFFFF}, Level: {38AF91}%d [Owner]", PlayerName, adminlevel);
				else if(adminlevel == 9) format(admin_str, sizeof(admin_str), "{38AF91}%s{FFFFFF}, Level: {38AF91}%d [Co-Owner]", PlayerName, adminlevel);
				else if(adminlevel < 9) format(admin_str, sizeof(admin_str), "{38AF91}%s{FFFFFF}, Level: {38AF91}%d [Administrator]", PlayerName, adminlevel);
	            SendClientMessage(playerid, COLOR_WHITE, admin_str);
	            TotalOfflineAdmins += 1;
			}
	    }
	    if(TotalOfflineAdmins == 0) return errortxt(playerid, "Serveris Arcerti Administratori Arimyofeba Offline!");
	    else if(TotalOfflineAdmins > 0)
	    {
	    	format(other_string, sizeof(other_string), "Offline: {38AF91}%d {FFFFFF}Administratori", TotalOfflineAdmins);
	    	SendClientMessage(playerid, COLOR_WHITE, other_string);
	    }
	}
    return true;
}
fpublic fOfflineMembers(playerid)
{
    new rows, PlayerName[128], PlayerRank, OfflineMemberName, TotalOfflineMembers = 0;
	cache_get_row_count(rows);
	if(rows)
	{
	  	for(new i; i < rows; i++)
	    {
	    	cache_get_value_name(i, "Name", PlayerName);
	    	cache_get_value_name_int(i, "FamilyRank", PlayerRank);
			OfflineMemberName = ReturnUser(PlayerName);
			if(OfflineMemberName == INVALID_PLAYER_ID)
			{
				if(PlayerRank == 10) format(other_string, sizeof(other_string), "{38AF91}%s{FFFFFF}, Rank: {38AF91}%d [Leader]", PlayerName, PlayerRank);
				if(PlayerRank == 9) format(other_string, sizeof(other_string), "{38AF91}%s{FFFFFF}, Rank: {38AF91}%d [Under]", PlayerName, PlayerRank);
				if(PlayerRank < 9) format(other_string, sizeof(other_string), "{38AF91}%s{FFFFFF}, Rank: {38AF91}%d [Member]", PlayerName, PlayerRank);
				SendClientMessage(playerid, COLOR_WHITE, other_string);
				TotalOfflineMembers += 1;
			}
	    }
	    if(TotalOfflineMembers == 0) return errortxt(playerid, "Tkveni Family'dan Yvela Motamashe Imyofeba Serverze!");
	    else if(TotalOfflineMembers > 0)
	    {
	    	format(other_string, sizeof(other_string), "Offline: {38AF91}%d {FFFFFF}Members", TotalOfflineMembers);
	    	SendClientMessage(playerid, COLOR_WHITE, other_string);
	    }
	}
    return true;
}
fpublic OfflineMembers(playerid)
{
    new rows, PlayerName[128], PlayerRank, OfflineMemberName, TotalOfflineMembers = 0;
	cache_get_row_count(rows);
	if(rows)
	{
	  	for(new i; i < rows; i++)
	    {
	    	cache_get_value_name(i, "Name", PlayerName);
	    	cache_get_value_name_int(i, "Rank", PlayerRank);
			OfflineMemberName = ReturnUser(PlayerName);
			if(OfflineMemberName == INVALID_PLAYER_ID)
			{
				if(PlayerRank == 10) format(other_string, sizeof(other_string), "{38AF91}%s{FFFFFF}, Rank: {38AF91}%d [Leader]", PlayerName, PlayerRank);
				if(PlayerRank == 9) format(other_string, sizeof(other_string), "{38AF91}%s{FFFFFF}, Rank: {38AF91}%d [Under]", PlayerName, PlayerRank);
				if(PlayerRank < 9) format(other_string, sizeof(other_string), "{38AF91}%s{FFFFFF}, Rank: {38AF91}%d [Member]", PlayerName, PlayerRank);
				SendClientMessage(playerid, COLOR_WHITE, other_string);
				TotalOfflineMembers += 1;
			}
	    }
	    if(TotalOfflineMembers == 0) return errortxt(playerid, "Tkveni Organizaciidan Yvela Motamashe Imyofeba Serverze!");
	    else if(TotalOfflineMembers > 0)
	    {
	    	format(other_string, sizeof(other_string), "Offline: {38AF91}%d {FFFFFF}Members", TotalOfflineMembers);
	    	SendClientMessage(playerid, COLOR_WHITE, other_string);
	    }
	}
    return true;
}
fpublic OfflineUnInvite(playerid)
{
	new rows, PlayerName[128], PlayerRank, PlayerMember, OfflineMemberName;
	cache_get_row_count(rows);
	if(rows)
	{
	  	for(new i; i < rows; i++)
	    {
	    	cache_get_value_name(i, "Name", PlayerName);
	    	cache_get_value_name_int(i, "Member", PlayerMember);
	    	cache_get_value_name_int(i, "Rank", PlayerRank);
	    	OfflineMemberName = ReturnUser(PlayerName);
	    	{
	    		if(OfflineMemberName == INVALID_PLAYER_ID)
	    		{
	    			if(PI[playerid][pMember] != PlayerMember) return errortxt(playerid, "Motamashe Ar Imyofeba Tkvens Organizaciashi!");
					if(PI[playerid][pRank] == 8 && PlayerRank < 8)
					{
					    format(connect_str, sizeof(connect_str), "UPDATE accounts SET Leader = '0', Member = '0', Rank = '0', FracSkin = '0', SpawnType = '1' WHERE Name = '%s' LIMIT 1", PlayerName);
						mysql_query(connect, connect_str);
						if(PI[playerid][pMember] == 1) format(other_string, sizeof(other_string), "{38AF91}[R] %s[%d]{FFFFFF}'m(a) Gaagdo Offline Motamashe Organizaciidan: {38AF91}%s", Name(playerid), playerid, PlayerName), SendFractionMessage(PI[playerid][pMember], COLOR_WHITE, other_string);
					}
					else if(PI[playerid][pRank] == 8 && PlayerRank > 7) return errortxt(playerid, "Tkven Ar Gakvt Am Motamashis Gagdebis Ufleba!");
					else if(PI[playerid][pRank] == 9 && PlayerRank < 9)
					{
					    format(connect_str, sizeof(connect_str), "UPDATE accounts SET Leader = '0', Member = '0', Rank = '0', FracSkin = '0', SpawnType = '1' WHERE Name = '%s' LIMIT 1", PlayerName);
						mysql_query(connect, connect_str);
						if(PI[playerid][pMember] == 1) format(other_string, sizeof(other_string), "{38AF91}[R] %s[%d]{FFFFFF}'m(a) Gaagdo Offline Motamashe Organizaciidan: {38AF91}%s", Name(playerid), playerid, PlayerName), SendFractionMessage(PI[playerid][pMember], COLOR_WHITE, other_string);
					}
					else if(PI[playerid][pRank] == 9 && PlayerRank > 8) return errortxt(playerid, "Tkven Ar Gakvt Am Motamashis Gagdebis Ufleba!");
					else if(PI[playerid][pRank] == 10 && PlayerRank < 10)
					{
					    format(connect_str, sizeof(connect_str), "UPDATE accounts SET Leader = '0', Member = '0', Rank = '0', FracSkin = '0', SpawnType = '1' WHERE Name = '%s' LIMIT 1", PlayerName);
						mysql_query(connect, connect_str);
						if(PI[playerid][pMember] == 1) format(other_string, sizeof(other_string), "{38AF91}[R] %s[%d]{FFFFFF}'m(a) Gaagdo Offline Motamashe Organizaciidan: {38AF91}%s", Name(playerid), playerid, PlayerName), SendFractionMessage(PI[playerid][pMember], COLOR_WHITE, other_string);
					}
					else if(PI[playerid][pRank] == 10 && PlayerRank > 9) return errortxt(playerid, "Tkven Ar Gakvt Am Motamashis Gagdebis Ufleba!");
	    		}
	    		else if(OfflineMemberName == playerid) return errortxt(playerid, "Tkven Miutitet Tkveni ID!");
	    		else if(OfflineMemberName != INVALID_PLAYER_ID) return errortxt(playerid, "Motamashe Imyofeba Serverze, Sheiyvanet: /uninvite [Motamashis ID] [Mizezi]");
	    	}
	    }
    }
    else errortxt(playerid, "Motamashe Ver Moidzebna!");
    return true;
}
fpublic ShaxtaTimer(playerid)
{
    RemovePlayerAttachedObject(playerid, 1);
    ClearAnimations(playerid);
    ApplyAnimation(playerid,"PED","IDLE_chat",5.0,0,0,0,1,2500,1);
    SetTimerEx("ShaxtaTimer2", 1000, false, "i", playerid);
    SetPVarInt(playerid, "ShaxtaAnim", 0);
    ApplyAnimation(playerid, "CARRY", "liftup", 4.1, 0, 1, 1, 0, 0, 1);
}
fpublic ShaxtaTimer2(playerid)
{
    TogglePlayerControllable(playerid, 1);
    ClearAnimations(playerid);
    SetPlayerSpecialAction(playerid, SPECIAL_ACTION_CARRY);
    SetPlayerAttachedObject(playerid, 1, 2936, 1, 0.184699, 0.426247, 0.000000, 259.531341, 80.949592, 0.000000, 0.476124, 0.468181, 0.470769);
    SetPVarInt(playerid, "ShaxtaCount", 2);
    SetPVarInt(playerid, "PlantationAnim", 0);
}
fpublic PlantationTimer(playerid)
{
    DisablePlayerCheckpoint(playerid);
    ClearAnimations(playerid);
    SetPVarInt(playerid, "PlantationAnim", 0);
    ApplyAnimation(playerid,"PED","IDLE_chat",5.0,0,0,0,1,2500,1);
    SetTimerEx("PlantationTimer2", 1000, false, "i", playerid);
    ApplyAnimation(playerid, "CARRY", "liftup", 4.1, 0, 1, 1, 0, 0, 1);
}
fpublic PlantationTimer2(playerid)
{
	TogglePlayerControllable(playerid, 1);
	SetPVarInt(playerid, "PlantationCount", 2);
	ClearAnimations(playerid);
	SetPlayerSpecialAction(playerid, SPECIAL_ACTION_CARRY);
	SetPlayerAttachedObject(playerid, 1, 1578, 1, 0.11, 0.36, 0.0, 0.0, 90.0);
	SetPlayerCheckpoint(playerid, -1030.3304,-1618.7107,76.3884, 1);
	SetPVarInt(playerid, "PlantationAntiCheatTimer", GetPVarInt(playerid, "PlantationAntiCheatType"));
}
fpublic MchrelisDro(playerid)
{
    RemovePlayerAttachedObject(playerid,0);
	ClearAnimations(playerid);
	ApplyAnimation(playerid,"PED","IDLE_chat",5.0,0,0,0,1,2500,1);
    SetPlayerAttachedObject(playerid, 0, 1458, 1, -1.034844, 1.116571, -0.065124, 76.480148, 75.781570, 280.952545, 0.575599, 0.604554, 0.624122);
    SetTimerEx("WoodLoaded", 6000, false, "i", playerid);
}
fpublic WoodLoaded(playerid)
{
    TogglePlayerControllable(playerid, 1);
    SetPlayerAttachedObject(playerid, 1, 1463, 1, -0.39, 1.616571, -0.065124,76.480148, 102.781570, 190.952545,1.1,0.5,1.0);
	SetPlayerCheckpoint(playerid, -1985.6067,-2368.6848,30.6318, 1.0);
	SetPVarInt(playerid,"CutWork",2);
}
fpublic WoodLoader(playerid)
{
	MoveObject(CutWorkObject[playerid],  -2001.25525, -2383.70532, 38.54800, 3);
	SetTimerEx("WoodLoaderEnd", 6000, false, "i", playerid);
	return true;
}
fpublic WoodLoaderEnd(playerid)
{
	DestroyObject(CutWorkObject[playerid]);
	return true;
}
fpublic Random(min, max)
{
	new a = random(max - min) + min;
	return a;
}
fpublic VehicleRespawn()
{
	for(new i = 0; i <MAX_VEHICLES; i++)
	{
		if(!IsVehicleOccupied(i))
		{
			SetVehicleToRespawn(i);
		}
	}
	AutoSalonCarLocked();
	VehiclesRespawn = 0;
}
CarUpdateData(idx, field[], data)
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `AutoSalon` SET %s = %d WHERE ID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
CarUpdateDataString(idx, field[], data[])
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `AutoSalon` SET %s = '%s' WHERE ID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
fpublic PlayerNameChange(playerid, giveplayer, PlayerName[])
{
    new rows;
	cache_get_row_count(rows);
	if(rows) errortxt(playerid, "Es Saxeli Dakavebulia!"), errortxt(giveplayer, "Es Saxeli Dakavebulia!");
	else
	{
		new namestr[200];
		format(namestr, sizeof(namestr), "UPDATE `accounts` SET `Name` = '%s' WHERE `Name` = '%s' LIMIT 1", PlayerName, Name(giveplayer));
		mysql_query(connect, namestr);
		mysql_format(connect, namestr, sizeof(namestr), "UPDATE `Cars` SET `CarOwner` = '%s' WHERE `CarOwner` = '%e' LIMIT 1", PlayerName, PI[giveplayer][pName]);
		mysql_tquery(connect, namestr, "", "");
		if(PI[giveplayer][pHouse] != 999)
		{
			format(namestr, sizeof(namestr), "UPDATE house SET HouseOwner = '%s' WHERE HouseOwner = '%s'", PlayerName, Name(giveplayer));
			mysql_query(connect, namestr);
			format(HouseInfo[PI[giveplayer][pHouse]][HouseOwner], 20, PlayerName);
			HouseUpdateDataString(PI[giveplayer][pHouse], "HouseOwner", HouseInfo[PI[giveplayer][pHouse]][HouseOwner]);
		}
		if(PI[giveplayer][pResident] != 999)
		{
			format(namestr, sizeof(namestr), "UPDATE House SET HouseResidentOne = '%s' WHERE HouseResidentOne = '%s' LIMIT 1", PlayerName, Name(giveplayer));
			mysql_query(connect, namestr);

			format(namestr, sizeof(namestr), "UPDATE House SET HouseResidentTwo = '%s' WHERE HouseResidentTwo = '%s' LIMIT 1", PlayerName, Name(giveplayer));
			mysql_query(connect, namestr);

			format(namestr, sizeof(namestr), "UPDATE House SET HouseResidentThree = '%s' WHERE HouseResidentThree = '%s' LIMIT 1", PlayerName, Name(giveplayer));
			mysql_query(connect, namestr);
		}
		if(PI[giveplayer][pBuisness] != 50)
		{
			format(namestr, sizeof(namestr), "UPDATE bizz SET bOwner = '%s' WHERE bOwner = '%s' LIMIT 1", PlayerName, Name(giveplayer));
			mysql_query(connect, namestr);
			format(BizzInfo[PI[giveplayer][pBuisness]][bOwner], 20, PlayerName);
			BizzUpdateDataString(PI[giveplayer][pBuisness], "bOwner", BizzInfo[PI[giveplayer][pBuisness]][bOwner]);
		}
		format(b_string, sizeof(b_string), "Administrator: {38AF91}%s{FFFFFF}'m(a) Shegicvalat Saxeli: {38AF91}%s", Name(playerid), PlayerName);
		SendClientMessage(giveplayer, COLOR_WHITE, b_string);
		format(b_string, sizeof(b_string), "Tkven Sheucvalet Saxeli: {38AF91}%s{FFFFFF}'s / {38AF91}%s", Name(giveplayer), PlayerName);
		SendClientMessage(playerid, COLOR_WHITE, b_string);
		Kickk(giveplayer);
	}
	return true;
}
fpublic UpdateCasino()
{
	for(new i;i<MAX_COSTI;i++)
 	{
   		if(TimeStavka[i] <= 0) continue;
		TimeStavka[i] --;
  		foreach(new g:Player)
		{
			if(GetPVarInt(g,"GameStol") == i && GetPVarInt(g,"StolReg") == i || StolInfo[i][Crupe] == g)
			{
				new str[14];
 				format(str,sizeof(str),"~g~%d",TimeStavka[i]);
  				GameTextForPlayer(g,str,1200,6);
   				if(TimeStavka[i] == 1 && GetPVarInt(g,"StolReg") == i && GetPVarInt(g,"Ochki") == 88)
				{
					new counterr = Random(2,11);
					SetPVarInt(g, "Ochki", counterr);
	  			}
	 	 	}
	  	}
	  	if(TimeStavka[i] == 1) ShowItog(i);
   	}
}
fpublic SaveCasino()
{
    new query[600];
	new string[128];
	for(new i = 1; i < 2;i++)
	{
		query = "UPDATE `Casino` SET ";
		acc_str_strcat(query, sizeof(query), "Casino", CasinoInfo[i][Casino]);
		acc_str_strcat(query, sizeof(query), "MangerOne", CasinoInfo[i][MangerOne]);
		acc_str_strcat(query, sizeof(query), "MangerTwo", CasinoInfo[i][MangerTwo]);
		acc_str_strcat(query, sizeof(query), "MangerThree", CasinoInfo[i][MangerThree]);
		acc_str_strcat(query, sizeof(query), "DealerOne", CasinoInfo[i][DealerOne]);
		acc_str_strcat(query, sizeof(query), "DealerTwo", CasinoInfo[i][DealerTwo]);
		acc_str_strcat(query, sizeof(query), "DealerThree", CasinoInfo[i][DealerThree]);
		strdel(query, strlen(query)-1, strlen(query));
		format(string,sizeof(string)," WHERE `ID` = '%d'", CasinoInfo[i][ID]);
		strcat(query, string);
		mysql_tquery(connect, query, "", "");
	}
	return true;
}
fpublic LoadCasino()
{
    new rows, time = GetTickCount();
	cache_get_row_count(rows);
	if(rows)
	{
		for(new i = 0; i < rows; i ++)
		{
			cache_get_value_name_int(i, "ID", CasinoInfo[1][ID]);
			cache_get_value_name(i, "Casino", CasinoInfo[1][Casino], 16);
			cache_get_value_name(i, "DealerOne", CasinoInfo[1][DealerOne], 32);
			cache_get_value_name(i, "DealerTwo", CasinoInfo[1][DealerTwo], 32);
			cache_get_value_name(i, "DealerThree", CasinoInfo[1][DealerThree], 32);
			cache_get_value_name(i, "MangerOne", CasinoInfo[1][MangerOne], 32);
			cache_get_value_name(i, "MangerTwo", CasinoInfo[1][MangerTwo], 32);
			cache_get_value_name(i, "MangerThree", CasinoInfo[1][MangerThree], 32);
		}
		printf("[Casino Loaded]: <1>. TIME: <%i ms>.", GetTickCount() - time);
	}
	return true;
}
CasinoUpdateDataString(idx, field[], data[])
{
	new sqlsstr[150];
	format(sqlsstr, sizeof(sqlsstr), "UPDATE `Casino` SET %s = '%s' WHERE ID = %d LIMIT 1", field, data, idx);
	mysql_tquery(connect, sqlsstr, "", "");
	return true;
}
fpublic NullStol(stolid)
{
	StolInfo[stolid][Crupe] = INVALID_PLAYER_ID;
	StolInfo[stolid][GameStart] = 0;
	StolInfo[stolid][Bank] = 0;
    return true;
}
fpublic TazedRemove(playerid)
{
	TogglePlayerControllable(playerid, 1);
 	ClearAnimations(playerid);
  	Tazed[playerid] = false;
}
fpublic DialogStatusOFF(playerid)
{
	DialogStatus[playerid] = false;
}
fpublic PracticeStart(playerid)
{
    CheckpointCount[playerid] = 2;
	SetPlayerRaceCheckpoint(playerid, 0, -2039.1152,-151.9724,35.0632, -2039.1152,-151.9724,35.0632, 1.0);
	TogglePlayerControllable(playerid, 1);
}
fpublic MatCarrierStart(playerid)
{
	if(Job[playerid] != 6) return errortxt(playerid, "Tkven Ar Mushaobt Materialebis Gadamzidad!"), DisablePlayerCheckpoint(playerid), SetPVarInt(playerid, "MatCarrierCode", 0);
	if(GetVehicleModel(GetPlayerVehicleID(playerid)) != 428) return errortxt(playerid, "Tkven Ar Imyofebit Materialebis Gadasazid Transportshi!"), SetPlayerCheckpoint(playerid, 844.8834,-599.4453,18.5456, 2);
	MatCarrierCount[playerid] = GetPVarInt(playerid, "MatCarrierCounter");
	FactoryWH -= MatCarrierCount[playerid];
	FactoryTextUPDATE();
	SetPVarInt(playerid, "MatCarrierCode", 2);
	SetPlayerCheckpoint(playerid, 2640.9221,-2387.9558,13.7579, 2);
	SendClientMessage(playerid, COLOR_WHITE, "{FF4545}Materialebis Gadamzidi{FFFFFF} | Transportshi Materialebis Chatvirtva Dasrulda");
	format(other_string, sizeof(other_string), "{FF4545}Materialebis Gadamzidi{FFFFFF} | Transportshi Chatvirtulia: {FF4545}%d {FFFFFF}Materiali", MatCarrierCount[playerid]);
	SendClientMessage(playerid, COLOR_WHITE, other_string);
	SendClientMessage(playerid, COLOR_WHITE, "{FF4545}Materialebis Gadamzidi{FFFFFF} | Materialebis Chasabarebeli Adgilmdebareoba Monishnulia {FF4545}GPS{FFFFFF}'ze");
	TogglePlayerControllable(playerid, 1);
	SetPVarInt(playerid, "MatCarrierCounter", 0);
	return true;
}
fpublic MatCarrierStart2(playerid)
{
	if(Job[playerid] != 6) return errortxt(playerid, "Tkven Ar Mushaobt Materialebis Gadamzidad!"), DisablePlayerCheckpoint(playerid), SetPVarInt(playerid, "MatCarrierCode", 0);
	if(GetVehicleModel(GetPlayerVehicleID(playerid)) != 428) return errortxt(playerid, "Tkven Ar Imyofebit Materialebis Gadasazid Transportshi!"), SetPlayerCheckpoint(playerid, 2640.9221,-2387.9558,13.7579, 2);
	format(other_string, sizeof(other_string), "{FF4545}Materialebis Gadamzidi{FFFFFF} | Tkveni Transportidan Chamoitvirta: {FF4545}%d {FFFFFF}Materiali", MatCarrierCount[playerid]);
	SendClientMessage(playerid, COLOR_WHITE, other_string);
	ARMYMats += MatCarrierCount[playerid];
	new JobMoney = Random(1500, 3000);
	MatJobMoney[playerid] += JobMoney*SalaryBoost;
	format(other_string, sizeof(other_string), "{FF4545}Materialebis Gadamzidi{FFFFFF} | Tkven Gamoimushavet Jamurad: {FF4545}%d$", MatJobMoney[playerid]);
	SendClientMessage(playerid, COLOR_WHITE, other_string);
	format(log_str, sizeof(log_str), "[Materialebis Gadamzidi] %s'm(a) Gamoimushava: %d$", Name(playerid), JobMoney*SalaryBoost);
	CreateLog("Job", log_str);
	SetPVarInt(playerid, "MatCarrierCode", 1);
	SetPlayerCheckpoint(playerid, 844.8834,-599.4453,18.5456, 2);
	SendClientMessage(playerid, COLOR_WHITE, "{FF4545}Materialebis Gadamzidi{FFFFFF} | Materialebis Chasatvirti AdgilMdebareoba Monishnulia {FF4545}GPS{FFFFFF}'ze");
	TogglePlayerControllable(playerid, 1);
	if(PI[playerid][pQuest][6] == 0) QuestProgress[playerid][6] += MatCarrierCount[playerid];
	if(QuestProgress[playerid][6] >= 3500)
	{
	    PI[playerid][pQuest][6] = 1;
	    UpdatePlayerData(playerid, "Quest7", PI[playerid][pQuest][6]);
		PI[playerid][pEXP] += 2;
		UpdatePlayerData(playerid, "EXP", PI[playerid][pEXP]);
		PI[playerid][pMoney] += 3000;
		UpdatePlayerData(playerid, "Money", PI[playerid][pMoney]);
		QuestProgress[playerid][6] = 0;
		NextLevel(playerid);
		SendClientMessage(playerid, COLOR_WHITE, "{009933}Quest Mission{FFFFFF} | Gilocavt! Tkven Sheasrulet Misia Da Gadmogecat: {009933}2EXP + 3.000$");
		format(log_str, sizeof(log_str), "%s'm(a) Sheasrula Questi Da Miigo: 2EXP + 3.000$ - Materialebis Gadamzidi", Name(playerid));
		CreateLog("Money", log_str);
	}
	MatCarrierCount[playerid] = 0;
	return true;
}
fpublic GetSpawnTypeTimer(playerid) SpawnPlayer(playerid);
fpublic MatCarrierCarRespawn(playerid)
{
    for(new c; c != 7; c++)
	if(!IsVehicleOccupied(MatCarrierCar[c]))
	{
    	SetVehicleToRespawn(MatCarrierCar[c]);
	}
}
fpublic PracticeTimer(playerid)
{
    CheckpointCount[playerid] = 27;
	SetPlayerRaceCheckpoint(playerid, 0, -2077.7793,-136.5766,35.0629, -2082.0359,-114.5682,35.0628, 1.0);
	TogglePlayerControllable(playerid, 1);
}
fpublic CheckIPBan(playerid)
{
	new rows, playerip[16];
	cache_get_row_count(rows);
	GetPlayerIp(playerid, playerip, sizeof(playerip));
	if(rows)
	{
		new BanDays, current = getdate(), BanAdmin[32], BanData[16], BanTime[16], banstr[400];
		cache_get_value_name(0, "Admin", BanAdmin);
		cache_get_value_name_int(0, "Days", BanDays);
		cache_get_value_name(0, "Data", BanData);
		cache_get_value_name(0, "Time", BanTime);
		new Days = BanDays-current;
		if(BanDays > current)
		{
		    format(banstr, sizeof(banstr), "{FFFFFF}Serveris Administratorma Dabloka Tkveni IP Misamarti\n\n{FFFFFF}Name: {FF4545}%s\n{FFFFFF}Administrator: {FF4545}%s\n{FFFFFF}IPBanis Dadebis Tarigi: {FF4545}%s\n{FFFFFF}IPBan'is Dadebis Dro: {FF4545}%s\n{FFFFFF}IPBan'is Axsnamde Darchenilia: {FF4545}%d {FFFFFF}Dge\n\n{FFFFFF}Tu Tvlit, Rom {FF4545}IPBan {FFFFFF}Arasworad Dagedot Aucileblad Gaasachivret Jgufshi",
			Name(playerid), BanAdmin, BanData, BanTime, Days);
			ShowPlayerDialog(playerid, INVALID_DIALOG_ID, DIALOG_STYLE_MSGBOX, "{FF4545}Your IP Address Is Blocked", banstr, "Daxurva", "");
            SetTimerEx("kick", 2000, false, "d", playerid);
		}
		if(BanDays <= current)
		{
		    format(sql_str,sizeof(sql_str), "DELETE FROM `IPBan` WHERE `IP` = '%s'", playerip);
			mysql_tquery(connect, sql_str, "", "");
		}
	}
}
fpublic AntiCTimer(playerid)
{
	TogglePlayerControllable(playerid, true);
	AntiC[playerid] = false;
	return true;
}
fpublic SatietyUPDATE(playerid)
{
	if(Satiety_Time[playerid] > 0)
	{
	    Satiety_Time[playerid] -= 1;
	    new st_string[15];
		format(st_string, sizeof(st_string), "%d Sec", Satiety_Time[playerid]);
		PlayerTextDrawSetString(playerid, Satiety_PTD[playerid][5], st_string);
	}
	else if(Satiety_Time[playerid] == 0)
	{
		for(new t; t != 14; t++) TextDrawHideForPlayer(playerid, Satiety_TD[t]);
		for(new t; t != 6; t++) PlayerTextDrawHide(playerid, Satiety_PTD[playerid][t]);
		PlayerTextDrawSetString(playerid, Satiety_PTD[playerid][5], "10 Sec");
	    KillTimer(Satiety_Timer[playerid]);
	    Satiety_Timer[playerid] = -1;
	}
	return true;
}
stock ShowSpeedometr_PTD(playerid)
{
	if(GetLauncherStatus(playerid))
	{
		cef_emit_event(playerid, "speedometr:visible", CEFINT(1));
		new Float:PosX, Float:PosY, Float:PosZ;
		GetPlayerPos(playerid, PosX, PosY, PosZ);
		new km = floatround(GetDistanceBetweenPoints(Coordinats[playerid][0], Coordinats[playerid][1], Coordinats[playerid][2], PosX, PosY, PosZ), floatround_round);
		if(km > 170)
		{
		    Kilometrs[playerid] += 1;
			GetPlayerPos(playerid, Coordinats[playerid][0], Coordinats[playerid][1], Coordinats[playerid][2]);
		}
	}
	else
	{
        for(new i; i != 42; i++) PlayerTextDrawShow(playerid, Speed_PTD[playerid][i]);
	    Speed_Timer[playerid] = SetTimerEx("UpdateSpeedometr_PTD", 100, true, "i",playerid);
	    if(lights == VEHICLE_PARAMS_UNSET || lights == VEHICLE_PARAMS_OFF)
	    {
	        PlayerTextDrawHide(playerid, Speed_PTD[playerid][29]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][28]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][27]);
		    PlayerTextDrawHide(playerid, Speed_PTD[playerid][8]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][7]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][6]);
		    PlayerTextDrawColor(playerid, Speed_PTD[playerid][29], 0xA52A2AFF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][28], 0xA52A2AFF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][27], 0xA52A2AFF);
		    PlayerTextDrawColor(playerid, Speed_PTD[playerid][8], 0x14DB43FF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][7], 0x14DB43FF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][6], 0x14DB43FF);
		    PlayerTextDrawShow(playerid, Speed_PTD[playerid][33]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][29]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][28]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][27]);
		    PlayerTextDrawShow(playerid, Speed_PTD[playerid][8]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][7]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][6]);
	    }
	    else
	    {
	        PlayerTextDrawHide(playerid, Speed_PTD[playerid][29]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][28]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][27]);
		    PlayerTextDrawHide(playerid, Speed_PTD[playerid][8]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][7]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][6]);
		    PlayerTextDrawColor(playerid, Speed_PTD[playerid][29], 0x14DB43FF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][28], 0x14DB43FF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][27], 0x14DB43FF);
		    PlayerTextDrawColor(playerid, Speed_PTD[playerid][8], 0x14DB43FF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][7], 0x14DB43FF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][6], 0x14DB43FF);
		    PlayerTextDrawShow(playerid, Speed_PTD[playerid][29]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][28]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][27]);
		    PlayerTextDrawShow(playerid, Speed_PTD[playerid][8]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][7]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][6]);
	    }
		if(doors == 0)
		{
		  	PlayerTextDrawHide(playerid, Speed_PTD[playerid][24]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][23]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][22]);
	    	PlayerTextDrawColor(playerid, Speed_PTD[playerid][24], 0x14DB43FF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][23], 0x14DB43FF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][22], 0x14DB43FF);
	    	PlayerTextDrawShow(playerid, Speed_PTD[playerid][24]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][23]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][22]);
		}
		else if(doors == 1)
		{
		    PlayerTextDrawHide(playerid, Speed_PTD[playerid][24]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][23]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][22]);
		    PlayerTextDrawColor(playerid, Speed_PTD[playerid][24], 0xA52A2AFF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][23], 0xA52A2AFF), PlayerTextDrawColor(playerid, Speed_PTD[playerid][22], 0xA52A2AFF);
		    PlayerTextDrawShow(playerid, Speed_PTD[playerid][24]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][23]), PlayerTextDrawShow(playerid, Speed_PTD[playerid][22]);
		}
	}
}
fpublic UpdateSpeedometr_PTD(playerid)
{
    if(GetPlayerState(playerid) == PLAYER_STATE_DRIVER && !GetLauncherStatus(playerid))
    {
		format(speedstr, sizeof(speedstr), "%d", VehicleFuel[GetPlayerVehicleID(playerid)]);
		PlayerTextDrawSetString(playerid, Speed_PTD[playerid][3], speedstr);
	    if(GetVehicleSpeed(GetPlayerVehicleID(playerid)) == 0)
	    {
	    	format(speedstr, sizeof(speedstr), "00%d", GetVehicleSpeed(GetPlayerVehicleID(playerid)));
			PlayerTextDrawSetString(playerid, Speed_PTD[playerid][33], speedstr);
			PlayerTextDrawHide(playerid, Speed_PTD[playerid][33]);
			PlayerTextDrawColor(playerid, Speed_PTD[playerid][33], 0xA52A2AFF);
			PlayerTextDrawShow(playerid, Speed_PTD[playerid][33]);
		}
	    else if(GetVehicleSpeed(GetPlayerVehicleID(playerid)) <= 9)
	    {
	    	format(speedstr, sizeof(speedstr), "00%d", GetVehicleSpeed(GetPlayerVehicleID(playerid)));
			PlayerTextDrawSetString(playerid, Speed_PTD[playerid][33], speedstr);
			PlayerTextDrawHide(playerid, Speed_PTD[playerid][33]);
			PlayerTextDrawColor(playerid, Speed_PTD[playerid][33], 0x14DB43FF);
			PlayerTextDrawShow(playerid, Speed_PTD[playerid][33]);
		}
	    else if(GetVehicleSpeed(GetPlayerVehicleID(playerid)) <= 99)
	    {
	    	format(speedstr, sizeof(speedstr), "0%d", GetVehicleSpeed(GetPlayerVehicleID(playerid)));
			PlayerTextDrawSetString(playerid, Speed_PTD[playerid][33], speedstr);
		}
		else if(GetVehicleSpeed(GetPlayerVehicleID(playerid)) >= 100)
		{
		  	format(speedstr, sizeof(speedstr), "%d", GetVehicleSpeed(GetPlayerVehicleID(playerid)));
			PlayerTextDrawSetString(playerid, Speed_PTD[playerid][33], speedstr);
		}
		PlayerTextDrawTextSize(playerid, Speed_PTD[playerid][4], VehicleFuel[GetPlayerVehicleID(playerid)]/1.25, 3.940000);
		new Float:PosX, Float:PosY, Float:PosZ;
		GetPlayerPos(playerid, PosX, PosY, PosZ);
		new km = floatround(GetDistanceBetweenPoints(Coordinats[playerid][0], Coordinats[playerid][1], Coordinats[playerid][2], PosX, PosY, PosZ), floatround_round);
		if(km > 170)
		{
		    Kilometrs[playerid] += 1;
			GetPlayerPos(playerid, Coordinats[playerid][0], Coordinats[playerid][1], Coordinats[playerid][2]);
		}
		if(Kilometrs[playerid] < 25) format(speedstr, sizeof(speedstr), "00000%d", Kilometrs[playerid]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][12]), PlayerTextDrawColor(playerid, Speed_PTD[playerid][12], 0x14DB43FF), PlayerTextDrawShow(playerid, Speed_PTD[playerid][12]);
		else if(Kilometrs[playerid] >= 25) format(speedstr, sizeof(speedstr), "0000%d", Kilometrs[playerid]), PlayerTextDrawHide(playerid, Speed_PTD[playerid][12]), PlayerTextDrawColor(playerid, Speed_PTD[playerid][12], 0xA52A2AFF), PlayerTextDrawShow(playerid, Speed_PTD[playerid][12]);
		else if(Kilometrs[playerid] < 1000) format(speedstr, sizeof(speedstr), "000%d", Kilometrs[playerid]);
		else if(Kilometrs[playerid] < 10000) format(speedstr, sizeof(speedstr), "00%d", Kilometrs[playerid]);
		else if(Kilometrs[playerid] < 100000) format(speedstr, sizeof(speedstr), "0%d", Kilometrs[playerid]);
		else if(Kilometrs[playerid] < 1000000) format(speedstr, sizeof(speedstr), "%d", Kilometrs[playerid]);
		PlayerTextDrawSetString(playerid, Speed_PTD[playerid][12], speedstr);
	}
	else HideSpeedometr_PTD(playerid);
	return true;
}
stock VehicleLic(carid)
{
	switch (GetVehicleModel(carid))
	{
		case 400..416,418..424,426..429,431..445,449,451,455,456,458,459,461: return true;
		case 463,466..468,470,471,474,475,477..480,482,483,485,486,489..492,494..496,498..508: return true;
		case 514..518,521..531,533..537,539..547,549..551,554..562,564..568,572..576,578..583,585..589,596..605,609: return true;
		case 12300..12326: return true;
	}
	return false;
}
stock PlayerStatus(Name[])
{
    new PlayerName[24];
    for(new i; i< MAX_PLAYERS; i++)
    {
        if(!IsPlayerConnected(i)) continue;
        GetPlayerName(i, PlayerName, 24);
        if(!strcmp(PlayerName, Name, true)) return true;
    }
    return false;
}
stock DelName(playerid,stolid)
{
	if(StolInfo[stolid][Gamer][0] == playerid) {StolInfo[stolid][Gamer][0] = INVALID_PLAYER_ID;StolInfo[stolid][Igrokov]--; return true;}
    if(StolInfo[stolid][Gamer][1] == playerid) {StolInfo[stolid][Gamer][1] = INVALID_PLAYER_ID;StolInfo[stolid][Igrokov]--;  return true;}
    if(StolInfo[stolid][Gamer][2] == playerid) {StolInfo[stolid][Gamer][2] = INVALID_PLAYER_ID;StolInfo[stolid][Igrokov]--;  return true;}
    if(StolInfo[stolid][Gamer][3]== playerid) {StolInfo[stolid][Gamer][3] = INVALID_PLAYER_ID;StolInfo[stolid][Igrokov]--;  return true;}
    if(StolInfo[stolid][Gamer][4] == playerid) {StolInfo[stolid][Gamer][4] = INVALID_PLAYER_ID;StolInfo[stolid][Igrokov]--;  return true;}
 	return false;
}
stock SetNameStol(playerid,stolid)
{
	SetPVarInt(playerid,"StolReg",88);
    if(StolInfo[stolid][Gamer][0] == INVALID_PLAYER_ID && KazinoDuty[playerid] == 0) {StolInfo[stolid][Gamer][0] = playerid, StolInfo[stolid][Igrokov]++; return true;}
    if(StolInfo[stolid][Gamer][1] == INVALID_PLAYER_ID && KazinoDuty[playerid] == 0) {StolInfo[stolid][Gamer][1] = playerid, StolInfo[stolid][Igrokov]++; return true;}
    if(StolInfo[stolid][Gamer][2] == INVALID_PLAYER_ID && KazinoDuty[playerid] == 0) {StolInfo[stolid][Gamer][2]= playerid, StolInfo[stolid][Igrokov]++; return true;}
    if(StolInfo[stolid][Gamer][3] == INVALID_PLAYER_ID && KazinoDuty[playerid] == 0) {StolInfo[stolid][Gamer][3] = playerid, StolInfo[stolid][Igrokov]++; return true;}
    if(StolInfo[stolid][Gamer][4] == INVALID_PLAYER_ID && KazinoDuty[playerid] == 0) {StolInfo[stolid][Gamer][4] = playerid, StolInfo[stolid][Igrokov]++; return true;}
 	return false;
}
stock ShowItog(stolid)
{
	new maxs = 0,id = -1,test = 0;
  	foreach(new i:Player)
	{
   		if(GetPVarInt(i,"StolReg") == stolid && GetPVarInt(i,"Ochki") < 88)
   		{
     		new v = GetPVarInt(i,"Ochki");
     		if(v > maxs) { maxs = v; id = i; }
 		}
  	}
	foreach(new i:Player)
	{
	    if(GetPVarInt(i,"StolReg") == stolid && GetPVarInt(i,"Ochki") < 88 && i != id)
   		{
	    	new v = GetPVarInt(i,"Ochki");
	    	if(v == maxs) { test++; }
		}
	}
	if(test > 0)
	{
	    foreach(new i:Player)
		{
		    if(GetPVarInt(i,"StolReg") == stolid && GetPVarInt(i,"Ochki") < 88)
   			{
            	new v = GetPVarInt(i,"Ochki");
	    		if(v == maxs)
	    		{
   					SetPVarInt(i,"Ochki",88);
   					SetPVarInt(i,"StolReg",stolid);
   					TimeStavka[stolid] = 30;
				}
			}
		}
	}
	else
	{
  		new name[25];
	  	GetPlayerName(id,name,sizeof(name));
	  	new str[144];
	  	format(str,sizeof(str),"%s Igebs. Qulebis Odenoba: %d",name,maxs);
	  	new ammo = StolInfo[stolid][Bank]/90;
	  	PI[id][pMoney] += StolInfo[stolid][Bank]-ammo;
	  	UpdatePlayerData(id, "Money", PI[id][pMoney]);
	  	format(log_str, sizeof(log_str), "%s'm(a) Moigo: %d$ Casino'shi", Name(id), StolInfo[stolid][Bank]-ammo);
	  	CreateLog("Money", log_str);
	  	foreach(new i:Player)
		{
  			if(GetPVarInt(i,"StolReg") == stolid && IsPlayerNearStol(i) != stolid && KazinoDuty[i] == 0)
    		{
				TextDrawHideForPlayer(i, KostiBox[stolid]);
				TextDrawHideForPlayer(i, TableName[stolid]);
				TextDrawHideForPlayer(i, KostiInfo[stolid]);
				TextDrawHideForPlayer(i, KostiGameInfo[stolid]);
				TextDrawHideForPlayer(i, KostiKeyExit);
				TextDrawHideForPlayer(i, KostiKeyDone);
				TextDrawHideForPlayer(i, KostiKeyStavka);
				SetPVarInt(i, "GameStol",88);
				SetPVarInt(i, "StolReg",88);
				TogglePlayerControllable(i, 1);
				CancelSelectTextDraw(i);
				DelName(i, stolid);
				SetPVarInt(i, "Ochki", 88);
			}
	   		if(GetPVarInt(i,"GameStol") == stolid)
	   		{
	    		SendClientMessage(i, COLOR_INDIGO, str);
	    		SetPVarInt(i, "Ochki", 88);
	    		SetPVarInt(i, "StolReg", 88);
	   		}
	  	}
		TimeStavka[stolid] = 0;
	  	StolInfo[stolid][Stavka] = 0;
	  	StolInfo[stolid][Bank] = 0;
	  	StolInfo[stolid][GameStart] = 0;
	  	UpdateCasino2();
	}
  	return true;
}
stock GetCasinName(id)
{
	new name[64];
 	if(id == INVALID_PLAYER_ID) name = "~w~--____________________";
 	else
 	{
 		GetPlayerName(id,name,sizeof(name));
 		new v = 20 - strlen(name);
 		for(new g;g<v;g++)
 		{
 			strcat(name,"_",sizeof(name));
 		}
 	}
 	return name;
}
stock IsPlayerNearStol(playerid)
{
	for(new i;i<sizeof(StolCoor);i++) if(GetPlayerDistanceFromPoint(playerid,StolCoor[i][0],StolCoor[i][1],StolCoor[i][2]) < 2.0) return i;
  	return -1;
}
stock UpdateCasino2()
{
    for(new s;s<MAX_COSTI;s++)
   	{
    	new str[256],sstr[40];
    	format(str,sizeof(str),"Fsoni: %d ~g~$~n~~w~Bank: %d ~g~$~n~",StolInfo[s][Stavka],StolInfo[s][Bank]);
    	TextDrawSetString(KostiGameInfo[s],str);
    	format(str,sizeof(str),"");
    	for(new i;i<5;i++)
    	{
    		new text[15];
			text = "~w~--";
    		if(GetPVarInt(StolInfo[s][Gamer][i],"StolReg") == s) text = "~w~++";
    		if(GetPVarInt(StolInfo[s][Gamer][i],"Ochki") != 88) format(text,sizeof(text),"%d",GetPVarInt(StolInfo[s][Gamer][i],"Ochki"));
    		format(sstr,sizeof(sstr),"~w~%d. %s%s~n~",i+1,GetCasinName(StolInfo[s][Gamer][i]),text);
    		strcat(str,sstr,256);
 		}
    	TextDrawSetString(KostiInfo[s],str);
	}
}
stock SendVIPMessage(color, string[])
{
	foreach(new i:Player)
	{
	    if(PI[i][pSettings][4] == 0) continue;
		if(PI[i][pAdmin] >= 1 || PI[i][pVIP] == 3) SendClientMessage(i, color, string);
	}
}
stock CarUpdateText(carid)
{
	if(CarInfo[carid][CarStatus] == 0) format(Salon_String, sizeof(Salon_String), "¹{FF4545}%d\n{FFFFFF}Adgili: {FF4545}Tavisufalia\n{FFFFFF}Fasi: {FF4545}5.000$\n{FFFFFF}Daachiret: {FF4545}H{FFFFFF}'s", CarInfo[carid][ID]);
	else if(CarInfo[carid][CarStatus] == 1) format(Salon_String, sizeof(Salon_String), "¹{FF4545}%d\n{FFFFFF}Adgili: {FF4545}Dakavebulia\n{FFFFFF}Dro: {FF4545}%d {FFFFFF}Saati\n{FFFFFF}Mflobeli: {FF4545}%s\n{FFFFFF}Model: {FF4545}%s\n{FFFFFF}Fasi: {FF4545}%d$\n{FFFFFF}Daachiret: {FF4545}ALT{FFFFFF}'s", CarInfo[carid][ID], CarInfo[carid][CarTime], CarInfo[carid][CarOwner], GetClientVehicleName(CarInfo[carid][CarID]), CarInfo[carid][CarPrice]);
	UpdateDynamic3DTextLabelText(CarInfo[carid][CarText], COLOR_WHITE, Salon_String);
	return true;
}
stock AutoSalonCarLocked()
{
    for(new i; i < TotalCar; i++)
    {
		if(CarInfo[i][CarStatus] == 1)
		{
		  	GetVehicleParamsEx(CarInfo[i][CarIDInfo], engine,lights,alarm,doors,bonnet,boot,objective);
			SetVehicleParamsEx(CarInfo[i][CarIDInfo], VEHICLE_PARAMS_OFF,lights,alarm,1,bonnet,boot,objective);
		}
    }
    return true;
}
stock IsInAllowedM(fractionids)
{
	for(new i = 0; i < sizeof(MaffiaFractionID); i++) if(fractionids == MaffiaFractionID[i]) return true;
	return false;
}
stock GetVehicleSpeed(vehicleid)
{
    new Float:X, Float:Y, Float:Z, Float:_speed;
    GetVehicleVelocity(vehicleid, X, Y, Z);
    _speed = ((floatsqroot( (X*X) + (Y*Y) )*10) / 1.65)*16.50;
    return floatround( _speed, floatround_round);
}
stock NextLevel(playerid)
{
	new EXPAmount = PI[playerid][pLevel]*4;
	if(PI[playerid][pEXP] >= EXPAmount)
	{
		PI[playerid][pLevel] += 1;
		UpdatePlayerData(playerid, "Level", PI[playerid][pLevel]);
		SetPlayerScore(playerid, PI[playerid][pLevel]);
		PI[playerid][pEXP] = 0;
		UpdatePlayerData(playerid, "EXP", PI[playerid][pEXP]);
		SendClientMessage(playerid, COLOR_WHITE, "{38AF91}[Level] {FFFFFF}Gilocavt! Tkven Gadaxvedit Shemdeg Levelze");
	}
	return true;
}
stock PlayerInformation(playerid)
{
	new infostr[80];
	if(PI[playerid][pKills] <= 9)
	{
	    if(PI[playerid][pDeaths] <= 9)
	    {
			if(DamageInfo[playerid] <= 9)
			{
				format(infostr, sizeof(infostr), "000%d_000%d_000%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 10 && DamageInfo[playerid] <= 99)
			{
				format(infostr, sizeof(infostr), "000%d_000%d_00%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 100 && DamageInfo[playerid] <= 999)
			{
				format(infostr, sizeof(infostr), "000%d_000%d_0%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 1000)
			{
				format(infostr, sizeof(infostr), "000%d_000%d_%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
	    }
	    else if(PI[playerid][pDeaths] >= 10)
	    {
			if(DamageInfo[playerid] <= 9)
			{
				format(infostr, sizeof(infostr), "000%d_00%d_000%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 10 && DamageInfo[playerid] <= 99)
			{
				format(infostr, sizeof(infostr), "000%d_00%d_00%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 100 && DamageInfo[playerid] <= 999)
			{
				format(infostr, sizeof(infostr), "000%d_00%d_0%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 1000)
			{
				format(infostr, sizeof(infostr), "000%d_00%d_%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
	    }
	}
	else if(PI[playerid][pKills] >= 10)
	{
	    if(PI[playerid][pDeaths] <= 9)
	    {
			if(DamageInfo[playerid] <= 9)
			{
				format(infostr, sizeof(infostr), "00%d_000%d_000%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 10 && DamageInfo[playerid] <= 99)
			{
				format(infostr, sizeof(infostr), "00%d_000%d_00%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 100 && DamageInfo[playerid] <= 999)
			{
				format(infostr, sizeof(infostr), "00%d_000%d_0%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 1000)
			{
				format(infostr, sizeof(infostr), "00%d_000%d_%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
	    }
	    else if(PI[playerid][pDeaths] >= 10)
	    {
			if(DamageInfo[playerid] <= 9)
			{
				format(infostr, sizeof(infostr), "00%d_00%d_000%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 10 && DamageInfo[playerid] <= 99)
			{
				format(infostr, sizeof(infostr), "00%d_00%d_00%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 100 && DamageInfo[playerid] <= 999)
			{
				format(infostr, sizeof(infostr), "00%d_00%d_0%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
			else if(DamageInfo[playerid] >= 1000)
			{
				format(infostr, sizeof(infostr), "00%d_00%d_%.0f_%d.%d", PI[playerid][pKills], PI[playerid][pDeaths], DamageInfo[playerid], PI[playerid][pKills], PI[playerid][pDeaths]);
				PlayerTextDrawSetString(playerid, GhettoPlayerTextDraw[playerid][4], infostr);
			}
	    }
	}
	return true;
}
stock GetHouseCash(playerid)
{
	static const f_str[] = "{FFFFFF}Saxlis ¹{FF4545}%d\n\
	{FFFFFF}Gadasaxadi: {FF4545}%d$\n\
	{FFFFFF}Angarishi: {FF4545}%d$\n\
	{FFFFFF}Class: {FF4545}%s\n\n\
	{FF4545}1{FFFFFF}Saati -> {FF4545}%d$\n\
	{FF4545}1{FFFFFF}Dge -> {FF4545}%d$\n\
	{FF4545}1{FFFFFF}Kvira -> {FF4545}%d$\n\n\
	{FFFFFF}Sheiyvanet Im Tanxis Raodenoba, Romlis Gadaricxvac Gsurt Saxlis Angarishze\
	";
	new string[sizeof(f_str) + 8 + (-2 + MAX_PLAYER_NAME)];

	format(string,sizeof(string), f_str, PI[playerid][pHouse], HouseInfo[PI[playerid][pHouse]][HouseTax], HouseInfo[PI[playerid][pHouse]][HouseBalance], GetHouseClass(HouseInfo[PI[playerid][pHouse]][HouseClass]), HouseInfo[PI[playerid][pHouse]][HouseTax], HouseInfo[PI[playerid][pHouse]][HouseTax]*24, HouseInfo[PI[playerid][pHouse]][HouseTax]*168);
	ShowPlayerDialog(playerid, 48, DIALOG_STYLE_INPUT, "{FF4545}Bankomat{FFFFFF} | Saxlis Angarishi", string, "Archeva", "Ukan");
	return true;
}
stock GetNearestVehicle(playerid)
{
	for(new i; i < MAX_VEHICLES; i++)
	{
		if(GetVehicleModel(i))
		{
			new Float:X,Float:Y,Float:Z;
			GetVehiclePos(i,X,Y,Z);
			if(PlayerToPoint(6.0, playerid, X, Y, Z))return i;
		}
	}
	return -1;
}
stock SetTuning(playerid, vehicleid, slot)
{
	if(VehInfo[playerid][CarPaintJob][slot] != 255) ChangeVehiclePaintjob(vehicleid, VehInfo[playerid][CarPaintJob][slot]);
	if(VehInfo[playerid][CarFrontBumper][slot] != 255) AddVehicleComponent(vehicleid, VehInfo[playerid][CarFrontBumper][slot]);
	if(VehInfo[playerid][CarRearBumper][slot] != 255) AddVehicleComponent(vehicleid, VehInfo[playerid][CarRearBumper][slot]);
	if(VehInfo[playerid][CarSpoiler][slot] != 255) AddVehicleComponent(vehicleid, VehInfo[playerid][CarSpoiler][slot]);
	if(VehInfo[playerid][CarWheels][slot] != 255) AddVehicleComponent(vehicleid, VehInfo[playerid][CarWheels][slot]);
	if(VehInfo[playerid][CarRoofAir] != 255) AddVehicleComponent(vehicleid, VehInfo[playerid][CarRoofAir][slot]);
	if(VehInfo[playerid][CarLowerAir][slot] != 255) AddVehicleComponent(vehicleid, VehInfo[playerid][CarLowerAir][slot]);
	if(VehInfo[playerid][CarNitro][slot] != 255) AddVehicleComponent(vehicleid, VehInfo[playerid][CarNitro][slot]);
	if(VehInfo[playerid][CarHydraulics][slot] != 255) AddVehicleComponent(vehicleid, VehInfo[playerid][CarHydraulics][slot]);
}
stock SetTrailerCarTuning(playerid, vehicleid)
{
    if(PI[playerid][pTrailerCarTuning][2] != 255) AddVehicleComponent(vehicleid, PI[playerid][pTrailerCarTuning][2]);
    if(PI[playerid][pTrailerCarTuning][3] != 255) AddVehicleComponent(vehicleid, PI[playerid][pTrailerCarTuning][3]);
    if(PI[playerid][pTrailerCarTuning][4] != 255) AddVehicleComponent(vehicleid, PI[playerid][pTrailerCarTuning][4]);
}
stock ShowTuningMenu(playerid)
{
    if(GetPlayerVehicleID(playerid) == VehID[playerid][0] || GetPlayerVehicleID(playerid) == VehID[playerid][1] || GetPlayerVehicleID(playerid) == VehID[playerid][2]) return ShowPlayerDialog(playerid, 67, DIALOG_STYLE_LIST, "{FF4545}Tuning Menu{FFFFFF} | Choose Function", "[1] Change Color\n[2] PaintJob\n[3] Front Bumper\n[4] Rear Bumper\n[5] Spoiler\n[6] Wheels\n[7] RoofAir\n[8] LowerAir\n[9] Nitro\n[10] Hydraulics", "Archeva", "Daxurva");
    else if(GetPlayerVehicleID(playerid) == TrailerCar[playerid]) return ShowPlayerDialog(playerid, 165, DIALOG_STYLE_LIST, "{FF4545}Tuning Menu{FFFFFF} | Choose Function", "[1] Change Color\n[2] Nitro\n[3] Wheels\n[4] Hydraulics", "Archeva", "Daxurva");
	return true;
}
stock CarTuningOff(playerid, carslot)
{
	VehInfo[playerid][CarColor1][carslot] = 1;
	VehInfo[playerid][CarColor2][carslot] = 1;
	VehInfo[playerid][CarPaintJob][carslot] = 255;
	VehInfo[playerid][CarFrontBumper][carslot] = 255;
	VehInfo[playerid][CarRearBumper][carslot] = 255;
	VehInfo[playerid][CarSpoiler][carslot] = 255;
	VehInfo[playerid][CarWheels][carslot] = 255;
	VehInfo[playerid][CarRoofAir][carslot] = 255;
	VehInfo[playerid][CarLowerAir][carslot] = 255;
	VehInfo[playerid][CarNitro][carslot] = 255;
	VehInfo[playerid][CarHydraulics][carslot] = 255;
	if(carslot == 0)
	{
	    UpdateVehicleData(playerid, "Car1Color1", VehInfo[playerid][CarColor1][0]);
	    UpdateVehicleData(playerid, "Car1Color2", VehInfo[playerid][CarColor2][0]);
	    UpdateVehicleData(playerid, "Car1PaintJob", VehInfo[playerid][CarPaintJob][0]);
		UpdateVehicleData(playerid, "Car1FrontBumper", VehInfo[playerid][CarFrontBumper][0]);
		UpdateVehicleData(playerid, "Car1RearBumper", VehInfo[playerid][CarRearBumper][0]);
		UpdateVehicleData(playerid, "Car1Spoiler", VehInfo[playerid][CarSpoiler][0]);
		UpdateVehicleData(playerid, "Car1Wheels", VehInfo[playerid][CarWheels][0]);
		UpdateVehicleData(playerid, "Car1RoofAir", VehInfo[playerid][CarRoofAir][0]);
		UpdateVehicleData(playerid, "Car1LowerAir", VehInfo[playerid][CarLowerAir][0]);
		UpdateVehicleData(playerid, "Car1Nitro", VehInfo[playerid][CarNitro][0]);
		UpdateVehicleData(playerid, "Car1Hydraulics", VehInfo[playerid][CarHydraulics][0]);
	}
	else if(carslot == 1)
	{
	    UpdateVehicleData(playerid, "Car2Color1", VehInfo[playerid][CarColor1][1]);
	    UpdateVehicleData(playerid, "Car2Color2", VehInfo[playerid][CarColor2][1]);
	    UpdateVehicleData(playerid, "Car2PaintJob", VehInfo[playerid][CarPaintJob][1]);
		UpdateVehicleData(playerid, "Car2FrontBumper", VehInfo[playerid][CarFrontBumper][1]);
		UpdateVehicleData(playerid, "Car2RearBumper", VehInfo[playerid][CarRearBumper][1]);
		UpdateVehicleData(playerid, "Car2Spoiler", VehInfo[playerid][CarSpoiler][1]);
		UpdateVehicleData(playerid, "Car2Wheels", VehInfo[playerid][CarWheels][1]);
		UpdateVehicleData(playerid, "Car2RoofAir", VehInfo[playerid][CarRoofAir][1]);
		UpdateVehicleData(playerid, "Car2LowerAir", VehInfo[playerid][CarLowerAir][1]);
		UpdateVehicleData(playerid, "Car2Nitro", VehInfo[playerid][CarNitro][1]);
		UpdateVehicleData(playerid, "Car2Hydraulics", VehInfo[playerid][CarHydraulics][1]);
	}
	else if(carslot == 2)
	{
	    UpdateVehicleData(playerid, "Car3Color1", VehInfo[playerid][CarColor1][2]);
	    UpdateVehicleData(playerid, "Car3Color2", VehInfo[playerid][CarColor2][2]);
	    UpdateVehicleData(playerid, "Car3PaintJob", VehInfo[playerid][CarPaintJob][2]);
		UpdateVehicleData(playerid, "Car3FrontBumper", VehInfo[playerid][CarFrontBumper][2]);
		UpdateVehicleData(playerid, "Car3RearBumper", VehInfo[playerid][CarRearBumper][2]);
		UpdateVehicleData(playerid, "Car3Spoiler", VehInfo[playerid][CarSpoiler][2]);
		UpdateVehicleData(playerid, "Car3Wheels", VehInfo[playerid][CarWheels][2]);
		UpdateVehicleData(playerid, "Car3RoofAir", VehInfo[playerid][CarRoofAir][2]);
		UpdateVehicleData(playerid, "Car3LowerAir", VehInfo[playerid][CarLowerAir][2]);
		UpdateVehicleData(playerid, "Car3Nitro", VehInfo[playerid][CarNitro][2]);
		UpdateVehicleData(playerid, "Car3Hydraulics", VehInfo[playerid][CarHydraulics][2]);
	}
}
stock SpectateON(playerid, specid)
{
	if(IsPlayerInAnyVehicle(specid))
	{
		SetPlayerInterior(playerid,GetPlayerInterior(specid));
		SetPlayerVirtualWorld(playerid, GetPlayerVirtualWorld(specid));
		TogglePlayerSpectating(playerid, true);
		PlayerSpectateVehicle(playerid, GetPlayerVehicleID(specid));
		SpectateID[playerid] = specid;
	}
	else
	{
		SetPlayerInterior(playerid,GetPlayerInterior(specid));
		SetPlayerVirtualWorld(playerid, GetPlayerVirtualWorld(specid));
		TogglePlayerSpectating(playerid, true);
		PlayerSpectatePlayer(playerid, specid);
		SpectateID[playerid] = specid;
	}
	ShowMenuForPlayer(ReconMenu,playerid);
    SpectateStatus[playerid] = true;
	return true;
}
stock SpectateOFF(playerid)
{
    HideMenuForPlayer(ReconMenu, playerid);
	TogglePlayerSpectating(playerid, false);
	SpectateID[playerid] = INVALID_PLAYER_ID;
	GameTextForPlayer(playerid, "~w~RECON ~r~ OFF",5000,3);
    SpectateStatus[playerid] = false;
	if(AdminDuty[playerid] == true)
	{
		SetPlayerColor(playerid, 0x4B4B4BFF);
		SetPlayerWeapon(playerid, 38, 99999);
	}
	return true;
}
stock GhettoKillNames(playerid)
{
	if(KillName[playerid] == 1) GameTextForPlayer(playerid, "Kill", 500, 6);
	else if(KillName[playerid] == 2) GameTextForPlayer(playerid, "Double Kill", 500, 6);
	else if(KillName[playerid] == 3) GameTextForPlayer(playerid, "Tripple Kill", 500, 6);
	else if(KillName[playerid] == 4) GameTextForPlayer(playerid, "Quadra Kill", 500, 6);
	else if(KillName[playerid] == 5) GameTextForPlayer(playerid, "Penta", 500, 6);
	else if(KillName[playerid] == 6) GameTextForPlayer(playerid, "Rampage", 500, 6);
	else if(KillName[playerid] == 7) GameTextForPlayer(playerid, "Insane", 500, 6);
	else if(KillName[playerid] >= 8) GameTextForPlayer(playerid, "Unstoppable", 500, 6);
}
stock GetHouseInterior(houseid)
{
	switch(HouseInfo[houseid][HouseClass])
	{
	    case 0:
	    {
	        HouseInfo[houseid][HouseInterior] = 6;
	        HouseInfo[houseid][HouseTax] = 5;
	        HouseInfo[houseid][HousePrice] = 50000;

	        HouseInfo[houseid][HouseSpawnX] = 2306.5186;
	        HouseInfo[houseid][HouseSpawnY] = -1209.2584;
	        HouseInfo[houseid][HouseSpawnZ] = 1049.0234;
	        HouseInfo[houseid][HouseSpawnC] = 269.8809;

	        HouseInfo[houseid][HouseExitX] = 2308.8044;
	        HouseInfo[houseid][HouseExitY] = -1212.9363;
	        HouseInfo[houseid][HouseExitZ] = 1049.0234;
	    }
	    case 1:
	    {
	        HouseInfo[houseid][HouseInterior] = 10;
	        HouseInfo[houseid][HouseTax] = 7;
	        HouseInfo[houseid][HousePrice] = 70000;

	        HouseInfo[houseid][HouseSpawnX] = 2259.7278;
	        HouseInfo[houseid][HouseSpawnY] = -1223.5846;
	        HouseInfo[houseid][HouseSpawnZ] = 1049.0234;
	        HouseInfo[houseid][HouseSpawnC] = 1.4795;

	        HouseInfo[houseid][HouseExitX] = 2270.4172;
	        HouseInfo[houseid][HouseExitY] = -1210.4141;
	        HouseInfo[houseid][HouseExitZ] = 1047.5625;
	    }
	    case 2:
	    {
	        HouseInfo[houseid][HouseInterior] = 8;
	        HouseInfo[houseid][HouseTax] = 9;
	        HouseInfo[houseid][HousePrice] = 90000;

	        HouseInfo[houseid][HouseSpawnX] = -47.8123;
	        HouseInfo[houseid][HouseSpawnY] = 1405.6769;
	        HouseInfo[houseid][HouseSpawnZ] = 1084.4297;
	        HouseInfo[houseid][HouseSpawnC] = 357.8227;

	        HouseInfo[houseid][HouseExitX] = -42.5567;
	        HouseInfo[houseid][HouseExitY] = 1405.4685;
	        HouseInfo[houseid][HouseExitZ] = 1084.4297;
	    }
	    case 3:
	    {
	        HouseInfo[houseid][HouseInterior] = 12;
	        HouseInfo[houseid][HouseTax] = 11;
	        HouseInfo[houseid][HousePrice] = 125000;

	        HouseInfo[houseid][HouseSpawnX] = 2311.3030;
	        HouseInfo[houseid][HouseSpawnY] = -1138.7717;
	        HouseInfo[houseid][HouseSpawnZ] = 1054.3047;
	        HouseInfo[houseid][HouseSpawnC] = 269.8563;

	        HouseInfo[houseid][HouseExitX] = 2324.4705;
	        HouseInfo[houseid][HouseExitY] = -1149.5475;
	        HouseInfo[houseid][HouseExitZ] = 1050.7101;
	    }
	    case 4:
	    {
	        HouseInfo[houseid][HouseInterior] = 5;
	        HouseInfo[houseid][HouseTax] = 13;
	        HouseInfo[houseid][HousePrice] = 15000;

	        HouseInfo[houseid][HouseSpawnX] = 140.2461;
	        HouseInfo[houseid][HouseSpawnY] = 1384.8381;
	        HouseInfo[houseid][HouseSpawnZ] = 1088.3672;
	        HouseInfo[houseid][HouseSpawnC] = 180.7412;

	        HouseInfo[houseid][HouseExitX] = 140.3079;
	        HouseInfo[houseid][HouseExitY] = 1365.9180;
	        HouseInfo[houseid][HouseExitZ] = 1083.8594;
	    }
	    case 5:
	    {
	        HouseInfo[houseid][HouseInterior] = 6;
	        HouseInfo[houseid][HouseTax] = 15;
	        HouseInfo[houseid][HousePrice] = 250000;

	        HouseInfo[houseid][HouseSpawnX] = 236.7898;
	        HouseInfo[houseid][HouseSpawnY] = 1081.3661;
	        HouseInfo[houseid][HouseSpawnZ] = 1087.8203;
	        HouseInfo[houseid][HouseSpawnC] = 91.5214;

	        HouseInfo[houseid][HouseExitX] = 234.1491;
	        HouseInfo[houseid][HouseExitY] = 1063.7211;
	        HouseInfo[houseid][HouseExitZ] = 1084.2123;
	    }
	}
	return true;
}
stock LoadBankomats()
{
    /* ======================== << [ Bankomats ] >> ========================= */
    new ATMX = CreateObject(2754, 847.12109, -1799.27661, 13.56360,   0.00000, 0.00000, -5.0000);
	new ATM1 = CreateObject(2754, 1144.15735, -1765.86145, 13.37960,   0.00000, 0.00000, -90.00000);
	new ATM2 = CreateObject(2754, 1416.18970, -1663.50928, 13.33850,   0.00000, 0.00000, 900.00000);
	new ATM3 = CreateObject(2754, 1367.19897, -1309.13318, 13.37090,   0.00000, 0.00000, 0.00000);
	new ATM4 = CreateObject(2754, 2023.47815, 1017.63794, 10.62110,   0.00000, 0.00000, 180.00000);
	new ATM5 = CreateObject(2754, 1001.14862, -925.26538, 41.96950,   0.00000, 0.00000, 8.00000);
	new ATM6 = CreateObject(2754, 1919.65015, -1765.75647, 13.31920,   0.00000, 0.00000, -90.00000);
	new ATM7 = CreateObject(2754, 1833.14392, -1846.46692, 13.34030,   0.00000, 0.00000, 0.00000);
	new ATM8 = CreateObject(2754, 1345.83594, -1759.14441, 13.26710,   0.00000, 0.00000, -90.00000);
	new ATM9 = CreateObject(2754, 456.23691, -1485.25562, 30.85240,   0.00000, 0.00000, 20.00000);

	SetObjectMaterialText(ATMX, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	SetObjectMaterialText(ATM1, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	SetObjectMaterialText(ATM2, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	SetObjectMaterialText(ATM3, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	SetObjectMaterialText(ATM4, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    SetObjectMaterialText(ATM5, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    SetObjectMaterialText(ATM6, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    SetObjectMaterialText(ATM7, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    SetObjectMaterialText(ATM8, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    SetObjectMaterialText(ATM8, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    SetObjectMaterialText(ATM9, "\nbankomati\n        \n        \n        \n        \n        ",2,OBJECT_MATERIAL_SIZE_256x256,"acadnusx", 48, 1, 0xffff0000, 0xff000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	return true;
}
stock IsABankomat(playerid)
{
	if(PlayerToPoint(1.5,playerid, 847.12109, -1799.27661, 13.56360)
	||PlayerToPoint(1.5,playerid, 1144.15735, -1765.86145, 13.37960)
	||PlayerToPoint(1.5,playerid, 1416.18970, -1663.50928, 13.33850)
	||PlayerToPoint(1.5,playerid, 1367.19897, -1309.13318, 13.37090)
	||PlayerToPoint(1.5,playerid, 2023.47815, 1017.63794, 10.62110)
	||PlayerToPoint(1.5,playerid, 1001.14862, -925.26538, 41.96950)
	||PlayerToPoint(1.5,playerid, 1919.65015, -1765.75647, 13.31920)
	||PlayerToPoint(1.5,playerid, 1833.14392, -1846.46692, 13.34030)
	||PlayerToPoint(1.5,playerid, 1345.83594, -1759.14441, 13.26710)
	||PlayerToPoint(1.5,playerid, 456.23691, -1485.25562, 30.85240))
	{
		return true;
	}
	return false;
}
stock IsAAntidm(playerid)
{
	if(PlayerToPoint(50.0,playerid,1131.5452,-4.1459,1000.6797)//Xis Mchreli
			||PlayerToPoint(50.0,playerid,1480.9143,-1749.1881,15.4453) // Meria
			||PlayerToPoint(50.0,playerid,1495.6715,-1286.1516,14.4955) // BANK
			||PlayerToPoint(50.0,playerid,2107.8337,1384.1925,10.8203) // Avtobazroba
			||PlayerToPoint(50.0,playerid,1596.0100,-2188.1511,13.5469) // Tuning
			||PlayerToPoint(50.0,playerid,2032.3929,1007.5524,10.8203) // CASINO
			||PlayerToPoint(50.0,playerid,1133.0535,-11.5712,1000.6797) // casinoshi shignit
			||PlayerToPoint(50.0,playerid,-2028.5962,-96.3026,35.1641) // Avtoskola
			||PlayerToPoint(50.0,playerid,456.8152,-1501.6045,31.0393) // SKINSHOP
			||PlayerToPoint(50.0,playerid,1365.5139,-1279.9054,13.5469) // GUNSHOP
			||PlayerToPoint(50.0,playerid,1543.4965,-1675.7454,13.5563) // LSPD
			||PlayerToPoint(50.0,playerid,-1957.6399,-2401.5386,30.6250) // Xis Mchreli
			||PlayerToPoint(50.0,playerid,1390.5331,-1574.0573,13.5619) // Dasuftaveba
			||PlayerToPoint(50.0,playerid,2184.7854,-2251.5276,14.7700) // Mtvirtavi
			||PlayerToPoint(50.0,playerid,854.5028,-601.4779,18.4219) // Materialebi
			||PlayerToPoint(50.0,playerid,1089.4377,-1760.7761,13.3672) // Taxi Park
			||PlayerToPoint(50.0,playerid,1151.6478,-1743.3417,13.3985) // spawn antidm
			||PlayerToPoint(50.0,playerid,1642.7935,-1057.5540,23.8984) // Mechanic
			||PlayerToPoint(50.0,playerid,598.1335,868.2606,-42.9609) // Shaxta
			||PlayerToPoint(50.0,playerid,-601.4651,-1785.3439,792.4759) // Shaxta Shignit
			||PlayerToPoint(50.0,playerid,-1078.9645,-1631.4523,76.3672) // PLANTACIA
			||PlayerToPoint(50.0,playerid,2223.7322,-1157.8768,25.7541)) // HOTEL
	{
		return true;
	}
	return false;
}
stock SetString(param_1[], param_2[], size = 300)
{
	return strmid(param_1, param_2, 0, strlen(param_2), size);
}
stock VehicleRegister(playerid)
{
    for(new c = 0; c < 3; c++)
    {
        VehInfo[playerid][Car][c] = 399;
        UpdateVehicleData(playerid, "Car1", VehInfo[playerid][Car][0]);
        UpdateVehicleData(playerid, "Car2", VehInfo[playerid][Car][2]);
        UpdateVehicleData(playerid, "Car3", VehInfo[playerid][Car][2]);
        VehInfo[playerid][CarPosX][c] = 0.0;
        VehInfo[playerid][CarPosY][c] = 0.0;
		VehInfo[playerid][CarPosZ][c] = 0.0;
		VehInfo[playerid][CarPosC][c] = 0.0;
		SaveVehiclePos(playerid, 0);
		SaveVehiclePos(playerid, 1);
		SaveVehiclePos(playerid, 2);
		VehInfo[playerid][CarColor1][c] = 1;
		UpdateVehicleData(playerid, "Car1Color1", VehInfo[playerid][CarColor1][0]);
		UpdateVehicleData(playerid, "Car2Color1", VehInfo[playerid][CarColor1][1]);
		UpdateVehicleData(playerid, "Car3Color1", VehInfo[playerid][CarColor1][2]);
		VehInfo[playerid][CarColor2][c] = 1;
	 	UpdateVehicleData(playerid, "Car1Color2", VehInfo[playerid][CarColor2][0]);
		UpdateVehicleData(playerid, "Car2Color2", VehInfo[playerid][CarColor2][1]);
		UpdateVehicleData(playerid, "Car3Color2", VehInfo[playerid][CarColor2][2]);
		VehInfo[playerid][CarPaintJob][c] = 255;
		UpdateVehicleData(playerid, "Car1PaintJob", VehInfo[playerid][CarPaintJob][0]);
		UpdateVehicleData(playerid, "Car2PaintJob", VehInfo[playerid][CarPaintJob][1]);
		UpdateVehicleData(playerid, "Car3PaintJob", VehInfo[playerid][CarPaintJob][2]);
		VehInfo[playerid][CarFrontBumper][c] = 255;
		UpdateVehicleData(playerid, "Car1FrontBumper", VehInfo[playerid][CarFrontBumper][0]);
		UpdateVehicleData(playerid, "Car2FrontBumper", VehInfo[playerid][CarFrontBumper][1]);
		UpdateVehicleData(playerid, "Car3FrontBumper", VehInfo[playerid][CarFrontBumper][2]);
		VehInfo[playerid][CarRearBumper][c] = 255;
		UpdateVehicleData(playerid, "Car1RearBumper", VehInfo[playerid][CarRearBumper][0]);
		UpdateVehicleData(playerid, "Car2RearBumper", VehInfo[playerid][CarRearBumper][1]);
		UpdateVehicleData(playerid, "Car3RearBumper", VehInfo[playerid][CarRearBumper][2]);
		VehInfo[playerid][CarSpoiler][c] = 255;
		UpdateVehicleData(playerid, "Car1Spoiler", VehInfo[playerid][CarSpoiler][0]);
		UpdateVehicleData(playerid, "Car2Spoiler", VehInfo[playerid][CarSpoiler][1]);
		UpdateVehicleData(playerid, "Car3Spoiler", VehInfo[playerid][CarSpoiler][2]);
		VehInfo[playerid][CarWheels][c] = 255;
		UpdateVehicleData(playerid, "Car1Wheels", VehInfo[playerid][CarWheels][0]);
		UpdateVehicleData(playerid, "Car2Wheels", VehInfo[playerid][CarWheels][1]);
		UpdateVehicleData(playerid, "Car3Wheels", VehInfo[playerid][CarWheels][2]);
		VehInfo[playerid][CarRoofAir][c] = 255;
		UpdateVehicleData(playerid, "Car1RoofAir", VehInfo[playerid][CarRoofAir][0]);
		UpdateVehicleData(playerid, "Car2RoofAir", VehInfo[playerid][CarRoofAir][1]);
		UpdateVehicleData(playerid, "Car3RoofAir", VehInfo[playerid][CarRoofAir][2]);
		VehInfo[playerid][CarLowerAir][c] = 255;
		UpdateVehicleData(playerid, "Car1LowerAir", VehInfo[playerid][CarLowerAir][0]);
		UpdateVehicleData(playerid, "Car2LowerAir", VehInfo[playerid][CarLowerAir][1]);
		UpdateVehicleData(playerid, "Car3LowerAir", VehInfo[playerid][CarLowerAir][2]);
		VehInfo[playerid][CarNitro][c] = 255;
		UpdateVehicleData(playerid, "Car1Nitro", VehInfo[playerid][CarNitro][0]);
		UpdateVehicleData(playerid, "Car2Nitro", VehInfo[playerid][CarNitro][1]);
		UpdateVehicleData(playerid, "Car3Nitro", VehInfo[playerid][CarNitro][2]);
		VehInfo[playerid][CarHydraulics][c] = 255;
		UpdateVehicleData(playerid, "Car1Hydraulics", VehInfo[playerid][CarHydraulics][0]);
		UpdateVehicleData(playerid, "Car2Hydraulics", VehInfo[playerid][CarHydraulics][1]);
		UpdateVehicleData(playerid, "Car3Hydraulics", VehInfo[playerid][CarHydraulics][2]);
    }
}
stock PlayerRegister(playerid)
{
	PI[playerid][pLevel] = 1;
	UpdatePlayerData(playerid, "Level", PI[playerid][pLevel]);
	PI[playerid][pEXP] = 0;
	UpdatePlayerData(playerid, "EXP", PI[playerid][pEXP]);
	PI[playerid][pQuest][0] = 0;
	UpdatePlayerData(playerid, "Quest1", PI[playerid][pQuest][0]);
	PI[playerid][pQuest][1] = 0;
	UpdatePlayerData(playerid, "Quest2", PI[playerid][pQuest][1]);
	PI[playerid][pQuest][2] = 0;
	UpdatePlayerData(playerid, "Quest3", PI[playerid][pQuest][2]);
	PI[playerid][pQuest][3] = 0;
	UpdatePlayerData(playerid, "Quest4", PI[playerid][pQuest][3]);
	PI[playerid][pQuest][4] = 0;
	UpdatePlayerData(playerid, "Quest5", PI[playerid][pQuest][4]);
	PI[playerid][pQuest][5] = 0;
	UpdatePlayerData(playerid, "Quest6", PI[playerid][pQuest][5]);
	PI[playerid][pQuest][6] = 0;
	UpdatePlayerData(playerid, "Quest7", PI[playerid][pQuest][6]);
	PI[playerid][pQuest][7] = 0;
	UpdatePlayerData(playerid, "Quest8", PI[playerid][pQuest][7]);
	PI[playerid][pQuest][8] = 0;
	UpdatePlayerData(playerid, "Quest9", PI[playerid][pQuest][8]);
	PI[playerid][pQuest][9] = 0;
	UpdatePlayerData(playerid, "Quest10", PI[playerid][pQuest][9]);
	PI[playerid][pQuest][10] = 0;
	UpdatePlayerData(playerid, "Quest11", PI[playerid][pQuest][10]);
	PI[playerid][pQuest][11] = 0;
	UpdatePlayerData(playerid, "Quest12", PI[playerid][pQuest][11]);
	PI[playerid][pAdminWarning] = 0;
	UpdatePlayerData(playerid, "AdminWarning", PI[playerid][pAdminWarning]);
	PI[playerid][pMoney] = 500;
	UpdatePlayerData(playerid, "Money", PI[playerid][pMoney]);
	PI[playerid][pBank] = 0;
	UpdatePlayerData(playerid, "Bank", PI[playerid][pBank]);
	PI[playerid][pVIP] = 0;
	UpdatePlayerData(playerid, "VIP", PI[playerid][pVIP]);
	PI[playerid][pAdmin] = 0;
	UpdatePlayerData(playerid, "Admin", PI[playerid][pAdmin]);
	PI[playerid][pAdminKey] = 0;
	UpdatePlayerData(playerid, "AdminKey", PI[playerid][pAdminKey]);
	PI[playerid][pSupport] = 0;
	UpdatePlayerData(playerid, "Support", PI[playerid][pSupport]);
	PI[playerid][pDrugs] = 0;
	UpdatePlayerData(playerid, "Drugs", PI[playerid][pDrugs]);
	PI[playerid][pBullet] = 0;
	UpdatePlayerData(playerid, "Bullet", PI[playerid][pBullet]);
	PI[playerid][pAddiction] = 0;
	UpdatePlayerData(playerid, "Addiction", PI[playerid][pAddiction]);
	PI[playerid][pMute] = 0;
	UpdatePlayerData(playerid, "Mute", PI[playerid][pMute]);
	PI[playerid][pMuteTime] = 0;
	UpdatePlayerData(playerid, "MuteTime", PI[playerid][pMuteTime]);
	PI[playerid][pLicenses][0] = 0;
	UpdatePlayerData(playerid, "VehicleLic", PI[playerid][pLicenses][0]);
	PI[playerid][pLicenses][1] = 0;
	UpdatePlayerData(playerid, "WeaponLic", PI[playerid][pLicenses][1]);
	PI[playerid][pLicenses][2] = 0;
	UpdatePlayerData(playerid, "BuisnessLic", PI[playerid][pLicenses][2]);
	PI[playerid][pAccessories][0] = 19475;
	UpdatePlayerData(playerid, "Accessories1", PI[playerid][pAccessories][0]);
	PI[playerid][pAccessories][1] = 19475;
	UpdatePlayerData(playerid, "Accessories2", PI[playerid][pAccessories][1]);
	PI[playerid][pAccessories][2] = 19475;
	UpdatePlayerData(playerid, "Accessories3", PI[playerid][pAccessories][2]);
	PI[playerid][pAccessories][3] = 19475;
	UpdatePlayerData(playerid, "Accessories4", PI[playerid][pAccessories][3]);
	PI[playerid][pAccessories][4] = 19475;
	UpdatePlayerData(playerid, "Accessories5", PI[playerid][pAccessories][4]);
	PI[playerid][pAccessories][5] = 19475;
	UpdatePlayerData(playerid, "Accessories6", PI[playerid][pAccessories][5]);
	PI[playerid][pAccessories][6] = 19475;
	UpdatePlayerData(playerid, "Accessories7", PI[playerid][pAccessories][6]);
	PI[playerid][pAccessories][7] = 19475;
	UpdatePlayerData(playerid, "Accessories8", PI[playerid][pAccessories][7]);
	PI[playerid][pAccessories][8] = 19475;
	UpdatePlayerData(playerid, "Accessories9", PI[playerid][pAccessories][8]);
	PI[playerid][pAccessories][9] = 19475;
	UpdatePlayerData(playerid, "Accessories10", PI[playerid][pAccessories][9]);
	PI[playerid][pAccessories][10] = 19475;
	UpdatePlayerData(playerid, "Accessories11", PI[playerid][pAccessories][10]);
	PI[playerid][pAccessories][11] = 19475;
	UpdatePlayerData(playerid, "Accessories12", PI[playerid][pAccessories][11]);
	PI[playerid][pAccessories][12] = 19475;
	UpdatePlayerData(playerid, "Accessories13", PI[playerid][pAccessories][12]);
	PI[playerid][pAccessories][13] = 19475;
	UpdatePlayerData(playerid, "Accessories14", PI[playerid][pAccessories][13]);
	PI[playerid][pAccessories][14] = 19475;
	UpdatePlayerData(playerid, "Accessories15", PI[playerid][pAccessories][14]);
	PI[playerid][pAccessories][15] = 19475;
	UpdatePlayerData(playerid, "Accessories16", PI[playerid][pAccessories][15]);
	PI[playerid][pAccessories][16] = 19475;
	UpdatePlayerData(playerid, "Accessories17", PI[playerid][pAccessories][16]);
	PI[playerid][pAccessories][17] = 19475;
	UpdatePlayerData(playerid, "Accessories18", PI[playerid][pAccessories][17]);
	PI[playerid][pAccessories][18] = 19475;
	UpdatePlayerData(playerid, "Accessories19", PI[playerid][pAccessories][18]);
	PI[playerid][pAccessories][19] = 19475;
	UpdatePlayerData(playerid, "Accessories20", PI[playerid][pAccessories][19]);
	PI[playerid][pAccessories][20] = 19475;
	UpdatePlayerData(playerid, "Accessories21", PI[playerid][pAccessories][20]);
	PI[playerid][pAccessories][21] = 19475;
	UpdatePlayerData(playerid, "Accessories22", PI[playerid][pAccessories][21]);
	PI[playerid][pAccessories][22] = 19475;
	UpdatePlayerData(playerid, "Accessories23", PI[playerid][pAccessories][22]);
	PI[playerid][pAccessories][23] = 19475;
	UpdatePlayerData(playerid, "Accessories24", PI[playerid][pAccessories][23]);
	PI[playerid][pAccessories][24] = 19475;
	UpdatePlayerData(playerid, "Accessories25", PI[playerid][pAccessories][24]);
	PI[playerid][pPromoCodeUsed] = 0;
	UpdatePlayerData(playerid, "PromoCodeUsed", PI[playerid][pPromoCodeUsed]);
	PI[playerid][pSatiety] = 100;
	UpdatePlayerData(playerid, "Satiety", PI[playerid][pSatiety]);
	PI[playerid][pPassport] = 0;
	UpdatePlayerData(playerid, "Passport", PI[playerid][pPassport]);
	PI[playerid][pSettings][0] = 0;
	UpdatePlayerData(playerid, "Damage", PI[playerid][pSettings][0]);
	PI[playerid][pSettings][1] = 0;
	UpdatePlayerData(playerid, "ShowNick", PI[playerid][pSettings][1]);
	PI[playerid][pSettings][2] = 0;
	UpdatePlayerData(playerid, "FamilyChat", PI[playerid][pSettings][2]);
	PI[playerid][pSettings][4] = 1;
	UpdatePlayerData(playerid, "VIPChat", PI[playerid][pSettings][4]);
	PI[playerid][pSettings][5] = 1;
	UpdatePlayerData(playerid, "SatietyStatus", PI[playerid][pSettings][5]);
	PI[playerid][pLeader] = 0;
	UpdatePlayerData(playerid, "Leader", PI[playerid][pLeader]);
 	PI[playerid][pMember] = 0;
 	UpdatePlayerData(playerid, "Member", PI[playerid][pMember]);
 	PI[playerid][pWanted] = 0;
 	UpdatePlayerData(playerid, "Wanted", PI[playerid][pWanted]);
 	PI[playerid][pJail] = 0;
 	UpdatePlayerData(playerid, "Jail", PI[playerid][pJail]);
 	PI[playerid][pJailCell] = 0;
 	UpdatePlayerData(playerid, "JailCell", PI[playerid][pJailCell]);
 	PI[playerid][pJailTime] = 0;
 	UpdatePlayerData(playerid, "JailTime", PI[playerid][pJailTime]);
 	PI[playerid][pKills] = 0;
 	UpdatePlayerData(playerid, "Kills", PI[playerid][pKills]);
 	PI[playerid][pDeaths] = 0;
 	UpdatePlayerData(playerid, "Deaths", PI[playerid][pDeaths]);
 	PI[playerid][pRank] = 0;
 	UpdatePlayerData(playerid, "Rank", PI[playerid][pRank]);
	PI[playerid][pSkin][1] = 230;
	UpdatePlayerData(playerid, "SkinTwo", PI[playerid][pSkin][1]);
	PI[playerid][pSkin][2] = 230;
	UpdatePlayerData(playerid, "SkinThree", PI[playerid][pSkin][2]);
	PI[playerid][pSkin][3] = 230;
	UpdatePlayerData(playerid, "SkinFour", PI[playerid][pSkin][3]);
	PI[playerid][pSkinSlot] = 0;
	UpdatePlayerData(playerid, "SkinSlot", PI[playerid][pSkinSlot]);
 	PI[playerid][pFracSkin] = 0;
 	UpdatePlayerData(playerid, "FracSkin", PI[playerid][pFracSkin]);
 	PI[playerid][pFracStatus] = 0;
 	UpdatePlayerData(playerid, "FracStatus", PI[playerid][pFracStatus]);
  	PI[playerid][pFamilyMember] = 999;
 	UpdatePlayerData(playerid, "FamilyMember", PI[playerid][pFamilyMember]);
   	PI[playerid][pFamilyRank] = 0;
 	UpdatePlayerData(playerid, "FamilyRank", PI[playerid][pFamilyRank]);
 	PI[playerid][pFamilyMansion] = 999;
 	UpdatePlayerData(playerid, "FamilyMansion", PI[playerid][pFamilyMansion]);
 	PI[playerid][pWarns] = 0;
 	UpdatePlayerData(playerid, "Warns", PI[playerid][pWarns]);
 	PI[playerid][pWarnsTime] = 0;
 	UpdatePlayerData(playerid, "WarnsTime", PI[playerid][pWarnsTime]);
 	PI[playerid][pBan] = 0;
 	PI[playerid][pBanDays] = 0;
 	PI[playerid][pNumber] = 0;
 	UpdatePlayerData(playerid, "Number", PI[playerid][pNumber]);
 	PI[playerid][pNumberBalance] = 0;
 	UpdatePlayerData(playerid, "NumberBalance", PI[playerid][pNumberBalance]);
 	PI[playerid][pMobile] = 0;
 	UpdatePlayerData(playerid, "Mobile", PI[playerid][pMobile]);
 	PI[playerid][pBuisness] = 50;
 	UpdatePlayerData(playerid, "Buisness", PI[playerid][pBuisness]);
 	PI[playerid][pHouse] = 999;
 	UpdatePlayerData(playerid, "House", PI[playerid][pHouse]);
 	PI[playerid][pResident] = 999;
 	UpdatePlayerData(playerid, "Resident", PI[playerid][pResident]);
 	PI[playerid][pTrailerCar] = 0;
 	UpdatePlayerData(playerid, "TrailerCar", PI[playerid][pTrailerCar]);
	PI[playerid][pTrailerCarSafe][0] = 0;
	UpdatePlayerData(playerid, "TrailerCarDeagle", PI[playerid][pTrailerCarSafe][0]);
	PI[playerid][pTrailerCarSafe][1] = 0;
	UpdatePlayerData(playerid, "TrailerCarDeagle", PI[playerid][pTrailerCarSafe][1]);
	PI[playerid][pTrailerCarSafe][2] = 0;
	UpdatePlayerData(playerid, "TrailerCarDeagle", PI[playerid][pTrailerCarSafe][2]);
	PI[playerid][pTrailerCarSafe][3] = 0;
	UpdatePlayerData(playerid, "TrailerCarDeagle", PI[playerid][pTrailerCarSafe][3]);
	PI[playerid][pTrailerCarSafe][4] = 0;
	UpdatePlayerData(playerid, "TrailerCarDeagle", PI[playerid][pTrailerCarSafe][4]);
	PI[playerid][pTrailerCarSafe][5] = 0;
	UpdatePlayerData(playerid, "TrailerCarMats", PI[playerid][pTrailerCarSafe][5]);
 	PI[playerid][pTrailerCarPos][0] = 0.0;
	PI[playerid][pTrailerCarPos][1] = 0.0;
	PI[playerid][pTrailerCarPos][2] = 0.0;
	PI[playerid][pTrailerCarPos][3] = 0.0;
	SaveTrailerPos(playerid);
	PI[playerid][pTrailerCarTuning][0] = 0;
	UpdatePlayerData(playerid, "TrailerCarColor1", PI[playerid][pTrailerCarTuning][0]);
	PI[playerid][pTrailerCarTuning][1] = 0;
	UpdatePlayerData(playerid, "TrailerCarColor2", PI[playerid][pTrailerCarTuning][1]);
	PI[playerid][pTrailerCarTuning][2] = 0;
	UpdatePlayerData(playerid, "TrailerCarNitro", PI[playerid][pTrailerCarTuning][2]);
	PI[playerid][pTrailerCarTuning][3] = 0;
	UpdatePlayerData(playerid, "TrailerCarWheels", PI[playerid][pTrailerCarTuning][3]);
	PI[playerid][pTrailerCarTuning][4] = 0;
	UpdatePlayerData(playerid, "TrailerCarHydraulics", PI[playerid][pTrailerCarTuning][4]);
 	PI[playerid][pCarStatus] = 0;
 	UpdatePlayerData(playerid, "CarStatus", PI[playerid][pCarStatus]);
 	PI[playerid][pSpawnType] = 0;
 	UpdatePlayerData(playerid, "SpawnType", PI[playerid][pSpawnType]);
 	PI[playerid][pPlayerPos][0] = 0.0;
	PI[playerid][pPlayerPos][1] = 0.0;
	PI[playerid][pPlayerPos][2] = 0.0;
	PI[playerid][pPlayerPos][3] = 0.0;
	SavePlayerPos(playerid);
	PI[playerid][pPlayerPosInt] = 0;
	PI[playerid][pPlayerPosVirt] = 0;
 	/*PI[playerid][pSecurityStatus] = 0;
 	UpdatePlayerData(playerid, "SecurityStatus", PI[playerid][pSecurityStatus]);*/
 	//strmid(PI[playerid][pSecurityCode], "None", 0, strlen("None"), 31);
 	SavePlayerAll(playerid);
}
stock SetPlayerDMArena(playerid)
{
 	new RandomPos = random(sizeof(DMPos));
	SetPlayerPos(playerid, DMPos[RandomPos][0], DMPos[RandomPos][1], DMPos[RandomPos][2]);
	SetPlayerFacingAngle(playerid, DMPos[RandomPos][3]);
	SetPlayerVirtualWorld(playerid, DMArena[playerid]);
	SetPlayerInterior(playerid, 0);
	if(DMArena[playerid] == 1) SetPlayerWeapon(playerid, 24, 9999);
	else if(DMArena[playerid] == 2) SetPlayerWeapon(playerid, 24, 9999);
	else if(DMArena[playerid] == 3) SetPlayerWeapon(playerid, 24, 9999), SetPlayerWeapon(playerid, 25, 9999);
	else if(DMArena[playerid] == 4) SetPlayerWeapon(playerid, 24, 9999);
	else if(DMArena[playerid] == 5) SetPlayerWeapon(playerid, 24, 9999);
	else if(DMArena[playerid] == 6) SetPlayerWeapon(playerid, 24, 9999), SetPlayerWeapon(playerid, 25, 9999);
	return true;
}
stock SetPlayerBullet(id, gunid, bullets)
{
	WeaponInfo[id][WeaponBullets][gunid] += bullets;
    SetPlayerAmmo(id, gunid, bullets);
}
stock SetPlayerSpawn(playerid)
{
   	if(PI[playerid][pSpawnType] == 0)
	{
	    if(PI[playerid][pLevel] >= 0)
		{
			SetPlayerPosEx(playerid, 1154.2502,-1768.1990,16.5938);
			SetPlayerFacingAngle(playerid, 0.2651);
			SetPlayerInterior(playerid, 0);
			SetPlayerVirtualWorld(playerid, 0);
		}
		return true;
	}
	else if(PI[playerid][pSpawnType] == 1)
	{
	    if(PI[playerid][pFracStatus] == 0) return GetSpawnType(playerid), SetTimerEx("GetSpawnTypeTimer", 1000, false, "d", playerid);
	    switch(PI[playerid][pMember])
		{
			case 0:
			{
			    GetSpawnType(playerid);
			    return true;
			}
		    case 1:
		    {
		    	SetPlayerPosEx(playerid, -927.1204,-2362.1838,1701.0959);
				SetPlayerFacingAngle(playerid, 0.8802);
				SetPlayerInterior(playerid, 1);
				SetPlayerVirtualWorld(playerid, 1);
				return true;
			}
   			case 2:
		    {
		    	SetPlayerPosEx(playerid, 211.3636,184.3113,1003.0313);
				SetPlayerFacingAngle(playerid, 174.3579);
				SetPlayerInterior(playerid, 3);
				SetPlayerVirtualWorld(playerid, 2);
				return true;
			}
			case 3:
		    {
		    	SetPlayerPosEx(playerid, 252.6133,107.7192,1024.3394);
				SetPlayerFacingAngle(playerid, 180.6292);
				SetPlayerInterior(playerid, 0);
				SetPlayerVirtualWorld(playerid, 3);
				return true;
			}
			case 4:
		    {
		    	SetPlayerPosEx(playerid, -2291.3047,619.2574,999.1450);
				SetPlayerFacingAngle(playerid, 359.8677);
				SetPlayerInterior(playerid, 0);
				SetPlayerVirtualWorld(playerid, 4);
				SetPlayerAttachedObject(playerid, 5, 11738, 5, 0.302000, 0.023000, 0.001999, -13.300000, -90.700035, 0.000000, 1,1,1);
				return true;
			}
			case 5:
			{
				SetPlayerPosEx(playerid, -1851.9489,2652.8386,3.5894);
				SetPlayerFacingAngle(playerid, 2.6714);
				SetPlayerInterior(playerid, 3);
				SetPlayerVirtualWorld(playerid, 5);
				if(PI[playerid][pRank] >= 5 && PI[playerid][pRank] <= 8) SetPlayerWeapon(playerid, 24, 157);
				return true;
		    }
			case 6:
			{
				SetPlayerPosEx(playerid, 332.5906,1125.0209,1083.8828);
				SetPlayerFacingAngle(playerid, 120.9761);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 6);
				GhettoTextUPDATE();
				SetPlayerWeapon(playerid, 5, 1);
				return true;
			}
			case 7:
			{
				SetPlayerPosEx(playerid, 332.5906,1125.0209,1083.8828);
				SetPlayerFacingAngle(playerid, 120.9761);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 7);
				GhettoTextUPDATE();
				SetPlayerWeapon(playerid, 5, 1);
				return true;
			}
			case 8:
			{
				SetPlayerPosEx(playerid, 332.5906,1125.0209,1083.8828);
				SetPlayerFacingAngle(playerid, 120.9761);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 8);
	            GhettoTextUPDATE();
	            SetPlayerWeapon(playerid, 5, 1);
				return true;
			}
			case 9:
			{
				SetPlayerPosEx(playerid, 332.5906,1125.0209,1083.8828);
				SetPlayerFacingAngle(playerid, 120.9761);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 9);
				GhettoTextUPDATE();
				SetPlayerWeapon(playerid, 5, 1);
				return true;
			}
			case 10:
			{
				SetPlayerPosEx(playerid, 332.5906,1125.0209,1083.8828);
				SetPlayerFacingAngle(playerid, 120.9761);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 10);
				GhettoTextUPDATE();
				SetPlayerWeapon(playerid, 5, 1);
				return true;
			}
			case 11:
			{
				SetPlayerPosEx(playerid, -833.6934,1504.4128,3058.2168);
				SetPlayerFacingAngle(playerid, 358.3366);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 11);
				return true;
			}
			case 12:
			{
				SetPlayerPosEx(playerid, -833.6934,1504.4128,3058.2168);
				SetPlayerFacingAngle(playerid, 358.3366);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 12);
				return true;
			}
			case 13:
			{
				SetPlayerPosEx(playerid, -833.6934,1504.4128,3058.2168);
				SetPlayerFacingAngle(playerid, 358.3366);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 13);
				return true;
			}
			case 14:
			{
				SetPlayerPosEx(playerid, -2549.5833,-630.0354,3150.2905);
				SetPlayerFacingAngle(playerid, 249.7990);
				SetPlayerInterior(playerid, 1);
				SetPlayerVirtualWorld(playerid, 14);
				return true;
			}
			case 15:
			{
			    if(PI[playerid][pRank] == 10)
			    {
					SetPlayerPosExAnimPresident(playerid, -474.6765,287.8710,2004.5850);
					SetPlayerFacingAngle(playerid, 9.7644);
				}
				else if(PI[playerid][pRank] == 9)
				{
				    new pos = Random(1,3);
				    if(pos == 1) SetPlayerPosExAnimPresident(playerid, -473.4855,291.2667,2004.5850), SetPlayerFacingAngle(playerid, 88.2668);
				    else if(pos == 2) SetPlayerPosExAnimPresident(playerid, -474.4862,292.4158,2004.5850), SetPlayerFacingAngle(playerid, 182.0994);
				    else if(pos == 3) SetPlayerPosExAnimPresident(playerid, -475.3787,291.1373,2004.5850), SetPlayerFacingAngle(playerid, 270.7735);
				}
				else if(PI[playerid][pRank] < 9)
				{
					SetPlayerPosEx(playerid, -513.5557,323.2468,2004.5859);
					SetPlayerFacingAngle(playerid, 268.0984);
					if(PI[playerid][pRank] == 3 || PI[playerid][pRank] == 4) SetPlayerWeapon(playerid, 24, 100);
				}
				SetPlayerInterior(playerid, 1);
				SetPlayerVirtualWorld(playerid, 15);
				return true;
			}
			case 16:
			{
				SetPlayerPosEx(playerid, -833.6934,1504.4128,3058.2168);
				SetPlayerFacingAngle(playerid, 358.3366);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 16);
				return true;
			}
			case 17:
			{
				SetPlayerPosEx(playerid, -833.6934,1504.4128,3058.2168);
				SetPlayerFacingAngle(playerid, 358.3366);
				SetPlayerInterior(playerid, 5);
				SetPlayerVirtualWorld(playerid, 17);
				return true;
			}
			case 18:
		    {
		    	SetPlayerPosEx(playerid, 211.3636,184.3113,1003.0313);
				SetPlayerFacingAngle(playerid, 174.3579);
				SetPlayerInterior(playerid, 3);
				SetPlayerVirtualWorld(playerid, 18);
				SetPlayerWeapon(playerid, 3, 1);
				SetPlayerWeapon(playerid, 24, 100);
				SetPlayerWeapon(playerid, 30, 200);
				return true;
			}
		}
	}
	else if(PI[playerid][pSpawnType] == 2)
	{
	    if(PI[playerid][pHouse] == 999 && PI[playerid][pResident] == 999) return GetSpawnType(playerid), SetTimerEx("GetSpawnTypeTimer", 1000, false, "d", playerid);
	    if(PI[playerid][pHouse] != 999)
	    {
	        SetPlayerPosEx(playerid, HouseInfo[PI[playerid][pHouse]][HouseSpawnX], HouseInfo[PI[playerid][pHouse]][HouseSpawnY], HouseInfo[PI[playerid][pHouse]][HouseSpawnZ]);
	        SetPlayerFacingAngle(playerid, HouseInfo[PI[playerid][pHouse]][HouseSpawnC]);
	        SetPlayerVirtualWorld(playerid, HouseInfo[PI[playerid][pHouse]][HouseVirtualWorld]);
	        SetPlayerInterior(playerid, HouseInfo[PI[playerid][pHouse]][HouseInterior]);
	        SetPVarInt(playerid, "HouseExitID", PI[playerid][pHouse]);
	    }
	    if(PI[playerid][pResident] != 999)
	    {
	        SetPlayerPosEx(playerid, HouseInfo[PI[playerid][pResident]][HouseSpawnX], HouseInfo[PI[playerid][pResident]][HouseSpawnY], HouseInfo[PI[playerid][pResident]][HouseSpawnZ]);
	        SetPlayerFacingAngle(playerid, HouseInfo[PI[playerid][pResident]][HouseSpawnC]);
	        SetPlayerVirtualWorld(playerid, HouseInfo[PI[playerid][pResident]][HouseVirtualWorld]);
	        SetPlayerInterior(playerid, HouseInfo[PI[playerid][pResident]][HouseInterior]);
	        SetPVarInt(playerid, "HouseExitID", PI[playerid][pResident]);
	    }
	}
	else if(PI[playerid][pSpawnType] == 3)
	{
	    if(PI[playerid][pJail] == 0) return GetSpawnType(playerid), SetTimerEx("GetSpawnTypeTimer", 1000, false, "d", playerid);
	    else if(PI[playerid][pJail] == 1)
	    {
	        if(PI[playerid][pJailCell] == 1) SetPlayerPosEx(playerid, 1356.8280,972.8102,3016.7773);
	        else if(PI[playerid][pJailCell] == 2) SetPlayerPosEx(playerid, 1361.7922,973.0977,3016.7773);
	        else if(PI[playerid][pJailCell] == 3) SetPlayerPosEx(playerid, 1366.8295,973.4266,3016.7773);
	        else if(PI[playerid][pJailCell] == 4) SetPlayerPosEx(playerid, 1371.7496,973.2161,3016.7773);
	        else if(PI[playerid][pJailCell] == 5) SetPlayerPosEx(playerid, 1376.8572,973.2351,3016.7773);
	        else if(PI[playerid][pJailCell] == 6) SetPlayerPosEx(playerid, 1382.0137,973.2005,3016.7773);
	        else if(PI[playerid][pJailCell] == 7) SetPlayerPosEx(playerid, 1387.1058,973.0685,3016.7773);
	        SetPlayerFacingAngle(playerid, 181.3227);
	        SetPlayerVirtualWorld(playerid, 5);
	        SetPlayerInterior(playerid, 1);
	    }
	    else if(PI[playerid][pJail] == 2)
	    {
	        if(PI[playerid][pJailCell] == 1) SetPlayerPosEx(playerid, 1356.8928,973.4357,3020.4277);
	        else if(PI[playerid][pJailCell] == 2) SetPlayerPosEx(playerid, 1361.8053,973.2278,3020.4277);
	        else if(PI[playerid][pJailCell] == 3) SetPlayerPosEx(playerid, 1366.8650,973.1671,3020.4277);
	        else if(PI[playerid][pJailCell] == 4) SetPlayerPosEx(playerid, 1371.8469,973.0826,3020.4277);
	        else if(PI[playerid][pJailCell] == 5) SetPlayerPosEx(playerid, 1376.9171,973.1124,3020.4277);
	        else if(PI[playerid][pJailCell] == 6) SetPlayerPosEx(playerid, 1381.9363,972.8904,3020.4277);
	        else if(PI[playerid][pJailCell] == 7) SetPlayerPosEx(playerid, 1387.0234,973.0612,3020.4277);
	        SetPlayerFacingAngle(playerid, 181.3227);
	        SetPlayerVirtualWorld(playerid, 5);
	        SetPlayerInterior(playerid, 1);
	    }
	    else if(PI[playerid][pJail] == 3)
	    {
	        if(PI[playerid][pJailCell] == 1) SetPlayerPosEx(playerid, 1356.7208,973.2594,3024.1013);
	        else if(PI[playerid][pJailCell] == 2) SetPlayerPosEx(playerid, 1361.8391,973.1534,3024.1013);
	        else if(PI[playerid][pJailCell] == 3) SetPlayerPosEx(playerid, 1366.7922,972.9305,3024.1013);
	        else if(PI[playerid][pJailCell] == 4) SetPlayerPosEx(playerid, 1371.7533,972.8022,3024.1013);
	        else if(PI[playerid][pJailCell] == 5) SetPlayerPosEx(playerid, 1376.9493,973.0548,3024.1013);
	        else if(PI[playerid][pJailCell] == 6) SetPlayerPosEx(playerid, 1381.9771,973.2352,3024.1013);
	        else if(PI[playerid][pJailCell] == 7) SetPlayerPosEx(playerid, 1386.9797,973.2329,3024.1013);
	        SetPlayerFacingAngle(playerid, 181.3227);
	        SetPlayerVirtualWorld(playerid, 5);
	        SetPlayerInterior(playerid, 1);
	    }
	}
	else if(PI[playerid][pSpawnType] == 4)
	{
	    SetPlayerPosExAnim(playerid, 1960.0149,1131.7402,3001.5625);
	    SetPlayerFacingAngle(playerid, 358.6822);
	    SetPlayerVirtualWorld(playerid, TrailerCar[playerid]);
	    SetPlayerInterior(playerid, 1);
	}
	else if(PI[playerid][pSpawnType] == 5) GetSpawnType(playerid), SetTimerEx("GetSpawnTypeTimer", 1000, false, "d", playerid);
	else if(PI[playerid][pSpawnType] == 6)
	{
	    if(PI[playerid][pFamilyMember] == 999) return GetSpawnType(playerid), SetTimerEx("GetSpawnTypeTimer", 1000, false, "d", playerid);
	    if(FamilyInfo[PI[playerid][pFamilyMember]][fMansion] == 0) return GetSpawnType(playerid), SetTimerEx("GetSpawnTypeTimer", 1000, false, "d", playerid);
	    SetPlayerPosEx(playerid, 1986.4268,1330.5255,3018.4880);
	    SetPlayerFacingAngle(playerid, 271.2081);
	    SetPlayerVirtualWorld(playerid, FamilyInfo[PI[playerid][pFamilyMember]][fMansion]);
	    SetPlayerInterior(playerid, 1);
	}
	else if(PI[playerid][pSpawnType] == 7)
	{
		SetPlayerPosEx(playerid, PI[playerid][pPlayerPos][0], PI[playerid][pPlayerPos][1], PI[playerid][pPlayerPos][2]);
		SetPlayerFacingAngle(playerid, PI[playerid][pPlayerPos][3]);
		SetPlayerVirtualWorld(playerid, PI[playerid][pPlayerPosVirt]);
		SetPlayerInterior(playerid, PI[playerid][pPlayerPosInt]);
		PI[playerid][pSpawnType] = 1;
	}
	else
	{
	    format(other_string, sizeof(other_string), "Motamashe: %s[%d] Gachenis Adgiltan Dakavshirebit Akvs Xarvezi", Name(playerid), playerid);
	    SendAdminMessage(COLOR_WARNING, other_string);
	}
	return true;
}
stock ResetGlobalInfo()
{
    AdvertisePrice = 50;
    //IPChanger = 0;
    EXPBoost = 1;
    //Proxy = 1;
    musicon = 1;
}
stock SendGhettoMessage(color, string[])
{
    foreach(new i:Player)
    {
       	if(PI[i][pAdmin] > 0 && login[i] == 0) continue;
		if(PI[i][pAdmin] == 0 && PI[i][pMember] == 6 && PI[i][pMember] == 7 || PI[i][pMember] == 8 || PI[i][pMember] == 9 || PI[i][pMember] == 10) SendClientMessage(i, color, string);
	}
}
stock SendMaffiaMessage(color, string[])
{
    foreach(new i:Player)
    {
       	if(PI[i][pAdmin] > 0 && login[i] == 0) continue;
		if(PI[i][pAdmin] == 0 && PI[i][pMember] == 11 || PI[i][pMember] == 12 || PI[i][pMember] == 13) SendClientMessage(i, color, string);
	}
}
stock SendGovermentMessage(color, string[])
{
    foreach(new i:Player)
    {
       	if(PI[i][pAdmin] > 0 && login[i] == 0) continue;
		if(PI[i][pAdmin] == 0 && PI[i][pMember] == 1 || PI[i][pMember] == 2 || PI[i][pMember] == 3 || PI[i][pMember] == 4 || PI[i][pMember] == 5 || PI[i][pMember] == 14 || PI[i][pMember] == 15) SendClientMessage(i, color, string);
	}
}
stock SendAdminMessage(color, string[])
{
    foreach(new i:Player)
    {
       	if(!PI[i][pAdmin] && login[i] == 0) continue;
		if(PI[i][pAdmin] >= 1 && Alogin[i] == true) SendClientMessage(i, color, string);
	}
}
stock SendDeveloperMessage(color, string[])
{
    foreach(new i:Player)
    {
       	if(!PI[i][pAdmin] && login[i] == 0) continue;
		if(PI[i][pAdmin] >= 9 && Alogin[i] == true) SendClientMessage(i, color, string);
	}
}
stock SendSupportMessage(color, string[])
{
    foreach(new i:Player)
    {
       	if(!PI[i][pSupport] && login[i] == 0) continue;
       	if(PI[i][pSupport] >= 1 && PI[i][pAdmin] == 0) SendClientMessage(i, color, string);
	}
}
stock GetString(param1[],param2[])
{
	return !strcmp(param1, param2, false);
}
fpublic SendGovMessage(depchat[])
{
	foreach(new i:Player)
	{
	    if(login[i] == 0) continue;
		if(PI[i][pMember] == 1 || PI[i][pMember] == 2 || PI[i][pMember] == 3 || PI[i][pMember] == 4 || PI[i][pMember] == 5 || PI[i][pMember] == 15 || PI[i][pMember] == 18) SendClientMessage(i, COLOR_LIGHTRED, depchat);
	}
}
fpublic SendRadioMessage(radio, color, string[])
{
	foreach(new i:Player)
	{
	    if(login[i] == 0) continue;
		if(PI[i][pMember] == radio || PI[i][pLeader] == radio) SendClientMessage(i, color, string);
	}
}
stock SendFamilyMessage(family, color, string[])
{
	foreach(new i:Player)
	{
	    if(login[i] == 0) continue;
		if(PI[i][pMember] == family && !PI[i][pSettings][2] || PI[i][pLeader] == family && !PI[i][pSettings][2]) SendClientMessage(i, color, string);
	}
}
fpublic SendFractionMessage(fracid, color, string[])
{
	foreach(new i:Player)
	{
	    if(login[i] == 0) continue;
		if(PI[i][pMember] == fracid) SendClientMessage(i, color, string);
	}
}
stock FamilyMessage(family, color, string[])
{
	foreach(new i:Player)
	{
	    if(login[i] == 0) continue;
		if(PI[i][pFamilyMember] == family) SendClientMessage(i, color, string);
	}
}
stock SendJobMessage(jobid, color, string[])
{
	foreach(new i:Player)
	{
	    if(login[i] == 0) continue;
	    if(jobid == 4) if(Job[i] == jobid && TransportDuty[i] == 1) SendClientMessage(i, color, string);
	    if(jobid == 3) if(Job[i] == jobid) SendClientMessage(i, color, string);
	}
}
stock SetMansionText(playerid)
{
	new mansion_str[150];
    format(mansion_str, sizeof(mansion_str), "{%s}Mansion: {FFFFFF}#%d\n\n{%s}Mflobeli: {FFFFFF}%s\n{%s}Type: {FFFFFF}%s", FamilyInfo[PI[playerid][pFamilyMember]][fColor], MansionInfo[FamilyInfo[PI[playerid][pFamilyMember]][fMansion]][mID], FamilyInfo[PI[playerid][pFamilyMember]][fColor], MansionInfo[FamilyInfo[PI[playerid][pFamilyMember]][fMansion]][mName], FamilyInfo[PI[playerid][pFamilyMember]][fColor], GetFamilyType(MansionInfo[FamilyInfo[PI[playerid][pFamilyMember]][fMansion]][mType]));
	Update3DTextLabelText(MansionInfo[FamilyInfo[PI[playerid][pFamilyMember]][fMansion]][mText], COLOR_WHITE, mansion_str);
}
stock SetFamilyText(playerid)
{
	if(PI[playerid][pFamilyMember] == 999) return true;
	if(PI[playerid][pFamilyMember] != 999 && FamilyText[playerid] != Text3D:INVALID_3DTEXT_ID)
	{
		DestroyDynamic3DTextLabel(FamilyText[playerid]);
		FamilyText[playerid] = Text3D:INVALID_3DTEXT_ID;
		new textstr[150];
	    format(textstr,sizeof(textstr), "{%s}[%s] {FFFFFF}%s", FamilyInfo[PI[playerid][pFamilyMember]][fColor], GetFamilyType(FamilyInfo[PI[playerid][pFamilyMember]][fType]), FamilyInfo[PI[playerid][pFamilyMember]][fName]);
		FamilyText[playerid] = CreateDynamic3DTextLabel(textstr, COLOR_WHITE, 0.0, 0.0, 0.1, 15.0, playerid, INVALID_VEHICLE_ID, 1);
		return true;
	}
	else if(PI[playerid][pFamilyMember] != 999 && FamilyText[playerid] == Text3D:INVALID_3DTEXT_ID)
	{
	    new textstr[150];
	    format(textstr,sizeof(textstr), "{%s}[%s] {FFFFFF}%s",  FamilyInfo[PI[playerid][pFamilyMember]][fColor], GetFamilyType(FamilyInfo[PI[playerid][pFamilyMember]][fType]), FamilyInfo[PI[playerid][pFamilyMember]][fName]);
		FamilyText[playerid] = CreateDynamic3DTextLabel(textstr, COLOR_WHITE, 0.0, 0.0, 0.1, 15.0, playerid, INVALID_VEHICLE_ID, 1);
		return true;
	}
	return true;
}
stock GetAntiCarRemoveStatus()
{
	new status[32];
	if(ANTI_MASTERCAR == 1){status = "{6EF83C}Kick{FFFFFF}";}
	else{status = "{FF0606}Warning{FFFFFF}";}
	return status;
}
stock GetAntiBackspaceStatus()
{
	new status[32];
	if(ANTI_BACKSPACE == 1){status = "{6EF83C}Kick{FFFFFF}";}
	else{status = "{FF0606}Warning{FFFFFF}";}
	return status;
}
stock GetAntiSlidespaceStatus()
{
	new status[32];
	if(ANTI_SLIDESPACE == 1){status = "{6EF83C}Kick{FFFFFF}";}
	else{status = "{FF0606}Warning{FFFFFF}";}
	return status;
}
stock GetAntiCrasherStatus()
{
	new status[32];
	if(ANTI_CRASHER == 1){status = "{6EF83C}Kick{FFFFFF}";}
	else{status = "{FF0606}Warning{FFFFFF}";}
	return status;
}
stock GetRvankaStatus()
{
	new status[32];
	if(ANTI_RVANKA == 1){status = "{6EF83C}Kick{FFFFFF}";}
	else{status = "{FF0606}Warning{FFFFFF}";}
	return status;
}
stock Add_Cheater_To_List(playerid,const cheat[], vote)
{
    if(login[playerid] == 0) return 1;
    if(Kicked[playerid] == 1) return 1;
    Kicked[playerid] = 1;
	SetTimerEx("kickedmoxsna", 5000, 0, "i", playerid);
	if(vote == 0)
	{
     	format(a_string, sizeof(a_string),"[AntiCheat] Motamashe: %s[%d] Shesadzloa Iyenebdes Cheat's: %s", Name(playerid), playerid, cheat);
		SendAdminMessage(COLOR_LIGHTRED, a_string);
	}
	if(vote == 1)
	{
	    format(a_string, sizeof(a_string), "[AntiCheat] Motamashe: %s[%d] Gaikicka Serveridan, Mizezi: %s",Name(playerid), playerid, cheat);
	    SendAdminMessage(COLOR_LIGHTRED, a_string);
		format(other_string, sizeof(other_string), "{FF4545}[AntiCheat]{FFFFFF} Tkven Gaikicket Serveridan, Mizezi: {FF4545}%s", cheat);
		SendClientMessage(playerid, COLOR_WHITE, other_string);
        TogglePlayerControllable(playerid,0);
		Kick(playerid);
    }
	if(vote == 25)
	{
	    return 1;
    }
    return 1;
}
forward kickedmoxsna(playerid);
public kickedmoxsna(playerid)
{
	Kicked[playerid] = 0;
	return 1;
}
stock SetPlayerToTeamColor(playerid)
{
	SetPlayerColor(playerid, COLOR_WHITE);
	switch(PI[playerid][pMember])
	{
		case 1: SetPlayerColor(playerid, TEAM_LSPD);
		case 2: SetPlayerColor(playerid, TEAM_FBI);
		case 3: SetPlayerColor(playerid, TEAM_ARMY);
		case 4: SetPlayerColor(playerid, TEAM_HOSPITAL);
		case 5: SetPlayerColor(playerid, TEAM_CITYHALL);
		case 6: SetPlayerColor(playerid, TEAM_BALLAS);
		case 7: SetPlayerColor(playerid, TEAM_VAGOS);
		case 8: SetPlayerColor(playerid, TEAM_GROVE);
		case 9: SetPlayerColor(playerid, TEAM_AZTEC);
		case 10: SetPlayerColor(playerid, TEAM_RIFA);
		case 11: SetPlayerColor(playerid, TEAM_LCN);
		case 12: SetPlayerColor(playerid, TEAM_YAKUZA);
		case 13: SetPlayerColor(playerid, TEAM_RM);
		case 14: SetPlayerColor(playerid, TEAM_LSNEWS);
		case 15: SetPlayerColor(playerid, TEAM_PRESIDENT);
		case 16: SetPlayerColor(playerid, TEAM_BANDIDOS);
		case 17: SetPlayerColor(playerid, TEAM_BLOODS);
		case 18: SetPlayerColor(playerid, TEAM_Krimpoli);
	}
	return true;
}
stock ClearTotalGz()
{
	TotalGz[0] = 0;
	TotalGz[1] = 0;
	TotalGz[2] = 0;
	TotalGz[3] = 0;
	TotalGz[4] = 0;
}
stock GetGangZoneColor(gangzonex)
{
	new zx;
	switch(GZInfo[gangzonex][gFrakVlad])
	{
		case 6: zx = 0xd200ff99;
		case 7: zx = 0xffcd00AA;
		case 8: zx = 0x009900AA;
		case 9: zx = 0x00F5FFAA;
		case 10: zx = 0x6666ffAA;
		default: zx = 0xC0C0C0AA;
	}
	return zx;
}
fpublic IsAGang(playerid)
{
	if(!IsPlayerConnected(playerid)) return false;
	new leader = PI[playerid][pLeader];
	new member = PI[playerid][pMember];
	if(member==6 || member==7 || member==8 || member==9 || member==10) return true;
	if(leader==6 || leader==7 || leader==8 || leader==9 || leader==10) return true;
	return false;
}
fpublic IsAMafia(playerid)
{
	if(!IsPlayerConnected(playerid)) return false;
	new leader = PI[playerid][pLeader];
	new member = PI[playerid][pMember];
	if(member == 11 || member == 12 || member == 13) return true;
	if(leader == 11|| leader == 12 || leader == 13) return true;
	return false;
}
fpublic PlayerToKvadrat(playerid,Float:min_x,Float:min_y,Float:max_x,Float:max_y)
{
	new Float:xxp,Float:yyp,Float:zzp;
	GetPlayerPos(playerid, xxp, yyp, zzp);
	if((xxp <= max_x && xxp >= min_x) && (yyp <= max_y && yyp >= min_y)) return true;
	return false;
}
stock GetMafiaName(fnumbwer)
{
	new string[25];
	switch(fnumbwer)
	{
		case 11: format(string,sizeof(string), "La Cosa Nostra");
		case 12: format(string,sizeof(string), "Yakudza");
		case 13: format(string,sizeof(string), "Russian Mafia");
	}
	return string;
}
stock GetGangName(fnumbwer)
{
    new namestr[15];
	switch(fnumbwer)
	{
		case 6: format(namestr,sizeof(namestr), "{CC00FF}Ballas");
		case 7: format(namestr,sizeof(namestr), "{FFCD00}Vagos");
		case 8: format(namestr,sizeof(namestr), "{009900}Grove");
		case 9: format(namestr,sizeof(namestr), "{00b4e1}Azteca");
		case 10: format(namestr,sizeof(namestr), "{5555FF}Rifa");
	}
	return namestr;
}
stock GetGangNamee(fnumbwer)
{
    new namestr[20];
	switch(fnumbwer)
	{
		case 6: format(namestr,sizeof(namestr), "The Ballas");
		case 7: format(namestr,sizeof(namestr), "Los Santos Vagos");
		case 8: format(namestr,sizeof(namestr), "Grove Street");
		case 9: format(namestr,sizeof(namestr), "Varios Los Aztecas");
		case 10: format(namestr,sizeof(namestr), "The Rifa");
	}
	return namestr;
}
stock GetJobName(jobid)
{
    new jobname[70];
    switch(jobid)
    {
		case 0: format(jobname, sizeof(jobname), "None");
		case 1: format(jobname, sizeof(jobname), "Xis Mchreli");
		case 2: format(jobname, sizeof(jobname), "Dasuftaveba");
		case 3: format(jobname, sizeof(jobname), "Mechanic");
		case 4: format(jobname, sizeof(jobname), "Taxi");
		case 5: format(jobname, sizeof(jobname), "Materialebis Qarxana");
		case 6: format(jobname, sizeof(jobname), "Materialebis Gadamzidi");
		case 7: format(jobname, sizeof(jobname), "Shaxta");
		case 8: format(jobname, sizeof(jobname), "Mtvirtavi");
		case 9: format(jobname, sizeof(jobname), "Planis Plantacia");
	}
	return jobname;
}
stock GetCarType(status)
{
    new n_str[45];
	switch(status)
	{
	    case 1: format(n_str,sizeof(n_str), "Econom");
	    case 2: format(n_str,sizeof(n_str), "Standart");
	    case 3: format(n_str,sizeof(n_str), "Sport");
	}
	return n_str;
}
stock TesterName(testerid)
{
	new namestr[80];
	switch(testerid)
	{
	    case 0:
	    {
            format(sql_str, sizeof(sql_str), "SELECT * FROM `Testers` WHERE CMD = 'makesupport'");
			mysql_query(connect, sql_str);
			new rows;
			cache_get_row_count(rows);
			for new i = 0;i < rows; i++ do
			{
				cache_get_value_name(i, "Name", namestr);
			}
	    }
	    case 1:
	    {
            format(sql_str, sizeof(sql_str), "SELECT * FROM `Testers` WHERE CMD = 'makeleader'");
			mysql_query(connect, sql_str);
			new rows;
			cache_get_row_count(rows);
			for new i = 0;i < rows; i++ do
			{
				cache_get_value_name(i, "Name", namestr);
			}
	    }
	    case 2:
	    {
            format(sql_str, sizeof(sql_str), "SELECT * FROM `Testers` WHERE CMD = 'setgang'");
			mysql_query(connect, sql_str);
			new rows;
			cache_get_row_count(rows);
			for new i = 0;i < rows; i++ do
			{
				cache_get_value_name(i, "Name", namestr);
			}
	    }
	    case 3:
	    {
            format(sql_str, sizeof(sql_str), "SELECT * FROM `Testers` WHERE CMD = 'setmafia'");
			mysql_query(connect, sql_str);
			new rows;
			cache_get_row_count(rows);
			for new i = 0;i < rows; i++ do
			{
				cache_get_value_name(i, "Name", namestr);
			}
	    }
	}
	return namestr;
}
stock GetBanCounter()
{
    format(sql_str, sizeof(sql_str), "SELECT * FROM `accounts` WHERE Ban = '1'");
	mysql_query(connect, sql_str);
	new bnacc = 0;
	new rows;
	cache_get_row_count(rows);
	if(!rows) bnacc = 0;
	for new i = 0;i < rows; i++ do
	{
		bnacc += 1;
	}
	return bnacc;
}
stock GetWarnCounter()
{
	new warncounter = 0;
    foreach(new i:Player)
    {
		if(PI[i][pWarns] >= 1) warncounter += 1;
    }
	return warncounter;
}
stock SupportTester(playerid)
{
	new supstr[150];
	format(supstr, sizeof(supstr), "SELECT * FROM Testers  WHERE CMD = 'makesupport' AND Name = '%s' LIMIT 1", Name(playerid));
    mysql_query(connect, supstr);
	new rows;
	cache_get_row_count(rows);
	if(rows)
	{
		return true;
	}
	return false;
}
stock GovermentTester(playerid)
{
	new govstr[150];
	format(govstr, sizeof(govstr), "SELECT * FROM Testers  WHERE CMD = 'makeleader' AND Name = '%s' LIMIT 1", Name(playerid));
    mysql_query(connect, govstr);
	new rows;
	cache_get_row_count(rows);
	if(rows)
	{
		return true;
	}
	return false;
}
stock GhettoTester(playerid)
{
	new ghettostr[150];
	format(ghettostr, sizeof(ghettostr), "SELECT * FROM Testers  WHERE CMD = 'setgang' AND Name = '%s' LIMIT 1", Name(playerid));
    mysql_query(connect, ghettostr);
	new rows;
	cache_get_row_count(rows);
	if(rows)
	{
		return true;
	}
	return false;
}
stock MaffiaTester(playerid)
{
	new maffiastr[150];
	format(maffiastr, sizeof(maffiastr), "SELECT * FROM Testers  WHERE CMD = 'setmafia' AND Name = '%s' LIMIT 1", Name(playerid));
    mysql_query(connect, maffiastr);
	new rows;
	cache_get_row_count(rows);
	if(rows)
	{
		return true;
	}
	return false;
}
stock TesterData(testerid)
{
	new datastr[80];
	switch(testerid)
	{
	    case 0:
	    {
            format(sql_str, sizeof(sql_str), "SELECT * FROM `Testers` WHERE CMD = 'makesupport'");
			mysql_query(connect, sql_str);
			new rows;
			cache_get_row_count(rows);
			for new i = 0;i < rows; i++ do
			{
				cache_get_value_name(i, "Data", datastr);
			}
	    }
	    case 1:
	    {
            format(sql_str, sizeof(sql_str), "SELECT * FROM `Testers` WHERE CMD = 'makeleader'");
			mysql_query(connect, sql_str);
			new rows;
			cache_get_row_count(rows);
			for new i = 0;i < rows; i++ do
			{
				cache_get_value_name(i, "Data", datastr);
			}
	    }
	    case 2:
	    {
            format(sql_str, sizeof(sql_str), "SELECT * FROM `Testers` WHERE CMD = 'setgang'");
			mysql_query(connect, sql_str);
			new rows;
			cache_get_row_count(rows);
			for new i = 0;i < rows; i++ do
			{
				cache_get_value_name(i, "Data", datastr);
			}
	    }
	    case 3:
	    {
            format(sql_str, sizeof(sql_str), "SELECT * FROM `Testers` WHERE CMD = 'setmafia'");
			mysql_query(connect, sql_str);
			new rows;
			cache_get_row_count(rows);
			for new i = 0;i < rows; i++ do
			{
				cache_get_value_name(i, "Data", datastr);
			}
	    }
	}
	return datastr;
}
stock GetVIPName(viplevel)
{
	new v_str[15];
	switch(viplevel)
	{
	    case 0: format(v_str, sizeof(v_str), "None");
	    case 1: format(v_str, sizeof(v_str), "Bronze");
	    case 2: format(v_str, sizeof(v_str), "Silver");
	    case 3: format(v_str, sizeof(v_str), "Gold");
	}
	return v_str;
}
stock GetFamilyType(type)
{
	new f_str[15];
	switch(type)
	{
	    case 0: format(f_str, sizeof(f_str), "None");
	    case 1: format(f_str, sizeof(f_str), "Family");
	    case 2: format(f_str, sizeof(f_str), "Crew");
	    case 3: format(f_str, sizeof(f_str), "Squad");
	    case 4: format(f_str, sizeof(f_str), "Dynasty");
	    case 5: format(f_str, sizeof(f_str), "Empire");
	}
	return f_str;
}
stock GetFracName(fracid)
{
	new n_str[32];
	switch(fracid)
	{
	    case 0: format(n_str,sizeof(n_str), "None");
	    case 1: format(n_str,sizeof(n_str), "LSPD");
	    case 2: format(n_str,sizeof(n_str), "FBI");
	    case 3: format(n_str,sizeof(n_str), "ARMY");
	    case 4: format(n_str,sizeof(n_str), "Hospital");
	    case 5: format(n_str,sizeof(n_str), "CityHall");
	   	case 6: format(n_str,sizeof(n_str), "Ballas");
		case 7: format(n_str,sizeof(n_str), "Vagos");
		case 8: format(n_str,sizeof(n_str), "Grove");
		case 9: format(n_str,sizeof(n_str), "Azteca");
		case 10: format(n_str,sizeof(n_str), "Rifa");
		case 11: format(n_str,sizeof(n_str), "La Cosa Nostra");
		case 12: format(n_str,sizeof(n_str), "Yakuza");
		case 13: format(n_str,sizeof(n_str), "Russia Maffia");
		case 14: format(n_str,sizeof(n_str), "LS News");
		case 15: format(n_str,sizeof(n_str), "President Residention");
		case 16: format(n_str,sizeof(n_str), "Bandidos");
		case 17: format(n_str,sizeof(n_str), "48 st. Gangster Disciples");
		case 18: format(n_str,sizeof(n_str), "Kriminaluri Policia");
	}
	return n_str;
}
stock GetTypeName(bizid)
{
	new n_str[45];
	switch(bizid)
	{
	    case 1: format(n_str,sizeof(n_str), "Market");
	    case 2: format(n_str,sizeof(n_str), "Gas Station");
	    case 4: format(n_str,sizeof(n_str), "Market");
	    case 5: format(n_str,sizeof(n_str), "Hotel");
	}
	return n_str;
}
stock GetStatusName(bizid)
{
	new n_str[45];
	switch(bizid)
	{
	    case 1: format(n_str,sizeof(n_str), "Daketilia");
	    case 0: format(n_str,sizeof(n_str), "Gaxsnilia");
	}
	return n_str;
}
stock GetGZColorF(fnumber)
{
	new zx;
	switch(fnumber)
	{
		case 6: zx = 0xFF0000AA;
		case 7: zx = 0xFF0000AA;
		case 8: zx = 0xFF0000AA;
		case 9: zx = 0xFF0000AA;
		case 10: zx = 0xFF0000AA;
	}
	return zx;
}
fpublic SendMafiaMessage(color, string[])
{
	foreach(new i:Player)
	{
		if(PI[i][pMember] == 5 || PI[i][pMember] == 6 || PI[i][pMember] == 14) SendClientMessage(i, color, string);
	}
}
fpublic SendGangMessage(ddstring[])
{
	foreach(new i:Player)
	{
		if(PI[i][pMember] == 6 || PI[i][pMember] == 7 || PI[i][pMember] == 8 || PI[i][pMember] == 9 || PI[i][pMember] == 10) SendClientMessage(i, COLOR_WHITE, ddstring);
	}
}
stock GhettoTextUPDATE()
{
	new TextUPT[260];
    ClearTotalGz();
	for(new i =0;i<sizeof(GZInfo);i++)
	{
		if(GZInfo[i][gFrakVlad] == 6) TotalGz[0]++;
		if(GZInfo[i][gFrakVlad] == 7) TotalGz[1]++;
		if(GZInfo[i][gFrakVlad] == 8) TotalGz[2]++;
		if(GZInfo[i][gFrakVlad] == 9) TotalGz[3]++;
		if(GZInfo[i][gFrakVlad] == 10) TotalGz[4]++;
	}
	format(TextUPT,sizeof(TextUPT),"The Ballas Gang\n\n{FFFFFF}Teritoriebis Raodenoba: {63BD4E}%d\n{FFFFFF}Materialebis Raodenoba: {63BD4E}%d\n{FFFFFF}Narkotikebis Raodenoba: {63BD4E}%d\n{FFFFFF}Sabanko Angarishi: {63BD4E}%d\n\n{FFFFFF}Sawyobi: %s\n{FFFFFF}Daachiret: {63BD4E}ALT", TotalGz[0], BallasMat, BallasDrug, BallasBank, (!GangWH[0])?("{AE433D}Daketilia") : ("{009933}Gaxsnilia"));
	Update3DTextLabelText(GhettoText[0],0xCC00FFAA,TextUPT);
	format(TextUPT,sizeof(TextUPT),"The Vagos Gang\n\n{FFFFFF}Teritoriebis Raodenoba: {63BD4E}%d\n{FFFFFF}Materialebis Raodenoba: {63BD4E}%d\n{FFFFFF}Narkotikebis Raodenoba: {63BD4E}%d\n{FFFFFF}Sabanko Angarishi: {63BD4E}%d\n\n{FFFFFF}Sawyobi: %s\n{FFFFFF}Daachiret: {63BD4E}ALT", TotalGz[1], VagosMat, VagosDrug, VagosBank, (!GangWH[1])?("{AE433D}Daketilia") : ("{009933}Gaxsnilia"));
	Update3DTextLabelText(GhettoText[1],0xffcd00AA,TextUPT);
    format(TextUPT,sizeof(TextUPT),"The Grove Gang\n\n{FFFFFF}Teritoriebis Raodenoba: {63BD4E}%d\n{FFFFFF}Materialebis Raodenoba: {63BD4E}%d\n{FFFFFF}Narkotikebis Raodenoba: {63BD4E}%d\n{FFFFFF}Sabanko Angarishi: {63BD4E}%d\n\n{FFFFFF}Sawyobi: %s\n{FFFFFF}Daachiret: {63BD4E}ALT", TotalGz[2], GroveMat, GroveDrug, GroveBank, (!GangWH[2])?("{AE433D}Daketilia") : ("{009933}Gaxsnilia"));
    Update3DTextLabelText(GhettoText[2],0x009900AA,TextUPT);
	format(TextUPT,sizeof(TextUPT),"The Azteca Gang\n\n{FFFFFF}Teritoriebis Raodenoba: {63BD4E}%d\n{FFFFFF}Materialebis Raodenoba: {63BD4E}%d\n{FFFFFF}Narkotikebis Raodenoba: {63BD4E}%d\n{FFFFFF}Sabanko Angarishi: {63BD4E}%d\n\n{FFFFFF}Sawyobi: %s\n{FFFFFF}Daachiret: {63BD4E}ALT", TotalGz[3], AztecaMat, AztecaDrug, AztecaBank, (!GangWH[3])?("{AE433D}Daketilia") : ("{009933}Gaxsnilia"));
	Update3DTextLabelText(GhettoText[3],0x00b4e1AA,TextUPT);
	format(TextUPT,sizeof(TextUPT),"The Rifa Gang\n\n{FFFFFF}Teritoriebis Raodenoba: {63BD4E}%d\n{FFFFFF}Materialebis Raodenoba: {63BD4E}%d\n{FFFFFF}Narkotikebis Raodenoba: {63BD4E}%d\n{FFFFFF}Sabanko Angarishi: {63BD4E}%d\n\n{FFFFFF}Sawyobi: %s\n{FFFFFF}Daachiret: {63BD4E}ALT", TotalGz[4], RifaMat, RifaDrug, RifaBank, (!GangWH[4])?("{AE433D}Daketilia") : ("{009933}Gaxsnilia"));
	Update3DTextLabelText(GhettoText[4],0x7777ffAA,TextUPT);
	return true;
}
stock FactoryTextUPDATE()
{
	new factory_str[100];
	format(factory_str,sizeof(factory_str),"{63BD4E}Materialebis Qarxana\n{FFFFFF}Raodenoba: {63BD4E}%d {FFFFFF}Materiali", FactoryWH);
	Update3DTextLabelText(FactoryText[0], 0xCC00FFAA, factory_str);
    format(factory_str,sizeof(factory_str),"{63BD4E}Materialebis Qarxana\n{FFFFFF}Raodenoba: {63BD4E}%d {FFFFFF}Materiali", FactoryWH);
	Update3DTextLabelText(FactoryText[1], 0xCC00FFAA, factory_str);
	return true;
}
fpublic ProxDetector(Float:radi, playerid, string[],col1,col2,col3,col4,col5)
{
	if(IsPlayerConnected(playerid))
	{
		new Float:posx, Float:posy, Float:posz;
		new Float:oldposx, Float:oldposy, Float:oldposz;
		new Float:tempposx, Float:tempposy, Float:tempposz;
		GetPlayerPos(playerid, oldposx, oldposy, oldposz);
		foreach(new i:Player)
		{
			if(IsPlayerConnected(i))
			{
				if(!TextSystem[i])
				{
					if(GetPlayerVirtualWorld(playerid) == GetPlayerVirtualWorld(i))
					{
						GetPlayerPos(i, posx, posy, posz);
						tempposx = (oldposx -posx);
						tempposy = (oldposy -posy);
						tempposz = (oldposz -posz);
						if (((tempposx < radi/16) && (tempposx > -radi/16)) && ((tempposy < radi/16) && (tempposy > -radi/16)) && ((tempposz < radi/16) && (tempposz > -radi/16))) SendClientMessage(i, col1, string);
						else if (((tempposx < radi/8) && (tempposx > -radi/8)) && ((tempposy < radi/8) && (tempposy > -radi/8)) && ((tempposz < radi/8) && (tempposz > -radi/8))) SendClientMessage(i, col2, string);
						else if (((tempposx < radi/4) && (tempposx > -radi/4)) && ((tempposy < radi/4) && (tempposy > -radi/4)) && ((tempposz < radi/4) && (tempposz > -radi/4))) SendClientMessage(i, col3, string);
						else if (((tempposx < radi/2) && (tempposx > -radi/2)) && ((tempposy < radi/2) && (tempposy > -radi/2)) && ((tempposz < radi/2) && (tempposz > -radi/2))) SendClientMessage(i, col4, string);
						else if (((tempposx < radi) && (tempposx > -radi)) && ((tempposy < radi) && (tempposy > -radi)) && ((tempposz < radi) && (tempposz > -radi))) SendClientMessage(i, col5, string);
					}
				}
				else SendClientMessage(i, col1, string);
			}
		}
	}
	return true;
}
fpublic captclose() return startcapture = 0;
fpublic capton()
{
    foreach(new i:Player)
    {
        if(PI[i][pMember] == 6 || PI[i][pMember] == 7 || PI[i][pMember] == 8 || PI[i][pMember] == 9 || PI[i][pMember] == 10)
        {
            startcapture = 1;
            new str[64];
			format(str, sizeof(str), "~g~Capture Chairto");
			GameTextForPlayer(i, str, 5000, 4);
		}
	}
	return true;
}
stock AddHouseFloat(houseid)
{
	new posstr[700], str[125];
	posstr = "UPDATE `House` SET ";
	acc_float_strcat(posstr, sizeof(posstr), "HouseEnterX", HouseInfo[houseid][HouseEnterX]);
	acc_float_strcat(posstr, sizeof(posstr), "HouseEnterY", HouseInfo[houseid][HouseEnterY]);
	acc_float_strcat(posstr, sizeof(posstr), "HouseEnterZ", HouseInfo[houseid][HouseEnterZ]);
	acc_float_strcat(posstr, sizeof(posstr), "HouseSpawnX", HouseInfo[houseid][HouseSpawnX]);
	acc_float_strcat(posstr, sizeof(posstr), "HouseSpawnY", HouseInfo[houseid][HouseSpawnY]);
	acc_float_strcat(posstr, sizeof(posstr), "HouseSpawnZ", HouseInfo[houseid][HouseSpawnZ]);
	acc_float_strcat(posstr, sizeof(posstr), "HouseSpawnC", HouseInfo[houseid][HouseSpawnC]);
	strdel(posstr, strlen(posstr)-1, strlen(posstr));
	format(str,sizeof(str)," WHERE `HouseID` = '%s'", houseid);
	strcat(posstr, str);
	mysql_tquery(connect, posstr, "", "");
	if(strlen(posstr) >= 700) printf("[Function: AddHouseFloat] House ID: %d Koordinatebis Shenaxva Ver Moxerxda", houseid);
}
stock SaveVehiclePos(playerid, carslot)
{
	new posstr[300], str[125];
	posstr = "UPDATE `Cars` SET ";
	if(carslot == 0)
	{
		acc_float_strcat(posstr, sizeof(posstr), "Car1PosX", VehInfo[playerid][CarPosX][0]);
		acc_float_strcat(posstr, sizeof(posstr), "Car1PosY", VehInfo[playerid][CarPosY][0]);
		acc_float_strcat(posstr, sizeof(posstr), "Car1PosZ", VehInfo[playerid][CarPosZ][0]);
		acc_float_strcat(posstr, sizeof(posstr), "Car1PosC", VehInfo[playerid][CarPosC][0]);
	}
	else if(carslot == 1)
	{
		acc_float_strcat(posstr, sizeof(posstr), "Car2PosX", VehInfo[playerid][CarPosX][1]);
		acc_float_strcat(posstr, sizeof(posstr), "Car2PosY", VehInfo[playerid][CarPosY][1]);
		acc_float_strcat(posstr, sizeof(posstr), "Car2PosZ", VehInfo[playerid][CarPosZ][1]);
		acc_float_strcat(posstr, sizeof(posstr), "Car2PosC", VehInfo[playerid][CarPosC][1]);
	}
	else if(carslot == 2)
	{
		acc_float_strcat(posstr, sizeof(posstr), "Car3PosX", VehInfo[playerid][CarPosX][2]);
		acc_float_strcat(posstr, sizeof(posstr), "Car3PosY", VehInfo[playerid][CarPosY][2]);
		acc_float_strcat(posstr, sizeof(posstr), "Car3PosZ", VehInfo[playerid][CarPosZ][2]);
		acc_float_strcat(posstr, sizeof(posstr), "Car3PosC", VehInfo[playerid][CarPosC][2]);
	}
	strdel(posstr, strlen(posstr)-1, strlen(posstr));
	format(str,sizeof(str)," WHERE `CarOwner` = '%s'", Name(playerid));
	strcat(posstr, str);
	mysql_tquery(connect, posstr, "", "");
	if(strlen(posstr) >= 300) printf("[Function: SaveVehiclePos] Account: %s Motamashis Transportis Adgilmdebareoba Ver Sheinaxa", Name(playerid));
}
stock Login(playerid)
{
	if(login[playerid] == 0){return true;}
	return false;
}
stock SaveTrailerPos(playerid)
{
	new posstr[300], str[125];
	posstr = "UPDATE `accounts` SET ";
	acc_float_strcat(posstr, sizeof(posstr), "TrailerCarPosX", PI[playerid][pTrailerCarPos][0]);
	acc_float_strcat(posstr, sizeof(posstr), "TrailerCarPosY", PI[playerid][pTrailerCarPos][1]);
	acc_float_strcat(posstr, sizeof(posstr), "TrailerCarPosZ", PI[playerid][pTrailerCarPos][2]);
	acc_float_strcat(posstr, sizeof(posstr), "TrailerCarPosC", PI[playerid][pTrailerCarPos][3]);
	strdel(posstr, strlen(posstr)-1, strlen(posstr));
	format(str,sizeof(str)," WHERE `Name` = '%s'", Name(playerid));
	strcat(posstr, str);
	mysql_tquery(connect, posstr, "", "");
	if(strlen(posstr) >= 300) printf("[Function: SaveTrailerPos] Account: %s Motamashis Transportis Adgilmdebareoba Ver Sheinaxa", Name(playerid));
}
stock SavePlayerPos(playerid)
{
	new posstr[300], str[125];
	posstr = "UPDATE `accounts` SET ";
	acc_float_strcat(posstr, sizeof(posstr), "PlayerPosX", PI[playerid][pPlayerPos][0]);
	acc_float_strcat(posstr, sizeof(posstr), "PlayerPosY", PI[playerid][pPlayerPos][1]);
	acc_float_strcat(posstr, sizeof(posstr), "PlayerPosZ", PI[playerid][pPlayerPos][2]);
	acc_float_strcat(posstr, sizeof(posstr), "PlayerPosC", PI[playerid][pPlayerPos][3]);
	strdel(posstr, strlen(posstr)-1, strlen(posstr));
	format(str,sizeof(str)," WHERE `Name` = '%s'", Name(playerid));
	strcat(posstr, str);
	mysql_tquery(connect, posstr, "", "");
	if(strlen(posstr) >= 300) printf("[Function: SavePlayerPos] Account: %s Motamashis Adgilmdebareoba Ver Sheinaxa", Name(playerid));
}
stock CheckStaffInfo(developerid, idplayer, level, status)
{
	format(connect_str, sizeof(connect_str), "SELECT * FROM `Staff` WHERE Name = '%e' LIMIT 1", Name(idplayer));
	mysql_query(connect, connect_str);
	new rows;
	cache_get_row_count(rows);
	if(rows)
	{
		if(status == 1) mysql_format(connect, connect_str, sizeof(connect_str), "UPDATE `Staff` SET `Admin` = '%d' WHERE `Name` = '%e'", level, Name(idplayer));
		else if(status == 2) mysql_format(connect, connect_str, sizeof(connect_str), "UPDATE `Staff` SET `Support` = '%d' WHERE `Name` = '%e'", level, Name(idplayer));
		mysql_tquery(connect, connect_str, "", "");
	}
	else
	{
		new playerip[16], staff_str[400];
		GetPlayerIp(idplayer, playerip, sizeof(playerip));
		getdate(Year, Month, Day);
		gettime(Hour, Minute, Second);
		format(StaffInfo[idplayer][aData], 13, "%02i/%02i/%i", Day, Month, Year);
		format(StaffInfo[idplayer][aTime], 11, "%02i:%02i:%02i", Hour, Minute, Second);
		if(status == 1)
		{
			mysql_format(connect, staff_str, sizeof(staff_str), "INSERT INTO `Staff` (`Name`, `IPAddress`, `Developer`, `Data`, `Time`, `Online`, `Admin`, `Support`, `AnswerYes`, `AnswerNo`, `Mute`, `Kick`, `Warn`, `Ban`, `IPBan`) \
			VALUES ('%e', '%e', '%e', '%e', '%e', '0', '%d', '0', '0', '0', '0', '0', '0', '0', '0')",
			Name(idplayer), playerip, Name(developerid), StaffInfo[idplayer][aData], StaffInfo[idplayer][aTime], level);
		}
		else if(status == 2)
		{
			mysql_format(connect, staff_str, sizeof(staff_str), "INSERT INTO `Staff` (`Name`, `IPAddress`, `Developer`, `Data`, `Time`, `Online`, `Admin`, `Support`, `AnswerYes`, `AnswerNo`, `Mute`, `Kick`, `Warn`, `Ban`, `IPBan`) \
			VALUES ('%e', '%e', '%e', '%e', '%e', '0', '0', '%d', '0', '0', '0', '0', '0', '0', '0')",
			Name(idplayer), playerip, Name(developerid), StaffInfo[idplayer][aData], StaffInfo[idplayer][aTime], level);
		}
		mysql_query(connect, staff_str);
	}
}
stock GetSpawnType(playerid)
{
	if(PI[playerid][pJail] != 0)
	{
	    PI[playerid][pSpawnType] = 3;
	    UpdatePlayerData(playerid, "SpawnType", PI[playerid][pSpawnType]);
	    return true;
	}
	if(PI[playerid][pHouse] != 999 || PI[playerid][pResident] != 999)
	{
	    PI[playerid][pSpawnType] = 2;
	    UpdatePlayerData(playerid, "SpawnType", PI[playerid][pSpawnType]);
	    return true;
	}
	if(PI[playerid][pFamilyMansion] != 999)
	{
	    PI[playerid][pSpawnType] = 6;
	    UpdatePlayerData(playerid, "SpawnType", PI[playerid][pSpawnType]);
	    return true;
	}
	if(PI[playerid][pMember] != 0)
	{
	    PI[playerid][pSpawnType] = 1;
	    UpdatePlayerData(playerid, "SpawnType", PI[playerid][pSpawnType]);
	}
	if(PI[playerid][pTrailerCar] != 0)
	{
	    PI[playerid][pSpawnType] = 4;
	    UpdatePlayerData(playerid, "SpawnType", PI[playerid][pSpawnType]);
	    return true;
	}
	if(PI[playerid][pJail] == 0 && PI[playerid][pHouse] == 999 && PI[playerid][pResident] == 999 && PI[playerid][pFamilyMansion] == 999 && PI[playerid][pMember] == 0 && PI[playerid][pTrailerCar] == 0)
	{
	    PI[playerid][pSpawnType] = 0;
	    UpdatePlayerData(playerid, "SpawnType", PI[playerid][pSpawnType]);
	    return true;
	}
	return true;
}
