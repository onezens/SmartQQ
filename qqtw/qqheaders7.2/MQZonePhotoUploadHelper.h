//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQMultiImagePickerControllerDelegate.h"

@class NSString, UINavigationController, UIViewController;

@interface MQZonePhotoUploadHelper : NSObject <QQMultiImagePickerControllerDelegate>
{
    UIViewController *_presentInController;
    NSString *_refer;
    long long _uploadType;
    int _xo;
    long long _compressBatchId;
    UINavigationController *_navigationController;
}

+ (void)reportMultiImagePicker:(id)arg1 thirdAction:(int)arg2 scene:(long long)arg3;
- (void).cxx_destruct;
- (void)QQMultiImagePickerController:(id)arg1 didClickPhoto:(id)arg2 isSelected:(_Bool)arg3;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQMultiImagePickerControllerClickBackBtn:(id)arg1;
- (void)QQMultiImagePickerControllerClickLeftBtnInPreviewView:(id)arg1;
- (void)QQMultiImagePickerControllerClickPhotoInPreviewView:(id)arg1;
- (void)QQMultiImagePickerControllerClickPreviewBtn:(id)arg1;
- (void)QQMultiImagePickerControllerClickSendBtnInPreviewView:(id)arg1;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)getAlbumPhoto:(id)arg1;
- (void)reportMultiImagePicker:(id)arg1 thirdAction:(int)arg2;
- (void)reportMultiImagePickerPreviewView:(id)arg1 secondAction:(int)arg2;
- (void)resetCompressBatchId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *presentInController; // @dynamic presentInController;
@property(retain, nonatomic) NSString *refer; // @dynamic refer;
@property(readonly) Class superclass;
@property(nonatomic) long long uploadType; // @dynamic uploadType;

@end

