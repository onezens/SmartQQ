//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "QZPhotoModuleDownloaderInterfaceDelegate.h"

@class NSString, QzonePhotoModel, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;

@interface MQZCommonPhotoButton : UIButton <QZPhotoModuleDownloaderInterfaceDelegate>
{
    UILongPressGestureRecognizer *_gesture;
    double _startAbsoluteTime;
    NSString *_photoUrl;
    UIImageView *_editCheckIcon;
    UIImageView *_videoIcon;
    UIImageView *_bottomShadow;
    UILabel *_videoTimeLabel;
    UIImageView *_commentIcon;
    UILabel *_commentLabel;
    UILabel *_flagLabel;
    UILabel *_shareLabel;
    _Bool _selectToEdit;
    _Bool _hideVideo;
    _Bool _hideComment;
    _Bool _shouldDownloadEverytime;
    _Bool _useLocalImage;
    _Bool _showCheckBox;
    _Bool _showShareLabel;
    _Bool _useHeadImage;
    QzonePhotoModel *_photoModel;
    UIView *_editIconClkView;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) UIView *editIconClkView; // @synthesize editIconClkView=_editIconClkView;
- (id)getPhotoUrlFromPhotoModel:(id)arg1;
@property(nonatomic) _Bool hideComment; // @synthesize hideComment=_hideComment;
@property(nonatomic) _Bool hideVideo; // @synthesize hideVideo=_hideVideo;
- (id)imageCacheKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) QzonePhotoModel *photoModel; // @synthesize photoModel=_photoModel;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
@property(nonatomic) _Bool selectToEdit; // @synthesize selectToEdit=_selectToEdit;
- (void)setCommentHidden:(_Bool)arg1;
- (void)setPhotoUrl:(id)arg1;
@property(nonatomic) _Bool shouldDownloadEverytime; // @synthesize shouldDownloadEverytime=_shouldDownloadEverytime;
@property(nonatomic) _Bool showCheckBox; // @synthesize showCheckBox=_showCheckBox;
@property(nonatomic) _Bool showShareLabel; // @synthesize showShareLabel=_showShareLabel;
@property(nonatomic) _Bool useHeadImage; // @synthesize useHeadImage=_useHeadImage;
@property(nonatomic) _Bool useLocalImage; // @synthesize useLocalImage=_useLocalImage;
- (void)setVideoHidden:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
