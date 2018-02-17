//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQZDragCollectionViewDataSource.h"
#import "MQZImagePickerDelegate.h"
#import "MQZMultiImagePickerWrapperDelegate.h"
#import "MQZoneDragCollectionViewCellDelegate.h"
#import "MQZoneDragCollectionViewDelegate.h"
#import "MQZonePhotoDescriptionDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class MQZCameraWrapper, MQZMultiImagePickerWrapper, MQZoneDragCollectionView, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, QUIActionSheet, QZoneViewController<MQZonePhotoViewDelegate>, UIButton;

@interface MQZonePhotoView : NSObject <QUIActionSheetDelegate, UIAlertViewDelegate, MQZDragCollectionViewDataSource, MQZoneDragCollectionViewDelegate, MQZonePhotoDescriptionDelegate, MQZImagePickerDelegate, MQZMultiImagePickerWrapperDelegate, MQZoneDragCollectionViewCellDelegate>
{
    MQZoneDragCollectionView *_collectionView;
    QZoneViewController<MQZonePhotoViewDelegate> *_delegate;
    NSMutableArray *_photoModelList;
    QUIActionSheet *_quiActionSheet;
    long long _compressBatchId;
    _Bool _isDowningPic;
    _Bool _enabledAddPhoto;
    _Bool _enabledDelPhoto;
    _Bool _addPhotoButtonClicked;
    int _xo;
    long long _photoCellPhotoMaxCount;
    UIButton *_fullBtn;
    MQZCameraWrapper *_cameraWrapper;
    MQZMultiImagePickerWrapper *_picker;
    _Bool _shouldNotOccupyPositionForPlus;
    _Bool _shouldNotShowDeleteAlertView;
    NSIndexPath *deleteIndexPath;
    NSMutableDictionary *_originModels;
    unsigned long long _photoNumPerColumn;
    _Bool _usePlusSignForAddButton;
    _Bool _noShowAddPhotoButton;
    _Bool _hideWhenNoPhoto;
    _Bool _noSupportLongPress;
    _Bool _isEditingMode;
    CDUnknownBlockType _onDeletePhotos;
    unsigned long long _source;
    CDUnknownBlockType _onPressEasterEggImage;
}

- (void).cxx_destruct;
- (void)MQZMultiImagePicker:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)MQZMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)MQZMultiImagePickerDidSelectVideo:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustUINeedfresh:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (int)assetsFilter;
@property(retain, nonatomic) MQZCameraWrapper *cameraWrapper; // @synthesize cameraWrapper=_cameraWrapper;
- (void)clickAddBtn:(id)arg1;
- (void)clickPhoto:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)dataSourceArrayOfCollectionView:(id)arg1;
- (long long)dataSourceNumberOfCollectionView:(id)arg1;
- (void)dealloc;
- (void)deletePhoto:(id)arg1;
- (void)didDragCollectionViewCellClicked:(id)arg1;
- (void)didDragCollectionViewCellDeleteBtnClicked:(id)arg1;
- (void)didMQZImagePicker:(id)arg1 selectedImages:(id)arg2;
- (void)dragCollectionView:(id)arg1 newDataArrayAfterMove:(id)arg2;
- (void)enterForeground;
- (void)freshPhotoCell;
- (_Bool)hasEasterEggImageORRecommendGif;
@property(nonatomic) _Bool hideWhenNoPhoto; // @synthesize hideWhenNoPhoto=_hideWhenNoPhoto;
- (void)imageWriteFinished:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 source:(unsigned long long)arg2 maxPhotoNum:(long long)arg3;
@property(nonatomic) _Bool isEditingMode; // @synthesize isEditingMode=_isEditingMode;
@property(nonatomic) _Bool noShowAddPhotoButton; // @synthesize noShowAddPhotoButton=_noShowAddPhotoButton;
@property(nonatomic) _Bool noSupportLongPress; // @synthesize noSupportLongPress=_noSupportLongPress;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onDelete:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType onDeletePhotos; // @synthesize onDeletePhotos=_onDeletePhotos;
- (void)onDeleteWithIndexset:(id)arg1;
- (void)onEditIndex:(long long)arg1 toImage:(id)arg2;
- (void)onEditVideoWithIndex:(long long)arg1 videoInfo:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType onPressEasterEggImage; // @synthesize onPressEasterEggImage=_onPressEasterEggImage;
- (void)onQZVideoComposeComplete;
- (void)onUpdateOnePhoto:(unsigned long long)arg1 isSelected:(_Bool)arg2;
- (long long)photoCellPhotoMaxCount;
@property(retain, nonatomic) MQZMultiImagePickerWrapper *picker; // @synthesize picker=_picker;
- (void)refreshCollectionView;
- (void)reloadCollectionWithoutAnimation;
@property(nonatomic) __weak QZoneViewController<MQZonePhotoViewDelegate> *delegate; // @dynamic delegate;
@property(retain, nonatomic) NSMutableArray *photoModelList; // @dynamic photoModelList;
@property(nonatomic) _Bool usePlusSignForAddButton; // @synthesize usePlusSignForAddButton=_usePlusSignForAddButton;
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
- (void)takeAlbumPhoto;
- (void)takeCameraPhoto;
- (void)takeEasterEggImagePicker;
- (void)updateHeightAndPhotoList;

// Remaining properties
@property(readonly, nonatomic) _Bool addPhotoButtonClicked; // @dynamic addPhotoButtonClicked;
@property(retain, nonatomic) MQZoneDragCollectionView *collectionView; // @dynamic collectionView;
@property(nonatomic) long long compressBatchId; // @dynamic compressBatchId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enabledDelPhoto; // @dynamic enabledDelPhoto;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDowningPic; // @dynamic isDowningPic;
@property(readonly) Class superclass;

@end
