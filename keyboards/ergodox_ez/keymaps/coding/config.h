/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR

#undef QMK_KEYS_PER_SCAN
#define QMK_KEYS_PER_SCAN 4

#undef TAPPING_TERM
#define TAPPING_TERM 200

#define RETRO_TAPPING
#define IGNORE_MOD_TAP_INTERRUPT
#define FORCE_NKRO

#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 5

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 100

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 3

#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0
