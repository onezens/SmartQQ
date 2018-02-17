//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichMediaPickerController.h"

#import "QQDynamicAvatarSelectViewDelegate.h"
#import "QQDynamivcAvatarRecordPanelDelegate.h"
#import "QQRichTinyVideoPreviewViewDelegate.h"

@class NSString, QQDynamicAvatarRecordPanelView, UIButton, UIView;

@interface QQDynamicAvatarRecordViewController : QQRichMediaPickerController <QQDynamivcAvatarRecordPanelDelegate, QQDynamicAvatarSelectViewDelegate, QQRichTinyVideoPreviewViewDelegate>
{
    UIButton *_cameraSwitchBtn;
    UIButton *_silentBtn;
    _Bool _isAudioMuted;
    UIView *_maskView;
    unsigned long long _entryType;
    QQDynamicAvatarRecordPanelView *_recordPanel;
}

- (void).cxx_destruct;
- (void)QQMediaPickerVideoControlPanel:(id)arg1 onRemakeButtonClick:(id)arg2;
- (void)addQQpreEditView;
- (void)adjustCameraPreviewView;
- (void)applySettingAndStart;
- (void)createControlPanel;
- (void)createNavigationBar;
- (void)didFinishPickingMediaWithInfo:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dynamicAvatarSelectView:(id)arg1 didSelectImage:(id)arg2 manualPick:(_Bool)arg3;
- (void)dynamicAvatarSelectViewDidSelectCancel:(id)arg1;
@property(nonatomic) unsigned long long entryType; // @synthesize entryType=_entryType;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)onRecordCancel:(id)arg1;
- (void)onRecordConfirmed:(id)arg1;
- (void)onSwichCamera:(id)arg1;
- (void)onToggleSilent:(id)arg1;
- (struct CGRect)previewViewFrame;
@property(retain, nonatomic) QQDynamicAvatarRecordPanelView *recordPanel; // @synthesize recordPanel=_recordPanel;
- (void)setupImageForBtn:(id)arg1 imageName:(id)arg2;
- (void)showInitRecording;
- (void)showVideoPreviewView;
- (void)startRecord;
- (void)stopRecord;
- (void)updateAudioMute;
- (void)updateRecordProgress:(double)arg1;
- (void)updateRecordTime;
- (void)updateSilentBtn;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

