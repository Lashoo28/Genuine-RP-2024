	stock SetAccessoriesToSkin(playerid, type, skinid, objectid)
	{
		if(type == 1)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 1)) RemovePlayerAttachedObject(playerid, 1);
			switch(skinid)
			{
				case 1..311: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, -0.0910, -0.0400, 90.9000, 0.0000, 79.6001, 0.6240, 0.7230, 0.7240, -1, -1);
			}
		}
		else if(type == 2)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 1)) RemovePlayerAttachedObject(playerid, 1);
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.204000,-0.064999,-0.002999 ,  -0.600000,-1.100000,0.000000 ,  1.075999,0.918998,0.905000 );
				case 2: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.237000,-0.064999,-0.002999 ,  -0.600000,-1.100000,0.000000 ,  1.075999,0.918998,0.905000 );
				case 3: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.228000,-0.062999,-0.002999 ,  -0.600000,-1.100000,0.000000 ,  1.075999,0.918998,0.905000 );
				case 4: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.194000,-0.056999,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  1.075999,0.918998,0.905000 );
				case 5: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.194000,-0.117999,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  1.075999,1.000998,0.905000 );
				case 6: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.194000,-0.079999,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  1.075999,1.000998,0.905000 );
				case 7: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.219000,-0.057999,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  1.075999,1.000998,0.905000 );
				case 8: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.207000,-0.061999,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.962998,0.834000 );
				case 9: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.207000,-0.058999,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.962998,0.834000 );
				case 10: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.262000,-0.071999,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.962998,0.834000 );
				case 11: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.189000,-0.068000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 12: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.184000,-0.068000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 13: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.116000,-0.068000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 14: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.158000,-0.068000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 15: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.153999,-0.077000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 17: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.156000,-0.077000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 18: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.184999,-0.077000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 19: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.129999,-0.077000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 20: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.159999,-0.077000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 21: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.159999,-0.077000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 22: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.243000,-0.077000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 23: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.167000,-0.077000,-0.014999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 24: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.145000,-0.077000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 25: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.145000,-0.077000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 28: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.145000,-0.077000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 29: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.188000,-0.103000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 30: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.188000,-0.103000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 31: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.239000,-0.103000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 32: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.173000,-0.068999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 33: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.199000,-0.080999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 34: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.150000,-0.080999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 35: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.161000,-0.080999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 36: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.161000,-0.080999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 37: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.161000,-0.080999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 38: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.222000,-0.080999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 39: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.222000,-0.080999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 40: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.172000,-0.080999,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 41: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.172000,-0.067000,-0.017999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 42: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.172000,-0.067000,-0.017999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 43: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.196000,-0.067000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 44: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.203000,-0.067000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 45: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.171999,-0.067000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 46: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.151999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 47: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.151999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 48: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.151999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 49: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.151999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 50: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.151999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 53: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.218999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 54: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.232999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 55: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.174999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 56: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.174999,-0.074000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 57: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.116999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 58: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.202999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 59: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.153999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 60: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.153999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 61: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.153999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 62: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.153999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 65: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.115999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 66: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.143999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 67: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.143999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 68: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.143999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 69: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.141999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 70: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.146999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 71: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.146999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 72: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.155999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 73: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.167999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 76: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.162999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 77: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.207999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 78: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.118999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 79: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.143999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 82: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.156999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 83: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.136999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 84: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.136999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.834000 );
				case 86: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.153999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  1.049000,0.911998,0.888999 );
				case 88: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.124999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.911998,0.753999 );
				case 89: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.124999,-0.085000,-0.010999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.911998,0.753999 );
				case 90: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.048999,-0.057000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.999998,0.826000 );
				case 91: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.048999,-0.057000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.719998,0.696000 );
				case 93: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.048999,-0.067000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.719998,0.696000 );
				case 94: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.122999,-0.067000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.719998,0.696000 );
				case 95: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.113999,-0.067000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.719998,0.696000 );
				case 96: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.022999,-0.081000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.719998,0.696000 );
				case 97: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.071999,-0.081000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.719998,0.696000 );
				case 98: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.058999,-0.081000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.719998,0.806000 );
				case 100: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.046999,-0.081000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.719998,0.806000 );
				case 101: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.046999,-0.112000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.853998,0.900000 );
				case 102: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.055999,-0.081000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.840000,0.853998,0.900000 );
				case 103: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.055999,-0.123000,-0.008999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 104: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.097999,-0.101000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 105: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.035999,-0.101000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 106: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.088999,-0.101000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 107: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.093999,-0.101000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 108: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 109: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 110: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 111: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.051999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.987000 );
				case 112: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.107999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 113: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.085999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 114: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 115: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.082999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 116: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.082999,-0.069000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 117: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.105999,-0.080000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 118: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.105999,-0.080000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 119: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.105999,-0.080000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 120: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.105999,-0.080000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 121: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.084999,-0.101000,-0.015999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 122: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.084999,-0.101000,-0.015999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 123: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.098999,-0.101000,-0.015999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 124: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.096999,-0.076000,-0.015999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 125: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.096999,-0.076000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 126: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.096999,-0.076000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 127: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.105999,-0.076000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 128: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.112999,-0.076000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 129: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.186999,-0.076000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 130: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.153999,-0.085000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 131: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.078999,-0.069000,-0.003999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 132: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.175999,-0.069000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 133: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.089999,-0.078000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 134: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.156999,-0.064000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 135: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.093999,-0.094000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.881000 );
				case 136: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.161999,-0.082000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 137: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.111999,-0.086000,-0.006999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 142: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.076999,-0.094000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 143: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.084999,-0.094000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 144: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.084999,-0.094000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 146: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.084999,-0.094000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 147: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.099999,-0.068000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 148: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.099999,-0.068000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 150: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.099999,-0.060000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 151: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.099999,-0.081000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 152: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.115999,-0.064000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 153: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.089999,-0.072000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 154: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.107999,-0.072000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 155: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.086000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 156: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.083999,-0.086000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 157: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.089999,-0.086000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 158: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.089999,-0.086000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 159: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.089999,-0.086000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 160: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.105999,-0.065000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 161: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.067999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 162: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 163: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.050999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 164: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.050999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 165: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.127999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 166: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.127999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 170: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.065999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 171: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.084999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 172: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.095999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 173: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.081999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 174: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.081999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 175: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.081999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 176: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.081999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 177: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.081999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 179: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.081999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 180: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.079999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 181: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.066999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 182: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.088999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 183: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.088999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 184: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.078999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 185: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.092999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 186: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.092999,-0.072000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 187: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.092999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 188: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.083999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 189: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.094999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 190: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.058999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 191: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.058999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 192: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.065999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 193: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.065999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 194: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 195: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.044999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 198: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.075999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 200: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.078999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 201: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.078999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 202: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 203: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.072000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 204: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 206: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.075999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 207: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.092999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 208: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.095999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 210: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.154999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 211: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.063999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 212: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.148999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 213: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.078999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 214: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.092999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 215: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.092999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 216: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.092999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 217: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.078999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 219: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.083999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 220: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.085999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 221: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.085999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 222: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.085999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 223: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.085999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 224: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.085999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 225: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.085999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 226: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.103999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 227: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.043999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 228: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.068999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 229: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.139999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 230: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.103999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 233: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.067999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 234: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.131999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 235: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.131999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 236: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.131999,-0.072000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 239: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.045999,-0.078000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 240: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.085999,-0.078000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 247: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.072999,-0.078000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 248: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.075999,-0.078000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 250: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.078999,-0.078000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 252: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.063999,-0.078000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 253: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.113999,-0.078000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 254: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.062999,-0.078000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 255: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.078000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 258: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.078000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 259: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.077999,-0.078000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 261: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.130999,-0.078000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 262: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.082999,-0.078000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 263: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.088999,-0.078000,-0.002999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 265: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.089999,-0.078000,-0.011999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 266: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.097999,-0.078000,-0.011999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 267: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   0.121000,-0.078000,-0.030000 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 269: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.064999,-0.102000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 270: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.064999,-0.102000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 271: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.102000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 272: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.102999,-0.102000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 273: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.109999,-0.102000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 274: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.066999,-0.102000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 275: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.066999,-0.102000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 276: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.066999,-0.102000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 280: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.065999,-0.090000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 281: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.073999,-0.090000,-0.012999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 282: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.080999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 283: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.080999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 284: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.088999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 285: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.069999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 286: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.069999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 287: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.073999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 288: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.073999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 289: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.079999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 290: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.079999,-0.090000,-0.005999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 291: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.084999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 292: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.057999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 293: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.060999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 294: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.070999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 295: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.135999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 296: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.130999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 297: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.082999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 298: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.082999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 299: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.050999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 300: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 301: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 302: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 303: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 304: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 305: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.090000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 306: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.086000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 307: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.086000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 308: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.086000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 309: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.086000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 310: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.086000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				case 311: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1,   -0.074999,-0.086000,-0.009999 ,  -0.600000,-1.100000,2.399999 ,  0.894000,0.853998,0.809000 );
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 3)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 2)) RemovePlayerAttachedObject(playerid, 2);
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120999,0.000000,-0.000000, 3.400000,87.100013,88.299980, 1.000000,1.116000,1.000000);
				case 3: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.140000,0.001999,-0.000000, 3.400000,87.100013,88.299980, 1.000000,1.116000,1.000000);
				case 4: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.161000,0.001999,-0.000000, 3.400000,87.100013,88.299980, 1.000000,1.116000,1.000000);
				case 5: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.152000,-0.004000,-0.000000, 3.400000,87.100013,88.299980, 1.000000,1.116000,1.000000);
				case 7: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.152000,0.007999,-0.003000, 3.400000,87.100013,88.299980, 1.000000,1.116000,1.000000);
				case 9: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118000,0.000999,-0.003000, 3.400000,87.100013,88.299980, 1.000000,1.116000,1.000000);
				case 11: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118000,0.000999,0.001999, 3.400000,87.100013,88.299980, 1.000000,1.116000,1.000000);
				case 12: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118000,-0.018000,0.001999, 3.400000,87.100013,88.299980, 1.000000,1.116000,1.000000);
				case 14: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118000,0.019999,0.001999, 3.400000,87.100013,88.299980, 1.014000,1.183000,1.000000);
				case 15: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.111000,-0.022000,0.001999, 3.400000,87.100013,88.299980, 0.920000,1.077000,1.000000);
				case 17: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.142000,-0.001000,0.001999, 3.400000,87.100013,88.299980, 0.920000,1.077000,1.000000);
				case 18: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,-0.001000,0.001999, 3.400000,87.100013,88.299980, 1.010999,1.077000,1.000000);
				case 20: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.150000,-0.001000,0.001999, 3.400000,87.100013,88.299980, 1.010999,1.077000,1.000000);
				case 21: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.127000,0.004999,0.001999, 3.400000,87.100013,88.299980, 1.010999,1.077000,1.000000);
				case 25: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.127000,0.015999,0.004000, 3.400000,87.100013,88.299980, 1.010999,1.077000,1.000000);
				case 26: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.127000,0.015999,0.004000, 3.400000,87.100013,88.299980, 1.095999,1.077000,1.000000);
				case 28: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.127000,0.024999,-0.001000, 3.400000,87.100013,88.299980, 1.172999,1.160000,1.000000);
				case 30: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.127000,0.016999,0.000999, 3.400000,87.100013,88.299980, 1.172999,1.160000,1.000000);
				case 40: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,-0.008000,0.003999, 3.400000,87.100013,88.299980, 1.172999,1.178000,1.000000);
				case 44: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,0.018999,0.003999, 3.400000,87.100013,88.299980, 0.858999,0.969000,1.000000);
				case 45: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,-0.012000,0.003999, 3.400000,87.100013,88.299980, 0.858999,0.990000,1.000000);
				case 46: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.144000,0.010999,0.003999, 3.400000,87.100013,88.299980, 0.959999,1.083999,1.000000);
				case 47: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.144000,-0.000000,0.003999, 3.400000,87.100013,88.299980, 0.959999,1.122000,1.000000);
				case 48: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.151000,-0.008000,-0.002000, 3.400000,87.100013,88.299980, 1.074999,1.185000,1.000000);
				case 49: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,0.009999,0.004999, 3.400000,87.100013,88.299980, 1.074999,1.185000,1.000000);
				case 54: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,0.028999,0.004999, 3.400000,87.100013,88.299980, 1.074999,1.185000,1.000000);
				case 55: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,-0.011000,0.004999, 3.400000,87.100013,88.299980, 1.074999,1.185000,1.000000);
				case 56: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,-0.011000,0.004999, 3.400000,87.100013,88.299980, 1.074999,1.185000,1.000000);
				case 57: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.147000,0.022999,0.004999, 3.400000,87.100013,88.299980, 1.074999,1.185000,1.000000);
				case 58: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.109000,0.000999,0.004999, 3.400000,87.100013,88.299980, 0.882999,0.963999,1.000000);
				case 59: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.152000,-0.001000,0.000999, 3.400000,87.100013,88.299980, 1.024999,1.054999,1.001000);
				case 60: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,0.006999,0.000999, 3.400000,87.100013,88.299980, 1.024999,1.054999,1.001000);
				case 66: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,0.006999,0.000999, 3.400000,87.100013,88.299980, 1.024999,1.054999,1.001000);
				case 67: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,0.006999,0.000999, 3.400000,87.100013,88.299980, 1.024999,1.054999,1.001000);
				case 68: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,0.025999,0.001999, 3.400000,87.100013,88.299980, 0.942998,0.978999,1.001000);
				case 69: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,-0.012000,0.002999, 3.400000,87.100013,88.299980, 0.942998,1.102999,1.001000);
				case 70: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,0.006999,0.007000, 3.400000,87.100013,88.299980, 0.942998,1.102999,1.001000);
				case 72: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,0.006999,0.008000, 3.400000,87.100013,88.299980, 0.942998,1.102999,1.001000);
				case 73: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.014999,-0.001000, 3.400000,87.100013,88.299980, 0.997998,1.126000,1.001000);
				case 76: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.130000,-0.013000,-0.001000, 3.400000,87.100013,88.299980, 1.016998,1.159000,1.001000);
				case 79: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.112000,0.009999,0.008000, 3.400000,87.100013,88.299980, 0.954998,1.135000,1.001000);
				case 82: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.180000,0.009999,0.008000, 3.400000,87.100013,88.299980, 0.976998,1.135000,1.001000);
				case 83: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.172000,0.001999,0.008000, 3.400000,87.100013,88.299980, 1.003998,1.135000,1.001000);
				case 84: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.175000,-0.001000,0.008000, 3.400000,87.100013,88.299980, 1.005998,1.018000,1.001000);
				case 86: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,-0.001000,0.001999, 3.400000,87.100013,88.299980, 1.005998,1.018000,1.001000);
				case 90: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,-0.001000,0.001999, 3.400000,87.100013,88.299980, 1.108998,1.145000,1.001000);
				case 91: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,-0.001000,0.001999, 3.400000,87.100013,88.299980, 1.135998,1.145000,1.044000);
				case 95: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,-0.013000,0.001999, 3.400000,87.100013,88.299980, 0.939998,1.133000,1.044000);
				case 96: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.016999,0.003000, 3.400000,87.100013,88.299980, 1.019998,1.160000,1.044000);
				case 97: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.001999,0.003000, 3.400000,87.100013,88.299980, 1.055998,1.104000,1.044000);
				case 98: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132000,0.019999,0.003000, 3.400000,87.100013,88.299980, 1.055998,1.104000,1.044000);
				case 100: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132000,0.011999,0.005000, 3.400000,87.100013,88.299980, 1.116998,1.189000,1.044000);
				case 101: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132000,0.008999,0.005000, 3.400000,87.100013,88.299980, 1.116998,1.189000,1.044000);
				case 102: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,0.008999,-0.000999, 3.400000,87.100013,88.299980, 1.116998,1.320001,1.044000);
				case 103: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132000,0.003999,0.001000, 3.400000,87.100013,88.299980, 1.116998,1.184001,1.044000);
				case 105: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132000,0.003999,0.001000, 3.400000,87.100013,88.299980, 1.116998,1.184001,1.044000);
				case 106: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.147000,-0.010000,0.001000, 3.400000,87.100013,88.299980, 1.116998,1.184001,1.044000);
				case 108: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.138000,0.001999,0.001000, 3.400000,87.100013,88.299980, 1.116998,1.184001,1.044000);
				case 109: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139000,0.006999,0.001000, 3.400000,87.100013,88.299980, 1.116998,1.184001,1.044000);
				case 111: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.134000,0.009000,0.000000, 1.699999,90.200042,89.400001, 1.000000,1.000000,1.000000);
				case 112: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.099000,0.009000,0.000000, 1.699999,90.200042,89.400001, 1.000000,1.000000,1.000000);
				case 113: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.145999,0.005000,0.000000, 1.699999,90.200042,89.400001, 1.012999,1.100999,1.000000);
				case 114: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.145999,0.005000,0.000000, 1.699999,90.200042,89.400001, 1.062999,1.139999,1.000000);
				case 117: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.112000,0.018999,0.000000, 1.699999,90.200042,89.400001, 0.937999,1.009999,1.000000);
				case 118: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.112000,0.018999,0.000000, 1.699999,90.200042,89.400001, 0.937999,1.009999,1.000000);
				case 119: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.133999,0.010999,0.000999, 1.699999,90.200042,89.400001, 0.937999,1.099999,1.000000);
				case 120: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.133999,-0.003000,0.000999, 1.699999,90.200042,89.400001, 1.072000,1.099999,1.000000);
				case 121: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.133999,0.000999,0.000999, 1.699999,90.200042,89.400001, 1.072000,1.148000,1.000000);
				case 122: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.133999,0.000999,0.000999, 1.699999,90.200042,89.400001, 0.972000,1.061000,1.000000);
				case 123: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.141000,0.000999,-0.003000, 1.699999,90.200042,89.400001, 1.165000,1.223000,1.000000);
				case 124: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.141000,0.006999,0.003999, 1.699999,90.200042,89.400001, 1.056000,1.085000,1.000000);
				case 125: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120999,0.006999,-0.000000, 1.699999,90.200042,89.400001, 1.056000,1.085000,1.000000);
				case 126: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.134000,0.000999,-0.000000, 1.699999,90.200042,89.400001, 1.056000,1.106000,1.000000);
				case 127: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.134000,0.010999,-0.000000, 1.699999,90.200042,89.400001, 1.056000,1.106000,1.000000);
				case 128: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.150000,0.010999,-0.000000, 1.699999,90.200042,89.400001, 1.056000,1.106000,1.000000);
				case 131: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.109000,0.010999,-0.000000, 1.699999,90.200042,89.400001, 1.056000,1.106000,1.000000);
				case 132: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.042000,0.000999,-0.000000, 1.699999,90.200042,89.400001, 0.942000,0.921000,1.000000);
				case 142: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.133000,0.000999,-0.001000, 1.699999,90.200042,89.400001, 0.942000,1.146000,1.000000);
				case 147: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,-0.013000,0.008999, 1.699999,90.200042,89.400001, 0.942000,1.009000,1.000000);
				case 150: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139000,-0.024000,0.008999, 1.699999,90.200042,89.400001, 0.942000,1.129000,1.000000);
				case 151: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139000,-0.029000,0.000999, 1.699999,90.200042,89.400001, 0.992000,1.235000,1.000000);
				case 154: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,-0.007000,0.000999, 1.699999,90.200042,89.400001, 0.992000,1.029000,1.000000);
				case 156: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.165000,-0.034000,0.000999, 1.699999,90.200042,89.400001, 0.992000,1.198000,1.000000);
				case 157: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118000,-0.000000,0.000999, 1.699999,90.200042,89.400001, 1.047000,1.198000,1.000000);
				case 160: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118000,0.003999,0.000999, 1.699999,90.200042,89.400001, 0.854000,0.962999,1.000000);
				case 162: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.147000,0.003999,0.000999, 1.699999,90.200042,89.400001, 0.854000,0.962999,1.000000);
				case 163: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.003999,0.000999, 1.699999,90.200042,89.400001, 0.854000,0.962999,1.000000);
				case 164: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.003999,-0.001000, 1.699999,90.200042,89.400001, 0.854000,0.962999,1.000000);
				case 165: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.003999,-0.001000, 1.699999,90.200042,89.400001, 0.886000,1.061999,1.000000);
				case 166: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126000,0.003999,-0.001000, 1.699999,90.200042,89.400001, 0.886000,1.061999,1.000000);
				case 169: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126000,-0.013000,-0.001000, 1.699999,90.200042,89.400001, 1.030000,1.197999,1.000000);
				case 170: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126000,0.001999,-0.001000, 1.699999,90.200042,89.400001, 0.985000,1.197999,1.000000);
				case 171: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.141000,-0.005000,-0.001000, 1.699999,90.200042,89.400001, 1.070000,1.092000,1.000000);
				case 172: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136000,-0.005000,-0.001000, 4.000000,90.900016,84.900016, 1.070000,1.179999,1.000000);
				case 176: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136000,-0.000000,-0.001000, 4.000000,90.900016,84.900016, 1.070000,1.179999,1.000000);
				case 179: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.137000,0.004999,-0.001000, 4.000000,90.900016,84.900016, 1.070000,1.179999,1.000000);
				case 180: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.159000,-0.009000,-0.003000, 4.000000,90.900016,84.900016, 1.070000,1.179999,1.000000);
				case 182: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.007999,0.000999, 4.000000,90.900016,84.900016, 0.909000,1.015999,1.000000);
				case 183: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.007999,0.000999, 4.000000,90.900016,84.900016, 0.992000,1.106999,1.000000);
				case 184: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126000,0.004999,0.000999, 4.000000,90.900016,84.900016, 0.992000,1.112000,1.000000);
				case 185: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.149000,-0.009000,0.000999, 4.000000,90.900016,84.900016, 0.992000,1.112000,1.000000);
				case 186: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.148000,-0.009000,0.000999, 4.000000,90.900016,84.900016, 0.992000,1.112000,1.000000);
				case 187: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.112000,-0.009000,0.004999, 4.000000,90.900016,84.900016, 0.992000,1.112000,1.000000);
				case 188: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.122000,0.004999,0.004999, 4.000000,90.900016,84.900016, 0.992000,1.112000,1.000000);
				case 189: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136000,-0.000000,0.004999, 4.000000,90.900016,84.900016, 1.079001,1.112000,1.070999);
				case 191: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.153000,-0.015000,0.004999, 4.000000,90.900016,84.900016, 1.126001,1.186000,1.070999);
				case 192: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.153000,-0.015000,0.004999, 4.000000,90.900016,84.900016, 1.126001,1.186000,1.070999);
				case 193: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.153000,-0.006000,0.004999, 4.000000,90.900016,84.900016, 1.126001,1.186000,1.070999);
				case 194: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.153000,-0.006000,0.000999, 4.000000,90.900016,84.900016, 1.126001,1.186000,1.070999);
				case 200: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.140000,-0.006000,0.000999, 4.000000,90.900016,84.900016, 1.126001,1.186000,1.070999);
				case 206: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.140000,0.020999,0.000999, 4.000000,90.900016,84.900016, 0.903001,1.018000,1.070999);
				case 207: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.090000,0.005999,0.000999, 4.000000,90.900016,84.900016, 0.903001,1.018000,1.070999);
				case 212: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113000,0.007999,0.000999, 4.000000,90.900016,84.900016, 0.903001,1.018000,1.070999);
				case 213: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126000,0.007999,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.116000,1.070999);
				case 217: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.140000,0.007999,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.116000,1.070999);
				case 220: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103000,0.023999,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.116000,1.070999);
				case 221: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.154000,-0.011000,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.283000,1.070999);
				case 222: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.151000,-0.024000,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.283000,1.070999);
				case 223: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.161000,0.002999,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.113000,1.070999);
				case 226: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.122000,-0.016000,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.182000,1.070999);
				case 227: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.122000,0.026999,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.182000,1.070999);
				case 228: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.147000,0.001999,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.182000,1.070999);
				case 229: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.101000,0.001999,0.000999, 4.000000,90.900016,84.900016, 1.023001,1.182000,1.070999);
				case 235: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.067000,0.007999,0.000999, 4.000000,90.900016,84.900016, 0.900001,1.023000,1.070999);
				case 236: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.110000,-0.001000,0.000999, 4.000000,90.900016,84.900016, 0.900001,1.023000,1.070999);
				case 240: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.146000,-0.001000,0.000999, 4.000000,90.900016,84.900016, 0.995001,1.180000,1.070999);
				case 247: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.146000,-0.003000,0.000999, 4.000000,90.900016,84.900016, 1.114001,1.180000,1.070999);
				case 248: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.174000,-0.003000,0.000999, 4.000000,90.900016,84.900016, 1.114001,1.180000,1.070999);
				case 250: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.125000,0.007999,-0.007000, 4.000000,90.900016,84.900016, 1.022000,1.180000,1.070999);
				case 252: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.134000,0.004999,-0.007000, 4.000000,90.900016,84.900016, 1.149001,1.213000,1.070999);
				case 254: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.142000,0.000999,-0.001000, 4.000000,90.900016,84.900016, 1.149001,1.213000,1.070999);
				case 258: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.142000,0.000999,-0.001000, 4.000000,90.900016,84.900016, 1.149001,1.213000,1.070999);
				case 259: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.142000,0.000999,-0.001000, 4.000000,90.900016,84.900016, 1.149001,1.213000,1.070999);
				case 262: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.122000,0.009999,-0.001000, 4.000000,90.900016,84.900016, 0.954001,1.015000,1.070999);
				case 265: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103000,0.009999,-0.001000, 4.000000,90.900016,84.900016, 0.954001,1.015000,1.070999);
				case 266: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.114000,0.009999,-0.001000, 4.000000,90.900016,84.900016, 0.954001,1.190000,1.070999);
				case 267: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.104000,0.002999,-0.001000, 4.000000,90.900016,84.900016, 1.005001,1.190000,1.070999);
				case 268: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.114000,0.002999,-0.001000, 4.000000,90.900016,84.900016, 1.005001,1.190000,1.070999);
				case 272: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.133000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.005001,1.190000,1.070999);
				case 273: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.099000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.060001,1.131000,1.070999);
				case 274: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.060001,1.131000,1.070999);
				case 275: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.060001,1.131000,1.070999);
				case 276: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.060001,1.131000,1.070999);
				case 280: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.060001,1.131000,1.070999);
				case 281: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.060001,1.131000,1.070999);
				case 282: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.060001,1.131000,1.070999);
				case 286: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.060001,1.131000,1.070999);
				case 291: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.150000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 1.141000,1.131000,1.070999);
				case 292: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.098000,0.015999,-0.001000, 4.000000,90.900016,84.900016, 0.912000,1.110000,1.070999);
				case 294: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.143000,0.004999,-0.001000, 4.000000,90.900016,84.900016, 1.040000,1.110000,1.070999);
				case 295: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.004999,0.001999, 4.000000,90.900016,84.900016, 1.040000,1.110000,1.070999);
				case 296: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.143000,-0.021000,0.001999, 4.000000,90.900016,84.900016, 1.040000,1.110000,1.070999);
				case 297: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.155000,-0.010000,0.001999, 4.000000,90.900016,84.900016, 1.040000,1.182000,1.070999);
				case 299: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.155000,0.012999,0.001999, 4.000000,90.900016,84.900016, 1.040000,1.182000,1.070999);
				case 300: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.012999,0.001999, 4.000000,90.900016,84.900016, 1.040000,1.182000,1.070999);
				case 301: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.012999,0.001999, 4.000000,90.900016,84.900016, 1.040000,1.182000,1.070999);
				case 302: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.014999,0.001999, 4.000000,90.900016,84.900016, 1.040000,1.182000,1.070999);
				case 303: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.014999,-0.001000, 4.000000,90.900016,84.900016, 1.040000,1.090000,1.070999);
				case 304: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.014999,-0.001000, 4.000000,90.900016,84.900016, 1.040000,1.090000,1.070999);
				case 305: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.014999,-0.001000, 4.000000,90.900016,84.900016, 1.040000,1.194000,1.070999);
				case 310: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.014999,-0.001000, 4.000000,90.900016,84.900016, 1.040000,1.194000,1.070999);
				case 311: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119000,0.014999,-0.001000, 4.000000,90.900016,84.900016, 1.040000,1.194000,1.070999);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 4)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 3)) RemovePlayerAttachedObject(playerid, 3);
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.069000,0.025000,0.010999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 2: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.068000,0.025000,0.010999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 3: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.068000,0.025000,0.010999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 4: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.109000,0.025000,0.010999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 5: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.132000,0.013000,0.010999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 6: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.013000,0.010999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 7: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 8: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 9: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.023000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 10: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.023000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 11: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 12: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 13: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 14: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 15: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.069000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 16: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.069000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 17: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.069000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 18: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.074000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 19: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.074000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 20: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.074000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 21: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 22: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 23: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 24: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 25: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 26: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 27: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 28: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 29: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 30: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 31: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 32: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.029000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 33: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.022000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 34: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.031000,0.022000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 35: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.063000,0.031000,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 36: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.063000,0.031000,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 37: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.063000,0.031000,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 38: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.080000,0.010999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 39: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.080000,0.010999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 40: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.080000,0.010999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 41: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.080000,0.010999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 42: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.080000,0.026000,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 43: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.080000,0.021999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 44: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.015999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 45: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.015999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 46: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.015999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 47: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.015999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 48: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.015999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 49: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.015999,0.008999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 50: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.015999,-0.002000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 51: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.015999,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 52: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.015999,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 53: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.015999,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 54: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.015999,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 59: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 60: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 61: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 62: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 63: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 64: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 65: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 66: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 67: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 68: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 69: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 70: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 71: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.089000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 72: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.089000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 73: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.089000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 74: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.089000,0.047000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 75: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.015000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 76: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.015000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 77: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 78: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 79: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 80: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 81: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 82: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.023000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 83: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.023000,0.028000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 84: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.023000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 85: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.083000,0.023000,0.016000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 86: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 87: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 88: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,-0.009999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 89: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,-0.009999, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 90: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 91: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 92: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 93: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 94: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 95: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 96: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 97: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 98: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 99: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 100: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 101: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 102: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 103: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 104: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 105: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 106: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 107: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 108: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 109: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 110: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 111: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 112: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 113: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 114: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 115: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 116: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 117: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 118: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.086000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 119: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.079000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 120: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 121: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 122: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 123: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 124: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 125: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 126: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.010000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 127: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.024000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 128: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.007000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 129: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.007000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 130: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.007000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 131: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.007000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 132: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.020000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 133: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.020000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 134: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.020000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 135: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.087000,0.023000,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 136: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.076000,0.023000,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 137: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.023000,0.030000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 138: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.023000,0.030000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 139: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.023000,0.030000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 140: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.023000,0.030000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 141: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.023000,0.030000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 142: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.023000,0.030000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 143: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.023000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 144: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.023000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 145: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.032000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 146: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.108000,0.032000,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 147: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.104000,0.036999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 148: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.104000,0.016999,0.003000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 149: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.094000,0.016999,0.003000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 150: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.101000,0.016999,0.003000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 151: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.101000,0.016999,0.003000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 152: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.101000,0.016999,0.003000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 153: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.081000,0.016999,0.003000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 154: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.102000,0.016999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 155: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.102000,0.016999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 156: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.102000,0.016999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 157: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.091000,0.009999,0.014000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 158: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.077000,0.009999,0.014000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 159: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.018999,0.014000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 160: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.089000,0.018999,0.014000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 161: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.097000,0.018999,0.014000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 162: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.014000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 163: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 164: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 165: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 166: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 167: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 168: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 169: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 170: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.020000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 171: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 172: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 173: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 174: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 175: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 176: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 177: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 178: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 179: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.022000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 180: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.015000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 181: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.015000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 182: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.090000,0.026999,0.015000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 183: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.081000,0.026999,0.009000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 184: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.021000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 185: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.021000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 186: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 187: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 188: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 189: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 190: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 191: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 192: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 193: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 194: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 195: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 196: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 197: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 198: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 199: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.005000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 200: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.013000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 201: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.013000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 202: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.013000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 203: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.013000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 204: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.013000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 205: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.013000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 206: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.013000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 207: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.013000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 208: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.077000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 209: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.077000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 210: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.077000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 211: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.077000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 212: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.093000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 213: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.093000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 214: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.093000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 215: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.111000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 216: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.111000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 217: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 218: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 219: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.099000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 220: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.109000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 221: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 222: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 223: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 224: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 225: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 226: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 227: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 228: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.106000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 229: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 230: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 231: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 232: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 233: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 234: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 235: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 236: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 237: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 238: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 239: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 240: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 241: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 242: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 243: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 244: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 245: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 246: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.012000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 247: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 248: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 249: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 250: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 251: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 252: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 253: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 254: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 255: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 256: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 257: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 258: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 259: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 260: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.088000,0.026999,0.017000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 261: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.070000,0.026999,0.008000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 262: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.070000,0.026999,0.008000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 263: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.070000,0.026999,0.008000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 264: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.070000,0.026999,0.008000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 265: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.102000,0.026999,0.008000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 266..310: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.077000,0.026999,0.008000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				case 311: SetPlayerAttachedObjectEx (playerid, 3, objectid, 5,  0.077000,0.026999,0.008000, 0.000000,-89.999992,0.000000, 1.000000,1.000000,1.000000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 5)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 1)) RemovePlayerAttachedObject(playerid, 1);
			switch(skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.080000,-0.118999,-0.045999, 0.000000,113.100006,0.000000, 0.717999,1.000000,0.702999);
				case 2: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.023000,-0.130000,-0.034000, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 3: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.023000,-0.127000,-0.034000, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 4: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.063000,-0.119000,-0.034000, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 5: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.082999,-0.159000,-0.052999, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 6: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.082999,-0.148999,-0.052999, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 7: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.082999,-0.120999,-0.052999, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 9: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.095999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 12: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.076999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 13: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.084999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 14: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.089999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 15: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.111999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 17: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.096999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 18: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.108999,-0.052999, -8.800000,119.000007,8.100000, 0.688000,1.000000,0.696000);
				case 19: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.108999,-0.052999, 2.799998,119.000007,0.900001, 0.688000,1.000000,0.696000);
				case 20: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.110999,-0.052999, 10.099999,119.000007,-6.299997, 0.688000,1.000000,0.696000);
				case 21: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.119999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 22: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.142999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 23: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.129999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 24: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.117999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 25: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.117999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 28: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.106999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 29: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.145999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 30: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.105999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 32: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.079999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 33: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.102999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 34: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.102999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 35: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.113999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 36: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.113999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 37: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.112999,-0.113999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 43: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.094999,-0.112999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 44: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.094999,-0.092999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 45: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.134999,-0.106999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 46: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.134999,-0.134999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 47: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.120999,-0.052999, 10.799995,114.099998,-4.700001, 0.688000,1.000000,0.696000);
				case 48: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.109999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 57: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.109999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 58: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.082999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 59: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.128999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 60: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.128999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 61: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.103999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 66: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.126999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 67: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.126999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 68: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.099999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 70: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.086000,-0.105999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 71: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.121999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 72: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.097999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 73: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.097999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 78: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.134999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 79: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.129999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 82: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.110999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 83: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.110999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 84: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.130999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 86: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.130999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 94: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.095999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 95: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.107000,-0.088999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 96: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.150000,-0.118999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 97: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.150000,-0.106999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 98: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.150000,-0.123999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 100: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.150000,-0.111999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 101: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.150000,-0.137999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 102: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.150000,-0.116999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 103: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.157000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 104: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.140999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 105: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.163000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 106: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.134000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 107: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.134000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 108: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.104000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 109: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 110: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 111: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 112: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 113: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 114: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 115: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.117000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 116: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.099000,-0.130000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 119: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.121000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 120: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.132000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 121: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.141000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 122: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.108000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 123: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.123000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 124: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.083000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 125: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.109000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 126: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.123000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 127: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.127000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 128: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.097000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 132: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.090000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 133: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.099000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 134: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.087000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 135: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.120000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 136: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.084000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 137: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.087000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 141: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.083000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 142: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.141000,-0.135000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 143: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.058000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 144: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.058000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 147: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.058000,-0.102000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 148: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.088000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 150: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.077000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 153: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.098000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 154: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.112000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 155: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.139000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 156: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.105000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 158: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.105000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 159: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.105000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 160: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.089000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 161: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.109000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 162: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.101000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 164: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.103000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 165: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 166: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 167: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 168: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 169: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.083000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 170: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.116000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 171: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.110000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 172: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.076000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 173: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 174: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 175: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 176: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.134000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 177: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.134000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 179: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 180: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.122000,-0.130000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 181: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.162000,-0.096000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 182: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.070000,-0.120000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 183: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.070000,-0.099000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 184: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 185: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.126000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 186: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.126000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 187: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.102000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 188: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.100000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 189: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.119000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 200: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 202: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.102000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 203: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 204: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 206: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.101000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 208: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.122999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 212: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.082000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 213: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.114000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 217: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.097000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 220: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 221: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.106000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 222: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.106000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 223: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.133000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 227: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.128000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 228: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.128000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 230: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.083000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 231: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.105000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 234: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.085000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 235: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.098000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 236: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.086000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 239: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.118000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 240: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.124000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 241: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.139000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 242: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.137000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 247: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.106000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 248: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.106000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 249: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.113000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 250: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.113000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 254: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 255: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 258: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.131000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 259: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.131000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 261: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 262: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 265: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.137000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 266: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.092000,-0.137000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 267: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.292000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 269: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.052000,-0.178000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 270: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.133000,-0.127000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 271: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 272: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.134000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 273: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.111000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 274: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 275: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 276: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 280: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 281: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 282: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 283: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 284: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 286: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 288: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 289: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.128000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 290: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.124000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 291: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.116000,-0.124000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 292: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.176000,-0.108000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 294: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.176000,-0.128000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 295: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.059000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 296: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.059000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 297: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.094000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 299: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.131000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 300: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 301: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 302: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 303: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 304: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 305: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 306: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 307: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 308: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 309: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 310: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 311: SetPlayerAttachedObjectEx (playerid, 1, objectid, 1, 0.114000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 6)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 2)) RemovePlayerAttachedObject(playerid, 2);
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120000,-0.001000,0.000000, -92.499984,-7.199993,-98.099990, 1.114999,1.000000,0.901000);
				case 3: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120000,0.006999,0.007000, -92.499984,-7.199993,-98.099990, 1.188999,1.256000,1.157000);
				case 4: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.141999,-0.000000,0.001999, -92.499984,-7.199993,-98.099990, 1.175999,1.256000,1.083999);
				case 5: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.141999,-0.000000,0.001999, -92.499984,-7.199993,-98.099990, 1.175999,1.256000,1.083999);
				case 7: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.123000,0.017000,0.001999, -84.299972,-5.799993,-98.099990, 1.216999,1.256000,1.011999);
				case 9: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.091000,0.003000,0.001999, -84.299972,-5.799993,-98.099990, 1.237999,1.256000,1.057999);
				case 14: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.104000,0.013000,0.006000, -91.399986,-5.799993,-92.200004, 1.262999,1.256000,1.122999);
				case 15: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.071000,-0.015999,-0.000000, -91.399986,-5.799993,-92.200004, 1.181999,1.256000,0.974999);
				case 17: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.100000,0.009000,-0.000000, -91.399986,-5.799993,-92.200004, 1.262999,1.256000,0.974999);
				case 18: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.085999,0.003000,-0.000000, -91.399986,-5.799993,-92.200004, 0.994999,1.256000,1.021000);
				case 20: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116999,0.003000,-0.000000, -91.399986,-5.799993,-92.200004, 1.037999,1.256000,1.094000);
				case 21: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116999,0.003000,-0.000000, -91.399986,-5.799993,-92.200004, 1.132999,1.256000,1.094000);
				case 25: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116999,0.003000,0.004000, -91.399986,-5.799993,-92.200004, 1.157999,1.056999,0.877000);
				case 26: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116999,0.003000,0.004000, -91.399986,-5.799993,-92.200004, 1.005999,1.056999,1.086000);
				case 30: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116999,0.003000,-0.002000, -91.399986,-5.799993,-92.200004, 1.277999,1.056999,1.107000);
				case 44: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.097999,0.016000,-0.000000, -91.399986,-5.799993,-92.200004, 1.022999,1.056999,0.863000);
				case 45: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.097999,-0.002999,-0.000000, -91.399986,-5.799993,-92.200004, 1.022999,1.056999,1.034000);
				case 46: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120999,0.020000,-0.000000, -91.399986,-5.799993,-92.200004, 1.135999,1.056999,1.154000);
				case 47: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120999,0.011000,-0.000000, -91.399986,-5.799993,-92.200004, 1.135999,1.056999,1.154000);
				case 48: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.130999,-0.004999,-0.000000, -91.399986,-5.799993,-92.200004, 1.189999,1.056999,1.195000);
				case 57: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.130999,0.024000,-0.000000, -91.399986,-5.799993,-92.200004, 1.189999,1.056999,1.195000);
				case 58: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.092000,0.002000,-0.000000, -91.399986,-5.799993,-92.200004, 1.002999,1.056999,0.939000);
				case 59: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126999,0.006000,-0.000000, -91.399986,-5.799993,-92.200004, 1.115999,1.301999,1.119000);
				case 60: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.107999,0.001000,-0.000000, -91.399986,-5.799993,-92.200004, 1.115999,1.301999,0.950000);
				case 66: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.107999,0.001000,0.000999, -91.399986,-5.799993,-92.200004, 1.115999,1.301999,0.950000);
				case 68: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.107999,0.027000,0.000999, -91.399986,-5.799993,-92.200004, 1.115999,1.301999,0.950000);
				case 69: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.107999,-0.017999,0.003999, -91.399986,-5.799993,-92.200004, 1.160999,1.301999,0.950000);
				case 70: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.107999,0.012000,0.004999, -91.399986,-5.799993,-92.200004, 1.160999,1.301999,0.950000);
				case 76: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.107999,-0.019999,0.004999, -91.399986,-5.799993,-92.200004, 1.160999,1.301999,1.005000);
				case 86: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.096000,-0.010999,0.000999, -91.399986,-5.799993,-92.200004, 1.084999,1.358999,0.969000);
				case 91: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.096000,-0.010999,0.007000, -91.399986,-5.799993,-92.200004, 1.206999,1.358999,1.074000);
				case 95: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.096000,-0.010999,-0.000000, -91.399986,-5.799993,-92.200004, 1.095999,1.358999,0.977000);
				case 96: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.114000,0.004000,0.001999, -91.399986,-5.799993,-92.200004, 1.095999,1.358999,0.977000);
				case 97: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.092000,-0.004999,0.001999, -91.399986,-5.799993,-92.200004, 1.095999,1.358999,0.977000);
				case 98: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.099000,0.021000,0.001999, -91.399986,-5.799993,-92.200004, 1.095999,1.358999,1.086000);
				case 100: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.007000,0.001999, -91.399986,-5.799993,-92.200004, 1.133999,1.358999,1.158000);
				case 101: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,0.003000,0.001999, -91.399986,-5.799993,-92.200004, 1.133999,1.358999,1.158000);
				case 106: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115000,-0.001999,-0.004000, -91.399986,-5.799993,-92.200004, 1.318998,1.358999,1.158000);
				case 111: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118000,0.010000,0.001999, -91.399986,-5.799993,-92.200004, 1.197998,1.126999,0.946000);
				case 112: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.086000,0.010000,0.001999, -91.399986,-5.799993,-92.200004, 1.055998,1.126999,0.946000);
				case 113: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.105000,0.010000,0.001999, -91.399986,-5.799993,-92.200004, 1.179998,1.126999,1.101000);
				case 117: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.105000,0.010000,0.001999, -91.399986,-5.799993,-92.200004, 1.080998,1.126999,0.975000);
				case 118: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.105000,0.010000,0.001999, -91.399986,-5.799993,-92.200004, 1.080998,1.126999,0.975000);
				case 119: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.105000,0.010000,0.001999, -91.399986,-5.799993,-92.200004, 1.167998,1.126999,0.975000);
				case 120: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120000,-0.005999,0.001999, -91.399986,-5.799993,-92.200004, 1.167998,1.126999,1.113000);
				case 121: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120000,0.000000,0.001999, -91.399986,-5.799993,-92.200004, 1.167998,1.126999,1.113000);
				case 123: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120000,0.000000,-0.002000, -91.399986,-5.799993,-92.200004, 1.242998,1.126999,1.113000);
				case 124: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120000,0.000000,-0.002000, -91.399986,-5.799993,-92.200004, 1.179998,1.157999,1.061000);
				case 125: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120000,0.008000,0.001999, -91.399986,-5.799993,-92.200004, 1.179998,1.157999,1.061000);
				case 126: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,-0.009999,0.001999, -91.399986,-5.799993,-92.200004, 1.179998,1.157999,1.061000);
				case 127: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129000,0.008000,0.001999, -91.399986,-5.799993,-92.200004, 1.179998,1.157999,1.061000);
				case 147: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.095000,-0.003999,0.006000, -91.399986,-5.799993,-92.200004, 1.119998,1.157999,1.061000);
				case 148: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.095000,-0.003999,0.006000, -91.399986,-5.799993,-92.200004, 1.181998,1.157999,1.135000);
				case 151: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.095000,-0.003999,0.006000, -91.399986,-5.799993,-92.200004, 1.449998,1.497999,1.211000);
				case 154: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.095000,-0.003999,0.001999, -91.399986,-5.799993,-92.200004, 1.075998,1.218000,1.063000);
				case 156: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,-0.002999,0.001999, -91.399986,-5.799993,-92.200004, 1.325998,1.434000,1.209000);
				case 160: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.084000,0.015000,0.001999, -91.399986,-5.799993,-92.200004, 1.171998,1.086000,0.945000);
				case 162: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.007000,0.001999, -91.399986,-5.799993,-92.200004, 1.171998,1.086000,0.945000);
				case 163: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.007000,0.001999, -91.399986,-5.799993,-92.200004, 1.000998,1.086000,0.897000);
				case 164: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.002000,0.001999, -91.399986,-5.799993,-92.200004, 1.037998,1.086000,1.023000);
				case 165: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.002000,0.001999, -91.399986,-5.799993,-92.200004, 1.037998,1.086000,1.023000);
				case 166: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.010000,0.005000, -91.399986,-5.799993,-92.200004, 1.037998,1.086000,1.023000);
				case 170: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.010000,-0.001999, -91.399986,-5.799993,-92.200004, 1.091998,1.086000,1.215000);
				case 171: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132000,-0.007999,0.003000, -91.399986,-5.799993,-92.200004, 1.091998,1.086000,1.142000);
				case 176: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132000,-0.007999,0.003000, -91.399986,-5.799993,-92.200004, 1.157998,1.086000,1.142000);
				case 179: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.112000,0.006000,0.003000, -91.399986,-5.799993,-92.200004, 1.157998,1.086000,1.142000);
				case 180: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139000,-0.006000,0.000000, -91.399986,-5.799993,-92.200004, 1.157998,1.086000,1.142000);
				case 182: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103000,0.010000,0.000000, -91.399986,-5.799993,-92.200004, 1.044998,1.086000,1.035000);
				case 183: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103000,0.010000,0.000000, -91.399986,-5.799993,-92.200004, 1.044998,1.086000,1.035000);
				case 184: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103000,0.010000,0.000000, -91.399986,-5.799993,-92.200004, 1.115998,1.086000,1.088000);
				case 185: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.135000,-0.002999,0.000000, -91.399986,-5.799993,-92.200004, 1.115998,1.086000,1.088000);
				case 186: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124000,-0.010000,0.000000, -91.399986,-5.799993,-92.200004, 1.115998,1.086000,1.088000);
				case 187: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103000,-0.010000,0.007000, -91.399986,-5.799993,-92.200004, 1.115998,1.086000,1.088000);
				case 188: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103000,-0.001000,0.007000, -91.399986,-5.799993,-92.200004, 1.115998,1.086000,1.088000);
				case 189: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.125000,-0.008000,0.007000, -91.399986,-5.799993,-92.200004, 1.115998,1.086000,1.088000);
				case 191: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.125000,-0.003000,0.001000, -91.399986,-5.799993,-92.200004, 1.160998,1.306000,1.239000);
				case 192: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.125000,-0.003000,0.001000, -91.399986,-5.799993,-92.200004, 1.160998,1.306000,1.239000);
				case 200: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.125000,-0.003000,0.001000, -91.399986,-5.799993,-92.200004, 1.222998,1.306000,1.103000);
				case 206: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.020999,0.001000, -91.399986,-5.799993,-92.200004, 1.038998,1.306000,0.880000);
				case 207: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.087000,0.006999,-0.000999, -91.399986,-5.799993,-92.200004, 1.038998,1.306000,0.880000);
				case 210: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.087000,-0.001000,0.002000, -91.399986,-5.799993,-92.200004, 1.038998,1.306000,0.880000);
				case 213: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.109000,-0.001000,0.002000, -91.399986,-5.799993,-92.200004, 1.180998,1.306000,0.950000);
				case 217: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.006000,0.002000, -91.399986,-5.799993,-92.200004, 1.180998,1.306000,0.950000);
				case 221: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,0.002000,0.002000, -91.399986,-5.799993,-92.200004, 1.301998,1.306000,1.174000);
				case 222: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,-0.007999,0.002000, -91.399986,-5.799993,-92.200004, 1.301998,1.306000,1.204000);
				case 223: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.017000,0.002000, -91.399986,-5.799993,-92.200004, 1.122998,1.306000,1.145000);
				case 227: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.017000,0.002000, -91.399986,-5.799993,-92.200004, 1.122998,1.306000,1.145000);
				case 228: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.004000,0.002000, -91.399986,-5.799993,-92.200004, 1.122998,1.306000,1.145000);
				case 229: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.097000,-0.009999,0.002000, -91.399986,-5.799993,-92.200004, 1.200998,1.306000,1.009000);
				case 234: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.116000,-0.020999,0.002000, -91.399986,-5.799993,-92.200004, 0.980998,1.115000,0.973000);
				case 235: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.064000,-0.004999,0.002000, -91.399986,-5.799993,-92.200004, 1.021999,1.115000,0.973000);
				case 236: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.095000,-0.003999,0.002000, -91.399986,-5.799993,-92.200004, 1.051999,1.115000,1.028000);
				case 240: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.010000,0.002000, -91.399986,-5.799993,-92.200004, 1.131999,1.115000,1.182000);
				case 250: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.001000,0.002000, -91.399986,-5.799993,-92.200004, 1.131999,1.115000,1.182000);
				case 252: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.001000,0.002000, -91.399986,-5.799993,-92.200004, 1.131999,1.115000,1.182000);
				case 258: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128000,0.001000,0.002000, -91.399986,-5.799993,-92.200004, 1.237999,1.115000,1.182000);
				case 259: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.104000,-0.002999,0.002000, -91.399986,-5.799993,-92.200004, 1.302999,1.267000,1.182000);
				case 262: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.093000,0.012000,0.001000, -91.399986,-5.799993,-92.200004, 1.099999,1.267000,1.007000);
				case 265: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.093000,0.012000,0.001000, -91.399986,-5.799993,-92.200004, 1.099999,1.267000,1.007000);
				case 266: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.093000,0.002000,-0.000999, -91.399986,-5.799993,-92.200004, 1.200999,1.267000,0.945000);
				case 267: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.100000,-0.008999,0.001000, -91.399986,-5.799993,-92.200004, 1.152999,1.267000,0.993000);
				case 272: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.122000,0.000000,0.001000, -91.399986,-5.799993,-92.200004, 1.152999,1.267000,0.993000);
				case 273: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.081000,0.003000,0.001000, -91.399986,-5.799993,-92.200004, 1.152999,1.267000,0.993000);
				case 274: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.092000,0.012000,0.001000, -91.399986,-5.799993,-92.200004, 1.148999,1.267000,0.966000);
				case 275: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.092000,0.012000,0.001000, -91.399986,-5.799993,-92.200004, 1.148999,1.267000,0.966000);
				case 276: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.102000,0.012000,0.001000, -91.399986,-5.799993,-92.200004, 1.148999,1.267000,0.966000);
				case 280: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.102000,0.016000,0.001000, -91.399986,-5.799993,-92.200004, 1.148999,1.267000,0.966000);
				case 281: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.102000,0.004000,0.001000, -91.399986,-5.799993,-92.200004, 1.148999,1.267000,0.966000);
				case 282: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.110000,0.011000,0.001000, -91.399986,-5.799993,-92.200004, 1.058999,1.267000,0.956000);
				case 286: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.110000,0.005000,0.001000, -91.399986,-5.799993,-92.200004, 1.058999,1.267000,0.956000);
				case 292: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.110000,-0.002999,0.001000, -91.399986,-5.799993,-92.200004, 1.058999,1.267000,0.956000);
				case 295: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.110000,0.002000,0.001000, -91.399986,-5.799993,-92.200004, 1.177999,1.267000,1.027000);
				case 296: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,-0.017999,0.001000, -91.399986,-5.799993,-92.200004, 1.177999,1.267000,1.027000);
				case 300: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.006000,-0.000999, -91.399986,-5.799993,-92.200004, 1.137999,1.267000,0.925000);
				case 301: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.006000,-0.000999, -91.399986,-5.799993,-92.200004, 1.137999,1.267000,0.925000);
				case 302: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.006000,-0.000999, -91.399986,-5.799993,-92.200004, 1.137999,1.267000,0.925000);
				case 303: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.006000,-0.000999, -91.399986,-5.799993,-92.200004, 1.137999,1.267000,0.925000);
				case 304: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.006000,-0.000999, -91.399986,-5.799993,-92.200004, 1.137999,1.160000,0.918000);
				case 305: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.006000,-0.000999, -91.399986,-5.799993,-92.200004, 1.137999,1.160000,0.918000);
				case 310: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.006000,-0.000999, -91.399986,-5.799993,-92.200004, 1.137999,1.160000,0.918000);
				case 311: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117000,0.006000,-0.000999, -91.399986,-5.799993,-92.200004, 1.137999,1.160000,0.918000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 7)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 4)) RemovePlayerAttachedObject(playerid, 4);
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.102998,0.030999,-0.001001, 0.000000,90.000000,90.500007, 1.000000,1.058000,1.000000);
				case 2: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.092998,0.039999,-0.001001, 0.000000,90.000000,90.500007, 1.000000,1.058000,1.000000);
				case 3: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.104998,0.044999,-0.000001, 0.000000,90.000000,90.500007, 1.000000,1.099000,1.080000);
				case 4: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.128998,0.026999,-0.001000, 76.200012,73.100074,15.000033, 1.000000,1.130000,1.080000);
				case 5: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.128998,0.037999,-0.005000, 138.500000,87.300071,-47.999965, 1.000000,1.217000,1.080000);
				case 6: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.105997,0.029999,-0.000000, 138.500000,87.300071,-47.999965, 1.000000,1.017000,1.080000);
				case 7: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.098997,0.054999,-0.007000, 138.500000,87.300071,-47.999965, 1.000000,1.134000,1.080000);
				case 8: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088997,0.040999,-0.003000, 138.500000,87.300071,-47.999965, 1.000000,1.134000,1.080000);
				case 9: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.066997,0.034999,-0.001000, 138.500000,87.300071,-47.999965, 1.000000,1.134000,1.080000);
				case 10: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.081997,0.039999,-0.001000, 138.500000,87.300071,-47.999965, 1.000000,1.134000,1.080000);
				case 11: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.076998,0.039999,0.000999, 138.500000,87.300071,-47.999965, 1.000000,1.134000,1.080000);
				case 12: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.076998,0.035999,0.001999, 138.500000,87.300071,-47.999965, 1.000000,1.134000,1.080000);
				case 13: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.082998,0.031999,-0.001000, 138.500000,87.300071,-47.999965, 1.000000,1.134000,1.080000);
				case 14: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.094998,0.056999,-0.001000, 138.500000,87.300071,-47.999965, 1.000000,1.166000,1.080000);
				case 15: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.079998,0.019999,-0.002000, 138.500000,87.300071,-47.999965, 1.000000,1.166000,1.080000);
				case 17: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.098998,0.035999,0.000999, 138.500000,87.300071,-47.999965, 1.000000,1.166000,1.080000);
				case 19: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.081998,0.035999,-0.003000, 138.500000,87.300071,-47.999965, 1.000000,1.166000,1.080000);
				case 20: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.102998,0.030999,-0.003000, 138.500000,87.300071,-47.999965, 1.000000,1.166000,1.080000);
				case 21: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.093998,0.047999,-0.003000, 138.500000,87.300071,-47.999965, 1.000000,1.166000,1.080000);
				case 22: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.093998,0.047999,-0.007000, 138.500000,87.300071,-47.999965, 1.000000,1.166000,1.080000);
				case 23: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.102998,0.047999,-0.007000, 138.500000,87.300071,-47.999965, 1.000000,1.166000,1.080000);
				case 24: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.037999,-0.000000, 138.500000,87.300071,-47.999965, 1.000000,1.085000,1.080000);
				case 25: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.034999,0.000999, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 26: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086998,0.036999,-0.003000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 27: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.096998,0.036999,-0.003000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 28: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.096998,0.046999,-0.006000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 29: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.051999,-0.000000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 31: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.052999,-0.004000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 39: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.080998,0.034999,-0.005000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 40: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.071998,0.030999,-0.001000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 41: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.079998,0.042999,-0.001000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 42: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.036999,-0.002000, 138.500000,87.300071,-47.999965, 1.000000,1.145000,1.080000);
				case 44: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088998,0.041999,-0.002000, 138.500000,87.300071,-47.999965, 1.000000,1.029000,1.027000);
				case 46: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.095998,0.059999,-0.001000, 138.500000,87.300071,-47.999965, 1.000000,1.155000,1.027000);
				case 49: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.093998,0.035999,-0.004000, 138.500000,87.300071,-47.999965, 1.000000,1.155000,1.027000);
				case 50: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.105998,0.012999,-0.008000, 138.500000,87.300071,-47.999965, 1.000000,1.155000,1.027000);
				case 54: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.085998,0.052999,-0.000000, 138.500000,87.300071,-47.999965, 1.000000,1.155000,1.027000);
				case 58: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.092998,0.028999,-0.002000, 138.500000,87.300071,-47.999965, 1.000000,0.994000,1.027000);
				case 59: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.092998,0.036999,-0.001000, 138.500000,87.300071,-47.999965, 1.000000,1.100000,1.027000);
				case 60: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.092998,0.050999,-0.005000, 138.500000,87.300071,-47.999965, 1.000000,1.130000,1.027000);
				case 61: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087998,0.048999,-0.004000, 138.500000,87.300071,-47.999965, 0.880000,0.993001,1.027000);
				case 66: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.097998,0.041999,-0.001000, 138.500000,87.300071,-47.999965, 0.880000,1.076001,1.027000);
				case 67: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.097998,0.041999,-0.000000, 138.500000,87.300071,-47.999965, 0.880000,1.076001,1.027000);
				case 68: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.051999,-0.002000, 138.500000,87.300071,-47.999965, 0.880000,1.076001,1.027000);
				case 69: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.070998,0.048999,-0.002000, 138.500000,87.300071,-47.999965, 0.880000,1.076001,1.027000);
				case 70: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.055999,0.005999, 138.500000,87.300071,-47.999965, 0.880000,1.076001,1.027000);
				case 71: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.033999,-0.000000, 138.500000,87.300071,-47.999965, 0.880000,1.076001,1.027000);
				case 72: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.053999,-0.001000, 138.500000,87.300071,-47.999965, 0.880000,1.076001,1.027000);
				case 73: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.045999,-0.001000, 138.500000,87.300071,-47.999965, 0.880000,1.076001,1.027000);
				case 76: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.072998,0.041999,-0.001000, 138.500000,87.300071,-47.999965, 0.880000,1.127000,1.027000);
				case 78: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.114998,0.023999,0.007999, -121.799896,96.400039,-147.299835, 0.880000,0.983000,1.027000);
				case 79: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.094998,0.036999,0.009999, -121.799896,96.400039,-147.299835, 0.880000,0.983000,1.027000);
				case 83: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088998,0.042999,-0.000000, -121.799896,96.400039,-147.299835, 0.880000,0.983000,1.027000);
				case 90: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.076998,0.046999,-0.000000, -121.799896,96.400039,-147.299835, 0.880000,1.069000,1.027000);
				case 91: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.071998,0.040999,-0.000000, -121.799896,96.400039,-147.299835, 0.880000,1.069000,1.027000);
				case 93: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.071998,0.051999,-0.001000, -121.799896,96.400039,-147.299835, 0.880000,1.139000,1.027000);
				case 94: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.045998,0.024999,-0.000000, -121.599906,96.400039,-147.299835, 0.880000,0.950000,1.027000);
				case 95: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.084998,0.013999,-0.000000, -121.599906,96.400039,-147.299835, 0.880000,0.982000,1.027000);
				case 96: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.106998,0.041999,0.000999, -121.599906,96.400039,-147.299835, 0.880000,1.019000,1.027000);
				case 97: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.060998,0.040999,0.000999, -121.599906,96.400039,-147.299835, 0.880000,1.019000,1.027000);
				case 98: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.094998,0.068999,-0.000000, -121.599906,96.400039,-147.299835, 0.880000,1.069000,1.027000);
				case 101: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.042999,0.000999, -121.599906,96.400039,-147.299835, 0.880000,1.069000,1.027000);
				case 102: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.056999,-0.001000, -121.599906,96.400039,-147.299835, 0.880000,1.069000,1.027000);
				case 103: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.050999,-0.000000, -121.599906,96.400039,-147.299835, 0.880000,1.116000,1.027000);
				case 105: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.050999,-0.000000, -121.599906,96.400039,-147.299835, 0.880000,1.150000,1.027000);
				case 106: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.098998,0.050999,-0.003000, -121.599906,96.400039,-147.299835, 0.880000,1.150000,1.027000);
				case 107: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.100998,0.039999,-0.003000, -121.599906,96.400039,-147.299835, 1.020000,1.150000,1.027000);
				case 108: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.085998,0.037999,0.002999, -121.599906,96.400039,-147.299835, 1.020000,1.150000,1.027000);
				case 109: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.085998,0.044999,-0.004000, -121.599906,96.400039,-147.299835, 1.020000,1.147000,1.027000);
				case 110: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.085998,0.044999,-0.004000, -121.599906,96.400039,-147.299835, 1.020000,1.126000,1.027000);
				case 111: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.108998,0.029999,-0.003000, -92.899909,88.200088,-176.599822, 1.020000,1.079000,1.027000);
				case 112: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.095998,0.027999,-0.003000, -92.899909,88.200088,-176.599822, 0.904000,0.976999,1.027000);
				case 113: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.109998,0.051999,-0.001000, -92.899909,88.200088,-176.599822, 0.904000,1.115000,1.027000);
				case 117: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.085998,0.050999,-0.001000, -92.899909,90.100112,-176.599822, 0.904000,1.115000,1.027000);
				case 118: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.085998,0.050999,-0.001000, -92.899909,90.100112,-176.599822, 0.904000,1.115000,1.027000);
				case 119: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.044999,-0.001000, -92.899909,94.700088,-176.599822, 0.904000,1.115000,1.027000);
				case 120: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.040999,0.001999, -92.899909,92.700088,-176.599822, 0.904000,1.115000,1.027000);
				case 121: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.029999,0.001999, -92.899909,100.800102,-176.599822, 1.055000,1.279000,1.162999);
				case 122: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088998,0.029999,0.001999, -92.899909,100.800102,-176.599822, 1.055000,1.122000,1.093999);
				case 124: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.101998,0.033999,-0.002001, -92.899909,96.000068,-176.599822, 1.055000,1.122000,1.093999);
				case 125: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.033999,-0.002001, -92.899909,92.200057,-174.999862, 1.025000,1.062000,1.093999);
				case 126: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090998,0.033999,-0.000001, -92.899909,92.200057,-175.999877, 1.025000,1.062000,1.093999);
				case 127: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.101998,0.041999,-0.001001, -92.899909,92.200057,-175.999877, 1.025000,1.062000,1.093999);
				case 128: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.101998,0.047999,-0.003000, -92.899909,92.200057,-175.999877, 1.025000,1.062000,1.093999);
				case 134: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.082998,0.029999,0.001999, -92.899909,103.300056,-179.899917, 0.871000,1.031000,1.093999);
				case 135: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.071998,0.037999,-0.002000, -92.899909,103.300056,-174.699890, 0.871000,1.031000,1.093999);
				case 136: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086998,0.025999,-0.002000, -92.899909,103.300056,-173.099945, 0.871000,1.031000,1.093999);
				case 142: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086998,0.049999,-0.005001, -92.899909,103.300056,-176.499954, 0.871000,1.085999,1.093999);
				case 147: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086998,0.031999,0.005999, -92.899909,103.300056,-176.499954, 0.871000,1.085999,1.093999);
				case 148: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.060998,0.045999,0.003999, -92.899909,97.400032,-176.499954, 0.871000,1.085999,1.093999);
				case 150: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.066998,0.043999,0.002999, -92.899909,97.400032,-176.499954, 0.871000,1.085999,1.093999);
				case 153: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.077998,0.023999,0.007999, -92.899909,105.900032,-176.499954, 0.871000,1.085999,1.093999);
				case 154: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.058998,0.040999,-0.002001, -92.899909,96.300025,-176.099960, 0.871000,1.085999,1.093999);
				case 155: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087998,0.052999,-0.005001, -92.899909,96.300025,-177.899948, 0.871000,1.085999,1.093999);
				case 160: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.100998,0.028999,-0.001000, -92.899909,96.300025,-177.899948, 0.871000,1.085999,1.093999);
				case 163: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.096998,0.030999,-0.001000, -92.899909,97.100036,-177.899948, 0.871000,1.085999,1.093999);
				case 164: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.096998,0.035999,-0.001000, -92.899909,97.100036,-177.899948, 0.871000,1.085999,1.093999);
				case 165: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.075998,0.046999,-0.000001, -92.899909,97.100036,-174.299972, 0.871000,1.085999,1.093999);
				case 166: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.074998,0.043999,-0.000001, -92.899909,97.100036,-175.899978, 0.871000,1.085999,1.093999);
				case 169: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.067998,0.040999,-0.000001, -92.899909,97.100036,-175.899978, 0.871000,1.085999,1.093999);
				case 170: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.053999,-0.005001, -92.899909,92.100044,-175.899978, 0.871000,1.069999,1.093999);
				case 171: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.042999,-0.001000, -92.899909,92.100044,-175.899978, 0.871000,1.116999,1.093999);
				case 172: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.067998,0.044999,0.001999, -92.899909,92.100044,-175.899978, 0.871000,1.116999,1.093999);
				case 176: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.095998,0.047999,-0.005001, -92.899909,92.100044,-175.899978, 0.980000,1.186999,1.093999);
				case 177: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.095998,0.041999,-0.007001, -92.899909,92.100044,-175.899978, 0.980000,1.186999,1.093999);
				case 179: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.095998,0.043999,-0.005001, -92.899909,92.100044,-175.899978, 0.980000,1.186999,1.093999);
				case 180: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.099998,0.043999,-0.005001, -92.899909,92.100044,-175.899978, 0.980000,1.186999,1.093999);
				case 181: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.122998,0.036999,-0.003000, -92.899909,92.100044,-175.899978, 0.980000,1.043999,1.093999);
				case 182: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.079998,0.033999,-0.003000, -92.899909,92.100044,-175.899978, 0.980000,1.043999,1.093999);
				case 183: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.093998,0.028999,-0.003000, -92.899909,92.100044,-175.899978, 0.980000,1.043999,1.093999);
				case 184: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.050999,-0.006001, -92.899909,92.100044,-175.899978, 0.980000,1.078999,1.093999);
				case 186: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.034999,0.000999, -92.899909,92.100044,-176.700012, 0.980000,1.078999,1.093999);
				case 187: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.075998,0.023999,0.004999, -92.899909,105.300056,-176.700012, 0.980000,1.119999,1.093999);
				case 188: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088998,0.034999,-0.000001, -92.899909,105.300056,-173.700042, 0.980000,1.119999,1.093999);
				case 189: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.092998,0.033999,0.000999, -92.899909,92.900062,-173.700042, 0.980000,1.119999,1.093999);
				case 190: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.092998,0.040999,-0.003000, -92.899909,92.900062,-173.700042, 0.980000,1.119999,1.093999);
				case 191: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.092998,0.040999,-0.003000, -92.899909,92.900062,-173.700042, 0.980000,1.119999,1.093999);
				case 192: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087998,0.040999,-0.002000, -92.899909,92.900062,-173.700042, 0.980000,1.119999,1.093999);
				case 193: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087998,0.037999,-0.001000, -92.899909,92.900062,-173.700042, 0.980000,1.119999,1.093999);
				case 194: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087998,0.037999,-0.001000, -92.899909,92.900062,-173.700042, 0.980000,1.119999,1.093999);
				case 195: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087998,0.036999,0.000999, -92.899909,92.900062,-176.100021, 0.980000,1.119999,1.093999);
				case 200: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.095998,0.037999,-0.001000, -92.899909,92.900062,-176.100021, 0.980000,1.119999,1.093999);
				case 202: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.102998,0.041999,-0.001000, -92.899909,92.900062,-176.100021, 0.980000,0.981999,1.093999);
				case 206: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.102998,0.041999,-0.001000, -92.899909,92.900062,-176.100021, 0.980000,0.981999,1.093999);
				case 210: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.084998,0.022999,-0.001000, -92.899909,92.900062,-176.100021, 0.980000,0.981999,1.093999);
				case 211: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.070998,0.040999,-0.001000, -92.899909,92.900062,-176.100021, 0.980000,0.981999,1.093999);
				case 212: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.096998,0.035999,-0.001000, -92.899909,92.900062,-176.100021, 0.839000,0.981999,1.093999);
				case 213: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.098998,0.048999,-0.002001, -92.899909,92.900062,-176.100021, 0.839000,1.098999,1.093999);
				case 214: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.063998,0.045999,-0.002001, -92.899909,92.900062,-176.100021, 0.839000,1.098999,1.093999);
				case 216: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.063998,0.044999,-0.002001, -92.899909,92.900062,-176.100021, 0.839000,1.098999,1.093999);
				case 217: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.093998,0.048999,-0.003001, -92.899909,92.900062,-176.100021, 0.839000,1.098999,1.093999);
				case 219: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.068998,0.044999,-0.003001, -92.899909,92.900062,-176.100021, 0.839000,1.098999,1.093999);
				case 220: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.054998,0.059999,-0.002001, -92.899909,92.900062,-176.100021, 0.839000,1.098999,1.093999);
				case 221: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.096998,0.046999,-0.001001, -92.899909,92.900062,-176.100021, 0.839000,1.161999,1.093999);
				case 222: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.053999,-0.001001, -92.899909,92.900062,-176.100021, 0.839000,1.161999,1.093999);
				case 223: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.071999,-0.000001, -92.899909,90.000053,-176.100021, 0.839000,1.161999,1.093999);
				case 224: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.061998,0.045999,-0.000001, -92.899909,90.000053,-176.100021, 0.839000,1.161999,1.093999);
				case 225: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.061998,0.045999,-0.000001, -92.899909,90.000053,-176.100021, 0.839000,1.161999,1.093999);
				case 226: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.061998,0.045999,-0.000001, -92.899909,90.000053,-176.100021, 0.839000,1.161999,1.093999);
				case 227: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.109998,0.057999,-0.000001, -92.899909,90.000053,-176.100021, 0.839000,1.161999,1.093999);
				case 228: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.101998,0.068999,-0.000000, -92.899909,90.000053,-176.100021, 0.839000,1.161999,1.093999);
				case 229: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.073998,0.035999,-0.000000, -92.899909,103.200050,-176.100021, 0.839000,1.161999,1.093999);
				case 230: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.055998,0.035999,-0.000000, -92.899909,103.200050,-176.100021, 0.839000,0.999000,1.093999);
				case 233: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.064998,0.048999,-0.000000, -92.899909,93.900032,-176.100021, 0.839000,0.999000,1.093999);
				case 235: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.053998,0.027999,-0.000000, -92.899909,93.900032,-176.100021, 0.839000,0.999000,1.093999);
				case 236: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.084998,0.038999,-0.000000, -92.899909,93.900032,-176.100021, 0.839000,1.093000,1.093999);
				case 239: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.101998,0.021999,0.004999, -92.899909,106.200004,-176.100021, 0.839000,0.959000,1.093999);
				case 240: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.089998,0.051999,0.000999, -92.899909,87.499969,-176.100021, 0.839000,1.129000,1.093999);
				case 247: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.099998,0.051999,0.000999, -92.899909,96.499946,-176.100021, 0.839000,1.129000,1.093999);
				case 248: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088998,0.062999,-0.001000, -92.899909,96.499946,-176.100021, 0.839000,1.182000,1.093999);
				case 250: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088998,0.054999,-0.004000, -92.899909,96.499946,-176.100021, 0.839000,1.033000,1.093999);
				case 252: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088998,0.045999,0.000999, -92.899909,96.499946,-176.100021, 0.839000,1.033000,1.093999);
				case 254: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.097998,0.048999,-0.001001, -92.899909,96.499946,-176.100021, 0.839000,1.134000,1.093999);
				case 255: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.079998,0.031999,0.005999, -92.899909,96.499946,-176.100021, 0.839000,0.972000,0.954999);
				case 258: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086998,0.057999,0.001999, -92.899909,96.499946,-176.100021, 0.839000,1.079000,1.113999);
				case 259: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086998,0.057999,0.001999, -92.899909,96.499946,-176.100021, 0.839000,1.079000,1.113999);
				case 261: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.094998,0.023999,-0.001001, -92.899909,96.499946,-176.100021, 0.839000,0.945999,1.113999);
				case 262: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.081998,0.048999,-0.002001, -92.899909,88.299957,-177.600051, 0.839000,1.070999,1.113999);
				case 265: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.094997,0.037999,-0.000001, -92.899909,88.299957,-177.600051, 0.839000,1.070999,1.113999);
				case 266: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.103997,0.034999,-0.005001, -92.899909,88.299957,-177.600051, 0.839000,1.097000,1.113999);
				case 267: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.094997,0.036999,-0.001001, -92.899909,97.999961,-175.800079, 0.839000,1.097000,1.113999);
				case 270: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.093997,0.036999,-0.001001, -92.899909,97.999961,-175.800079, 0.839000,1.097000,1.113999);
				case 272: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.093997,0.050999,-0.001001, -92.899909,97.999961,-175.800079, 0.839000,1.097000,1.113999);
				case 273: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.079997,0.041999,-0.001001, -92.899909,91.199951,-177.200103, 0.839000,1.097000,1.113999);
				case 274: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.088997,0.035999,-0.003001, -92.899909,91.199951,-177.200103, 0.839000,1.097000,1.113999);
				case 275: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086997,0.035999,-0.002001, -92.899909,91.199951,-177.200103, 0.839000,1.097000,1.113999);
				case 276: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086997,0.033999,-0.001001, -92.899909,91.199951,-177.200103, 0.839000,1.097000,1.027999);
				case 280: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086997,0.037999,-0.002001, -92.899909,91.199951,-177.200103, 0.839000,1.060999,1.027999);
				case 281: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.085997,0.036999,-0.002001, -92.899909,91.199951,-177.200103, 0.839000,1.060999,1.027999);
				case 282: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087997,0.035999,-0.002001, -92.899909,91.199951,-177.200103, 0.839000,1.060999,1.027999);
				case 283: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.082997,0.035999,-0.002001, -92.899909,91.199951,-177.200103, 0.839000,1.060999,1.027999);
				case 286: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.085997,0.035999,-0.002001, -92.899909,91.199951,-177.200103, 0.839000,1.060999,1.027999);
				case 287: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.072997,0.056999,0.007999, -92.899909,91.199951,-177.200103, 0.839000,1.060999,1.027999);
				case 288: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086997,0.034999,-0.000001, -92.899909,91.199951,-177.200103, 0.839000,1.060999,1.027999);
				case 291: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.091998,0.050999,-0.000001, -92.899909,91.199951,-177.200103, 0.839000,1.060999,1.027999);
				case 292: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.075997,0.032000,-0.005001, 97.999969,81.400047,-4.900008, 0.878000,1.000000,1.000000);
				case 293: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.083997,0.038999,-0.008001, 97.999969,81.400047,-4.900008, 0.878000,1.000000,1.000000);
				case 295: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.079997,0.045999,-0.000001, 95.799949,87.600059,-4.900008, 0.878000,1.087000,1.000000);
				case 296: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.079997,0.040999,-0.000001, 95.799949,67.300048,-4.900008, 0.878000,1.087000,1.000000);
				case 297: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090997,0.044999,-0.000001, 95.799949,81.400077,-4.900008, 0.878000,1.087000,1.000000);
				case 298: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090997,0.033999,-0.004001, 95.799949,81.400077,-4.900008, 0.878000,1.087000,1.000000);
				case 299: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.090997,0.052999,-0.000001, 95.799949,81.400077,-4.900008, 0.878000,1.087000,1.000000);
				case 300: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.083997,0.033999,-0.002001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 301: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.083997,0.033999,-0.002001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 302: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087997,0.033999,-0.003001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 303: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087997,0.033999,-0.001001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 304: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087997,0.033999,-0.001001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 305: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.087997,0.033999,-0.001001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 306: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.066997,0.048999,-0.004001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 307: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.066997,0.048999,-0.004001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 308: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.066997,0.048999,-0.003001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 309: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.066997,0.048999,-0.003001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 310: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086997,0.030999,-0.003001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				case 311: SetPlayerAttachedObjectEx (playerid, 4, objectid, 2,  0.086997,0.030999,-0.003001, 95.799949,89.500076,-3.500008, 0.878000,1.042000,1.000000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 8)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 2)) RemovePlayerAttachedObject(playerid, 2);
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.140998,0.016000,-0.002001, 0.000000,90.000000,89.900016, 1.000000,1.000000,1.000000);
				case 3: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.140998,0.016000,-0.002001, 0.000000,90.000000,89.900016, 1.217999,1.187000,1.000000);
				case 4: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.149998,0.016000,-0.002001, 0.000000,90.000000,89.900016, 1.217999,1.187000,1.000000);
				case 5: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.149998,0.016000,-0.002001, 0.000000,90.000000,89.900016, 1.217999,1.187000,1.000000);
				case 7: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.138998,0.016000,-0.002001, 0.000000,90.000000,89.900016, 1.217999,1.033000,1.000000);
				case 9: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.112998,0.004999,0.000998, 0.000000,90.000000,95.899993, 1.000000,1.000000,1.000000);
				case 10: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.098997,0.000999,0.000998, 0.000000,90.000000,95.899993, 1.175000,1.000000,1.000000);
				case 11: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115997,0.006999,0.000998, 0.000000,90.000000,95.899993, 1.092000,1.000000,1.000000);
				case 12: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115997,-0.006000,0.000998, 0.000000,90.000000,95.899993, 1.137000,1.050999,1.000000);
				case 14: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.127997,0.021999,0.001998, 0.000000,90.000000,95.899993, 1.137000,1.091999,1.000000);
				case 15: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.104998,-0.013999,0.001998, 0.000000,90.000000,95.899993, 1.137000,1.091999,1.000000);
				case 17: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.123998,0.017000,0.001998, 0.000000,90.000000,95.899993, 1.137000,1.091999,1.000000);
				case 18: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.123997,-0.000999,0.001998, 0.000000,90.000000,95.899993, 1.137000,1.091999,1.000000);
				case 20: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.138998,-0.000999,0.001998, 0.000000,90.000000,95.899993, 1.137000,1.091999,1.000000);
				case 21: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126997,-0.000999,0.001998, 0.000000,90.000000,95.899993, 1.137000,1.091999,1.000000);
				case 25: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126997,0.017000,0.001998, 0.000000,90.000000,95.899993, 0.987000,1.091999,0.866999);
				case 26: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126997,0.017000,0.001998, 0.000000,90.000000,95.899993, 1.122000,1.091999,0.866999);
				case 28: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136997,0.021000,0.001998, 0.000000,90.000000,95.899993, 1.181999,1.091999,0.866999);
				case 30: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.130997,0.017000,-0.003001, 0.000000,90.000000,95.899993, 1.181999,1.091999,0.866999);
				case 39: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.104997,0.006000,-0.003001, 0.000000,90.000000,95.899993, 0.981000,1.091999,0.866999);
				case 40: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118997,0.006000,-0.003001, 0.000000,90.000000,95.899993, 0.981000,1.091999,0.866999);
				case 43: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.074997,0.006000,-0.003001, 0.000000,90.000000,95.899993, 0.981000,1.091999,0.866999);
				case 44: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103997,0.027000,-0.003001, 0.000000,90.000000,95.899993, 0.981000,1.091999,0.866999);
				case 45: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.103997,0.009000,-0.003001, 0.000000,90.000000,95.899993, 1.071000,1.091999,0.866999);
				case 46: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129997,0.022000,-0.003001, 0.000000,90.000000,95.899993, 1.071000,1.091999,0.866999);
				case 47: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129997,0.022000,-0.003001, 0.000000,90.000000,95.899993, 1.125999,1.091999,0.866999);
				case 48: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.147997,-0.002999,-0.003001, 0.000000,90.000000,95.899993, 1.125999,1.091999,0.866999);
				case 49: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.110997,0.024000,-0.003001, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 54: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.127997,0.035999,-0.003001, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 55: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.123998,-0.014000,-0.003001, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 56: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.123998,-0.014000,-0.003001, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 57: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.158998,0.014999,-0.003001, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 58: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.106998,0.005999,-0.002001, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 59: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.145998,0.007999,-0.002001, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 60: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132998,0.002999,-0.002001, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 62: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.132998,0.012999,0.008999, 0.000000,90.000000,95.899993, 0.964999,1.091999,0.866999);
				case 63: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129998,0.000999,0.004999, 0.000000,90.000000,95.899993, 1.104999,1.091999,0.866999);
				case 64: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115998,0.007999,0.004999, 0.000000,90.000000,95.899993, 1.104999,1.091999,0.866999);
				case 66: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126998,0.025999,0.004999, 0.000000,90.000000,95.899993, 1.104999,1.091999,0.866999);
				case 68: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126998,0.024999,0.004999, 0.000000,90.000000,95.899993, 0.958999,1.091999,0.866999);
				case 69: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126998,-0.004000,0.004999, 0.000000,90.000000,95.899993, 0.958999,1.091999,0.866999);
				case 70: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126998,0.019999,0.004999, 0.000000,90.000000,95.899993, 0.958999,1.091999,0.866999);
				case 72: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126998,0.005999,0.004999, 0.000000,90.000000,95.899993, 0.958999,1.091999,0.866999);
				case 75: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115997,0.015000,-0.000001, 0.000000,90.000000,95.400001, 1.151999,1.069000,1.000000);
				case 76: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115997,0.003000,-0.000001, 0.000000,90.000000,95.400001, 1.151999,1.069000,1.000000);
				case 82: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.151998,0.034000,-0.000001, 0.000000,90.000000,95.400001, 1.151999,1.069000,1.000000);
				case 83: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.151998,0.016000,-0.000001, 0.000000,90.000000,95.400001, 1.151999,1.069000,1.000000);
				case 84: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.157998,0.016000,-0.000001, 0.000000,90.000000,95.400001, 1.151999,1.069000,1.000000);
				case 85: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.157998,0.016000,-0.010001, 0.000000,90.000000,95.400001, 1.151999,1.240999,1.000000);
				case 86: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.101998,0.016000,-0.004000, 0.000000,90.000000,95.400001, 1.151999,1.048999,1.000000);
				case 88: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.101998,0.027000,-0.004000, 0.000000,90.000000,95.400001, 1.151999,1.048999,1.000000);
				case 89: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117998,0.007000,0.005999, 0.000000,90.000000,95.400001, 1.151999,1.048999,1.000000);
				case 90: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117998,0.007000,0.005999, 0.000000,90.000000,95.400001, 1.151999,1.048999,1.000000);
				case 91: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126998,-0.001999,0.005999, 0.000000,90.000000,95.400001, 1.151999,1.048999,1.000000);
				case 95: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.100998,-0.003999,0.005999, 0.000000,90.000000,95.400001, 0.967999,1.048999,1.000000);
				case 96: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128998,0.005000,0.005999, 0.000000,90.000000,95.400001, 0.967999,1.048999,1.000000);
				case 97: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.107998,-0.011999,0.005999, 0.000000,90.000000,95.400001, 0.967999,1.048999,1.000000);
				case 98: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.122997,0.032000,0.005999, 0.000000,90.000000,95.400001, 1.117999,1.048999,1.000000);
				case 100: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.131998,0.009000,0.005999, 0.000000,90.000000,95.400001, 1.117999,1.048999,1.000000);
				case 101: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.143998,0.009000,0.005999, 0.000000,90.000000,95.400001, 1.117999,1.048999,1.000000);
				case 102: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129998,0.002000,0.003999, 0.000000,90.000000,95.400001, 1.117999,1.048999,1.000000);
				case 103: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129998,0.002000,0.003999, 0.000000,90.000000,95.400001, 1.117999,1.048999,1.000000);
				case 105: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129998,0.002000,0.003999, 0.000000,90.000000,95.400001, 1.117999,1.048999,1.000000);
				case 106: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129998,0.002000,0.003999, 0.000000,90.000000,95.400001, 1.117999,1.048999,1.000000);
				case 111: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129998,0.002000,-0.002000, 0.000000,90.000000,95.400001, 0.980999,1.048999,1.000000);
				case 112: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.101997,0.002000,-0.002000, 0.000000,90.000000,95.400001, 0.980999,1.048999,1.000000);
				case 113: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.137997,0.002000,0.002999, 0.000000,90.000000,95.400001, 0.980999,1.048999,1.000000);
				case 117: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.114997,0.012000,0.003999, 0.000000,90.000000,95.400001, 0.980999,1.048999,1.000000);
				case 119: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117997,0.019000,-0.000001, 0.000000,90.000000,95.400001, 0.980999,1.048999,1.000000);
				case 120: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124997,0.004000,-0.000001, 0.000000,90.000000,95.400001, 0.980999,1.048999,1.000000);
				case 121: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124997,0.004000,-0.000001, 0.000000,90.000000,95.400001, 0.980999,1.147000,1.000000);
				case 122: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118997,0.010000,-0.000001, 0.000000,90.000000,95.400001, 0.980999,1.147000,1.000000);
				case 123: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136997,0.007000,-0.000001, 0.000000,90.000000,95.400001, 0.980999,1.147000,1.000000);
				case 124: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136997,0.007000,-0.000001, 0.000000,90.000000,95.400001, 0.980999,1.147000,1.000000);
				case 125: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129997,0.000000,-0.000001, 0.000000,90.000000,95.400001, 0.980999,1.147000,1.000000);
				case 126: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139998,-0.003999,0.000999, 0.000000,90.000000,95.400001, 1.009999,1.147000,1.000000);
				case 127: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139998,-0.003999,0.000999, 0.000000,90.000000,95.400001, 1.009999,1.147000,1.000000);
				case 128: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139998,0.026000,-0.010001, 0.000000,90.000000,95.400001, 1.009999,1.147000,1.000000);
				case 129: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.100998,0.016000,-0.004000, 0.000000,90.000000,95.400001, 1.009999,0.949999,1.000000);
				case 130: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.065998,0.019000,-0.001000, 0.000000,90.000000,95.400001, 1.009999,0.949999,1.000000);
				case 132: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.035998,0.005000,-0.001000, 0.000000,90.000000,95.400001, 1.009999,0.949999,1.000000);
				case 138: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.128998,0.005000,-0.001000, 0.000000,90.000000,95.400001, 1.009999,0.949999,1.000000);
				case 144: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.173998,-0.007999,-0.001000, 0.000000,90.000000,95.400001, 1.009999,1.087000,1.000000);
				case 147: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118998,-0.001999,-0.001000, 0.000000,90.000000,95.400001, 1.009999,1.087000,1.000000);
				case 148: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118998,-0.001999,-0.001000, 0.000000,90.000000,95.400001, 1.009999,1.087000,1.000000);
				case 151: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.131998,-0.004999,0.010999, 0.000000,90.000000,95.400001, 1.176999,1.087000,1.000000);
				case 154: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.109998,0.009000,0.000999, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 156: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.151998,-0.002999,0.005999, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 157: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115998,0.012000,0.005999, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 160: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115998,0.012000,0.005999, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 163: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115998,0.012000,-0.000000, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 164: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115998,0.012000,-0.000000, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 165: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115998,0.012000,-0.000000, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 166: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115998,0.012000,-0.000000, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 169: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.115998,-0.007999,-0.000000, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 170: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.126998,0.011000,-0.000000, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 171: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.133998,0.008000,-0.000000, 0.000000,90.000000,95.400001, 1.028999,1.087000,1.000000);
				case 176: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.133998,0.004000,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 177: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.182998,-0.009999,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 179: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.129998,0.000000,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 180: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.154998,-0.003999,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 182: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.111998,0.026000,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 184: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.120998,0.014000,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 185: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136998,0.004000,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 186: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136998,0.004000,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 187: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.110998,-0.006999,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 188: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.110998,0.006000,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 189: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.136998,0.006000,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 190: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.142998,-0.001999,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 191: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.142998,-0.001999,-0.000000, 0.000000,90.000000,95.400001, 1.062999,1.087000,1.000000);
				case 192: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139998,0.004999,0.002998, 0.000000,90.000000,96.400009, 1.207000,1.000000,1.000000);
				case 193: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139998,0.004999,0.002998, 0.000000,90.000000,96.400009, 1.207000,1.000000,1.000000);
				case 194: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139998,0.004999,0.002998, 0.000000,90.000000,96.400009, 1.207000,1.000000,1.000000);
				case 200: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.137998,0.004999,0.002998, 0.000000,90.000000,96.400009, 1.207000,1.000000,1.000000);
				case 210: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.101998,0.001000,0.002998, 0.000000,90.000000,96.400009, 0.946999,1.000000,1.000000);
				case 213: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139998,0.001000,-0.001001, 0.000000,90.000000,96.400009, 0.946999,1.000000,1.000000);
				case 217: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.145998,0.004000,-0.009001, 0.000000,90.000000,96.400009, 0.946999,1.000000,1.000000);
				case 221: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.154998,-0.021999,0.001999, 0.000000,90.000000,96.400009, 0.946999,1.000000,1.000000);
				case 222: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.154998,-0.021999,0.001999, 0.000000,90.000000,96.400009, 0.946999,1.000000,1.000000);
				case 223: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.158998,0.011000,-0.004000, 0.000000,90.000000,96.400009, 0.946999,1.000000,1.000000);
				case 227: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.142997,0.015000,0.000999, 0.000000,90.000000,96.400009, 0.946999,1.000000,1.000000);
				case 228: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.150997,0.015000,0.000999, 0.000000,90.000000,96.400009, 1.231999,1.000000,1.000000);
				case 229: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.101998,0.005000,0.000999, 0.000000,90.000000,96.400009, 0.948999,1.000000,1.000000);
				case 234: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.107998,-0.001999,0.001999, 0.000000,90.000000,96.400009, 0.948999,1.000000,1.000000);
				case 235: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.076998,-0.001999,0.001999, 0.000000,90.000000,96.400009, 0.948999,1.000000,1.000000);
				case 236: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.095998,0.010000,0.001999, 0.000000,90.000000,96.400009, 0.948999,1.000000,1.000000);
				case 240: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.139998,0.010000,0.001999, 0.000000,90.000000,96.400009, 1.099999,1.000000,1.000000);
				case 250: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119998,0.010000,0.001999, 0.000000,90.000000,96.400009, 1.099999,1.000000,1.000000);
				case 252: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.131998,0.010000,0.005999, 0.000000,90.000000,96.400009, 1.099999,1.000000,1.000000);
				case 258: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.131998,0.003000,0.005999, 0.000000,90.000000,96.400009, 1.099999,1.000000,1.000000);
				case 259: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.131998,0.003000,0.005999, 0.000000,90.000000,96.400009, 1.099999,1.000000,1.000000);
				case 262: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.095998,0.022000,-0.003000, 0.000000,90.000000,96.400009, 0.964999,1.000000,1.000000);
				case 265: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118998,0.010000,-0.001000, 0.000000,90.000000,96.400009, 0.987999,1.079000,1.000000);
				case 266: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118998,0.010000,-0.001000, 0.000000,90.000000,96.400009, 0.987999,1.079000,1.000000);
				case 267: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118998,-0.009999,-0.001000, 0.000000,90.000000,96.400009, 0.987999,1.079000,1.000000);
				case 268: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118998,0.004000,-0.001000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 272: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.138998,0.004000,-0.005000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 273: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.100998,0.004000,-0.003000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 274: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113998,0.025000,-0.003000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 275: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113998,0.025000,-0.003000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 276: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113998,0.025000,-0.003000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 280: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113998,0.025000,-0.003000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 281: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113998,0.025000,-0.003000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 282: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113998,0.025000,-0.003000, 0.000000,90.000000,96.400009, 0.987999,1.159999,1.000000);
				case 286: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113998,0.019000,-0.003000, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 290: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.113998,0.013000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 291: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.141998,0.015000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 292: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124998,0.009000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 293: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.162998,0.009000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 294: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.151998,0.009000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 295: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.119997,0.009000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 296: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.137998,-0.005999,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 297: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.145998,0.007000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 298: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.145998,0.007000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 299: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.150998,0.007000,0.001999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 300: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124998,0.007000,0.007999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 301: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124998,0.007000,0.007999, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 302: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124998,0.014000,-0.004000, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 303: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124998,0.014000,-0.004000, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 304: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124998,0.014000,-0.004000, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 305: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.124998,0.014000,-0.004000, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 310: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.117998,0.003000,-0.004000, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				case 311: SetPlayerAttachedObjectEx (playerid, 2, objectid, 2, 0.118998,0.003000,-0.004000, 0.000000,90.000000,96.400009, 1.058999,1.159999,1.000000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 9)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 5)) RemovePlayerAttachedObject(playerid, 5);
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.003998,-0.001999, 51.200016,53.199977,142.800018, 0.963999,0.916999,1.000000);
				case 2: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.001999,-0.005999, 51.200016,53.199977,142.800018, 1.226999,1.173999,1.000000);
				case 3: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.001999,-0.007999, 51.200016,53.199977,142.800018, 1.226999,1.173999,1.000000);
				case 4: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.001999,-0.012999, 51.200016,53.199977,142.800018, 1.226999,1.173999,1.000000);
				case 5: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.011000,-0.018998,-0.000999, 51.200016,70.499969,142.800018, 1.354999,1.441999,1.000000);
				case 8: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.011000,-0.003998,-0.011999, 51.200016,70.499969,142.800018, 1.354999,1.441999,1.000000);
				case 11: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.011000,-0.007998,-0.001999, 51.200016,70.499969,142.800018, 1.102999,1.100999,1.000000);
				case 13: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.011000,-0.007998,-0.001999, 51.200016,70.499969,142.800018, 1.102999,1.100999,1.000000);
				case 14: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.011000,-0.007998,-0.001999, 51.200016,70.499969,142.800018, 1.102999,1.100999,1.000000);
				case 15: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.002998,-0.015999, 51.200016,70.499969,142.800018, 1.102999,1.100999,1.000000);
				case 18: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.010998,-0.012999, 51.200016,70.499969,142.800018, 1.102999,1.100999,1.000000);
				case 20: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.006998,-0.006999, 51.200016,70.499969,142.800018, 1.102999,1.100999,1.000000);
				case 21: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.006998,-0.006999, 51.200016,70.499969,142.800018, 1.236999,1.188999,1.000000);
				case 23: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.006998,-0.006999, 51.200016,70.499969,142.800018, 1.236999,1.188999,1.000000);
				case 24: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.018999,-0.009998,-0.011999, 51.200016,70.499969,142.800018, 1.236999,1.188999,1.000000);
				case 25: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.010999,-0.008998,-0.008999, 51.200016,70.499969,142.800018, 1.236999,1.188999,1.000000);
				case 26: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.010999,-0.008998,-0.008999, 51.200016,70.499969,142.800018, 1.236999,1.188999,1.000000);
				case 28: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.010999,-0.008998,-0.005999, 51.200016,70.499969,142.800018, 1.236999,1.188999,1.000000);
				case 30: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.010999,-0.003998,-0.005999, 51.200016,70.499969,142.800018, 1.236999,1.188999,1.000000);
				case 31: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.010999,-0.003998,-0.005999, 51.200016,70.499969,142.800018, 1.236999,1.188999,1.000000);
				case 32: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.010999,-0.003998,0.008001, 51.200016,70.499969,142.800018, 0.964999,0.921999,1.000000);
				case 34: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.010999,-0.003998,-0.011998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 35: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.054000,-0.003998,-0.011998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 36: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.054000,-0.003998,-0.015999, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 37: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.054000,-0.003998,-0.015999, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 38: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.024000,-0.003998,-0.015999, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 40: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.024000,-0.003998,-0.010998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 41: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.004000,-0.005998,0.001001, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 42: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.004000,-0.005998,-0.012998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 43: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.004000,-0.005998,-0.001998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 44: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.004000,-0.005998,-0.001998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 45: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.004000,-0.015998,-0.008998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 46: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.004000,-0.008998,-0.008998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 47: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.004000,0.001001,-0.000998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 48: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,0.001001,-0.003998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 49: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.007998,-0.003998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 51: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.010998,-0.011998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 52: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.010998,-0.011998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 53: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.003998,-0.011998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 55: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.003998,-0.001998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 56: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.003998,-0.003998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 57: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.026999,0.005001,-0.003998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 58: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003000,-0.003998,-0.007998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 59: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003000,-0.011998,-0.004998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 60: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003000,-0.002998,-0.000998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 61: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.011999,-0.014998,-0.000998, 51.200016,70.499969,142.800018, 1.078999,1.170999,1.000000);
				case 66: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.008998,-0.007998, 51.200016,70.499969,142.800018, 1.271999,1.359999,1.000000);
				case 67: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.008998,-0.007998, 51.200016,70.499969,142.800018, 1.271999,1.359999,1.000000);
				case 69: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.008998,-0.004998, 51.200016,70.499969,142.800018, 0.990999,1.040999,1.000000);
				case 72: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.008998,-0.004998, 51.200016,70.499969,142.800018, 0.990999,1.040999,1.000000);
				case 73: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.010998,-0.004998, 51.200016,70.499969,142.800018, 0.990999,1.040999,1.000000);
				case 78: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.010998,-0.003998, 51.200016,70.499969,142.800018, 0.990999,1.040999,1.000000);
				case 79: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.014998,-0.005998, 51.200016,70.499969,142.800018, 1.145999,0.990999,1.000000);
				case 86: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.014998,-0.005998, 51.200016,70.499969,142.800018, 1.145999,0.990999,1.000000);
				case 88: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,0.001001,-0.028998, 51.200016,70.499969,142.800018, 1.145999,0.990999,1.000000);
				case 90: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.004998,-0.007998, 51.200016,70.499969,142.800018, 1.145999,0.990999,1.000000);
				case 91: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.004998,-0.004998, 51.200016,70.499969,142.800018, 0.925999,0.990999,1.000000);
				case 93: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.004998,-0.004998, 51.200016,70.499969,142.800018, 0.925999,0.990999,1.000000);
				case 94: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.009998,-0.004998, 51.200016,70.499969,142.800018, 0.925999,0.990999,1.000000);
				case 95: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.001998,-0.004998, 51.200016,70.499969,142.800018, 0.925999,0.990999,1.000000);
				case 96: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.017998,-0.008998, 51.200016,70.499969,142.800018, 1.093999,1.223999,1.000000);
				case 97: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.040998,-0.008998, 51.200016,70.499969,142.800018, 1.093999,1.223999,1.000000);
				case 98: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.002998,0.001001, 51.200016,70.499969,142.800018, 1.216999,1.287999,1.000000);
				case 100: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.002998,-0.002998, 51.200016,70.499969,142.800018, 1.216999,1.287999,1.000000);
				case 101: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.007998,-0.006998, 51.200016,70.499969,142.800018, 1.216999,1.287999,1.000000);
				case 102: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.003998,-0.004998, 51.200016,70.499969,142.800018, 1.216999,1.287999,1.000000);
				case 104: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.009999,0.001001,-0.001998, 51.200016,70.499969,142.800018, 1.216999,1.287999,1.000000);
				case 105: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.026999,-0.003998,0.005001, 51.200016,70.499969,142.800018, 1.363999,1.386999,1.000000);
				case 106: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.026999,0.000001,0.005001, 51.200016,70.499969,142.800018, 1.281999,1.385999,1.000000);
				case 107: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.014999,0.000001,0.005001, 51.200016,70.499969,142.800018, 1.281999,1.385999,1.000000);
				case 108: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.014999,-0.003998,0.005001, 51.200016,70.499969,142.800018, 1.281999,1.385999,1.000000);
				case 109: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.014999,-0.003998,0.005001, 51.200016,70.499969,142.800018, 1.281999,1.385999,1.000000);
				case 110: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.014999,-0.003998,0.005001, 51.200016,70.499969,142.800018, 1.281999,1.385999,1.000000);
				case 112: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.022999,-0.008998,-0.012998, 51.200016,70.499969,142.800018, 1.281999,1.385999,1.000000);
				case 114: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.001998,0.001001, 51.200016,70.499969,142.800018, 1.281999,1.385999,1.000000);
				case 116: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.001998,0.001001, 51.200016,70.499969,142.800018, 1.281999,1.385999,1.000000);
				case 119: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.006000,-0.009998,-0.003998, 51.200016,70.499969,142.800018, 1.128999,1.127999,1.000000);
				case 121: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.004999,-0.007998,-0.003998, 51.200016,70.499969,142.800018, 1.232999,1.381999,1.000000);
				case 122: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.004999,-0.001998,-0.003998, 51.200016,70.499969,142.800018, 1.232999,1.381999,1.000000);
				case 124: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.004999,-0.010998,-0.003998, 51.200016,70.499969,142.800018, 1.232999,1.381999,1.000000);
				case 125: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.004999,-0.010998,-0.003998, 51.200016,70.499969,142.800018, 1.232999,1.381999,1.000000);
				case 126: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.007000,-0.010998,-0.010998, 51.200016,70.499969,142.800018, 1.232999,1.381999,1.000000);
				case 128: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.007000,-0.004998,-0.005998, 51.200016,70.499969,142.800018, 1.232999,1.202999,1.000000);
				case 129: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.024999,-0.005998,-0.005998, 51.200016,70.499969,142.800018, 1.232999,1.202999,1.000000);
				case 132: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.009999,-0.011998,0.013001, 51.200016,70.499969,142.800018, 1.088000,0.977999,1.000000);
				case 133: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.009999,-0.005998,-0.008998, 51.200016,70.499969,142.800018, 1.088000,0.977999,1.000000);
				case 134: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.009999,-0.012998,-0.005998, 51.200016,70.499969,142.800018, 1.088000,0.977999,1.000000);
				case 142: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.004998,-0.001998, 51.200016,70.499969,142.800018, 1.088000,0.977999,1.000000);
				case 147: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.004998,-0.001998, 51.200016,70.499969,142.800018, 0.984000,0.977999,1.000000);
				case 149: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.015998,-0.001998, 51.200016,70.499969,142.800018, 1.120999,1.087999,1.000000);
				case 151: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.010998,-0.005998, 51.200016,70.499969,142.800018, 1.120999,1.087999,1.000000);
				case 154: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.013998,-0.005998, 51.200016,70.499969,142.800018, 1.120999,1.087999,1.000000);
				case 155: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.000998,-0.005998, 51.200016,70.499969,142.800018, 1.250000,1.087999,1.000000);
				case 156: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.009999,-0.000998,-0.009998, 51.200016,70.499969,142.800018, 1.064000,1.210999,1.000000);
				case 160: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.021000,-0.009998,-0.008998, 51.200016,70.499969,142.800018, 1.064000,1.210999,1.000000);
				case 163: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.021000,-0.009998,-0.003998, 51.200016,70.499969,142.800018, 1.212000,1.210999,1.000000);
				case 164: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.021000,-0.009998,-0.003998, 51.200016,70.499969,142.800018, 1.212000,1.210999,1.000000);
				case 165: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.021000,-0.004998,-0.004998, 51.200016,70.499969,142.800018, 1.310000,1.304999,1.000000);
				case 166: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.021000,-0.001998,-0.004998, 51.200016,70.499969,142.800018, 1.310000,1.304999,1.000000);
				case 167: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.021000,-0.010998,-0.013999, 51.200016,70.499969,142.800018, 1.310000,1.304999,1.000000);
				case 169: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.005998,-0.004998, 51.200016,70.499969,142.800018, 1.016000,1.304999,1.000000);
				case 170: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.005998,0.002001, 51.200016,70.499969,142.800018, 1.292000,1.304999,1.000000);
				case 171: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.005998,-0.007998, 51.200016,70.499969,142.800018, 1.292000,1.304999,1.000000);
				case 172: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.008998,0.001001, 51.200016,70.499969,142.800018, 0.956000,1.095999,1.000000);
				case 173: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.006998,0.000001, 51.200016,70.499969,142.800018, 1.195000,1.197999,1.000000);
				case 174: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.003998,0.000001, 51.200016,70.499969,142.800018, 1.195000,1.197999,1.000000);
				case 175: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.003998,0.000001, 51.200016,70.499969,142.800018, 1.450000,1.353999,1.000000);
				case 176: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.003998,0.000001, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 177: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.003998,0.000001, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 179: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.001998,0.000001, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 180: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.001998,0.000001, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 181: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.017998,-0.008998, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 184: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.011998,-0.001998, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 185: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.008998,-0.010999, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 188: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.001998,0.000000, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 189: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.007998,-0.008999, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 191: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.007998,-0.008999, 51.200016,70.499969,142.800018, 1.205000,1.137999,1.000000);
				case 192: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.007998,-0.000999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 193: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.007998,-0.000999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 194: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.007998,-0.000999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 195: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.007998,-0.000999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 196: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.003998,-0.004999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 198: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.014998,-0.004999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 200: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.021999,-0.008998,-0.000999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 201: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.021999,-0.008998,-0.000999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 202: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.007998,-0.004999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 206: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.007998,-0.004999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 207: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.007998,-0.004999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 209: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.007998,0.008000, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 210: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.007998,-0.003999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 211: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.011998,-0.003999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 214: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.011998,-0.003999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 215: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.006998,-0.003999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 216: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.006998,-0.003999, 51.200016,70.499969,142.800018, 1.041000,1.137999,1.000000);
				case 217: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.003998,-0.003999, 51.200016,70.499969,142.800018, 1.219999,1.255999,1.000000);
				case 220: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.010998,-0.003999, 51.200016,70.499969,142.800018, 1.219999,1.255999,1.000000);
				case 221: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.005998,-0.006999, 51.200016,70.499969,142.800018, 1.219999,1.255999,1.000000);
				case 222: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.005998,-0.006999, 51.200016,70.499969,142.800018, 1.219999,1.255999,1.000000);
				case 223: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.005998,-0.006999, 51.200016,70.499969,142.800018, 1.219999,1.255999,1.000000);
				case 224: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.005998,-0.006999, 51.200016,70.499969,142.800018, 1.219999,1.255999,1.000000);
				case 225: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.005998,-0.006999, 51.200016,70.499969,142.800018, 1.219999,1.255999,1.000000);
				case 226: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.005998,-0.006999, 51.200016,70.499969,142.800018, 1.074999,1.255999,1.000000);
				case 229: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.003998,-0.006999, 51.200016,70.499969,142.800018, 1.074999,1.255999,1.000000);
				case 231: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.003998,-0.006999, 51.200016,70.499969,142.800018, 1.074999,1.255999,1.000000);
				case 233: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.006998,-0.002999, 51.200016,70.499969,142.800018, 1.074999,1.255999,1.000000);
				case 234: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.006998,-0.002999, 51.200016,70.499969,142.800018, 1.074999,1.255999,1.000000);
				case 235: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.012998,-0.002999, 51.200016,70.499969,142.800018, 1.074999,1.255999,1.000000);
				case 236: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.012998,-0.002999, 51.200016,70.499969,142.800018, 1.074999,1.255999,1.000000);
				case 239: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.012998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 240: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.004998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 247: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.004998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 250: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.009998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 252: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.004998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 254: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.002998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 255: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.008998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 258: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.004998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 259: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.004998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 263: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.004998,-0.002999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 265: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.015998,-0.005999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 266: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.015998,-0.005999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 267: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.015998,-0.005999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 269: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.003999,-0.015998,-0.005999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 270: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.004998,0.005001, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 271: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.009000,-0.008998,-0.006999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 273: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.020000,-0.013998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 274: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.005998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 275: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.005998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 276: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.008000,-0.005998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 280: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.005998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 281: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.005998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 282: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.005998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 283: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.005998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 285: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.001000,-0.002998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 287: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.008998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 288: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.003998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 289: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.003998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 291: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.015000,-0.003998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 292: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, 0.001999,-0.003998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 293: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.050999,-0.003998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 298: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.028999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 300: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 301: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 302: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 303: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 304: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 305: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 306: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 307: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 308: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 309: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 310: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				case 311: SetPlayerAttachedObjectEx (playerid, 5, objectid, 6, -0.003999,-0.004998,-0.009999, 51.200016,70.499969,142.800018, 1.234999,1.255999,1.000000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 10)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 6)) RemovePlayerAttachedObject(playerid, 6);
			switch (skinid)
			{
				case 1..311: SetPlayerAttachedObjectEx(playerid, 6, objectid, 15,  0.162000, -0.027000, 0.033000, 0.000000, 0.000000, 0.000000,  0.009999, 0.009999, 0.009999); // 21
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 11)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 1)) RemovePlayerAttachedObject(playerid, 1);
			switch (skinid)
			{
				case 1, 3, 4, 12, 14, 15, 16, 17, 18, 19, 24, 27, 28, 30, 32, 33, 34, 36, 37, 38, 40, 42, 43, 44, 45, 47, 48, 49, 50, 51, 52, 55, 56, 57, 58: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,0.000000, -0.107999, 0.000000, 3.199999, 62.900001, -1.400000, 0.717000, 0.883001, 0.566000);
				case 61, 62, 63, 64, 68, 69, 70, 71, 72, 73, 75, 76, 79, 80, 81, 82, 83, 87, 88, 90, 91, 92, 93, 94, 95, 96, 97, 99, 108, 109, 111, 112, 113, 114: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,0.000000, -0.107999, 0.000000, 3.199999, 62.900001, -1.400000, 0.717000, 0.883001, 0.566000);
				case 119, 124, 131, 132, 133, 134, 137, 138, 139, 140, 145, 146, 147, 148, 150, 153, 154, 158, 159, 160, 161, 162, 163, 164, 165, 169, 171: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,0.000000, -0.107999, 0.000000, 3.199999, 62.900001, -1.400000, 0.717000, 0.883001, 0.566000);
				case 172, 173, 175, 179, 181, 186, 187, 188, 189, 190, 191, 192, 193, 194, 211, 214, 215, 216, 217, 219, 224, 225, 226, 228, 229, 230: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,0.000000, -0.107999, 0.000000, 3.199999, 62.900001, -1.400000, 0.717000, 0.883001, 0.566000);
				case 233, 234, 235, 236, 240, 249, 251, 252, 253, 255, 256, 257, 260, 261, 268, 273, 274, 275, 276, 280, 281, 282, 283, 284, 288, 290, 291, 292, 293, 296, 300, 301, 302, 303, 304, 305, 310, 311: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,0.000000, -0.107999, 0.000000, 3.199999, 62.900001, -1.400000, 0.717000, 0.883001, 0.566000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 12)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 1)) RemovePlayerAttachedObject(playerid, 1);
			switch( skinid)
			{
				case 1: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0620, 0.0500, 0.0000, -0.0000, -2.5000, 2.7000, 1.0390, 1.3690, 1.2180);
				case 2: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0660, 0.0420, 0.0000, -0.3000, -2.5000, -5.1000, 1.0390, 1.3690, 1.2180);
				case 3: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0500, 0.0550, 0.0000, -0.3000, -2.5000, 2.1000, 1.0390, 1.3690, 1.2180);
				case 4: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0350, 0.0300, -0.0090, -0.3000, -2.5000, 2.1000, 1.2340, 1.3690, 1.1110);
				case 5: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0050, 0.0610, 0.0060, -0.1000, 0.2000, 3.4000, 1.3660, 1.9010, 1.6950);
				case 6: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0370, 0.0480, 0.0060, -0.1000, 0.2000, 4.2000, 1.3040, 1.4700, 1.2540);
				case 7: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0480, 0.0060, -0.3000, 0.2000, 4.2000, 1.2390, 1.4700, 1.2540);
				case 8: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0480, 0.0060, -0.3000, 0.2000, 4.2000, 1.2390, 1.4380, 1.2540);
				case 9: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0480, 0.0060, -0.3000, 0.2000, 4.2000, 1.2390, 1.4380, 1.1240);
				case 10: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0770, 0.0640, 0.0060, -0.8000, 0.2000, 3.3000, 1.2390, 1.6660, 1.2340);
				case 11: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0380, -0.0180, 1.8000, -4.2000, 3.3000, 1.2200, 1.0430, 1.0480);
				case 12: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0110, 0.0380, 0.0040, 1.8000, 0.7000, 3.3000, 1.1190, 1.2710, 1.0480);
				case 13: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0750, 0.0380, 0.0040, 1.8000, 0.7000, 3.3000, 1.1190, 1.2710, 1.0480);
				case 14: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0620, 0.0610, 0.0040, 1.8000, -3.5000, 3.3000, 1.1190, 1.2710, 1.0480);
				case 15: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0620, 0.0510, 0.0040, 1.8000, -3.5000, -4.6000, 1.1190, 1.2710, 1.1070);
				case 16: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0920, 0.0330, 0.0040, 1.8000, -3.5000, 6.3000, 1.1190, 1.4250, 1.1070);
				case 17: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0360, 0.0330, 0.0040, 1.8000, -3.5000, 6.3000, 1.1190, 1.4250, 1.1070);
				case 18: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0070, 0.0330, 0.0040, 1.8000, -3.5000, 6.3000, 1.1190, 1.4250, 1.1070);
				case 19: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0660, 0.0330, 0.0040, 1.8000, -1.4000, 5.8000, 1.1190, 1.4250, 1.1070);
				case 20: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0480, 0.0330, -0.0060, 1.8000, -2.8000, 5.8000, 1.1190, 1.4250, 1.1070);
				case 21: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0370, 0.0330, -0.0020, 1.8000, -1.5000, 5.8000, 1.1190, 1.4490, 1.1450);
				case 22: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0500, 0.0330, -0.0020, 1.8000, -1.5000, 5.8000, 1.1190, 1.4490, 1.1450);
				case 23: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0290, 0.0560, -0.0020, 1.8000, -1.5000, 5.8000, 1.1190, 1.4490, 1.1120);
				case 24: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0400, 0.0560, 0.0180, 1.8000, -1.5000, 5.8000, 1.1190, 1.4490, 1.1120);
				case 25: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0400, 0.0560, 0.0180, 1.8000, -1.5000, 5.8000, 1.1190, 1.4490, 1.1120);
				case 26: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0400, 0.0560, 0.0180, 1.8000, -1.5000, 5.8000, 1.1190, 1.4490, 1.1120);
				case 27: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0400, 0.0560, 0.0100, 1.8000, -1.5000, 5.8000, 1.1190, 1.4490, 1.1120);
				case 28: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0400, 0.0560, 0.0100, 1.8000, -1.5000, 5.8000, 1.1190, 1.4490, 1.1120);
				case 29: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0220, 0.0410, 0.0100, 1.8000, -1.5000, 5.8000, 1.1190, 1.5150, 1.2870);
				case 30: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0640, 0.0540, -0.0020, 1.3000, -1.5000, 1.9000, 1.0530, 1.2870, 1.1100);
				case 31: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0290, 0.0410, 0.0100, 1.8000, -1.5000, 5.8000, 1.1190, 1.5150, 1.1400);
				case 32: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0360, 0.0410, -0.0010, 1.8000, -1.5000, 5.8000, 1.1190, 1.1630, 0.8970);
				case 33: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0020, 0.0410, -0.0010, 1.8000, -1.5000, 5.8000, 1.1190, 1.3100, 1.0600);
				case 34: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0470, 0.0410, -0.0010, 1.8000, -1.5000, 5.8000, 1.1190, 1.3100, 1.0600);
				case 35: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0470, 0.0410, -0.0010, 1.8000, -1.5000, 2.3000, 1.1190, 1.3400, 1.2030);
				case 36: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0470, 0.0410, -0.0010, 1.8000, -1.5000, 2.3000, 1.1190, 1.3400, 1.2200);
				case 37: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0470, 0.0410, -0.0010, 1.8000, -1.5000, 2.3000, 1.1190, 1.2900, 1.2200);
				case 38: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0300, 0.0410, -0.0010, 1.8000, -1.5000, 2.3000, 1.1190, 1.2900, 1.0950);
				case 39: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0300, 0.0410, -0.0010, 1.8000, -1.5000, 2.3000, 1.1190, 1.5790, 1.2180);
				case 40: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0240, 0.0410, -0.0010, 1.8000, -1.5000, 2.3000, 1.1190, 1.2610, 1.0100);
				case 41: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0950, 0.0410, -0.0010, 1.8000, -1.5000, 2.3000, 1.1190, 1.2610, 1.0100);
				case 42: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0520, 0.0830, -0.0010, 1.8000, -1.5000, 2.3000, 1.1190, 1.4630, 1.0750);
				case 43: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0830, -0.0010, 1.8000, -1.5000, -3.5000, 1.1190, 1.3010, 1.0350);
				case 44: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0530, -0.0010, 1.8000, -1.5000, 2.1000, 1.1190, 1.3010, 1.0350);
				case 45: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0200, 0.0530, -0.0010, 1.8000, -1.5000, 2.1000, 1.1190, 1.3010, 1.0350);
				case 46: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0290, 0.0460, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.3010, 1.0930);
				case 47: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0640, 0.0490, -0.0020, 1.3000, -1.5000, 1.9000, 1.0870, 1.3330, 1.1410);
				case 48: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0790, 0.0540, 0.0000, 0.0000, 0.0000, 0.0000, 1.0110, 1.2280, 1.1020);
				case 50: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0660, 0.0560, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.5980, 1.1400);
				case 51: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0660, 0.0560, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.3270, 1.1400);
				case 52: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0660, 0.0210, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.3270, 1.1400);
				case 53: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0200, 0.0210, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.3270, 1.0720);
				case 54: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0390, 0.0440, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.3550, 1.0720);
				case 55: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0420, 0.0440, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.2070, 0.9720);
				case 56: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0360, 0.0440, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.2070, 0.9720);
				case 57: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0740, 0.0200, -0.0040, 1.8000, -1.5000, 2.1000, 1.1190, 1.3510, 1.0480);
				case 58: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0150, 0.0440, 0.0020, 1.8000, -1.5000, 2.1000, 1.1190, 1.1430, 1.0480);
				case 59: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0360, 0.0440, 0.0020, 1.8000, -1.5000, 2.1000, 1.1190, 1.2260, 1.0480);
				case 60: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0420, 0.0440, 0.0020, 1.8000, -1.5000, 1.4000, 1.1190, 1.2260, 1.1380);
				case 61: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0420, 0.0410, 0.0050, 1.8000, -1.5000, 1.4000, 1.1190, 1.2260, 1.1380);
				case 62: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0420, 0.0410, 0.0050, 1.8000, -1.5000, 1.4000, 1.1190, 1.2260, 1.1380);
				case 63: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0490, 0.0620, 0.0050, 1.8000, -1.5000, -2.6000, 1.1190, 1.2780, 1.1380);
				case 64: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0490, 0.0780, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2780, 1.1380);
				case 65: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0630, 0.0530, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2780, 1.1380);
				case 66: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0600, 0.0200, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2780, 1.1380);
				case 67: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0600, 0.0410, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.3430, 1.1670);
				case 68: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0370, 0.0410, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.3430, 1.1670);
				case 69: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0600, 0.0410, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2540, 1.0680);
				case 70: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0410, 0.0410, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2540, 1.2050);
				case 71: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0410, 0.0410, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2540, 1.1380);
				case 72: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0410, 0.0410, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2540, 1.1380);
				case 73: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0410, 0.0410, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2540, 1.1380);
				case 74: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0540, 0.0410, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2540, 1.1380);
				case 75: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0540, 0.0540, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2200, 1.0300);
				case 76: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0540, 0.0540, 0.0050, 1.8000, -1.5000, 4.0000, 1.1190, 1.2200, 1.0300);
				case 77: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0260, 0.0680, -0.0020, 1.8000, -1.5000, 2.2000, 1.1190, 1.5900, 1.1230);
				case 78: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0670, 0.0490, -0.0060, 1.8000, -1.5000, 2.2000, 1.1190, 1.2940, 1.1230);
				case 79: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0510, -0.0060, 1.8000, -1.5000, 2.2000, 1.1190, 1.4520, 1.2090);
				case 80: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0510, -0.0060, 1.8000, -1.5000, 2.2000, 1.1190, 1.2770, 1.1150);
				case 81: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0510, -0.0060, 1.8000, -1.5000, 2.2000, 1.1190, 1.2770, 1.1150);
				case 82: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0510, -0.0060, 1.8000, -1.5000, 2.2000, 1.1190, 1.2770, 1.1150);
				case 83: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0510, -0.0060, 1.8000, -1.5000, 2.2000, 1.1190, 1.2770, 1.1150);
				case 84: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0510, -0.0060, 1.8000, -1.5000, 2.2000, 1.1190, 1.2770, 1.1150);
				case 85: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0600, 0.0540, -0.0060, 1.8000, -1.5000, 2.2000, 1.1190, 1.4640, 1.1150);
				case 86: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0440, 0.0420, 0.0040, 1.8000, -1.5000, 2.2000, 1.1190, 1.5300, 1.2170);
				case 87: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0440, 0.0590, 0.0040, 1.8000, -1.5000, 2.2000, 1.1190, 1.3040, 1.2170);
				case 88: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0380, 0.0590, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.3040, 1.0840);
				case 89: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0380, 0.0590, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.4190, 1.1430);
				case 90: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0520, 0.0750, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.3060, 1.1430);
				case 91: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0520, 0.0750, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.3060, 1.0350);
				case 92: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0520, 0.0750, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.3060, 1.0350);
				case 93: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0680, 0.0450, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.3060, 1.0350);
				case 94: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0080, 0.0520, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.1430, 1.0350);
				case 95: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0080, 0.0520, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.1430, 1.0350);
				case 96: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0790, 0.0390, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.2220, 1.0350);
				case 97: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0310, 0.0390, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.2220, 1.0350);
				case 98: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0310, 0.0390, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.2220, 1.0350);
				case 99: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0840, 0.0390, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.2220, 1.0350);
				case 100: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0450, 0.0390, 0.0040, 1.8000, -1.5000, 2.2000, 1.1290, 1.2880, 1.0350);
				case 101: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0800, 0.0080, 0.0120, 1.8000, -1.5000, 2.2000, 1.1290, 1.3710, 1.1500);
				case 102: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0500, 0.0510, -0.0020, 1.8000, -1.5000, 2.2000, 1.1290, 1.3710, 1.1500);
				case 103: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0340, 0.0540, 0.0080, 0.0000, 0.0000, 0.0000, 1.3390, 1.6430, 1.4670);
				case 104: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0270, 0.0510, -0.0020, 1.8000, -1.5000, 2.2000, 1.1290, 1.5560, 1.2040);
				case 105: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0770, 0.0510, 0.0140, 1.8000, -0.4000, 2.1000, 1.1290, 1.8770, 1.4050);
				case 106: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0340, 0.0540, 0.0080, 0.0000, 0.0000, 0.0000, 1.3390, 1.6430, 1.4670);
				case 107: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0310, 0.0560, 0.0140, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.3030);
				case 108: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0310, 0.0560, 0.0140, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1690);
				case 109: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0450, 0.0560, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1690);
				case 110: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0450, 0.0560, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1690);
				case 111: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0560, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1690);
				case 112: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0100, 0.0560, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1690);
				case 113: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0370, 0.0430, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1690);
				case 114: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0470, 0.0430, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1690);
				case 115: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0470, 0.0430, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1690);
				case 116: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0470, 0.0460, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.2210);
				case 117: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0190, 0.0460, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1670);
				case 118: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0190, 0.0460, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1670);
				case 119: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0460, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1670);
				case 120: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0460, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1670);
				case 121: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0460, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.4340, 1.1670);
				case 122: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0460, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.2680, 1.1270);
				case 123: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0350, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.3160, 1.1270);
				case 124: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0600, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.3160, 1.1270);
				case 125: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0600, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.3160, 1.1270);
				case 126: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0600, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.3160, 1.1270);
				case 127: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, 0.0450, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.3470, 1.1270);
				case 128: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0300, 0.0450, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.3470, 1.1270);
				case 129: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0540, 0.0450, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.2310, 0.9760);
				case 130: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0350, 0.0620, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.5810, 1.1460);
				case 131: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0600, 0.0670, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.2650, 1.0470);
				case 132: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0030, 0.0350, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.0880, 0.9580);
				case 133: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0350, 0.0050, 1.8000, -0.4000, 2.1000, 1.1290, 1.0880, 0.9580);
				case 134: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0350, 0.0050, 1.8000, -0.4000, 2.1000, 1.0250, 1.0880, 0.9580);
				case 135: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0550, 0.0470, 0.0050, 1.8000, -0.4000, 2.1000, 1.0250, 1.3110, 1.2140);
				case 136: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0010, 0.0270, 0.0050, 1.8000, -0.4000, 2.1000, 1.0250, 1.1310, 1.0510);
				case 137: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0270, 0.0050, 1.8000, -0.4000, 2.1000, 1.0250, 1.1310, 0.9950);
				case 138: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0800, 0.0640, 0.0050, 1.8000, -0.4000, 2.1000, 1.0250, 1.2680, 0.9950);
				case 139: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0800, 0.0640, 0.0050, 1.8000, -0.4000, 2.1000, 1.0250, 1.2680, 0.9950);
				case 140: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0800, 0.0720, -0.0070, 1.8000, -0.4000, 2.1000, 1.0250, 1.4210, 0.9950);
				case 141: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0590, 0.0530, -0.0070, 1.8000, -0.4000, 2.1000, 1.0250, 1.2380, 0.9950);
				case 142: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0590, 0.0500, -0.0070, 1.8000, -0.3000, 2.1000, 1.0250, 1.3750, 1.1900);
				case 143: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0590, 0.0500, 0.0040, 1.8000, -0.3000, 2.1000, 1.0250, 1.3750, 1.2540);
				case 144: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0590, 0.0500, 0.0040, 1.8000, -0.3000, 2.1000, 1.0250, 1.3750, 1.2540);
				case 145: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0840, 0.0500, 0.0040, 1.8000, -0.3000, 2.1000, 1.0250, 1.3750, 1.0900);
				case 146: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0840, 0.0500, 0.0040, 1.8000, -0.3000, 2.1000, 1.0250, 1.3750, 1.0900);
				case 147: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0660, 0.0530, 0.0040, 1.8000, -0.3000, 2.1000, 1.0780, 1.3750, 1.0900);
				case 148: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0440, 0.0460, 0.0040, 1.8000, -0.3000, 2.1000, 1.0780, 1.2980, 1.0250);
				case 149: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0700, 0.0300, 0.0040, 1.8000, -0.3000, 2.1000, 1.0780, 1.4920, 1.3080);
				case 150: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0590, 0.0440, 0.0040, 1.8000, -0.3000, 2.1000, 1.0780, 1.1530, 1.0620);
				case 151: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0380, 0.0800, 0.0180, 1.8000, -0.3000, 2.1000, 1.0780, 1.7300, 1.1490);
				case 152: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0380, 0.0520, 0.0180, 1.8000, -0.3000, 2.1000, 1.0780, 1.1930, 0.9780);
				case 153: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0460, 0.0560, 0.0180, 1.8000, -0.3000, 2.1000, 1.0780, 1.3230, 1.0990);
				case 154: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0460, 0.0560, 0.0180, 1.8000, -0.3000, 2.1000, 1.0780, 1.3230, 1.0990);
				case 155: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0560, 0.0000, 1.8000, -0.3000, 2.1000, 1.0780, 1.3660, 1.2580);
				case 156: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0560, 0.0000, 1.8000, -0.3000, 2.1000, 1.0780, 1.3660, 1.1970);
				case 157: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0560, 0.0000, 1.8000, -0.3000, 2.1000, 1.0780, 1.3020, 1.0250);
				case 158: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0550, 0.0560, 0.0130, 1.8000, -0.3000, 2.1000, 1.0780, 1.3020, 1.0250);
				case 159: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0550, 0.0560, 0.0130, 1.8000, -0.3000, 2.1000, 1.0780, 1.3020, 1.0250);
				case 160: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0550, 0.0560, 0.0130, 1.8000, -0.3000, 2.1000, 1.0400, 1.1950, 1.0250);
				case 161: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0680, 0.0340, 0.0130, 1.8000, -0.3000, 2.1000, 1.0760, 1.2280, 1.0590);
				case 162: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0680, 0.0340, 0.0130, 1.8000, -0.3000, 2.1000, 1.0760, 1.2280, 1.0590);
				case 163: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0950, 0.0500, 0.0130, 1.8000, -0.3000, 2.1000, 1.0760, 1.2280, 1.0590);
				case 164: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0950, 0.0500, 0.0130, 1.8000, -0.3000, 2.1000, 1.0760, 1.2280, 1.0590);
				case 165: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0030, 0.0500, 0.0080, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.1180);
				case 166: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0030, 0.0500, 0.0080, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.1180);
				case 167: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0080, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.1180);
				case 168: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0420, 0.0080, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.1180);
				case 169: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0360, 0.0420, 0.0080, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.0410);
				case 170: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0420, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.0750);
				case 171: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0420, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.0750);
				case 172: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0420, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.0750);
				case 173: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0420, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.0750);
				case 174: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0420, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.0750);
				case 175: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0420, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2750, 1.0750);
				case 176: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0420, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.3790, 1.1860);
				case 177: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0420, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.3790, 1.1860);
				case 178: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0610, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.3030, 1.0500);
				case 179: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0470, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.3030, 1.0500);
				case 180: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0470, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.4770, 1.2000);
				case 181: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0710, 0.0530, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.3080, 1.1240);
				case 182: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0530, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.3080, 1.1240);
				case 183: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0530, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.3080, 1.1240);
				case 184: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0400, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 1.1240);
				case 185: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0400, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 1.1240);
				case 186: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0400, 0.0030, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 1.1240);
				case 187: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0400, 0.0210, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 1.1240);
				case 188: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0400, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 1.1240);
				case 189: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0400, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 1.1240);
				case 190: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0930, 0.0570, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 1.1240);
				case 191: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0930, 0.0570, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 0.9760);
				case 192: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0930, 0.0570, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 0.9760);
				case 193: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0930, 0.0570, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 0.9760);
				case 194: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0930, 0.0570, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 0.9760);
				case 195: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0930, 0.0570, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 0.9760);
				case 196: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0270, 0.0570, 0.0090, 1.8000, -0.3000, 2.1000, 1.0760, 1.2490, 0.9760);
				case 197: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0070, 0.0570, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3830, 1.1280);
				case 198: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0650, 0.0570, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2850, 1.0450);
				case 199: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0250, 0.0680, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3860, 1.1320);
				case 200: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0310, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2790, 1.1320);
				case 201: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2790, 1.0520);
				case 202: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2790, 1.0520);
				case 203: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3600, 1.1890);
				case 204: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3600, 1.1890);
				case 205: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0620, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.4640, 1.1890);
				case 206: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0620, 0.0480, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3010, 1.0910);
				case 207: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0440, 0.0480, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3010, 1.0910);
				case 208: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0440, 0.0480, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3010, 1.0910);
				case 209: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0030, 0.0290, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.1230, 1.0910);
				case 210: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0030, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.1230, 0.9260);
				case 211: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0680, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.1230, 0.9980);
				case 212: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0040, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.1230, 0.9980);
				case 213: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2590, 1.2090);
				case 214: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2590, 1.0110);
				case 215: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2590, 1.0110);
				case 216: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2590, 1.0110);
				case 217: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2590, 1.0110);
				case 218: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0270, 0.0840, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.5280, 1.1810);
				case 219: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2180, 1.0100);
				case 220: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0450, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3790, 1.2080);
				case 221: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3790, 1.0770);
				case 222: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3790, 1.0770);
				case 223: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.3790, 1.0770);
				case 224: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0660, 0.0060, 1.8000, -0.3000, 2.1000, 1.0760, 1.2470, 1.0770);
				case 225: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0660, 0.0060, 1.8000, 1.2000, 2.1000, 1.0760, 1.2180, 1.0770);
				case 226: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0660, 0.0060, 1.8000, 1.2000, 2.1000, 1.0760, 1.2180, 1.0770);
				case 227: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0810, 0.0370, 0.0060, 1.8000, 1.2000, 2.1000, 1.0760, 1.3580, 1.2110);
				case 228: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0470, 0.0060, 1.8000, 1.2000, 2.1000, 1.0760, 1.3580, 1.2110);
				case 229: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0470, 0.0060, 1.8000, 1.2000, 2.1000, 1.0760, 1.1490, 0.9740);
				case 230: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0350, 0.0470, 0.0050, 1.8000, -1.3000, 2.1000, 1.0760, 1.1490, 1.0210);
				case 231: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0070, 0.0470, 0.0050, 1.8000, -1.3000, 2.1000, 1.0760, 1.1490, 1.0210);
				case 232: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0070, 0.0540, 0.0050, 1.8000, -1.3000, 2.1000, 1.0760, 1.5820, 1.1530);
				case 233: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0790, 0.0540, 0.0050, 1.8000, -1.3000, 2.1000, 1.0760, 1.2320, 1.0420);
				case 234: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0130, 0.0540, 0.0050, 1.8000, -1.3000, 2.1000, 1.0760, 1.2320, 1.0420);
				case 235: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0130, 0.0540, 0.0050, 1.8000, -1.3000, 2.1000, 1.0760, 1.2320, 1.0420);
				case 236: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0450, 0.0490, 0.0000, 0.0000, 0.0000, 0.0000, 1.0470, 1.1160, 1.0000);
				case 237: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0450, 0.0490, 0.0000, 0.0000, 0.0000, 0.0000, 1.0470, 1.1160, 1.0000);
				case 238: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0690, 0.0790, 0.0000, 0.0000, 0.0000, 0.0000, 1.0470, 1.4210, 1.0000);
				case 239: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0910, 0.0790, 0.0140, 0.0000, 0.0000, 0.0000, 1.0470, 1.4210, 1.1800);
				case 240: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0410, 0.0140, 0.0000, 0.0000, 0.0000, 1.0470, 1.2670, 1.1800);
				case 241: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0740, 0.0700, 0.0140, 0.0000, 0.0000, 0.0000, 1.0470, 1.5960, 1.3110);
				case 242: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0740, 0.0700, 0.0140, 0.0000, 0.0000, 0.0000, 1.0470, 1.5960, 1.3110);
				case 243: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0410, 0.0400, 0.0190, 0.0000, 0.0000, 0.0000, 1.0470, 1.3030, 1.1100);
				case 244: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0800, 0.0190, 0.0000, 0.0000, 0.0000, 1.0470, 1.3690, 1.1100);
				case 245: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0710, 0.0190, 0.0000, 0.0000, 0.0000, 1.0470, 1.7010, 1.1580);
				case 246: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0720, 0.0910, 0.0190, 0.0000, 0.0000, 0.0000, 1.0470, 1.4730, 1.1580);
				case 247: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0760, 0.0520, 0.0130, 0.0000, 0.0000, 0.0000, 1.0470, 1.4730, 1.1580);
				case 248: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0440, 0.0130, 0.0000, 0.0000, 0.0000, 1.0470, 1.3650, 1.1580);
				case 249: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0440, 0.0130, 0.0000, 0.0000, 0.0000, 1.0470, 1.3650, 1.1580);
				case 250: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0570, 0.0440, 0.0130, 0.0000, 0.0000, 0.0000, 1.0470, 1.3650, 1.1580);
				case 251: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0750, 0.0640, 0.0130, 0.0000, 0.0000, 0.0000, 1.0470, 1.3650, 1.1580);
				case 252: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0750, 0.0640, 0.0130, 0.0000, 0.0000, 0.0000, 1.0470, 1.3650, 1.0350);
				case 253: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0150, 0.0390, 0.0130, 0.0000, 0.0000, 0.0000, 1.0470, 1.2170, 1.0350);
				case 254: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0630, 0.0540, 0.0020, 0.0000, 0.0000, 0.0000, 1.0470, 1.2170, 1.1390);
				case 255: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0630, 0.0540, 0.0020, 0.0000, 0.0000, 0.0000, 1.0470, 1.2170, 1.1390);
				case 256: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0840, 0.0670, 0.0020, 0.0000, 0.0000, 0.0000, 1.0470, 1.2580, 1.1390);
				case 257: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0840, 0.0670, 0.0020, 0.0000, 0.0000, 0.0000, 1.0470, 1.2580, 1.0700);
				case 258: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0800, 0.0670, 0.0020, 0.0000, 0.0000, 0.0000, 1.0650, 1.4360, 1.2550);
				case 259: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0800, 0.0670, 0.0020, 0.0000, 0.0000, 0.0000, 1.0650, 1.4360, 1.3360);
				case 260: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0800, 0.0460, 0.0020, 0.0000, 0.0000, 0.0000, 1.0650, 1.3400, 1.1910);
				case 261: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0300, 0.0460, 0.0020, 0.0000, 0.0000, 0.0000, 1.0650, 1.2180, 0.9300);
				case 262: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0300, 0.0460, 0.0020, 0.0000, 0.0000, 0.0000, 1.1140, 1.2880, 1.1710);
				case 263: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0410, 0.0460, 0.0020, 0.0000, 0.0000, 0.0000, 1.1140, 1.2040, 1.0910);
				case 264: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0250, 0.0720, -0.0130, 0.0000, -4.2000, 0.0000, 1.2410, 1.7210, 1.3280);
				case 265: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0370, -0.0130, 0.0000, -4.2000, 0.0000, 1.2270, 1.3320, 1.1890);
				case 266: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0010, 0.0370, -0.0020, 0.0000, -0.3000, -0.7000, 1.2270, 1.3320, 1.1890);
				case 267: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.2320, 0.0370, 0.0020, 0.0000, 4.0000, -0.7000, 1.2270, 1.2500, 1.1380);
				case 268: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0410, 0.0370, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.2500, 1.1380);
				case 269: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0410, 0.0590, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.6460, 1.3860);
				case 270: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0260, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.2260, 1.2010);
				case 271: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0260, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.2260, 1.2010);
				case 272: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0260, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.2260, 1.2010);
				case 273: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0010, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.2260, 1.2010);
				case 274: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0130, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.2260, 1.2010);
				case 275: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0130, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.2260, 1.2010);
				case 276: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0130, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.2260, 1.2010);
				case 277: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0630, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.5180, 1.5410);
				case 278: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0630, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.5180, 1.5410);
				case 279: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0630, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2270, 1.5180, 1.5410);
				case 280: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0340, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2030, 1.2330, 1.2330);
				case 281: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0340, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2030, 1.2330, 1.2330);
				case 282: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0340, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2030, 1.2330, 1.2330);
				case 283: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0340, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2030, 1.2330, 1.2330);
				case 284: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0340, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2030, 1.2330, 1.1210);
				case 285: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0340, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2030, 1.2330, 1.1210);
				case 286: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0170, 0.0510, 0.0020, 0.0000, -1.6000, -0.7000, 1.2030, 1.3890, 1.3150);
				case 287: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0170, 0.0510, 0.0020, 0.0000, -1.6000, -0.7000, 0.1960, 0.3440, 0.0100);
				case 288: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0180, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2020, 1.3680, 1.2110);
				case 289: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0180, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2020, 1.3680, 1.2110);
				case 290: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0180, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2020, 1.3680, 1.2110);
				case 291: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0180, 0.0420, 0.0020, 0.0000, -1.6000, -0.7000, 1.2020, 1.3680, 1.0840);
				case 292: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0640, 0.0260, 0.0020, 0.0000, -1.6000, -0.7000, 1.1410, 1.1540, 1.0840);
				case 293: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0800, 0.0270, 0.0000, 0.0000, 0.0000, 0.0000, 1.1210, 1.0460, 1.0740);
				case 294: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0480, 0.0350, 0.0140, 0.0000, 0.0000, 0.0000, 1.1210, 1.2660, 1.0740);
				case 295: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0250, 0.0640, 0.0000, 0.0000, 0.0000, 0.0000, 1.1940, 1.3700, 1.1740);
				case 296: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, -0.0020, 0.0470, 0.0080, 0.0000, -2.6000, 0.0000, 1.1210, 1.3930, 1.1280);
				case 297: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0400, 0.0470, 0.0080, 0.0000, -2.6000, 0.0000, 1.1210, 1.3930, 1.2140);
				case 298: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0530, 0.0470, -0.0100, 0.0000, -2.6000, 0.0000, 1.1220, 1.2050, 1.0210);
				case 299: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0780, 0.0350, 0.0180, 0.0000, -2.6000, 0.0000, 1.1220, 1.3410, 1.2100);
				case 300: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0510, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.3410, 1.2100);
				case 301: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.3410, 1.2100);
				case 302: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.3410, 1.2100);
				case 303: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.3410, 1.2100);
				case 304: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.3410, 1.2100);
				case 305: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.3410, 1.2100);
				case 306: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.2860, 1.0520);
				case 307: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.2860, 1.0520);
				case 308: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.2860, 1.0520);
				case 309: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.2860, 1.0520);
				case 310: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.3370, 1.1130);
				case 311: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0560, 0.0500, 0.0050, 0.0000, -2.6000, 0.0000, 1.1220, 1.3370, 1.1130);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 13)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 6)) RemovePlayerAttachedObject(playerid, 6);
			switch( skinid)
			{
				case 1..18: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2730, -0.0090, 0.1310, 0.0000, 88.4000, 0.0000, 0.0240, 0.0260, 0.0230, -1, -1);
				case 19..100: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2720, 0.0060, 0.1570, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 101..103: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.3150, -0.0270, 0.1420, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 104..108: SetPlayerAttachedObjectEx(playerid, 62, objectid, 1, 0.2770, -0.0120, 0.1450, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 109: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2950, -0.0120, 0.1360, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 110..119: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2950, -0.0120, 0.1360, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 120,122: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2810, -0.0120, 0.1580, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 123..136: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2830, -0.0070, 0.1560, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 137..146: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2790, -0.0070, 0.1190, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 147..154: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2940, -0.0070, 0.1400, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 155..157: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2920, -0.0070, 0.1430, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 158..172: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2860, -0.0070, 0.1360, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 173..187: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2990, -0.0070, 0.1170, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 188..222: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2840, -0.0070, 0.1510, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 223..270: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2810, -0.0070, 0.1410, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 271..279: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2950, -0.0190, 0.1540, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				case 280..311: SetPlayerAttachedObjectEx(playerid, 6, objectid, 1, 0.2930, -0.0110, 0.1510, 0.0000, 88.4000, 0.0000, 0.0200, 0.0260, 0.0190, -1, -1);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 14)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 1)) RemovePlayerAttachedObject(playerid, 1);
			switch(skinid)
			{
				case 1..34: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1560, -0.2000, 0.0050, 88.9000, 2.3000, -90.8000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 35..60: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1300, -0.1570, 0.0050, 92.7000, -1.7000, -90.2000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 61..95: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1250, -0.1480, 0.0050, 90.9000, -0.2000, -87.8000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 96..109: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.2220, -0.1750, 0.0050, 90.9000, -0.2000, -87.8000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 110..115: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1380, -0.1620, 0.0050, 90.9000, 2.7000, -88.3000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 116..122: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1270, -0.1680, 0.0050, 90.9000, 2.7000, -88.3000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 123..154: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1400, -0.1650, 0.0050, 90.9000, 2.7000, -88.3000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 155..161: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1090, -0.1680, 0.0050, 90.9000, -1.1000, -86.1000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 162..284: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1570, -0.1480, 0.0050, 90.9000, -1.1000, -86.1000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 285: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1360, -0.1650, 0.0050, 90.9000, -0.1000, -86.2000, 0.1980, 0.1950, 0.1930, -1, -1);
				case 286..311: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.1150, -0.1650, 0.0050, 90.9000, -0.1000, -86.2000, 0.1980, 0.1950, 0.1930, -1, -1);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 15)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 1)) RemovePlayerAttachedObject(playerid, 1);
			switch(skinid)
			{
				case 1..29: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.1040, -0.1830, 0.0030, -91.2999, -7.4000, 22.3000, 0.7310, 0.7780, 1.0000, -1, -1);
				case 30..97: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.1250, -0.1480, 0.0110, -87.9999, -2.6000, 17.6000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 98..114: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.0790, -0.1470, 0.0110, -90.9999, -5.1000, 23.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 115..164: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.0790, -0.1470, 0.0110, -90.9999, -5.1000, 23.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 165..170: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.0300, -0.1620, 0.0220, -90.3998, -4.0000, 24.3000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 171..174: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.0910, -0.1550, 0.0220, -91.1999, -6.9000, 24.3000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 175..187: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.1000, -0.1490, 0.0200, -88.2999, -3.7000, 24.3000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 188..288: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.0920, -0.1440, 0.0160, -90.7999, -3.7000, 24.3000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 289: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.0890, -0.1640, -0.0010, -90.9999, -5.8000, -36.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 290,291: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.0890, -0.1640, -0.0100, -90.9999, -5.8000, -36.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 292,293: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.1740, -0.1510, -0.0090, -90.9999, -5.8000, -36.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 294,295: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.1460, -0.1590, -0.0090, -90.9999, -5.8000, -36.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 296..302: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.0240, -0.1670, -0.0090, -90.9999, -5.8000, -36.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 303,304: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.1290, -0.1530, -0.0090, -90.9999, -5.8000, -36.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				case 305..311: SetPlayerAttachedObjectEx(playerid, 1, 19878, 1, 0.1100, -0.1530, -0.0090, -90.9999, -5.8000, -36.9000, 0.7120, 0.7000, 1.0000, -1, -1);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 16)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 6)) RemovePlayerAttachedObject(playerid, 6);
			SetPlayerAttachedObjectEx(playerid, 6, 19079, 17, 0.029000, -0.057000, 0.148000, 0.000000, 0.000000, 0.000000, 0.603999, 0.543000, 0.594999, 0, 0);
		}
		else if(type == 17)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 1)) RemovePlayerAttachedObject(playerid, 1);
			switch(skinid)
			{
				case 1: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071000, -0.202000, -0.065999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 1
				case 2: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071000, -0.209000, -0.065999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 2
				case 3: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071000, -0.195999, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 3
				case 4: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086000, -0.195999, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 4
				case 5: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086000, -0.238000, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 5
				case 6: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.102000, -0.227000, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 6
				case 7: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.070000, -0.208000, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 7
				case 8: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.070000, -0.196999, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 8
				case 9: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.070000, -0.184999, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 9
				case 10: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.021000, -0.184999, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 10
				case 11: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.109999, -0.163999, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 11
				case 12: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.074999, -0.163999, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 12
				case 13: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.106999, -0.163999, -0.057999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 13
				case 14: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.106999, -0.163999, -0.063999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 14
				case 15: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.192999, -0.063999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 15
				case 16: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.117999, -0.192999, -0.063999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 16
				case 17: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.180999, -0.063999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 17
				case 18: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.061999, -0.180999, -0.063999,  0.000000, 37.099975, 0.000000,  0.651999, 0.767000, 0.738000); // 18
				case 19: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.102999, -0.180999, -0.063999,  0.000000, 37.099975, 0.000000,  0.647999, 0.767000, 0.738000); // 19
				case 20: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.188999, -0.063999,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 20
				case 21: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1, 0.0430, -0.1830, -0.0590, 0.0000, 34.5000, 0.0000, 0.6760, 0.7840, 0.7600, -1, -1);
				case 22: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.075999, -0.219999, -0.063999,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 22
				case 23: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.075999, -0.196999, -0.063999,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 23
				case 24: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.075999, -0.196999, -0.063999,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 24
				case 25: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.075999, -0.196999, -0.063999,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 25
				case 27: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.085999, -0.193000, -0.063999,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 27
				case 28: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.085999, -0.187000, -0.063999,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 28
				case 29: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.060999, -0.210000, -0.063999,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 29
				case 30: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.083999, -0.187000, -0.077000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 30
				case 31: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.044999, -0.189000, -0.077000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 31
				case 32: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.067999, -0.161999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 32
				case 33: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.045999, -0.161999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 33
				case 34: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086999, -0.189000, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 34
				case 35: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086999, -0.183000, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 35
				case 36: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.080999, -0.179000, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 36
				case 37: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.076999, -0.172999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 37
				case 38: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.023999, -0.166999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 38
				case 39: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.023999, -0.191000, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 39
				case 40: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086999, -0.168999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 40
				case 41: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.091999, -0.156999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 41
				case 42: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.077999, -0.169999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 42
				case 43: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.038999, -0.169999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 43
				case 44: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.038999, -0.157999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 44
				case 45: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.065999, -0.177999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 45
				case 46: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.203999, -0.062000,  0.000000, 37.099975, 0.899999,  0.647999, 0.767000, 0.738000); // 46
				case 47: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.196999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 47
				case 48: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.186999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 48
				case 49: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.171999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 49
				case 50: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.190999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 50
				case 51: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.115999, -0.175999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 51
				case 52: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.115999, -0.175999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 52
				case 53: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.038999, -0.175999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 53
				case 54: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.024999, -0.175999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 54
				case 55: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.163999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 55
				case 56: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.154999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 56
				case 57: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.107999, -0.183999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 57
				case 58: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.059999, -0.164999, -0.062000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 58
				case 59: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.074999, -0.177999, -0.070000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 59
				case 60: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.192999, -0.070000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 60
				case 61: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.179999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 61
				case 62: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.171999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 62
				case 63: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.103999, -0.152999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 63
				case 64: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.133999, -0.152999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 64
				case 65: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.133999, -0.152999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 65
				case 66: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.096999, -0.193999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 66
				case 67: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.096999, -0.193999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 67
				case 68: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.174999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 68
				case 69: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.154999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 69
				case 70: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.080999, -0.180999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 70
				case 71: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.080999, -0.190999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 71
				case 72: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.072999, -0.182999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 72
				case 73: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.072999, -0.172999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 73
				case 74: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.110999, -0.168999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 74
				case 75: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.110999, -0.155999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 75
				case 76: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094000, -0.146999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 76
				case 77: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.024000, -0.174999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 77
				case 78: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.103999, -0.199999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 78
				case 79: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.192999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 79
				case 80: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.177999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 80
				case 81: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.177999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 81
				case 82: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.186999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 82
				case 83: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.180999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 83
				case 84: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.195999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 84
				case 85: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.101000, -0.176999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 85
				case 86: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.083000, -0.203999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 86
				case 87: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.131000, -0.156999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 87
				case 88: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.036000, -0.156999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 88
				case 89: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.026000, -0.187999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 89
				case 90: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.120000, -0.154999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 90
				case 91: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.103000, -0.149999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 91
				case 92: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.103000, -0.132999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 92
				case 93: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.105000, -0.149999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 93
				case 94: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.070000, -0.149999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 94
				case 95: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.070000, -0.145999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 95
				case 96: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.135000, -0.186999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 96
				case 97: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.082000, -0.174999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 97
				case 98: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.078000, -0.201999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 98
				case 99: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.123000, -0.162999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 99
				case 100: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.106000, -0.180999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 100
				case 101: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.107000, -0.215999, -0.063000,  0.000000, 37.099975, 1.300000,  0.647999, 0.767000, 0.738000); // 101
				case 102: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.092000, -0.192999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 102
				case 103: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.121000, -0.224999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 103
				case 104: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.093000, -0.213999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 104
				case 105: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.110000, -0.230999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 105
				case 106: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.083000, -0.206999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 106
				case 107: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.093000, -0.200999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 107
				case 108: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.101000, -0.178999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 108
				case 109: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.075000, -0.176999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 109
				case 110: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081000, -0.181999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 110
				case 111: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.088000, -0.172999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 111
				case 112: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.062000, -0.172999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 112
				case 113: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.076000, -0.185999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 113
				case 114: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090000, -0.182999, -0.063000,  0.000000, 37.099975, 2.800000,  0.647999, 0.767000, 0.738000); // 114
				case 115: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.084000, -0.188999, -0.063000,  0.000000, 37.099975, 5.700001,  0.647999, 0.767000, 0.738000); // 115
				case 116: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.093000, -0.199999, -0.063000,  0.000000, 37.099975, 5.700001,  0.632999, 0.767000, 0.738000); // 116
				case 117: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089000, -0.188999, -0.072000,  0.000000, 37.099975, 5.700001,  0.632999, 0.767000, 0.738000); // 117
				case 118: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.082000, -0.197999, -0.072000,  0.000000, 37.099975, 5.700001,  0.632999, 0.767000, 0.738000); // 118
				case 119: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071000, -0.190999, -0.069999,  0.000000, 37.099975, 3.000002,  0.632999, 0.767000, 0.738000); // 119
				case 120: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071000, -0.199999, -0.069999,  0.000000, 37.099975, 3.000002,  0.632999, 0.767000, 0.738000); // 120
				case 121: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086000, -0.210999, -0.069999,  0.000000, 37.099975, 3.000002,  0.632999, 0.767000, 0.738000); // 121
				case 122: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090000, -0.187999, -0.070999,  0.000000, 37.099975, 3.000002,  0.632999, 0.767000, 0.738000); // 122
				case 123: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.084000, -0.187999, -0.070999,  0.000000, 37.099975, 3.000002,  0.632999, 0.767000, 0.738000); // 123
				case 124: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.084000, -0.170999, -0.070999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 124
				case 125: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.067999, -0.185999, -0.070999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 125
				case 126: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.067999, -0.198999, -0.070999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 126
				case 127: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.067999, -0.209999, -0.059999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 127
				case 128: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.069000, -0.179999, -0.059999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 128
				case 129: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.033000, -0.167999, -0.059999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 129
				case 130: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.033000, -0.185999, -0.059999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 130
				case 131: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.116000, -0.164999, -0.059999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 131
				case 132: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.043000, -0.151999, -0.059999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 132
				case 133: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.084000, -0.171999, -0.051999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 133
				case 134: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.034000, -0.158999, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 134
				case 135: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.069000, -0.192999, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 135
				case 136: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.016000, -0.164999, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 136
				case 137: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.078000, -0.155999, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 137
				case 138: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.122999, -0.146999, -0.056999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 138
				case 139: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.122999, -0.146999, -0.076999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 139
				case 140: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.122999, -0.146999, -0.076999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 140
				case 141: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.112999, -0.158999, -0.076999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 141
				case 142: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.102999, -0.193999, -0.083000,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 142
				case 143: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.193999, -0.079000,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 143
				case 144: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.209999, -0.079000,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 144
				case 145: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.096999, -0.161999, -0.079000,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 145
				case 146: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.096999, -0.179999, -0.079000,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 146
				case 147: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.173999, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 147
				case 148: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.159999, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 148
				case 149: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.260999, -0.070999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 149
				case 150: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.155999, -0.070999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 150
				case 151: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.168999, -0.070999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 151
				case 152: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.152998, -0.070999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 152
				case 153: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.172998, -0.052999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 153
				case 154: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.172998, -0.052999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 154
				case 155: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.208999, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 155
				case 156: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.181998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 156
				case 157: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.081999, -0.157998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 157
				case 158: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.088999, -0.171998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 158
				case 159: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.084999, -0.171998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 159
				case 160: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.075999, -0.143998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 160
				case 161: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.075999, -0.185998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 161
				case 162: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.172998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 162
				case 163: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.110999, -0.183998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 163
				case 164: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.110999, -0.177998, -0.073999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 164
				case 165: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.037999, -0.196998, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 165
				case 166: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.040999, -0.196998, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 166
				case 167: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.104999, -0.175998, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 167
				case 168: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.082999, -0.175998, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 168
				case 169: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.083000, -0.151998, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 169
				case 170: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.083000, -0.183998, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 170
				case 171: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.083000, -0.183998, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 171
				case 172: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.096000, -0.154998, -0.064999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 172
				case 173: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.096000, -0.181998, -0.071999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 173
				case 174: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.091000, -0.185998, -0.071999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 174
				case 175: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.091000, -0.181998, -0.071999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 175
				case 176: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.084000, -0.211998, -0.071999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 176
				case 177: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.084000, -0.211998, -0.071999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 177
				case 178: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.102000, -0.162998, -0.071999,  0.000000, 37.099975, 3.000002,  0.644999, 0.767000, 0.738000); // 178
				case 179: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.173998, -0.071999,  0.000000, 37.099975, -0.499997,  0.644999, 0.767000, 0.738000); // 179
				case 180: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.079999, -0.203998, -0.071999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 180
				case 181: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.121999, -0.177998, -0.071999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 181
				case 182: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086999, -0.177998, -0.059999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 182
				case 183: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086999, -0.164998, -0.059999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 183
				case 184: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.190998, -0.059999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 184
				case 185: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.079999, -0.184998, -0.059999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 185
				case 186: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.079999, -0.192998, -0.059999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 186
				case 187: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071999, -0.177998, -0.059999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 187
				case 188: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071999, -0.177998, -0.059999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 188
				case 189: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.083999, -0.185998, -0.059999,  0.000000, 37.099975, 2.000003,  0.644999, 0.767000, 0.738000); // 189
				case 190: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.120999, -0.165998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 190
				case 191: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.132999, -0.154998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 191
				case 192: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.132999, -0.145998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 192
				case 193: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.132999, -0.145998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 193
				case 194: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.117999, -0.142998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 194
				case 195: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.106999, -0.142998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 195
				case 196: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.021999, -0.158998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 196
				case 197: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.021999, -0.199998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 197
				case 198: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.111999, -0.170998, -0.059999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 198
				case 199: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.027999, -0.170998, -0.065999,  0.000000, 37.099975, 4.400004,  0.644999, 0.767000, 0.738000); // 199
				case 200: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.170998, -0.065999,  0.000000, 37.099975, -0.099994,  0.644999, 0.767000, 0.738000); // 200
				case 201: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.111999, -0.157998, -0.065999,  0.000000, 37.099975, 1.700005,  0.644999, 0.767000, 0.738000); // 201
				case 202: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.111999, -0.169998, -0.065999,  0.000000, 37.099975, 1.700005,  0.644999, 0.767000, 0.738000); // 202
				case 203: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.098999, -0.186998, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 203
				case 204: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.098999, -0.186998, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 204
				case 205: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.098999, -0.186998, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 205
				case 206: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.098999, -0.176998, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 206
				case 207: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.098999, -0.171998, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 207
				case 208: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.098999, -0.197998, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 208
				case 209: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.055999, -0.162997, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 209
				case 210: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.049999, -0.154997, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 210
				case 211: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.100999, -0.143997, -0.065999,  0.000000, 37.099975, 5.500004,  0.644999, 0.767000, 0.738000); // 211
				case 212: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.027999, -0.162997, -0.065999,  0.000000, 37.099975, 1.400005,  0.644999, 0.767000, 0.738000); // 212
				case 213: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.080999, -0.189997, -0.065999,  0.000000, 37.099975, 4.200005,  0.644999, 0.767000, 0.738000); // 213
				case 214: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.152997, -0.065999,  0.000000, 37.099975, 4.200005,  0.644999, 0.767000, 0.738000); // 214
				case 215: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.152997, -0.065999,  0.000000, 37.099975, 4.200005,  0.644999, 0.767000, 0.738000); // 215
				case 216: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.152997, -0.065999,  0.000000, 37.099975, 4.200005,  0.644999, 0.767000, 0.738000); // 216
				case 217: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.163997, -0.065999,  0.000000, 37.099975, 0.700006,  0.644999, 0.767000, 0.738000); // 217
				case 218: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.023999, -0.163997, -0.065999,  0.000000, 37.099975, 0.700006,  0.644999, 0.767000, 0.738000); // 218
				case 219: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086999, -0.150997, -0.065999,  0.000000, 37.099975, 0.700006,  0.644999, 0.767000, 0.738000); // 219
				case 220: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.086999, -0.193997, -0.065999,  0.000000, 37.099975, 5.500005,  0.644999, 0.767000, 0.738000); // 220
				case 221: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.176997, -0.065999,  0.000000, 37.099975, 4.200006,  0.644999, 0.767000, 0.738000); // 221
				case 222: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.176997, -0.065999,  0.000000, 37.099975, 4.200006,  0.644999, 0.767000, 0.738000); // 222
				case 223: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.196997, -0.065999,  0.000000, 37.099975, 6.300006,  0.644999, 0.767000, 0.738000); // 223
				case 224: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.074999, -0.135997, -0.042999,  0.000000, 37.099975, -7.699989,  0.644999, 0.767000, 0.738000); // 224
				case 225: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.074999, -0.135997, -0.042999,  0.000000, 37.099975, -7.699989,  0.644999, 0.767000, 0.738000); // 225
				case 226: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.074999, -0.135997, -0.042999,  0.000000, 37.099975, -7.699989,  0.644999, 0.767000, 0.738000); // 226
				case 227: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.200997, -0.065999,  0.000000, 37.099975, -0.699989,  0.644999, 0.767000, 0.738000); // 227
				case 228: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.080999, -0.191997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 228
				case 229: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.045999, -0.159997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 229
				case 230: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.061999, -0.154997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 230
				case 231: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.002999, -0.154997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 231
				case 232: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.002999, -0.154997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 232
				case 233: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.100999, -0.154997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 233
				case 234: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.040999, -0.150997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 234
				case 235: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.040999, -0.150997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 235
				case 236: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.047999, -0.150997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 236
				case 237: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.150997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 237
				case 238: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.150997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 238
				case 239: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.192997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 239
				case 240: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.187997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 240
				case 241: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.075999, -0.213997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 241
				case 242: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.205997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 242
				case 243: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.177997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 243
				case 244: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.094999, -0.157997, -0.065999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 244
				case 245: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.069999, -0.204997, -0.055000,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 245
				case 246: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.069999, -0.168997, -0.055000,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 246
				case 247: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.084999, -0.180997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 247
				case 248: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.078999, -0.180997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 248
				case 249: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071999, -0.180997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 249
				case 250: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.088999, -0.180997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 250
				case 251: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.161997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 251
				case 252: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.161997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 252
				case 253: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.050999, -0.161997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 253
				case 254: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.183997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 254
				case 255: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.078999, -0.168997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 255
				case 256: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.158997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 256
				case 257: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.158997, -0.062999,  0.000000, 37.099975, 2.500010,  0.644999, 0.767000, 0.738000); // 257
				case 258: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.202997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 258
				case 259: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.202997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 259
				case 260: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.188997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 260
				case 261: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.052999, -0.172997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 261
				case 262: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.061999, -0.193997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 262
				case 263: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.100999, -0.159997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 263
				case 264: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.077999, -0.208997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 264
				case 265: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.077999, -0.208997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 265
				case 266: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.077999, -0.208997, -0.062999,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 266
				case 267: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.304999, -0.199997, -0.087000,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 267
				case 268: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.191997, -0.079000,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 268
				case 269: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.237997, -0.079000,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 269
				case 270: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.203997, -0.068000,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 270
				case 271: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.078999, -0.203997, -0.068000,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 271
				case 272: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.070999, -0.203997, -0.068000,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 272
				case 273: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.058999, -0.187997, -0.068000,  0.000000, 37.099975, 5.400009,  0.644999, 0.767000, 0.738000); // 273
				case 274: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.187997, -0.068000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 274
				case 275: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.187997, -0.068000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 275
				case 276: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.187997, -0.068000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 276
				case 277: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.090999, -0.225997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 277
				case 278: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.122999, -0.217997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 278
				case 279: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.122999, -0.217997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 279
				case 280: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.194997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 280
				case 281: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.194997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 281
				case 282: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.097999, -0.197997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 282
				case 283: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.091999, -0.187997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 283
				case 284: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.077999, -0.177997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 284
				case 285: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.077999, -0.188997, -0.058000,  0.000000, 37.099975, 1.700010,  0.644999, 0.767000, 0.738000); // 285
				case 286: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.188997, -0.058000,  0.000000, 37.099975, 3.300009,  0.644999, 0.767000, 0.738000); // 286
				case 287: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.196997, -0.062000,  0.000000, 37.099975, 3.300009,  0.644999, 0.767000, 0.738000); // 287
				case 288: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.087999, -0.190997, -0.062000,  0.000000, 37.099975, 3.300009,  0.644999, 0.767000, 0.738000); // 288
				case 289: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071999, -0.200997, -0.062000,  0.000000, 37.099975, 3.300009,  0.644999, 0.767000, 0.738000); // 289
				case 290: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.071999, -0.195996, -0.062000,  0.000000, 37.099975, 3.300009,  0.644999, 0.767000, 0.738000); // 290
				case 291: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.079999, -0.185996, -0.062000,  0.000000, 37.099975, 3.300009,  0.644999, 0.767000, 0.738000); // 291
				case 292: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.185996, -0.062000,  0.000000, 37.099975, 3.300009,  0.644999, 0.767000, 0.738000); // 292
				case 293: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.101999, -0.185996, -0.062000,  0.000000, 37.099975, 0.000010,  0.644999, 0.767000, 0.738000); // 293
				case 294: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.083999, -0.185996, -0.062000,  0.000000, 37.099975, 0.000010,  0.644999, 0.767000, 0.738000); // 294
				case 295: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.016999, -0.195996, -0.062000,  0.000000, 37.099975, 0.000010,  0.644999, 0.767000, 0.738000); // 295
				case 296: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.016999, -0.195996, -0.062000,  0.000000, 37.099975, 0.000010,  0.644999, 0.767000, 0.738000); // 296
				case 297: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.064999, -0.195996, -0.062000,  0.000000, 37.099975, 0.000010,  0.644999, 0.767000, 0.738000); // 297
				case 298: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.102999, -0.180996, -0.062000,  0.000000, 37.099975, 0.000010,  0.644999, 0.767000, 0.738000); // 298
				case 299: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.135999, -0.201996, -0.062000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 299
				case 300: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.195996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 300
				case 301: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.195996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 301
				case 302: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.095999, -0.190996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 302
				case 303: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.190996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 303
				case 304: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.190996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 304
				case 305: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.190996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 305
				case 306: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.162996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 306
				case 307: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.155996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 307
				case 308: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.155996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 308
				case 309: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.155996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 309
				case 310: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.188996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 310
				case 311: SetPlayerAttachedObjectEx(playerid, 1, objectid, 1,  0.089999, -0.184996, -0.063000,  0.000000, 37.099975, 3.400009,  0.644999, 0.767000, 0.738000); // 311
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 18)
		{
			if(IsPlayerAttachedObjectSlotUsed(playerid, 3)) RemovePlayerAttachedObject(playerid, 3);
			switch(skinid)
			{
				case 1..21:SetPlayerAttachedObjectEx(playerid, 3, objectid, 2,  0.079999, 0.100000, -0.011000,  90.699974, 85.899963, 85.299957,  0.339001, 0.607001, 0.404002);
				case 22..49:SetPlayerAttachedObjectEx(playerid, 3, objectid, 2,  0.075999, 0.090000, -0.011000,  90.699974, 80.199943, 85.299957,  0.303001, 0.607001, 0.387002);
				case 50..62:SetPlayerAttachedObjectEx(playerid, 3, objectid, 2,  0.087999, 0.090000, 0.003000,  90.699974, 80.199943, 85.299957,  0.303001, 0.607001, 0.409002);
				case 63..171:SetPlayerAttachedObjectEx(playerid, 3, objectid, 2,  0.087999, 0.101000, 0.003000,  90.699974, 80.199943, 85.299957,  0.303001, 0.607001, 0.409002);
				case 172..203:SetPlayerAttachedObjectEx(playerid, 3, objectid, 2,  0.087999, 0.098000, -0.003999,  90.699974, 76.399971, 85.299957,  0.303001, 0.626001, 0.409002);
				case 204..285:SetPlayerAttachedObjectEx(playerid, 3, objectid, 2,  0.087999, 0.098000, -0.003999,  90.699974, 76.399971, 85.299957,  0.303001, 0.626001, 0.409002);
				case 286..311:SetPlayerAttachedObjectEx(playerid, 3, objectid, 2,  0.079999, 0.101000, -0.011000,  88.099960, 92.199905, 82.599945,  0.288001, 0.607001, 0.364001);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 19)
		{
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.150998,0.000999,-0.010001, 0.199998,-5.700015,-8.800018, 1.000000,1.000000,1.085000);
				case 3: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.156998,-0.000000,-0.001001, 0.199998,-5.700015,-8.800018, 1.000000,1.042000,1.189000);
				case 4: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.181998,-0.005000,-0.001001, 0.199998,-5.700015,-8.800018, 1.000000,1.042000,1.189000);
				case 5: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.181998,-0.015000,-0.001001, 0.199998,-5.700015,-8.800018, 1.000000,1.042000,1.189000);
				case 7: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.154998,0.011999,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 9: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,-0.013000,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 10: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,-0.013000,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 11: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,-0.013000,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 12: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,-0.013000,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 14: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,0.011000,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 15: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.131998,-0.021999,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 17: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.159998,0.002000,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 18: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.118998,-0.005999,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 20: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.163998,-0.005999,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 21: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.163998,-0.005999,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 25: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.144998,0.011000,-0.001001, 0.199998,-5.700015,-8.800018, 1.214000,1.042000,1.196000);
				case 26: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.144998,0.011000,-0.008001, 0.199998,-5.700015,-8.800018, 1.214000,1.137000,1.219000);
				case 28: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.144998,0.011000,-0.008001, 0.199998,-5.700015,-8.800018, 1.214000,1.137000,1.219000);
				case 30: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.144998,0.006000,-0.008001, 0.199998,-5.700015,-8.800018, 1.214000,1.137000,1.219000);
				case 40: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.128998,-0.016999,-0.002001, 0.199998,-5.700015,-8.800018, 1.214000,1.137000,1.219000);
				case 43: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.092998,-0.002999,-0.002001, 0.199998,-5.700015,-8.800018, 1.214000,1.137000,1.219000);
				case 44: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.120998,0.015000,-0.002001, 0.199998,-5.700015,-8.800018, 1.214000,0.947999,1.029000);
				case 45: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.120998,-0.002999,-0.002001, 0.199998,-5.700015,-8.800018, 1.074000,1.076999,1.029000);
				case 46: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.158998,0.008000,-0.002001, 0.199998,-5.700015,-8.800018, 1.074000,1.076999,1.029000);
				case 47: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.158998,0.006000,-0.007001, 0.199998,-5.700015,-8.800018, 1.074000,1.172999,1.123000);
				case 48: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.158998,-0.011999,-0.007001, 0.199998,-5.700015,-8.800018, 1.074000,1.172999,1.200000);
				case 49: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.138998,0.012000,-0.007001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 54: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.138998,0.017000,-0.007001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 55: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.138998,-0.002999,-0.002001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 56: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.138998,-0.011999,-0.002001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 57: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.181998,0.004000,-0.002001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 58: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.132998,-0.005999,-0.002001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 59: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.156998,0.002000,-0.002001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 60: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.156998,-0.004999,-0.007001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 66: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.156998,0.008000,-0.004001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 67: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.156998,0.001000,-0.004001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 68: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,0.013000,-0.004001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 69: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,-0.006999,-0.004001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 70: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,0.012000,0.001998, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 72: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,0.012000,0.001998, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 73: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,0.012000,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 76: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,-0.022999,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 86: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.141998,-0.022999,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 90: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,-0.005999,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 95: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.130998,-0.014999,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 96: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.146998,0.001000,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 97: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.146998,0.001000,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 98: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.146998,0.015000,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 100: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.170998,-0.003999,-0.003001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 101: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.170998,-0.007999,0.000998, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 106: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.170998,-0.007999,0.000998, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 111: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.150998,0.002000,0.000998, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 112: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.150998,-0.002999,-0.005001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 113: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.164998,0.000000,-0.005001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 117: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.140998,0.004000,-0.005001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 118: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.140998,0.004000,-0.005001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 119: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.140998,0.004000,-0.005001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 120: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.161998,-0.014999,-0.005001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 121: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.161998,-0.010999,-0.000001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 123: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.161998,-0.001999,-0.008001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 124: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.161998,-0.001999,-0.004000, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 125: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,0.002000,-0.002000, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 126: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,-0.003999,-0.006001, 0.199998,-5.700015,-8.800018, 1.074000,1.026999,1.125000);
				case 127: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,0.005000,-0.009000, 0.199998,-5.700015,-8.800018, 1.074000,1.140999,1.169000);
				case 128: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,0.018000,-0.009000, 0.199998,-5.700015,-8.800018, 1.074000,1.140999,1.169000);
				case 147: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,-0.020999,0.004999, 0.199998,-5.700015,-8.800018, 1.074000,1.140999,1.169000);
				case 148: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,-0.012999,0.004999, 0.199998,-5.700015,-8.800018, 1.074000,1.140999,1.169000);
				case 150: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,-0.015999,0.004999, 0.199998,-5.700015,-8.800018, 1.074000,1.140999,1.169000);
				case 151: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,-0.015999,0.004999, 0.199998,-5.700015,-8.800018, 1.074000,1.140999,1.169000);
				case 154: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.127998,-0.003999,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,1.027999,1.079000);
				case 156: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.171998,-0.013999,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,1.208999,1.217000);
				case 160: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.122998,0.009000,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 162: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.160998,0.009000,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 163: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,-0.008999,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 164: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.147998,-0.008999,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 165: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,0.002000,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 166: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,-0.003999,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 170: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,-0.009999,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 171: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,-0.009999,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 172: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,-0.005999,-0.003000, 0.199998,-5.700015,-8.800018, 1.074000,0.956999,1.109000);
				case 176: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,-0.008999,-0.007001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 177: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.183998,-0.008999,-0.007001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 179: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.158998,0.001000,-0.007001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 180: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.158998,-0.013999,-0.009001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 182: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,0.002000,-0.009001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 183: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,0.006000,-0.009001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 184: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,0.006000,-0.009001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 185: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.143998,0.002000,-0.005001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 186: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.163998,-0.012999,-0.005001, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 187: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.144998,-0.012999,0.000999, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 188: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.139998,-0.004999,0.000999, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 189: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.164998,-0.010999,0.000999, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 191: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.164998,-0.005999,-0.004000, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 192: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,-0.010999,-0.004000, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 200: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,-0.002999,-0.004000, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 206: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,0.012000,-0.004000, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 208: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,0.012000,-0.004000, 0.199998,-5.700015,-8.800018, 1.074000,1.108999,1.138000);
				case 210: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.132998,-0.003999,0.001999, 0.199998,-5.700015,-8.800018, 1.074000,0.936999,0.979000);
				case 213: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.146998,0.003000,-0.002000, 0.199998,-5.700015,-8.800018, 1.074000,1.087999,1.135000);
				case 214: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.136998,-0.001999,-0.002000, 0.199998,-5.700015,-8.800018, 1.074000,1.087999,1.135000);
				case 217: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.136998,0.002000,-0.002000, 0.199998,-5.700015,-8.800018, 1.074000,1.087999,1.135000);
				case 221: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.177998,-0.007999,0.004999, 0.199998,-5.700015,-8.800018, 1.074000,1.087999,1.222000);
				case 222: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.175998,-0.019999,-0.000000, 0.199998,-5.700015,-8.800018, 1.074000,1.087999,1.222000);
				case 223: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.161998,0.012000,-0.000000, 0.199998,-5.700015,-8.800018, 1.074000,1.087999,1.222000);
				case 226: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.126998,-0.015999,-0.000000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 227: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.165998,0.012000,-0.002000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 228: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.165998,0.000000,-0.005000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 229: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.140998,-0.018999,-0.001000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 234: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.123998,-0.018999,-0.001000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 235: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.123998,-0.018999,-0.001000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 236: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.123998,-0.006999,-0.001000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 240: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,-0.005999,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 250: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.149998,0.005000,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 252: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.169998,-0.009999,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 258: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.164998,-0.000999,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 259: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.164998,-0.000999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 262: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.121998,0.012000,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 265: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.130998,-0.001999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 266: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.130998,-0.004999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 267: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.130998,-0.004999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 272: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.157998,-0.004999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 273: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,-0.004999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 274: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,-0.004999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 275: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,-0.004999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 276: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,-0.004999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.087999,1.222000);
				case 280: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,-0.000999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,0.981999,1.143000);
				case 281: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,-0.000999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,0.981999,1.143000);
				case 282: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,-0.000999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,0.981999,1.143000);
				case 286: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,-0.000999,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,0.981999,1.143000);
				case 290: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.134998,0.007000,-0.003000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 291: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.171998,0.003000,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 292: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.133998,0.003000,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 294: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.161998,0.003000,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 295: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.151998,-0.009999,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 296: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.151998,-0.017999,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 297: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.181998,-0.007999,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 298: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.153998,-0.007999,-0.006000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 299: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.179998,-0.007999,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 300: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.137998,0.004000,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 301: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.137998,0.004000,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 302: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.137998,0.004000,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 303: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.137998,0.004000,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 304: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.137998,0.004000,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 305: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.137998,0.004000,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 310: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.137998,0.004000,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				case 311: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.137998,0.004000,-0.004000, 0.199998,-5.500015,-8.800018, 1.074000,1.055999,1.211000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 20)
		{
			switch(skinid) 
			{
				case 1..311: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.1329, -0.1139, 0.1630, -160.3001, 74.8999, 138.0000, 1.0000, 1.0000, 1.0000, 0, 0);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 21)
		{
			switch(skinid)
			{
				case 1..311: SetPlayerAttachedObjectEx(playerid,4, objectid,5,0.114000,0.040999,-0.044999,93.100112,-12.099985,-75.899986,0.871000,0.899000,0.601999);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 22)
		{
			switch(skinid)
			{
				case 1..311:SetPlayerAttachedObjectEx(playerid,5,objectid,1,0.041999,0.069000,0.006999,177.299987,88.100006,0.000000,1.133999,1.390000,0.999999);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 23) 
		{
			switch(skinid)
			{
				case 1..311:SetPlayerAttachedObjectEx(playerid,5,objectid,1,-0.010999,-0.188000,-0.011999,0.900000,84.000129,85.699951,1.000000,1.000000,1.000000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 24)
		{
			switch(skinid)
			{
				case 1..20: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2660, 0.0300, 0.0270, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 21..28: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2680, 0.0300, 0.0400, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 29..39: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2530, 0.0370, 0.0290, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 40..66: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2550, 0.0410, 0.0230, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 67..69: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2510, 0.0350, 0.0270, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 70..77: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2480, 0.0350, 0.0270, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 78: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2310, 0.0350, 0.0330, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 79..103: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2310, 0.0350, 0.0330, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 104,105: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2510, 0.0270, 0.0310, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 106: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2510, 0.0270, 0.0310, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 107: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2510, 0.0270, 0.0310, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 108..112: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2510, 0.0270, 0.0310, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 113: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2420, 0.0270, 0.0230, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 114..122: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2670, 0.0270, 0.0230, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 123..131: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2640, 0.0420, 0.0300, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 132,133: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2370, 0.0370, 0.0380, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 134..146: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2480, 0.0370, 0.0380, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 147..161: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2480, 0.0380, 0.0310, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 162..164: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2700, 0.0380, 0.0160, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 165: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2330, 0.0380, 0.0230, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 166..170: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2330, 0.0380, 0.0230, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 171..174: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2480, 0.0380, 0.0250, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 175: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2580, 0.0380, 0.0360, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 176..191: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2580, 0.0380, 0.0360, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 192..199: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2620, 0.0380, 0.0290, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 200..202: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2620, 0.0380, 0.0290, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 203..239: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2620, 0.0380, 0.0290, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 240..259: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2350, 0.0410, 0.0290, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 260..273: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2580, 0.0380, 0.0320, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 274..284: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2580, 0.0410, 0.0260, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 285..293: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2650, 0.0410, 0.0350, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 294..304: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2490, 0.0410, 0.0280, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
				case 305..311: SetPlayerAttachedObjectEx(playerid, 7, 11745, 5, 0.2610, 0.0410, 0.0360, -2.6000, -96.2999, 85.3000, 0.2080, 1.0000, 1.2520, -1, -1);
			}
		}
		else if(type == 25)
		{
			switch(skinid)
			{
				case 1..311:SetPlayerAttachedObjectEx(playerid,5,objectid,1,0.088999,-0.117000,-0.021000,2.000000,-23.900011,-79.199974,1.000000,1.000000,1.000000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 26)
		{
			switch(skinid)
			{
				case 1..114: SetPlayerAttachedObjectEx(playerid, 5, 2590, 1, -0.3970, -0.1200, 0.2340, 0.0000, -60.5000, 40.6000, 1.1560, 1.2690, 0.4940, -1, -1);
				case 115..126: SetPlayerAttachedObjectEx(playerid, 5, 2590, 1, -0.3970, -0.1510, 0.2340, 0.0000, -60.5000, 40.6000, 1.1560, 1.2690, 0.4940, -1, -1);
				case 127..160: SetPlayerAttachedObjectEx(playerid, 5, 2590, 1, -0.3970, -0.1000, 0.2490, 0.0000, -60.5000, 40.6000, 1.1560, 1.2690, 0.4940, -1, -1);
				case 161..311: SetPlayerAttachedObjectEx(playerid, 5, 2590, 1, -0.3820, -0.1100, 0.2490, 0.0000, -60.5000, 40.6000, 1.1560, 1.2690, 0.4940, -1, -1);
			}
		}
		else if(type == 27)
		{
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.080000,-0.118999,-0.045999, 0.000000,113.100006,0.000000, 0.717999,1.000000,0.702999);
				case 2: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.023000,-0.130000,-0.034000, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 3: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.023000,-0.127000,-0.034000, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 4: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.063000,-0.119000,-0.034000, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 5: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082999,-0.159000,-0.052999, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 6: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082999,-0.148999,-0.052999, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 7: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082999,-0.120999,-0.052999, 0.000000,119.000015,0.000000, 0.688000,1.000000,0.696000);
				case 9: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.095999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 12: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.076999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 13: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.084999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 14: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.089999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 15: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.111999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 17: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.096999,-0.052999, 8.699999,119.000015,-3.999999, 0.688000,1.000000,0.696000);
				case 18: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.108999,-0.052999, -8.800000,119.000007,8.100000, 0.688000,1.000000,0.696000);
				case 19: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.108999,-0.052999, 2.799998,119.000007,0.900001, 0.688000,1.000000,0.696000);
				case 20: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.110999,-0.052999, 10.099999,119.000007,-6.299997, 0.688000,1.000000,0.696000);
				case 21: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.119999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 22: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.142999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 23: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.129999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 24: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.117999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 25: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.117999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 28: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.106999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 29: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.145999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 30: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.105999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 32: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.079999,-0.052999, 8.299997,120.000000,-6.299997, 0.688000,1.000000,0.696000);
				case 33: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.102999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 34: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.102999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 35: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.113999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 36: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.113999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 37: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.112999,-0.113999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 43: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.094999,-0.112999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 44: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.094999,-0.092999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 45: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.134999,-0.106999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 46: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.134999,-0.134999,-0.052999, -2.700004,113.800003,4.400001, 0.688000,1.000000,0.696000);
				case 47: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.120999,-0.052999, 10.799995,114.099998,-4.700001, 0.688000,1.000000,0.696000);
				case 48: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.109999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 57: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.109999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 58: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.082999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 59: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.128999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 60: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.128999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 61: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.103999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 66: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.126999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 67: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.126999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 68: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.099999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 70: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.086000,-0.105999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 71: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.121999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 72: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.097999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 73: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.097999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 78: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.134999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 79: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.129999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 82: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.110999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 83: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.110999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 84: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.130999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 86: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.130999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 94: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.095999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 95: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.107000,-0.088999,-0.024999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 96: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.150000,-0.118999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 97: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.150000,-0.106999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 98: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.150000,-0.123999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 100: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.150000,-0.111999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 101: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.150000,-0.137999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 102: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.150000,-0.116999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 103: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.157000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 104: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.140999,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 105: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.163000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 106: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.134000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 107: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.134000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 108: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.104000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 109: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 110: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 111: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 112: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 113: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 114: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.109000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 115: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.117000,-0.014999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 116: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.130000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 119: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.121000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 120: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.132000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 121: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.141000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 122: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.108000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 123: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.123000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 124: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.083000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 125: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.109000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 126: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.123000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 127: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.127000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 128: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.097000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 132: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.090000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 133: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.099000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 134: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.087000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 135: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.120000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 136: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.084000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 137: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.087000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 141: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.083000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 142: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.141000,-0.135000,-0.032999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 143: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.058000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 144: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.058000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 147: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.058000,-0.102000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 148: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.088000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 150: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.077000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 153: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.098000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 154: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.112000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 155: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.139000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 156: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.105000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 158: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.105000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 159: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.105000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 160: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.089000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 161: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.109000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 162: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.101000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 164: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.103000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 165: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 166: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 167: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 168: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 169: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.083000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 170: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.116000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 171: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.110000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 172: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.076000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 173: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 174: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 175: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 176: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.134000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 177: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.134000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 179: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 180: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.122000,-0.130000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 181: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.162000,-0.096000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 182: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.070000,-0.120000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 183: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.070000,-0.099000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 184: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 185: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.126000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 186: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.126000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 187: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.102000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 188: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.100000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 189: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.119000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 200: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.107000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 202: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.102000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 203: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 204: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 206: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.101000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 208: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.122999,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 212: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.082000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 213: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.114000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 217: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.097000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 220: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 221: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.106000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 222: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.106000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 223: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.133000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 227: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.128000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 228: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.128000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 230: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.083000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 231: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.105000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 234: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.085000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 235: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.098000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 236: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.086000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 239: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.118000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 240: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.124000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 241: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.139000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 242: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.137000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 247: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.106000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 248: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.106000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 249: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.113000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 250: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.113000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 254: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 255: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.104000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 258: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.131000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 259: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.131000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 261: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 262: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 265: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.137000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 266: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.092000,-0.137000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 267: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.292000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 269: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.052000,-0.178000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 270: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.133000,-0.127000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 271: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 272: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.134000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 273: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.111000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 274: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 275: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 276: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 280: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 281: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 282: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 283: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 284: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.121000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 286: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.135000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 288: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 289: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.128000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 290: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.124000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 291: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.116000,-0.124000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 292: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.176000,-0.108000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 294: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.176000,-0.128000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 295: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 296: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 297: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.094000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 299: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.131000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 300: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 301: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 302: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 303: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 304: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 305: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.123000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 306: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 307: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 308: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 309: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.090000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 310: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				case 311: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.114000,-0.122000,-0.052999, 4.199994,119.299995,-4.700001, 0.688000,1.000000,0.696000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 28)
		{
			switch(skinid)
			{
				case 1..49: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1130, 0.0090, -0.0010, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3080);
				case 50..76: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1110, 0.0050, 0.0020, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3080);
				case 77..98: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1180, 0.0130, -0.0020, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3080);
				case 99..102: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1180, 0.0000, -0.0050, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3080);
				case 103..126: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1270, -0.0040, 0.0020, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3280);
				case 127..132: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.0320, -0.0020, 0.0010, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3280);
				case 133..134: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1140, -0.0020, 0.0010, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3280);
				case 135..205: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1070, -0.0050, -0.0020, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3360);
				case 206..235: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.0760, -0.0140, 0.0010, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3060);
				case 236..266: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1190, -0.0010, -0.0010, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.2950);
				case 267..311: SetPlayerAttachedObjectEx(playerid, 0, objectid, 2, 0.1110, -0.0010, -0.0010, 0.0000, 0.0000, -83.2000, 0.7080, 0.6020, 0.3370);
			}
		}
		else if(type == 29)
		{
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.089999,-0.054999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.120000,1.079998,1.029000 );
				case 2: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.085000,-0.054999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.120000,1.079998,1.029000 );
				case 3: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.085000,-0.054999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.120000,1.079998,1.029000 );
				case 4: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.099000,-0.046999,-0.002000 ,  0.000000,90.000000,0.000000 ,  1.067000,1.079998,1.029000 );
				case 5: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.078000,-0.047999,-0.002000 ,  0.000000,90.000000,0.000000 ,  1.330000,1.319998,1.228000 );
				case 6: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.095000,-0.047999,-0.002000 ,  0.000000,90.000000,0.000000 ,  0.978000,1.154998,1.164000 );
				case 7: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.049000,-0.039000,-0.008000 ,  0.000000,90.000000,0.000000 ,  1.084000,1.154998,1.164000 );
				case 9: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062000,-0.039000,-0.001000 ,  0.000000,90.000000,0.000000 ,  0.942000,1.184998,1.164000 );
				case 11: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.077000,-0.039000,-0.001000 ,  0.000000,90.000000,0.000000 ,  0.942000,1.184998,1.164000 );
				case 12: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.052000,-0.048999,-0.001000 ,  0.000000,90.000000,0.000000 ,  0.869000,1.184998,1.164000 );
				case 13: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.093000,-0.035999,-0.006000 ,  0.000000,90.000000,0.000000 ,  0.869000,1.184998,1.164000 );
				case 14: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.078000,-0.044999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.005000,1.184998,1.164000 );
				case 15: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.078000,-0.044999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.005000,1.184998,1.164000 );
				case 17: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.078000,-0.039999,-0.002000 ,  0.000000,90.000000,0.000000 ,  1.005000,1.184998,1.164000 );
				case 18: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.078000,-0.039999,-0.002000 ,  0.000000,90.000000,0.000000 ,  0.979000,1.042998,1.093000 );
				case 19: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.108000,-0.039999,-0.002000 ,  0.000000,90.000000,0.000000 ,  0.979000,1.042998,1.093000 );
				case 20: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.014999,-0.002000 ,  0.000000,90.000000,0.000000 ,  0.979000,1.042998,1.093000 );
				case 21: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.014999,-0.002000 ,  0.000000,90.000000,0.000000 ,  1.012000,1.071998,1.093000 );
				case 22: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.025999,-0.002000 ,  0.000000,90.000000,0.000000 ,  1.078000,1.071998,1.093000 );
				case 23: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.025999,-0.002000 ,  0.000000,90.000000,0.000000 ,  0.951000,1.071998,1.093000 );
				case 24: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.025999,-0.002000 ,  0.000000,90.000000,0.000000 ,  1.062000,1.173999,1.093000 );
				case 25: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.025999,-0.002000 ,  0.000000,90.000000,0.000000 ,  1.062000,1.173999,1.093000 );
				case 28: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.033999,-0.008000 ,  0.000000,90.000000,0.000000 ,  1.119000,1.173999,1.093000 );
				case 30: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.033999,-0.008000 ,  0.000000,90.000000,0.000000 ,  1.119000,1.173999,1.093000 );
				case 32: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.058000,-0.008000 ,  0.000000,90.000000,0.000000 ,  0.885001,1.006999,1.093000 );
				case 34: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.027000,-0.008000 ,  0.000000,90.000000,0.000000 ,  0.885001,1.006999,1.093000 );
				case 35: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.027000,-0.008000 ,  0.000000,90.000000,0.000000 ,  1.068001,1.003999,1.093000 );
				case 36: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.027000,-0.008000 ,  0.000000,90.000000,0.000000 ,  1.068001,1.003999,1.093000 );
				case 37: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.027000,-0.008000 ,  0.000000,90.000000,0.000000 ,  1.068001,1.003999,1.093000 );
				case 43: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.027000,-0.008000 ,  0.000000,90.000000,0.000000 ,  0.965001,0.922999,0.975000 );
				case 44: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.082000,-0.027000,-0.008000 ,  0.000000,90.000000,0.000000 ,  0.917001,0.961999,0.894000 );
				case 45: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.103000,-0.017000,-0.008000 ,  0.000000,90.000000,0.000000 ,  0.917001,0.961999,0.894000 );
				case 46: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.103000,-0.030000,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.100000,1.024998,0.999000 );
				case 47: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.090000,-0.030000,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.100000,1.024998,0.999000 );
				case 48: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.090000,-0.030000,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.100000,1.024998,0.999000 );
				case 57: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.146999,-0.030000,-0.004000 ,  0.000000,90.000000,0.000000 ,  0.962001,0.902998,0.999000 );
				case 58: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.057999,-0.030000,-0.004000 ,  0.000000,90.000000,0.000000 ,  0.851001,0.902998,0.999000 );
				case 59: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.057999,-0.030000,-0.004000 ,  0.000000,90.000000,0.000000 ,  0.972001,1.047998,1.178999 );
				case 60: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.057999,-0.009000,-0.004000 ,  0.000000,90.000000,0.000000 ,  0.972001,1.047998,1.178999 );
				case 61: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.040999,-0.029000,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.036001,0.948998,1.219999 );
				case 68: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.040999,-0.020000,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.036001,0.948998,1.219999 );
				case 70: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.063999,-0.020000,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.082001,1.035998,1.219999 );
				case 71: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.063999,-0.031000,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.082001,1.035998,1.219999 );
				case 72: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.063999,-0.040000,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.082001,1.035998,1.219999 );
				case 73: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.091000,-0.050999,0.000000 ,  0.000000,90.000000,0.000000 ,  1.096999,0.971998,1.035001 );
				case 78: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.102999,-0.031999,0.008000 ,  0.000000,90.000000,0.000000 ,  1.096999,0.971998,1.138001 );
				case 79: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.085999,-0.036998,0.008000 ,  0.000000,90.000000,0.000000 ,  1.096999,1.117999,1.138001 );
				case 86: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.085999,-0.072999,0.002999 ,  0.000000,90.000000,0.000000 ,  1.096999,1.117999,1.138001 );
				case 94: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.022999,-0.043999,0.002999 ,  0.000000,90.000000,0.000000 ,  0.933999,1.000999,1.138001 );
				case 95: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.022999,-0.043999,-0.005000 ,  0.000000,90.000000,0.000000 ,  0.901998,1.000999,1.138001 );
				case 96: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.065999,-0.043999,-0.005000 ,  0.000000,90.000000,0.000000 ,  1.039999,1.176999,1.394001 );
				case 97: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.043999,-0.005000 ,  0.000000,90.000000,0.000000 ,  1.039999,1.176999,1.394001 );
				case 98: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.043999,-0.005000 ,  0.000000,90.000000,0.000000 ,  1.100999,1.176999,1.394001 );
				case 100: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.043999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.100999,1.176999,1.394001 );
				case 101: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.031999,-0.043999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.100999,1.176999,1.394001 );
				case 102: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.043999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.100999,1.176999,1.394001 );
				case 104: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.034999,-0.000000 ,  0.000000,90.000000,0.000000 ,  1.177999,1.176999,1.394001 );
				case 106: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.044999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.198999,1.176999,1.394001 );
				case 107: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.044999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.198999,1.176999,1.394001 );
				case 108: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.044999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.026999,1.176999,1.394001 );
				case 109: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.044999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.331999,1.394001 );
				case 110: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.020999,-0.044999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.331999,1.394001 );
				case 111: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.026999,-0.044999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.331999,1.394001 );
				case 112: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, -0.018000,-0.066999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.331999,1.394001 );
				case 114: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.066999,-0.007000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.331999,1.394001 );
				case 115: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.066999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.331999,1.394001 );
				case 116: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.066999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.144999,1.436999,1.394001 );
				case 119: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.066999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.100999,1.224999,1.394001 );
				case 120: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.100999,1.224999,1.394001 );
				case 121: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.100999,1.224999,1.394001 );
				case 122: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.948999,1.224999,1.394001 );
				case 123: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.054999,1.256999,1.394001 );
				case 124: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.054999,1.265999,1.394001 );
				case 125: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.054999,1.265999,1.394001 );
				case 126: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.054999,1.265999,1.394001 );
				case 127: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,0.001999 ,  0.000000,90.000000,0.000000 ,  1.123998,1.363999,1.394001 );
				case 134: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,0.001999 ,  0.000000,90.000000,0.000000 ,  0.980999,1.067999,1.082000 );
				case 135: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.067999,1.432999,1.372001 );
				case 136: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.016999,-0.046999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.939999,0.939999,1.126001 );
				case 137: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.046999,-0.007000 ,  0.000000,90.000000,0.000000 ,  0.869999,0.939999,1.126001 );
				case 147: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.046999,-0.000000 ,  0.000000,90.000000,0.000000 ,  1.044999,1.166999,1.199001 );
				case 153: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.046999,-0.000000 ,  0.000000,90.000000,0.000000 ,  1.044999,1.166999,1.199001 );
				case 154: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.046999,-0.000000 ,  0.000000,90.000000,0.000000 ,  1.044999,1.166999,1.199001 );
				case 155: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.066999,-0.011000 ,  0.000000,90.000000,0.000000 ,  1.154999,1.391999,1.199001 );
				case 156: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.066999,-0.011000 ,  0.000000,90.000000,0.000000 ,  1.080999,1.245999,1.199001 );
				case 160: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.066999,-0.011000 ,  0.000000,90.000000,0.000000 ,  0.870999,1.104999,1.199001 );
				case 161: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.066999,-0.011000 ,  0.000000,90.000000,0.000000 ,  0.979999,1.306999,1.199001 );
				case 163: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.080999,-0.066999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.487999,1.199001 );
				case 164: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.080999,-0.066999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.487999,1.199001 );
				case 165: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.001999,-0.066999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.190999,1.199001 );
				case 166: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.001999,-0.066999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.190999,1.199001 );
				case 170: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.040999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.190999,1.199001 );
				case 171: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.040999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.088999,1.270001 );
				case 173: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.046999,-0.040999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 174: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.046999,-0.040999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 175: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.046999,-0.040999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 179: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.046999,-0.040999,-0.013000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 181: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.068999,-0.047999,-0.013000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 182: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.053999,-0.047999,-0.013000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 183: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.053999,-0.047999,-0.013000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 184: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.053999,-0.047999,-0.013000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 185: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.044999,-0.047999,-0.013000 ,  0.000000,90.000000,0.000000 ,  1.049999,1.239999,1.270001 );
				case 186: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.030999,-0.047999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.104999,1.239999,1.270001 );
				case 187: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.030999,-0.047999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.104999,1.239999,1.270001 );
				case 188: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.030999,-0.047999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 189: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.030999,-0.047999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 191: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.072999,-0.047999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 192: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.072999,-0.047999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 193: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.072999,-0.050999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 194: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.072999,-0.050999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 195: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.072999,-0.043999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 200: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.049999,-0.069999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 202: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.049999,-0.069999,-0.009000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 206: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.049999,-0.059999,-0.001000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 208: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.039999,-0.059999,-0.001000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 210: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, -0.006000,-0.059999,-0.001000 ,  0.000000,90.000000,0.000000 ,  0.985999,1.239999,1.270001 );
				case 211: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.058999,-0.059999,-0.001000 ,  0.000000,90.000000,0.000000 ,  0.892999,1.239999,1.270001 );
				case 212: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, -0.016000,-0.059999,-0.001000 ,  0.000000,90.000000,0.000000 ,  0.892999,1.239999,1.270001 );
				case 213: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.041999,-0.040999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.077999,1.239999,1.270001 );
				case 217: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.041999,-0.040999,-0.010000 ,  0.000000,90.000000,0.000000 ,  0.950999,1.239999,1.270001 );
				case 220: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.041999,-0.021999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.054999,1.239999,1.270001 );
				case 221: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.034999,-0.043999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.095999,1.239999,1.270001 );
				case 222: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.034999,-0.043999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.095999,1.239999,1.270001 );
				case 223: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.017999,-0.043999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.095999,1.239999,1.270001 );
				case 227: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.078999,-0.080999,-0.010000 ,  0.000000,90.000000,0.000000 ,  1.095999,1.239999,1.270001 );
				case 228: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.027999,-0.042999,-0.011000 ,  0.000000,90.000000,0.000000 ,  1.095999,1.239999,1.270001 );
				case 229: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.027999,-0.042999,-0.011000 ,  0.000000,90.000000,0.000000 ,  0.895999,1.019999,1.270001 );
				case 230: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.027999,-0.042999,-0.011000 ,  0.000000,90.000000,0.000000 ,  0.895999,1.019999,1.270001 );
				case 234: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.010999,-0.042999,-0.011000 ,  0.000000,90.000000,0.000000 ,  0.895999,1.019999,1.270001 );
				case 235: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.010999,-0.042999,-0.011000 ,  0.000000,90.000000,0.000000 ,  0.895999,1.019999,1.270001 );
				case 236: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.010999,-0.042999,-0.011000 ,  0.000000,90.000000,0.000000 ,  0.895999,1.019999,1.270001 );
				case 239: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.072999,-0.057999,-0.011000 ,  0.000000,90.000000,0.000000 ,  1.039998,1.337998,1.324001 );
				case 240: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.033999,-0.057999,-0.004000 ,  0.000000,90.000000,0.000000 ,  0.982998,1.153998,1.324001 );
				case 247: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.033999,-0.057999,-0.018000 ,  0.000000,90.000000,0.000000 ,  1.090999,1.460998,1.324001 );
				case 248: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.033999,-0.077999,-0.018000 ,  0.000000,90.000000,0.000000 ,  1.090999,1.460998,1.324001 );
				case 250: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.033999,-0.077999,-0.018000 ,  0.000000,90.000000,0.000000 ,  1.090999,1.460998,1.324001 );
				case 252: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.049999,-0.068999,0.003999 ,  0.000000,90.000000,0.000000 ,  1.009999,1.295998,1.324001 );
				case 254: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.049999,-0.030999,-0.013000 ,  0.000000,90.000000,0.000000 ,  1.097998,1.295998,1.324001 );
				case 255: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.049999,-0.030999,-0.004000 ,  0.000000,90.000000,0.000000 ,  1.045999,1.053998,1.249001 );
				case 258: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.052999,-0.005999,-0.009000 ,  0.000000,90.000000,0.000000 ,  1.239999,1.130998,1.372001 );
				case 259: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.042999,-0.012999,-0.014000 ,  0.000000,90.000000,0.000000 ,  1.239999,1.130998,1.372001 );
				case 261: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.029999,-0.038999,-0.010000 ,  0.000000,90.000000,0.000000 ,  0.867999,0.918998,1.073001 );
				case 265: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.040999,-0.015999,-0.008000 ,  0.000000,90.000000,0.000000 ,  1.082999,1.042998,1.238001 );
				case 266: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.040999,-0.051999,-0.008000 ,  0.000000,90.000000,0.000000 ,  1.082999,1.113998,1.238001 );
				case 267: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.245999,-0.034999,-0.011000 ,  0.000000,90.000000,0.000000 ,  1.082999,1.113998,1.238001 );
				case 270: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.034999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.082999,1.113998,1.238001 );
				case 271: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.048999,-0.048999,-0.006000 ,  0.000000,90.000000,0.000000 ,  1.082999,1.113998,1.238001 );
				case 272: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.036999,-0.011999,-0.017000 ,  0.000000,90.000000,0.000000 ,  1.216999,1.113998,1.238001 );
				case 273: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.036999,-0.009999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.026999,0.996998,1.238001 );
				case 274: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 275: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 276: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 280: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 281: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 282: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 283: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.062999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 284: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.037999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 285: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.073999,-0.034999,-0.009999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 286: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.036999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.096999,0.996998,1.238001 );
				case 287: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.036999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.082999,0.974998,1.238001 );
				case 288: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.064999,-0.036999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.082999,0.974998,1.238001 );
				case 289: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.037999,-0.036999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.128999,1.172998,1.238001 );
				case 290: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.048999,-0.051999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.128999,1.172998,1.238001 );
				case 291: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.048999,-0.057999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.128999,1.172998,1.238001 );
				case 292: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.089999,-0.057999,-0.006999 ,  0.000000,90.000000,0.000000 ,  0.964999,1.172998,1.238001 );
				case 293: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.089999,-0.057999,-0.006999 ,  0.000000,90.000000,0.000000 ,  0.964999,1.172998,1.238001 );
				case 294: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.079999,-0.057999,-0.006999 ,  0.000000,90.000000,0.000000 ,  0.964999,1.172998,1.238001 );
				case 295: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, -0.009000,-0.054999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.038999,1.172998,1.238001 );
				case 296: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, -0.009000,-0.054999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 297: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.048999,-0.054999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 299: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.074999,-0.054999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 300: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 301: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 302: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 303: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 304: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 305: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.085999,1.220998,1.238001 );
				case 306: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  0.881999,1.220998,1.238001 );
				case 307: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  0.881999,1.220998,1.238001 );
				case 308: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  0.881999,1.220998,1.238001 );
				case 309: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  0.881999,1.220998,1.238001 );
				case 310: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.076999,1.220998,1.238001 );
				case 311: SetPlayerAttachedObjectEx(playerid, 5, objectid, 1, 0.059999,-0.062999,-0.006999 ,  0.000000,90.000000,0.000000 ,  1.076999,1.220998,1.238001 );
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 30)
		{
			switch(skinid)
			{
				case 1..311:SetPlayerAttachedObjectEx(playerid, 5, objectid, 15,  0.162000, -0.027000, 0.033000, 0.000000, 0.000000, 0.000000,  0.009999, 0.009999, 0.009999);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		else if(type == 31) SetPlayerAttachedObjectEx(playerid, 0, 19197, 2, 0.2100, 0.0000, 0.0000, 0.0000, 84.5000, 0.0000, 0.2660, 0.2730, 0.0000, -1, -1);
		else if(type == 32)//�����
		{
			switch (skinid)
			{
				case 1: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.148998,-0.014000,-0.001001, 0.000000,179.400024,-154.400009, 1.000000,1.000000,1.070000);
				case 3: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.148998,-0.014000,-0.001001, 0.000000,179.400024,-154.400009, 1.000000,1.000000,1.070000);
				case 4: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.159998,-0.014000,-0.008000, 0.000000,179.400024,-154.400009, 1.000000,1.000000,1.126000);
				case 5: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.157998,0.014000,-0.002001, 0.000000,0.600003,13.600016, 1.000000,1.000000,1.000000);
				case 7: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.157998,0.014000,-0.002001, 0.000000,0.600003,-0.099983, 1.000000,1.000000,1.000000);
				case 9: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.157998,-0.001000,-0.002001, 0.000000,0.600003,-0.099983, 1.000000,1.000000,1.000000);
				case 10: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.146998,0.000999,-0.002001, 0.000000,0.600003,-0.099983, 1.000000,1.000000,1.000000);
				case 11: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.146998,0.000999,-0.002001, 0.000000,0.600003,-0.099983, 1.000000,1.000000,1.000000);
				case 12: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.146998,-0.008000,-0.002001, 0.000000,0.600003,-0.099983, 1.000000,1.000000,1.000000);
				case 14: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.146998,0.007000,0.003998, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 15: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.119997,-0.027000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 17: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.137998,0.001000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 18: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.130998,-0.007999,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 20: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.152998,-0.007999,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 21: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.152998,-0.004999,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 25: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.133998,0.005000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 26: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.157998,0.000000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 28: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.140998,0.015000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 30: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.144998,0.011000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 40: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.144998,-0.006999,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 43: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.099998,0.000000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 44: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.115998,0.024000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 45: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.115998,-0.004999,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 46: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.142998,0.016000,-0.000001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.000000);
				case 47: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.142998,0.007000,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.037000);
				case 48: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.161998,-0.008999,-0.002001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 49: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.128998,0.013000,-0.002001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 54: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.128998,0.028000,0.000998, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 55: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.128998,-0.009999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 56: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.128998,-0.012000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 57: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.161998,0.010000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 58: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.122998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 59: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.180998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 60: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.151998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 66: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.151998,0.008000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 67: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.151998,0.008000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 68: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.151998,0.017000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 69: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.136998,-0.004000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 70: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.147998,0.012000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 72: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.139998,0.017000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 73: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.139998,0.006999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 76: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.139998,-0.013000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 82: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.196998,0.012000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 83: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.180998,0.002999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 84: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.180998,-0.005000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 86: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.124998,-0.005000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 90: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.146998,-0.005000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 91: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.146998,-0.010000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 95: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.124998,-0.012000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 96: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.148998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 97: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.148998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 98: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.153998,0.011000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 100: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.153998,-0.000000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 101: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.163998,-0.004000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 102: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.152998,-0.004000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 103: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.173998,-0.008000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 105: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.173998,-0.013000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 106: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.173998,-0.013000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 108: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.173998,0.003999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 109: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.173998,-0.003000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 110: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.173998,-0.003000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 111: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.157998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 112: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.140998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 113: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.140998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 114: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.169998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 116: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.169998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 117: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.122998,0.016000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 118: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.122998,0.023000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 119: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.134998,0.006999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 120: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.134998,-0.003000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 121: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.134998,-0.004000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 122: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.134998,-0.004000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 123: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.144998,0.000999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 125: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.144998,0.010999,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 126: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.144998,-0.005000,-0.001001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 127: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.144998,-0.005000,0.001998, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 128: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.174998,0.007999,0.001998, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 147: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.125998,-0.011000,0.001998, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 148: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.125998,-0.011000,0.001998, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 151: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.167998,-0.012000,0.001998, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 154: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.127998,-0.012000,0.001998, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 156: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.174998,-0.022000,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 160: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.122998,0.010999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 162: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.154998,0.010999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 163: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.132998,0.000999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 164: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.132998,0.000999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 165: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.132998,0.000999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 166: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.132998,0.000999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 169: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.147998,-0.016000,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 170: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.136998,0.007000,-0.005001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 171: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.158998,-0.008999,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 172: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.139998,-0.001999,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 176: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.139998,-0.001999,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 179: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.139998,-0.001999,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 180: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.148998,-0.001999,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 182: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.131998,-0.001999,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 183: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.131998,0.007000,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 184: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.131998,0.007000,-0.003001, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 185: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.144998,0.003000,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 186: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.144998,-0.011000,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 187: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.129998,-0.011000,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 188: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.129998,0.005000,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 189: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.147998,-0.004999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 191: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.164998,-0.010999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 192: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.164998,-0.010999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 193: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.164998,-0.010999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 194: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.164998,-0.010999,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 200: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.143998,0.003000,0.002999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 206: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.143998,0.007000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 207: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.118998,0.006000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 208: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.132998,0.009000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 210: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.111998,0.001000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 212: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.115998,0.007000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 213: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.129998,0.000000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 214: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.131998,-0.010999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 217: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.152998,-0.005999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 221: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.169998,-0.010999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 222: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.169998,-0.020000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 223: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.176998,0.017000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 226: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.124998,-0.012999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 227: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.155998,0.012000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 228: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.166998,0.003000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 229: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.119998,-0.011000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 234: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.119998,-0.011000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 235: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.095998,-0.011000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 236: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.109998,-0.000000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 240: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.150998,-0.000000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 247: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.160998,-0.006000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.000000,1.069000);
				case 248: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.188998,0.001999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.031999,1.069000);
				case 250: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.130998,0.001999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.031999,1.069000);
				case 252: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.143998,-0.010000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.031999,1.069000);
				case 254: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.159998,-0.010000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.031999,1.069000);
				case 258: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.156998,-0.002000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.031999,1.069000);
				case 259: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.156998,-0.002000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.031999,1.146000);
				case 262: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.121998,0.012000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.031999,1.146000);
				case 265: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.117998,0.011000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,1.031999,1.146000);
				case 266: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.117998,-0.002999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 267: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.117998,-0.002999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 272: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.159998,-0.003999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 273: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.121998,-0.003999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 274: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.121998,0.011000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 275: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.121998,0.004000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 276: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.135998,0.004000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 280: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.126998,0.007000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 281: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.126998,0.007000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 282: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.126998,0.007000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 286: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.130998,0.007000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 290: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.140998,-0.004999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.956999,1.049000);
				case 291: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.168998,0.004000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.990999,1.049000);
				case 292: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.133998,0.004000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.990999,1.049000);
				case 294: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.151998,0.012000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.990999,1.049000);
				case 295: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.131998,0.000000,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.990999,1.049000);
				case 296: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.141998,-0.008999,0.001999, 0.000000,0.600003,-6.399982, 1.000000,0.990999,1.049000);
				case 297: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.149998,-0.003999,0.001999, 0.000000,0.600003,-6.399982, 1.075999,1.065999,1.049000);
				case 298: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.152998,-0.007999,0.001999, 0.000000,0.600003,-6.399982, 1.075999,1.065999,1.049000);
				case 299: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.159998,0.020000,0.001999, 0.000000,0.600003,-6.399982, 1.075999,1.065999,1.049000);
				case 300: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.146999,0.002000,0.001999, 0.000000,0.600003,-6.399982, 1.051999,0.800999,0.970000);
				case 301: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.146999,0.002000,0.001999, 0.000000,0.600003,-6.399982, 1.051999,0.849999,0.970000);
				case 302: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.154999,0.006000,0.001999, 0.000000,0.600003,-6.399982, 1.051999,0.849999,0.970000);
				case 303: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.154999,0.006000,0.001999, 0.000000,0.600003,-6.399982, 1.051999,0.849999,0.970000);
				case 304: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.154999,0.006000,0.001999, 0.000000,0.600003,-6.399982, 1.051999,0.849999,0.970000);
				case 305: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.154999,0.006000,0.001999, 0.000000,0.600003,-6.399982, 1.051999,0.849999,0.970000);
				case 310: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.150999,-0.004999,0.001999, 0.000000,0.600003,-6.399982, 1.051999,0.849999,0.970000);
				case 311: SetPlayerAttachedObjectEx (playerid, 0, objectid, 2, 0.150999,-0.004999,0.001999, 0.000000,0.600003,-6.399982, 1.051999,0.849999,0.970000);
				default: SendClientMessage(playerid, 0x8099B5FF, "[Shecdoma]:{ffffff} Archeuli Aksesuari Ar Ergeba Tkvens Skins");
			}
		}
		return true;
	}