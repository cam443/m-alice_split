# MCU name
MCU = STM32F401
BOARD = BLACKPILL_STM32_F401
# Bootloader selection
BOOTLOADER = stm32-dfu

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
SPLIT_KEYBOARD = yes
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
CAPS_WORD_ENABLE = yes
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
ENCODER_ENABLE = yes        # Enable rotary encoder support
AUDIO_ENABLE = no           # Audio output
OLED_ENABLE = yes           # Enable OLED
OLED_DRIVER = SSD1306
SERIAL_DRIVER = usart       # serial


OPT_DEFS += -DSTM32_DMA_REQUIRED=TRUE