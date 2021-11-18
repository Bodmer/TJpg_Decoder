#if defined (ESP32) || defined (ESP8266)
  #define TJPGD_LOAD_SPIFFS
#endif

#define TJPGD_LOAD_SD_LIBRARY

#if defined (ESP6266) || defined(ESP32)
  #define USE_LITTLEFS
#endif

// Use PROGMEM for tables, saves 1K RAM when JD_TBLCLIP is set to 1 in tjpgd.h
// #define TJPG_USE_PROGMEM



// Do not change this, it is the minimum size in bytes of the workspace needed by the decoder
#define TJPGD_WORKSPACE_SIZE 3100
