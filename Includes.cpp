#include "Includes.hpp"

HDC Includes::ragedc = NULL;

std::string Includes::sub1;
std::string Includes::uid1;
float Includes::game_sensitivity = 0.05;
float Includes::XCONTROL = 1;
float Includes::YCONTROL = 1;
float Includes::bulletscale = 0;

int Includes::rpbind = 0;
int Includes::pybind = 0;
int Includes::m9bind = 0;
int Includes::m3bind = 0;
int Includes::revbind = 0;
int Includes::zmbind = 0;
int Includes::mpbind = 0;
int Includes::csbind = 0;
int Includes::tmbind = 0;
int Includes::smbind = 0;
int Includes::m2bind = 0;
int Includes::ptbind = 0;
int Includes::xxbind = 0;
int Includes::yybind = 0;
int Includes::hhbind = 0;
int Includes::ssbind = 0;
int Includes::slbind = 0;
int Includes::bobind = 0;
int Includes::brbind = 0;
int Includes::akbind = 0;
int Includes::lrbind = 0;

int Includes::hgbind = 0;
int Includes::XSCALE = 1;
int Includes::YSCALE = 1;
int Includes::currentTab = 0;
int Includes::currentTab2 = 0;
int Includes::Tab = 0;
int Includes::button = 0;
int Includes::selectedItemWP = 0;
int Includes::selectedItemSC = 0;
int Includes::selectedItemBR = 0;
int Includes::selectedCross = 0;
int Includes::resbind = 0;
int Includes::s1 = 113;
int Includes::s2 = 114;
int Includes::s = 0;
int Includes::crouch_key = 17;
int Includes::w_key = 87;
int Includes::a_key = 65;
int Includes::s_key = 83;
int Includes::d_key = 68;
int Includes::hpbind = 0;
int Includes::subColumn = 0;
int Includes::currentColumn = 1;
int Includes::hsbind = 0;
int Includes::codekey = 0;
int Includes::code1 = 0;
int Includes::code2 = 0;
int Includes::code3 = 0;
int Includes::code4 = 0;
int Includes::crosshairsize = 7;
int Includes::crossbind = 0;
int Includes::cx = 0;
int Includes::cy = 0;

bool Includes::running = false;
bool Includes::showing = true;
bool Includes::rememberme = false;
bool Includes::recoil = true;
bool Includes::autodetect = false;
bool Includes::hideshow = false;
bool Includes::auto_lock = false;
bool Includes::crosshair = false;
bool Includes::clrnon = false;
bool Includes::clrprp = false;
bool Includes::clrgrn = false;
bool Includes::clrblu = false;
bool Includes::clrcyn = false;
bool Includes::clrred = false;
bool Includes::hide_on_ads = false;
bool Includes::legitmode = false;
bool Includes::bRapidf = false;
bool Includes::hipfire = false;
bool Includes::show_info = false;
bool Includes::show_snek = false;
bool Includes::crossrandomcolor = false;
bool Includes::zoom = false;
bool Includes::antiafk = false;
bool Includes::hip_active = false;
bool Includes::randomxy_active = false;
bool Includes::m249_active = false;
bool Includes::semi_active = false;
bool Includes::custom_active = false;
bool Includes::thompson_active = false;
bool Includes::mp5_active = false;
bool Includes::lr_active = false;
bool Includes::py_active = false;
bool Includes::m39_active = false;
bool Includes::m92_active = false;
bool Includes::revolver_active = false;
bool Includes::break_active = false;
bool Includes::boost_active = false;
bool Includes::silencer_active = false;
bool Includes::x16_active = false;
bool Includes::simple_active = false;
bool Includes::sniper_active = false;
bool Includes::resetbut = false;
bool Includes::ak_active = false;
bool Includes::holo_active = false;
char* Includes::cfgname;

const char* Includes::Enabled = "OFF";
const char* Includes::Active_Weapon = "NONE";
const char* Includes::Active_Scopes = "NONE";
const char* Includes::Active_Barrel = "NONE";
const char* Includes::Active_Cross = "NONE";
const char* Includes::Cross_color = "NONE";

char Includes::username[256] = "user";
char Includes::password[256] = "pass";