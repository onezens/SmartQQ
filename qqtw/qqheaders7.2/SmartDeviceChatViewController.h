//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseChatViewController.h"

#import "IFAChooserDelegate.h"
#import "ISetDeviceVasFlagDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "QQTextFieldDelegate.h"
#import "SmartDeviceChatViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class DeviceObject, FileAssistantThumbMgr, NSDictionary, NSString, SDLightAppSettingInfo;

@interface SmartDeviceChatViewController : QQBaseChatViewController <QQTextFieldDelegate, QQMultiImagePickerControllerDelegate, UIAlertViewDelegate, SmartDeviceChatViewDelegate, ISetDeviceVasFlagDelegate, IFAChooserDelegate>
{
    NSDictionary *_pendedAction;
    _Bool _isPopMenu;
    _Bool _isInit;
    _Bool _showVideoNotice;
    unsigned short _supportMainMsgType;
    unsigned short _supportFuncMsgType;
    SDLightAppSettingInfo *_lightAppSetting;
    NSString *_din;
    DeviceObject *_deviceObject;
    FileAssistantThumbMgr *_getThumbMgr;
}

@property(retain, nonatomic) DeviceObject *deviceObject; // @synthesize deviceObject=_deviceObject;
@property(readonly) NSString *din; // @synthesize din=_din;
@property(retain, nonatomic) FileAssistantThumbMgr *getThumbMgr; // @synthesize getThumbMgr=_getThumbMgr;
@property(retain, nonatomic) SDLightAppSettingInfo *lightAppSetting; // @synthesize lightAppSetting=_lightAppSetting;
@property(retain, nonatomic) NSDictionary *pendedAction; // @synthesize pendedAction=_pendedAction;
- (id)prepareUploadMultiImage:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (void)uploadImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

