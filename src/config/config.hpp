#pragma once

#define CONFIG_AUTOREPLAY_ENABLED "AutoReplayEnabled"
#define CONFIG_PLAY_NOTIF_SOUND "PlayNotifSound"
#define CONFIG_SHOW_DESKTOP_NOTIF "ShowDesktopNotif"
#define CONFIG_INCLUDE_SCREENSHOTS "IncludeScreenshots"
#define CONFIG_FORCE_EXE_NAME "ForceExecutableName"
#define CONFIG_INCLUDE_GAME_IN_FILENAME "IncludeGameInFilename"
#define CONFIG_EXCLUSION_ITEM_STRING "AppName"
#define CONFIG_EXCLUSIONS "Exclusions"

#include <string>
#include <vector>
#include <atomic>
#include <obs.h>

struct Config {

	static Config &Inst();

	Config();

	void Load(obs_data_t *load_data);
	void Save(obs_data_t *save_data);

	void SetDefaults(obs_data_t *data);

	bool m_auto_replay_buffer = true;
	bool m_include_screenshots = true;
	bool m_force_exe = false;
	bool m_include_game_in_filename = false;
	bool m_play_notif_sound = true;
	bool m_show_desktop_notif = true;
	std::vector<std::string> m_exclusions = std::vector<std::string>();
};
