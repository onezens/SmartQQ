//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QQAsynUrlImagesPlayerDelegae.h"
#import "QQAsynUrlImagesPlayerIndictorPattern.h"
#import "QQGroupFaceWallForClickDelegate.h"
#import "QQGroupFaceWallLogicDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSArray, NSString, QQAsynUrlImagesPlayer, QQGroupFaceWallLogic, QQGroupFaceWallUI, QQGroupSettingModel, QUIActionSheet, UIButton, UIImageView;

@interface QQGroupSettingHeaderPictureViewController : UIViewController <QQAsynUrlImagesPlayerDelegae, QQAsynUrlImagesPlayerIndictorPattern, QQGroupFaceWallForClickDelegate, UIActionSheetDelegate, QUIActionSheetDelegate, QQGroupFaceWallLogicDelegate>
{
    int _settingType;
    QQGroupFaceWallUI *_faceWallView;
    QQGroupFaceWallLogic *_faceWallLogic;
    QQAsynUrlImagesPlayer *_headImagesView;
    NSArray *_headImagesUrl;
    long long _defaultIndex;
    long long _delIndex;
    QUIActionSheet *_actionSheet;
    UIButton *_settingDefaultHeadButton;
    UIButton *_deleteButton;
    UIImageView *_defaultHeadView;
    _Bool _isVerityingImage;
    QQGroupSettingModel *_groupModel;
}

- (void)QQGroupFaceWallUI:(id)arg1 didClickOnItemAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)deleteCurrentPhoto;
- (void)didClickVerifyingImage:(_Bool)arg1;
- (struct CGRect)getViewRect;
@property(retain, nonatomic) QQGroupSettingModel *groupModel; // @synthesize groupModel=_groupModel;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)arg1;
@property(retain, nonatomic) NSArray *headImagesUrl; // @synthesize headImagesUrl=_headImagesUrl;
- (void)imagesPlayer:(id)arg1 didChangedIndex:(long long)arg2 count:(long long)arg3;
- (void)imagesPlayer:(id)arg1 didSelectImageAtIndex:(long long)arg2;
- (void)imagesPlayer:(id)arg1 longPressImageAtIndex:(long long)arg2;
- (id)indicatorViewInImagesPlayer:(id)arg1;
- (id)init;
- (void)loadView;
- (_Bool)needShowTopTips;
- (void)notifiSaveToAlbumRet:(int)arg1;
- (void)onClickSettingButton;
- (void)onDeleteButtonClick:(id)arg1;
- (void)onLeftButtonClick:(id)arg1;
- (void)onNotifyDelPhotoWall:(id)arg1;
- (void)onTroopInfoUpdated:(id)arg1;
- (void)setNavigationBarStyle;
@property(nonatomic) int settingType; // @synthesize settingType=_settingType;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateImagePlayer;
- (void)uploadFaceWallHeader:(id)arg1 thumburl:(id)arg2;
- (void)uploadPicState:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
