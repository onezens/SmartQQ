//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZPhotoModuleViewController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, QZFaceDetectCaptureViewController, UIView;

@interface QZPhotoScanViewController : QZPhotoModuleViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    QZFaceDetectCaptureViewController *_fdcViewController;
    UIView *_buttonView;
}

- (void).cxx_destruct;
- (id)createDoubleButton;
- (void)dealloc;
- (void)getAlbumPhotoSingle;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)pickButtonClicked:(id)arg1;
- (void)switchCameraButtonClicked:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

