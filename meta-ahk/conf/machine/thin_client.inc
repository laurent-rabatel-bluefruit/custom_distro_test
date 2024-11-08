DESCRIPTION = "Minimal configuration for x86_64, suitable for QEMU and bootable USB."

require conf/machine/genericx86-64.conf

MACHINE_FEATURES = "pcbios efi usbhost"

# Use ext4 as the default filesystem, which is compatible with USB drives
IMAGE_FSTYPES += "ext4 wic.gz"

# Set the image format and compression options
# 'wic.gz' creates a compressed .wic image, suitable for USB boot.
WKS_FILE = "ahk-thin_client.wks"

# Kernel and init system settings
PREFERRED_PROVIDER_virtual/kernel = "linux-yocto"
PREFERRED_PROVIDER_virtual/bootloader = "grub-efi"
PREFERRED_VERSION_linux-yocto = "5.15%"

# Additional bootloader settings
EFI_PROVIDER = "grub-efi"
GRUB_SERIAL_OUTPUT = "console"
GRUB_TIMEOUT = "5"
SERIAL_CONSOLE = "115200 ttyS0"