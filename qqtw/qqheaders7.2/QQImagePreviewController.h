//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserBaseViewContoller.h"

#import "QQImagePickerBottomBarDelegate.h"

@class NSString, QQAsset, QQImagePickerBottomBar;

@interface QQImagePreviewController : PhotoBrowserBaseViewContoller <QQImagePickerBottomBarDelegate>
{
    QQImagePickerBottomBar *_bottomBar;
    QQAsset *_asset;
    NSString *sendButtonTitle;
}

- (void)QQImagePickerBottomBarSendButtonDidClick;
- (_Bool)canShowPageControl;
- (void)cleanAllProgressBlocks;
- (void)dealloc;
- (id)getToolbar;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (void)loadView;
- (void)longPressDetected;
- (void)onLeftButtonClick:(id)arg1;
@property(retain, nonatomic) NSString *sendButtonTitle; // @synthesize sendButtonTitle;
- (void)singleTapDetected;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

