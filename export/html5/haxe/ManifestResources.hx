package;


import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf);
		openfl.text.Font.registerFont (__ASSET__OPENFL__flixel_fonts_monsterrat_ttf);
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy34:assets%2Fdata%2Fdata-goes-here.txty4:sizezy4:typey4:TEXTy2:idR1y7:preloadtgoR0y29:assets%2Fdata%2Froom-001.jsonR2i8836R3R4R5R7R6tgoR0y32:assets%2Fdata%2FturnBaseRPG.ogmoR2i6072R3R4R5R8R6tgoR0y26:assets%2Fimages%2Fboss.pngR2i2558R3y5:IMAGER5R9R6tgoR0y28:assets%2Fimages%2Fbutton.pngR2i1126R3R10R5R11R6tgoR0y26:assets%2Fimages%2Fcoin.pngR2i984R3R10R5R12R6tgoR0y27:assets%2Fimages%2Fenemy.pngR2i2405R3R10R5R13R6tgoR0y28:assets%2Fimages%2Fhealth.pngR2i984R3R10R5R14R6tgoR0y36:assets%2Fimages%2Fimages-go-here.txtR2zR3R4R5R15R6tgoR0y26:assets%2Fimages%2Finfo.txtR2i439R3R4R5R16R6tgoR0y28:assets%2Fimages%2Fplayer.pngR2i1876R3R10R5R17R6tgoR0y29:assets%2Fimages%2Fpointer.pngR2i992R3R10R5R18R6tgoR0y27:assets%2Fimages%2Ftiles.pngR2i1056R3R10R5R19R6tgoR2i1356419R3y5:MUSICR5y45:assets%2Fmusic%2FHaxeFlixel_Tutorial_Game.oggy9:pathGroupaR21hR6tgoR0y36:assets%2Fmusic%2Fmusic-goes-here.txtR2zR3R4R5R23R6tgoR2i23978R3y5:SOUNDR5y26:assets%2Fsounds%2Fcoin.wavR22aR25hR6tgoR2i39300R3R24R5y28:assets%2Fsounds%2Fcombat.wavR22aR26hR6tgoR2i34298R3R24R5y26:assets%2Fsounds%2Ffled.wavR22aR27hR6tgoR2i20012R3R24R5y26:assets%2Fsounds%2Fhurt.wavR22aR28hR6tgoR2i33516R3R24R5y26:assets%2Fsounds%2Flose.wavR22aR29hR6tgoR2i24158R3R24R5y26:assets%2Fsounds%2Fmiss.wavR22aR30hR6tgoR2i10518R3R24R5y28:assets%2Fsounds%2Fselect.wavR22aR31hR6tgoR0y36:assets%2Fsounds%2Fsounds-go-here.txtR2zR3R4R5R32R6tgoR2i10188R3R24R5y26:assets%2Fsounds%2Fstep.wavR22aR33hR6tgoR2i39300R3R24R5y65:assets%2Fsounds%2FTutorials_TurnBasedRPG_assets_sounds_combat.wavR22aR34hR6tgoR2i54320R3R24R5y25:assets%2Fsounds%2Fwin.wavR22aR35hR6tgoR2i2114R3R20R5y26:flixel%2Fsounds%2Fbeep.mp3R22aR36y26:flixel%2Fsounds%2Fbeep.ogghR6tgoR2i39706R3R20R5y28:flixel%2Fsounds%2Fflixel.mp3R22aR38y28:flixel%2Fsounds%2Fflixel.ogghR6tgoR2i5794R3R24R5R37R22aR36R37hgoR2i33629R3R24R5R39R22aR38R39hgoR2i15744R3y4:FONTy9:classNamey35:__ASSET__flixel_fonts_nokiafc22_ttfR5y30:flixel%2Ffonts%2Fnokiafc22.ttfR6tgoR2i29724R3R40R41y36:__ASSET__flixel_fonts_monsterrat_ttfR5y31:flixel%2Ffonts%2Fmonsterrat.ttfR6tgoR0y33:flixel%2Fimages%2Fui%2Fbutton.pngR2i519R3R10R5R46R6tgoR0y36:flixel%2Fimages%2Flogo%2Fdefault.pngR2i3280R3R10R5R47R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_room_001_json extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_data_turnbaserpg_ogmo extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_boss_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_coin_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_enemy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_health_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_info_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_pointer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_images_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_haxeflixel_tutorial_game_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_coin_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_combat_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_fled_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_hurt_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_lose_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_miss_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_select_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_step_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_tutorials_turnbasedrpg_assets_sounds_combat_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_sounds_win_wav extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/data/data-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_data_data_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/data/room-001.json") @:noCompletion #if display private #end class __ASSET__assets_data_room_001_json extends haxe.io.Bytes {}
@:keep @:file("assets/data/turnBaseRPG.ogmo") @:noCompletion #if display private #end class __ASSET__assets_data_turnbaserpg_ogmo extends haxe.io.Bytes {}
@:keep @:image("assets/images/boss.png") @:noCompletion #if display private #end class __ASSET__assets_images_boss_png extends lime.graphics.Image {}
@:keep @:image("assets/images/button.png") @:noCompletion #if display private #end class __ASSET__assets_images_button_png extends lime.graphics.Image {}
@:keep @:image("assets/images/coin.png") @:noCompletion #if display private #end class __ASSET__assets_images_coin_png extends lime.graphics.Image {}
@:keep @:image("assets/images/enemy.png") @:noCompletion #if display private #end class __ASSET__assets_images_enemy_png extends lime.graphics.Image {}
@:keep @:image("assets/images/health.png") @:noCompletion #if display private #end class __ASSET__assets_images_health_png extends lime.graphics.Image {}
@:keep @:file("assets/images/images-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_images_images_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/images/info.txt") @:noCompletion #if display private #end class __ASSET__assets_images_info_txt extends haxe.io.Bytes {}
@:keep @:image("assets/images/player.png") @:noCompletion #if display private #end class __ASSET__assets_images_player_png extends lime.graphics.Image {}
@:keep @:image("assets/images/pointer.png") @:noCompletion #if display private #end class __ASSET__assets_images_pointer_png extends lime.graphics.Image {}
@:keep @:image("assets/images/tiles.png") @:noCompletion #if display private #end class __ASSET__assets_images_tiles_png extends lime.graphics.Image {}
@:keep @:file("assets/music/HaxeFlixel_Tutorial_Game.ogg") @:noCompletion #if display private #end class __ASSET__assets_music_haxeflixel_tutorial_game_ogg extends haxe.io.Bytes {}
@:keep @:file("assets/music/music-goes-here.txt") @:noCompletion #if display private #end class __ASSET__assets_music_music_goes_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/coin.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_coin_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/combat.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_combat_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/fled.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_fled_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/hurt.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_hurt_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/lose.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_lose_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/miss.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_miss_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/select.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_select_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/sounds-go-here.txt") @:noCompletion #if display private #end class __ASSET__assets_sounds_sounds_go_here_txt extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/step.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_step_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/Tutorials_TurnBasedRPG_assets_sounds_combat.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_tutorials_turnbasedrpg_assets_sounds_combat_wav extends haxe.io.Bytes {}
@:keep @:file("assets/sounds/win.wav") @:noCompletion #if display private #end class __ASSET__assets_sounds_win_wav extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/beep.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/flixel.mp3") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_mp3 extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/beep.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_beep_ogg extends haxe.io.Bytes {}
@:keep @:file("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/sounds/flixel.ogg") @:noCompletion #if display private #end class __ASSET__flixel_sounds_flixel_ogg extends haxe.io.Bytes {}
@:keep @:font("export/html5/obj/webfont/nokiafc22.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font {}
@:keep @:font("export/html5/obj/webfont/monsterrat.ttf") @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/images/ui/button.png") @:noCompletion #if display private #end class __ASSET__flixel_images_ui_button_png extends lime.graphics.Image {}
@:keep @:image("C:/HaxeToolkit/haxe/lib/flixel/4,9,0/assets/images/logo/default.png") @:noCompletion #if display private #end class __ASSET__flixel_images_logo_default_png extends lime.graphics.Image {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_nokiafc22_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/nokiafc22"; #else ascender = 2048; descender = -512; height = 2816; numGlyphs = 172; underlinePosition = -640; underlineThickness = 256; unitsPerEM = 2048; #end name = "Nokia Cellphone FC Small"; super (); }}
@:keep @:expose('__ASSET__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__flixel_fonts_monsterrat_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "flixel/fonts/monsterrat"; #else ascender = 968; descender = -251; height = 1219; numGlyphs = 263; underlinePosition = -150; underlineThickness = 50; unitsPerEM = 1000; #end name = "Monsterrat"; super (); }}


#end

#if (openfl && !flash)

#if html5
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#else
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_nokiafc22_ttf ()); super (); }}
@:keep @:expose('__ASSET__OPENFL__flixel_fonts_monsterrat_ttf') @:noCompletion #if display private #end class __ASSET__OPENFL__flixel_fonts_monsterrat_ttf extends openfl.text.Font { public function new () { __fromLimeFont (new __ASSET__flixel_fonts_monsterrat_ttf ()); super (); }}

#end

#end
#end

#end
