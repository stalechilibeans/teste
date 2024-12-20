/********************************************************************************/
/*	Hierarchy map scene 1.														*/
/********************************************************************************/

Hierarchy RCP_Stage1Scene1[] = {
	hmsScene(160, 120, 160, 120, 10)
	hmsBegin()
		hmsLayer(0)
		hmsBegin()
			hmsOrtho(100)
			hmsBegin()
				hmsClear(RGBA16(0, 12, 31, 1), NULL)
			hmsEnd()
		hmsEnd()

		hmsLayer(1)
		hmsBegin()
			hmsPerspective(45, SCREEN_NEAR, SCREEN_FAR, ZoomControl)
			hmsBegin()
				hmsCamera(CAM_FIELD,  0,2000,6000,  -1024*6,0,-1024*6, GameCamera)
				hmsBegin()
					hmsGfx(RM_SURF, gfx_castle)
					hmsObject()
					hmsCProg(0,WeatherProc)
				hmsEnd()
			hmsEnd()
		hmsEnd()

	hmsEnd()
	hmsExit()
};
