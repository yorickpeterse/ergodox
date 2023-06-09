/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR

#undef QMK_KEYS_PER_SCAN
#define QMK_KEYS_PER_SCAN 4

#undef TAPPING_TERM
#define TAPPING_TERM 25

#undef RETRO_TAPPING
#define RETRO_TAPPING

#undef IGNORE_MOD_TAP_INTERRUPT
#define IGNORE_MOD_TAP_INTERRUPT

#undef FORCE_NKRO
#define FORCE_NKRO

#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 5

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 150

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 3

#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 0

#undef USB_POLLING_INTERVAL_MS
#define USB_POLLING_INTERVAL_MS 10
