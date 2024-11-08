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

IMAGE_LINGUAS = " "

inherit core-image
