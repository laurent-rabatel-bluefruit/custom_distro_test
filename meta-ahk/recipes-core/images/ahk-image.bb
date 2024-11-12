# Build a simple, minimal root filesystem.
#
# This recipe is a simplified form of core-image-minimal.

SUMMARY = "A simple, minimal image"

IMAGE_INSTALL = "\
    base-files \
    busybox \
    init-ifupdown \
    packagegroup-core-boot \
    ca-certificates \
"

IMAGE_INSTALL += "kexec-tools"

IMAGE_LINGUAS = "en-gb"

inherit core-image
