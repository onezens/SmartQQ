//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserBaseViewContoller.h"

#import "DownloadPreviewImageHandlerDelegate.h"
#import "PreviewSecretPictureViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class DownloadPreviewImageHandler, NSString, PreviewSecretPictureModel, PreviewSecretPictureView, QQAIOCommonCell, QQMessageModel, UIAlertView, UIButton, UIColor, UIImage, UITapGestureRecognizer;

@interface PreviewSecretPictureViewController : PhotoBrowserBaseViewContoller <DownloadPreviewImageHandlerDelegate, PreviewSecretPictureViewDelegate, UIGestureRecognizerDelegate>
{
    QQMessageModel *_messageModel;
    unsigned long long _currentPreviewStatus;
    UIColor *_startBarColor;
    UIImage *_startBarImg;
    _Bool _isCheckingPicture;
    _Bool _bVideoChatStart;
    _Bool _isCommonFlashMsg;
    PreviewSecretPictureView *_previewSecretPictureView;
    UIButton *_leftButton;
    UIAlertView *_alertView;
    PreviewSecretPictureModel *_previewSecretPictureModel;
    DownloadPreviewImageHandler *_downloadImageHandler;
    UITapGestureRecognizer *_tapGesture;
    id <PreviewSecretPictureViewControllerDelegate> _delegate;
    QQAIOCommonCell *_cell;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)asyncUpdateMessageExinfo:(id)arg1;
@property(nonatomic) __weak QQAIOCommonCell *cell; // @synthesize cell=_cell;
- (void)dealloc;
@property(nonatomic) __weak id <PreviewSecretPictureViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadImageHandler:(id)arg1 imageUrl:(id)arg2 isSuccess:(_Bool)arg3 downloadImage:(id)arg4;
- (void)downloadImageHandler:(id)arg1 imageUrl:(id)arg2 progress:(double)arg3;
- (void)handleDidTakeScreenshot:(id)arg1;
- (void)handleVideoChatEnd;
- (void)handleVideoChatStart;
- (void)hideSecretPictureImage;
- (void)initDownloadImageHandler;
- (void)initRetryDownloadGesture;
- (id)initWithSecretMessageModel:(id)arg1 isNoPreview:(_Bool)arg2;
- (_Bool)isHaveTapGesture;
- (void)loadView;
- (struct CGRect)p_calcFlashFitPreviewFrame;
- (void)p_finishFlashImgPreview;
- (void)p_hideFlashImgPreview;
- (void)p_startFlashImgPreviewLongPress;
- (void)previewSecretPictureView:(id)arg1 hideNavigationBar:(_Bool)arg2;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)resetBarColor;
- (void)retryDownloadImage:(id)arg1;
- (void)setChatModels:(id)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setNavBgColor:(id)arg1;
- (void)setPhotoUuids:(id)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)touchesBegan;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
