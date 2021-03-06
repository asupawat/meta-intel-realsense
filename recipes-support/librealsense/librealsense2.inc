AUTHOR = "Intel(R) RealSense(TM)"
HOMEPAGE = "https://github.com/IntelRealSense/librealsense"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=a1692f06943fa281fd047a22d7e10800"

inherit cmake pkgconfig

SRC_URI = "\
    git://github.com/IntelRealSense/librealsense.git;tag=v${PV} \
"

SRC_URI += "\
    file://Fix-arch-detection-on-linux.patch \
    file://Fix-libusb-detection.patch \
"

S = "${WORKDIR}/git"

EXTRA_OECMAKE = " \
    -DBUILD_UNIT_TESTS:BOOL=OFF \
    -DBUILD_WITH_OPENMP:BOOL=OFF \
    -DUSE_EXTERNAL_USB:BOOL=ON \
"
