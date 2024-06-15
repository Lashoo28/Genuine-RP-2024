new tabname[16];
for(new i; i< sizeof(StolCoor);i++)
{
	StolInfo[i][Crupe] = INVALID_PLAYER_ID;
	for(new h;h<5;h++) StolInfo[i][Gamer][h] = INVALID_PLAYER_ID;
	StolInfo[i][GameStart] = 0;
	//----------------------------------------
	KostiBox[i] = TextDrawCreate(595.147888, 142.666656, "usebox");
	TextDrawLetterSize(KostiBox[i], 0.000000, 18.155559);
	TextDrawTextSize(KostiBox[i], 519.464111, 0.000000);
	TextDrawAlignment(KostiBox[i], 1);
	TextDrawColor(KostiBox[i], 0);
	TextDrawUseBox(KostiBox[i], true);
	TextDrawBoxColor(KostiBox[i], 1128481664);
	TextDrawSetShadow(KostiBox[i], 0);
	TextDrawSetOutline(KostiBox[i], 0);
	TextDrawBackgroundColor(KostiBox[i], -1751672960);
	TextDrawFont(KostiBox[i], 0);

	format(tabname,sizeof(tabname),"Table %d",i+1);
	TableName[i] = TextDrawCreate(556.603332, 142.333358, tabname);
	TextDrawLetterSize(TableName[i], 0.491228, 1.524165);
	TextDrawAlignment(TableName[i], 2);
	TextDrawColor(TableName[i], 548012031);
	TextDrawUseBox(TableName[i], true);
	TextDrawBoxColor(TableName[i], 0);
	TextDrawSetShadow(TableName[i], 0);
	TextDrawSetOutline(TableName[i], 1);
	TextDrawBackgroundColor(TableName[i], 51);
	TextDrawFont(TableName[i], 0);
	TextDrawSetProportional(TableName[i], 1);

	KostiInfo[i] = TextDrawCreate(527.309020, 163.916000, "Name~n~Name~n~Name~n~Name~n~Name");
	TextDrawLetterSize(KostiInfo[i], 0.175188, 1.010665);
	TextDrawAlignment(KostiInfo[i], 1);
	TextDrawColor(KostiInfo[i], -1347440641);
	TextDrawUseBox(KostiInfo[i], true);
	TextDrawBoxColor(KostiInfo[i], 0);
	TextDrawSetShadow(KostiInfo[i], 0);
	TextDrawSetOutline(KostiInfo[i], 1);
	TextDrawBackgroundColor(KostiInfo[i], 51);
	TextDrawFont(KostiInfo[i], 1);
	TextDrawSetProportional(KostiInfo[i], 1);

	KostiGameInfo[i] = TextDrawCreate(527.086486, 214.666687, "Bet:_100000~n~Bank:_200000");
	TextDrawLetterSize(KostiGameInfo[i], 0.186432, 1.115664);
	TextDrawAlignment(KostiGameInfo[i], 1);
	TextDrawColor(KostiGameInfo[i], -1347440641);
	TextDrawSetShadow(KostiGameInfo[i], 0);
	TextDrawSetOutline(KostiGameInfo[i], 1);
	TextDrawBackgroundColor(KostiGameInfo[i], 51);
	TextDrawFont(KostiGameInfo[i], 1);
	TextDrawSetProportional(KostiGameInfo[i], 1);
}
KostiKeyStavka = TextDrawCreate(557.540405, 251.999969, "SET_BET");
TextDrawLetterSize(KostiKeyStavka, 0.429852, 1.360828);
TextDrawTextSize(KostiKeyStavka, 8.721603, 61.250003);
TextDrawAlignment(KostiKeyStavka, 2);
TextDrawColor(KostiKeyStavka, -1347440641);
TextDrawUseBox(KostiKeyStavka, true);
TextDrawBoxColor(KostiKeyStavka, 555819408);
TextDrawSetShadow(KostiKeyStavka, 0);
TextDrawSetOutline(KostiKeyStavka, 1);
TextDrawBackgroundColor(KostiKeyStavka, 51);
TextDrawFont(KostiKeyStavka, 3);
TextDrawSetProportional(KostiKeyStavka, 1);
TextDrawSetSelectable(KostiKeyStavka, 1);

KostiKeyDone = TextDrawCreate(557.540710, 270.666656, "DICE");
TextDrawLetterSize(KostiKeyDone, 0.429852, 1.360828);
TextDrawTextSize(KostiKeyDone, 8.721603, 61.250003);
TextDrawAlignment(KostiKeyDone, 2);
TextDrawColor(KostiKeyDone, -1347440641);
TextDrawUseBox(KostiKeyDone, true);
TextDrawBoxColor(KostiKeyDone, 555819392);
TextDrawSetShadow(KostiKeyDone, 0);
TextDrawSetOutline(KostiKeyDone, 1);
TextDrawBackgroundColor(KostiKeyDone, 51);
TextDrawFont(KostiKeyDone, 3);
TextDrawSetProportional(KostiKeyDone, 1);
TextDrawSetSelectable(KostiKeyDone, 1);

KostiKeyExit = TextDrawCreate(557.540283, 289.333312, "EXIT");
TextDrawLetterSize(KostiKeyExit, 0.429852, 1.360828);
TextDrawTextSize(KostiKeyExit, 8.721603, 61.250003);
TextDrawAlignment(KostiKeyExit, 2);
TextDrawColor(KostiKeyExit, -1347440641);
TextDrawUseBox(KostiKeyExit, true);
TextDrawBoxColor(KostiKeyExit, 555819392);
TextDrawSetShadow(KostiKeyExit, 0);
TextDrawSetOutline(KostiKeyExit, 1);
TextDrawBackgroundColor(KostiKeyExit, 51);
TextDrawFont(KostiKeyExit, 3);
TextDrawSetProportional(KostiKeyExit, 1);
TextDrawSetSelectable(KostiKeyExit, 1);