/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR

#undef TAPPING_TERM
#undef MOUSEKEY_TIME_TO_MAX
#undef QMK_KEYS_PER_SCAN
#undef TAPPING_TERM

#define QMK_KEYS_PER_SCAN 4
#define TAPPING_TERM 200
#define RETRO_TAPPING
#define MOUSEKEY_TIME_TO_MAX 40
#define IGNORE_MOD_TAP_INTERRUPT
#define FORCE_NKRO
