include $(THEOS)/makefiles/common.mk

DEBUG = 1
#ARCHS = armv7 arm64
ARCHS = arm64

TARGET = iphone:latest:8.0

qq_CFLAGS = -fobjc-arc

#iphone的ip地址
THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222

TWEAK_NAME = qq
qq_FILES = $(wildcard *.xm) $(wildcard qqtw/Classes/*.xmi)

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 QQ"
before-package::
		cp ./bin/postinst ./.theos/_/DEBIAN/
		cp ./bin/postrm ./.theos/_/DEBIAN/
		cp ./control ./.theos/_/DEBIAN/
