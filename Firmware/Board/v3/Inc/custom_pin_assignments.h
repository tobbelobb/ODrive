#define MOVE_M0_STEP_DIR_TO_3_4

#if defined(MOVE_M0_STEP_DIR_TO_3_4) && HW_VERSION_MAJOR == 3 && HW_VERSION_MINOR <= 4
  #error "Boards v3.4 and earlier can not use GPOI3 and GPIO4 for axis0 step/dir, since axis1 already uses those pins"
#endif
