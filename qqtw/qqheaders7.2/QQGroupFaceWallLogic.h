//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AvatarServiceDelegate.h"
#import "FaceWallImageDelegate.h"
#import "QQFaceWallPhotoBrowserDelegate.h"
#import "QQGroupFaceWallDelegate.h"
#import "QQGroupFaceWallPicTransferManagerDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, QQGroupFaceWallListModel, QQGroupFaceWallPicCompress, QQGroupFaceWallUI, QQMultiImagePickerController, UIImage, UIImagePickerController;

@interface QQGroupFaceWallLogic : NSObject <QQMultiImagePickerControllerDelegate, AvatarServiceDelegate, QQGroupFaceWallDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, QUIActionSheetDelegate, FaceWallImageDelegate, QQFaceWallPhotoBrowserDelegate, QQGroupFaceWallPicTransferManagerDelegate>
{
    id <QQGroupFaceWallLogicDelegate> _faceWallLogicDelegate;
    NSArray *_faceWallUrlList;
    NSArray *_faceWallOrgImaUrlList;
    unsigned long long _groupCode;
    unsigned long long _groupUin;
    NSString *_visitorType;
    NSString *_signature;
    _Bool _hideAddImageButtonInGridView;
    _Bool _hidebDisplayTextLabel;
    _Bool _isCreateNewGroup;
    _Bool _isNeedShowInCenter;
    unsigned int _groupType;
    int _xo;
    UIImagePickerController *_photoPicker;
    NSMutableArray *_UrlInfo;
    NSMutableArray *_UrlInfoOrgImg;
    NSMutableArray *_UrlTagList;
    NSMutableArray *_verifyIdList;
    long long _faceWallLastClicked;
    long long _defaultFace;
    QQGroupFaceWallListModel *_faceWallListModel;
    NSMutableArray *_newAddedImage;
    _Bool _isModifyedOrder;
    NSMutableDictionary *_reUploadImageDic;
    long long _reqSendLeft;
    QQGroupFaceWallPicCompress *_picCompress;
    NSMutableArray *_urlCacheArray;
    _Bool _isFirstTime;
    _Bool _isTempImageStore;
    _Bool _isSystemHeaderType;
    _Bool _isNeedVerify;
    _Bool _isPopHeadTips;
    QQMultiImagePickerController *_pickerController;
    _Bool _isEditable;
    QQGroupFaceWallUI *_faceWallUI;
    UIImage *_tempHeadImage;
    NSMutableArray *_delIdList;
}

