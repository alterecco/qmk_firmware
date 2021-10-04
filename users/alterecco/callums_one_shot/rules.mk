SRC += $(USER_PATH)/alterecco.c

ifeq ($(strip $(COMBO_ENABLE)), yes)
	SRC += combos.c
endif

ifeq ($(strip $(KEY_OVERRIDE_ENABLE)), yes)
	SRC += overrides.c
endif
