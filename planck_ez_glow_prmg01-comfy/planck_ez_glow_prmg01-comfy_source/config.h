#pragma once

#ifdef AUDIO_ENABLE
#define STARTUP_SONG SONG(PLANCK_SOUND)
#endif

#define MIDI_BASIC

#define ENCODER_RESOLUTION 4

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define ORYX_CONFIGURATOR
#define ONESHOT_TAP_TOGGLE 2

#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 1000

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"BPqo0/vPNKb"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 4

#define RGB_MATRIX_STARTUP_SPD 60

