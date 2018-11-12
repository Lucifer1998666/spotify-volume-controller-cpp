/*
	Should be changed to Config.cpp after correct values are input.
	Your client id and secret can be found at Spotify's developer dashboard.
	https://developer.spotify.com/dashboard/applications
*/

#include "Config.h"

Config::Config() {
}


Config::~Config() {
}
// Must be kept secret!
utility::string_t Config::CLIENT_ID = L"your-client-id-here";
utility::string_t Config::CLIENT_SECRET = L"your-client-secret-here";

utility::string_t Config::SCOPES = L"user-read-playback-state user-modify-playback-state";
utility::string_t Config::REDIRECT_URI = L"http://localhost:5000/callback";
