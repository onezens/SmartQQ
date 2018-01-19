include $(THEOS)/makefiles/common.mk

#iphone的ip地址
THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222

TWEAK_NAME = qq
qq_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 QQ"
before-package::
		cp ./bin/postinst ./.theos/_/DEBIAN/
		cp ./bin/postrm ./.theos/_/DEBIAN/
		cp ./control ./.theos/_/DEBIAN/