- (void).cxx_destruct;
- (id)CreateAddImageButton;
- (id)CreateImageViewbyImage:(id)arg1 index:(long long)arg2;
- (id)CreateNormalButton;
- (id)CreateNormalImageView:(id)arg1 index:(long long)arg2;
- (id)CreateNormalImageViewbyImage:(id)arg1 index:(long long)arg2;
- (void)FaceWallPicTranferFileUploadProcess:(id)arg1 imagetag:(long long)arg2 process:(double)arg3;
- (void)FaceWallPicTranferOnstartFileUpload:(id)arg1 imagetag:(long long)arg2;
- (void)FaceWallPicTranferonFinishFileUpload:(id)arg1 imagetag:(long long)arg2 info:(id)arg3;
- (id)GetCurrentNavigationController;
- (id)QQGroupFaceWallUI:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (void)QQGroupFaceWallUI:(id)arg1 didSizeChange:(struct CGRect)arg2 newSize:(struct CGRect)arg3;
- (void)QQGroupFaceWallUI:(id)arg1 didTapOnItemAtIndex:(long long)arg2;
- (void)QQGroupFaceWallUI:(id)arg1 exchangeItemAtIndex:(long long)arg2 withItemAtIndex:(long long)arg3;
- (void)QQMultiImagePickerController:(id)arg1 didClickPhoto:(id)arg2 isSelected:(_Bool)arg3;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)SetAsDefaultAtIndex:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)calcThumbRect:(long long)arg1;
- (_Bool)canContinueUploadNewImage;
- (void)cancelUpLoadPhoto:(long long)arg1;
- (void)changeTextLableText;
- (void)cleanGroupFaceWallImageListInfo;
- (void)controlViewWillDisappear;
- (void)dataReport:(id)arg1;
- (void)dealloc;
@property(retain) NSMutableArray *delIdList; // @synthesize delIdList=_delIdList;
- (void)deleteGroupHeaderImage;
- (void)deletePhotoAtIndex:(long long)arg1;
- (void)deletePhotoOfImagesPlayerAtIndex:(long long)arg1;
- (void)didDissmiss;
- (void)didFinishPickingImage:(id)arg1;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)didPickingImage:(id)arg1 thumbImage:(id)arg2;
- (void)didScrollToPage:(int)arg1;
@property(retain, nonatomic) NSArray *faceWallOrgImaUrlList; // @dynamic faceWallOrgImaUrlList;
@property(nonatomic) QQGroupFaceWallUI *faceWallUI; // @synthesize faceWallUI=_faceWallUI;
@property(retain, nonatomic) NSArray *faceWallUrlList; // @dynamic faceWallUrlList;
- (void)forceToClose;
- (long long)getImageFileTag:(id)arg1;
- (id)getImageUrlByGroupId:(unsigned long long)arg1 arryList:(id)arg2;
- (long long)getIndexByImageTagFromNewAddImage:(long long)arg1;
- (id)getIndexFromURLString:(unsigned long long)arg1 urlString:(id)arg2;
- (id)getNULLGroupDefaultView:(id)arg1 cellForItemAtIndex:(long long)arg2;
- (void)getNewAddImage;
- (id)getOrgImageUrlByGroupId:(unsigned long long)arg1 arryList:(id)arg2;
- (_Bool)hasUploadGroupFace;
- (_Bool)ifIsEditable;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (struct CGSize)imageSizeInQQGridView;
- (id)init;
@property(nonatomic) _Bool isEditEnable; // @synthesize isEditEnable=_isEditable;
- (_Bool)isListHasOneObjInList:(id)arg1 inlist:(id)arg2;
- (_Bool)isNeedSendMovingReq;
- (_Bool)isNeedShowWrongTips;
- (void)isVerifyingViewAtIndex:(long long)arg1;
- (long long)numberOfItemsInQQGridView;
- (void)onGroupFaceWallListInfoCallback:(id)arg1;
- (void)onGroupFaceWallListRspCallback:(id)arg1;
- (void)reGetFaceWallListData;
- (void)removeNewAddImagebytag:(long long)arg1;
- (void)saveGroupFaceWallImageListInfo;
- (void)seeBigPicdataReport:(id)arg1 isUploading:(id)arg2;
- (void)sendConflictNotificationToAV;
- (void)sendDefaultHeaderChanged:(_Bool)arg1 isFoce:(_Bool)arg2;
- (void)sendRemoveConflictNotificationToAV;
- (void)sendUploadFaceWallHeader;
- (void)setAsDefaultAtIndex:(long long)arg1;
- (void)setFaceWallList:(id)arg1;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
@property(nonatomic) unsigned int groupType; // @dynamic groupType;
@property(nonatomic) unsigned long long groupUin; // @dynamic groupUin;
- (void)setImageCacheUrl;
- (void)setPhotoBrowserViewIsShow:(_Bool)arg1;
@property(retain, nonatomic) UIImage *tempHeadImage; // @synthesize tempHeadImage=_tempHeadImage;
@property(retain, nonatomic) NSMutableArray *verifyIdList; // @synthesize verifyIdList=_verifyIdList;
- (void)showCamera;
- (void)showFaceWallGetPhotoActionSheet;
- (void)showImagePicker;
- (void)showTips:(id)arg1 success:(_Bool)arg2;
- (void)storeGroupHeaderImage:(id)arg1;
- (void)uploadErrorDataReport:(id)arg1 errorCode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <QQGroupFaceWallLogicDelegate> faceWallLogicDelegate; // @dynamic faceWallLogicDelegate;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideAddImageButtonInGridView; // @dynamic hideAddImageButtonInGridView;
@property(nonatomic) _Bool hidebDisplayTextLabel; // @dynamic hidebDisplayTextLabel;
@property(nonatomic) _Bool isCreateNewGroup; // @dynamic isCreateNewGroup;
@property(nonatomic) _Bool isNeedShowInCenter; // @dynamic isNeedShowInCenter;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *visitorType; // @dynamic visitorType;

@end

