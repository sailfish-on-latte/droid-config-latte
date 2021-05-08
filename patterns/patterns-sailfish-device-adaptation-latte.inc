%package -n patterns-sailfish-device-adaptation-latte
Summary: Jolla HW Adaptation latte
Requires: droid-hal-latte
Requires: droid-hal-latte-img-boot
Requires: droid-hal-latte-kernel-modules
Requires: droid-config-latte-sailfish
Requires: droid-config-latte-pulseaudio-settings
Requires: droid-config-latte-policy-settings
Requires: droid-config-latte-preinit-plugin
Requires: droid-config-latte-flashing
Requires: droid-config-latte-bluez5
Requires: droid-hal-version-latte
Requires: droid-hal-latte-detritus

# Graphics (mesa)
Requires: mesa-dri-drivers
Requires: mesa-libEGL
Requires: mesa-libGLESv2
Requires: mesa-libgbm
Requires: mesa-libglapi
Requires: wayland-egl

# Sensors
Requires: sensorfw-qt5

# Vibra
#Requires: ngfd-plugin-droid-vibrator
#Requires: qt5-feedback-haptics-droid-vibrator

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

# bluetooth tools
Requires: bluez5-tools
Requires: broadcom-bluetooth
Requires: bluetooth-rfkill-event-hciattach

Requires: pulseaudio-modules-droid-keepalive
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-plugin-platform-eglfs

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
Requires: gstreamer1.0-vaapi
Requires: intel-vaapi-driver
# For devices with droidmedia and gst-droid built, see HADK pdf for more information
#Requires: gstreamer1.0-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris-nondroid

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
Requires: usb-moded-defaults-android
Requires: usb-moded-developer-mode-android

# Extra useful modes not officially supported:
# might need some configuration to get working
#Requires: usb-moded-mass-storage-android-config
# working but careful with roaming!
#Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-plugin-encsfa

# For FM radio on some QCOM devices
#Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
#Requires: jolla-mediaplayer-radio

%description -n patterns-sailfish-device-adaptation-latte
Pattern with packages for latte HW Adaptation

%files -n patterns-sailfish-device-adaptation-latte
