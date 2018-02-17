//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQMultiImagePickerControllerDelegate.h"
#import "QQRichShortVideoPreviewViewControllerDelegate.h"

@class AVAssetExportSession, NSString, NSTimer, QQAsset, QQMultiImagePickerController, QQRichShortVideoPreviewViewController, QZVideoProgressBar, UILabel;

@interface MQZMultiImagePickerWrapper : NSObject <QQMultiImagePickerControllerDelegate, QQRichShortVideoPreviewViewControllerDelegate>
{
    QQRichShortVideoPreviewViewController *_videoPreview;
    QQAsset *_videoAsset;
    NSTimer *_videoProgressTimer;
    AVAssetExportSession *_videoExporter;
    QZVideoProgressBar *_progressBar;
    UILabel *_tipsLabel;
    int _reportScene;
    QQMultiImagePickerController *_picker;
    _Bool _isUseVideoUrl;
    _Bool _isSupportMix;
    id <MQZMultiImagePickerWrapperDelegate> _delegate;
    unsigned long long _localVideoSizeLimit;
    unsigned long long _localVideoMaxDuration;
}

- (void).cxx_destruct;
- (void)QQMultiImagePickerController:(id)arg1 didClickPhoto:(id)arg2 isSelected:(_Bool)arg3;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)QQMultiImagePickerControllerClickBackBtn:(id)arg1;
- (void)QQMultiImagePickerControllerClickPhotoInPreviewView:(id)arg1;
- (void)QQMultiImagePickerControllerClickPreviewBtn:(id)arg1;
- (void)QQMultiImagePickerControllerClickSendBtnInPreviewView:(id)arg1;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)clearProgress;
- (void)dealloc;
@property(nonatomic) __weak id <MQZMultiImagePickerWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (_Bool)isInQQChat;
@property(nonatomic) _Bool isSupportMix; // @synthesize isSupportMix=_isSupportMix;
@property(nonatomic) _Bool isUseVideoUrl; // @synthesize isUseVideoUrl=_isUseVideoUrl;
@property(nonatomic) unsigned long long localVideoMaxDuration; // @synthesize localVideoMaxDuration=_localVideoMaxDuration;
@property(nonatomic) unsigned long long localVideoSizeLimit; // @synthesize localVideoSizeLimit=_localVideoSizeLimit;
- (void)presendInViewController:(id)arg1 withMaxPhotoCount:(long long)arg2 selectedList:(id)arg3 assetsFilter:(int)arg4 scene:(int)arg5 reportScene:(int)arg6;
- (void)previewControllerCanceled:(id)arg1;
- (void)previewControllerCanceledWhenProcessing:(id)arg1;
- (void)previewControllerDidSelected:(id)arg1;
- (void)receivedQQChatRequest:(id)arg1;
- (void)reportMQZMultiImagePickerClickBackBtn:(id)arg1;
- (void)reportMQZMultiImagePickerClickPhotoInPreviewView;
- (void)reportMQZMultiImagePickerClickPreviewBtn:(id)arg1;
- (void)reportMQZMultiImagePickerClickSendBtnInPreviewView;
- (void)reportMQZMultiImagePickerDidCancel:(id)arg1;
- (void)reportMQZMultiImagePickerSelectPhotoListCount:(long long)arg1;
- (void)videoExportProgressTimerHandle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

