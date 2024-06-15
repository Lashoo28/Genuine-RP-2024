AutoSalon_PTD[playerid][0] = CreatePlayerTextDraw(playerid, 544.1987, 173.8211, "None"); // range 1 tx "car name"
PlayerTextDrawLetterSize(playerid, AutoSalon_PTD[playerid][0], 0.1972, 0.9236);
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][0], 0.0000, 77.0000);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][0], 2);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][0], -1768515841);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][0], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][0], 1);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][0], 1);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][0], 0);

AutoSalon_PTD[playerid][1] = CreatePlayerTextDraw(playerid, 544.1994, 180.4579, "None"); // range 1 tx "car price"
PlayerTextDrawLetterSize(playerid, AutoSalon_PTD[playerid][1], 0.1419, 0.6915);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][1], 2);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][1], 1684301055);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][1], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][1], 1);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][1], 1);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][1], 0);

AutoSalon_PTD[playerid][2] = CreatePlayerTextDraw(playerid, 544.1987, 199.1244, "None"); // range 2 tx "car color"
PlayerTextDrawLetterSize(playerid, AutoSalon_PTD[playerid][2], 0.1972, 0.9236);
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][2], 0.0000, 77.0000);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][2], 2);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][2], -1768515841);
PlayerTextDrawUseBox(playerid, AutoSalon_PTD[playerid][2], 1);
PlayerTextDrawBoxColor(playerid, AutoSalon_PTD[playerid][2], 0);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][2], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][2], 1);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][2], 1);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][2], 0);

AutoSalon_PTD[playerid][3] = CreatePlayerTextDraw(playerid, 544.1994, 205.7615, "None"); // range 2 tx "price"
PlayerTextDrawLetterSize(playerid, AutoSalon_PTD[playerid][3], 0.1419, 0.6915);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][3], 2);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][3], 1684301055);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][3], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][3], 1);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][3], 1);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][3], 0);

AutoSalon_PTD[playerid][4] = CreatePlayerTextDraw(playerid, 492.4327, 235.4732, "LD_SPAC:white"); // line 1 ft - "max speed"
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][4], 0.0000, 4.0000);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][4], 1);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][4], 1112566783);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][4], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][4], 4);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][4], 0);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][4], 0);

AutoSalon_PTD[playerid][5] = CreatePlayerTextDraw(playerid, 492.4327, 251.2357, "LD_SPAC:white"); // line 2 ft - "acceler"
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][5], 0.0000, 4.0000);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][5], 1);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][5], 1112566783);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][5], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][5], 4);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][5], 0);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][5], 0);

AutoSalon_PTD[playerid][6] = CreatePlayerTextDraw(playerid, 492.4327, 267.4132, "LD_SPAC:white"); // line 3 ft - "braking"
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][6], 0.0000, 4.0000);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][6], 1);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][6], 1112566783);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][6], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][6], 4);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][6], 0);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][6], 0);

AutoSalon_PTD[playerid][7] = CreatePlayerTextDraw(playerid, 492.4327, 283.1766, "LD_SPAC:white"); // line 4 ft - "clutch"
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][7], 0.0000, 4.0000);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][7], 1);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][7], 1112566783);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][7], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][7], 4);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][7], 0);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][7], 0);

AutoSalon_PTD[playerid][8] = CreatePlayerTextDraw(playerid, 533.1989, 228.0057, "LD_SPAC:white"); // box - characteristic
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][8], 0.6700, 63.4188);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][8], 1);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][8], 437918463);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][8], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][8], 4);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][8], 0);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][8], 0);

AutoSalon_PTD[playerid][9] = CreatePlayerTextDraw(playerid, 553.8656, 228.4205, "LD_SPAC:white"); // box - characteristic
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][9], 0.6700, 63.4188);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][9], 1);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][9], 437918463);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][9], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][9], 4);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][9], 0);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][9], 0);

AutoSalon_PTD[playerid][10] = CreatePlayerTextDraw(playerid, 574.5322, 228.0057, "LD_SPAC:white"); // box - characteristic
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][10], 0.6700, 63.4188);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][10], 1);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][10], 437918463);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][10], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][10], 4);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][10], 0);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][10], 0);

AutoSalon_PTD[playerid][11] = CreatePlayerTextDraw(playerid, 512.5322, 228.4205, "LD_SPAC:white"); // box - characteristic
PlayerTextDrawTextSize(playerid, AutoSalon_PTD[playerid][11], 0.6700, 63.4188);
PlayerTextDrawAlignment(playerid, AutoSalon_PTD[playerid][11], 1);
PlayerTextDrawColor(playerid, AutoSalon_PTD[playerid][11], 437918463);
PlayerTextDrawBackgroundColor(playerid, AutoSalon_PTD[playerid][11], 255);
PlayerTextDrawFont(playerid, AutoSalon_PTD[playerid][11], 4);
PlayerTextDrawSetProportional(playerid, AutoSalon_PTD[playerid][11], 0);
PlayerTextDrawSetShadow(playerid, AutoSalon_PTD[playerid][11], 0);