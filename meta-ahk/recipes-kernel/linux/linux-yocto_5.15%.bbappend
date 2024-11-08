COMPATIBLE_MACHINE = "^(thin_client|thin_client_qemu)$"

KCONFIG_MODE = "alldefconfig"

FILESEXTRAPATHS:prepend := "${THISDIR}/files:"
SRC_URI += "file://defconfig"