//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSInvocationOperation, NSString, UIColor, UIImage;

@interface QZFeedPhoto : NSObject
{
    _Bool _needPredraw;
    _Bool _opaque;
    _Bool _needLoadingImage;
    _Bool _showAdvFlag;
    _Bool _isGDTRoundPic;
    _Bool _needRoundCorner;
    _Bool _picDownLoadFinish;
    _Bool _shouldShowVideoPlayIcon;
    _Bool _isGDTPhoto;
    id <QZPhotoThumbDelegate> _delegate;
    id <QZPhotoThumbDelegate> _reportDelegate;
    NSString *_url;
    long long _mode;
    long long _type;
    long long _state;
    NSDictionary *_param;
    UIImage *_image;
    UIImage *_loadingImage;
    UIImage *_failureImage;
    NSInvocationOperation *_predrawOperation;
    UIColor *_color;
    long long _specPicFlag;
    long long _index;
    long long _reLayoutNum;
    NSString *_imgTag;
    struct CGPoint _focusPoint;
    struct CGPoint _focus;
    struct CGSize _imageSizeByServer;
    struct CGRect _rect;
}

+ (id)getOperationQueue;
- (void).cxx_destruct;
- (_Bool)checkIfNeedLayoutContentMode:(long long)arg1 clipImage:(id)arg2 thumbRect:(struct CGRect)arg3 imageRect:(struct CGRect)arg4;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)dealloc;
@property(nonatomic) __weak id <QZPhotoThumbDelegate> delegate; // @synthesize delegate=_delegate;
- (void)draw;
@property(retain, nonatomic) UIImage *failureImage; // @synthesize failureImage=_failureImage;
@property(nonatomic) struct CGPoint focus; // @synthesize focus=_focus;
@property(nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
- (id)getTimeStringWithTime:(unsigned long long)arg1;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGSize imageSizeByServer; // @synthesize imageSizeByServer=_imageSizeByServer;
@property(retain, nonatomic) NSString *imgTag; // @synthesize imgTag=_imgTag;
@property(nonatomic) long long index; // @synthesize index=_index;
- (id)init;
@property(nonatomic) _Bool isGDTPhoto; // @synthesize isGDTPhoto=_isGDTPhoto;
@property(nonatomic) _Bool isGDTRoundPic; // @synthesize isGDTRoundPic=_isGDTRoundPic;
- (_Bool)isLocalURL;
- (_Bool)isScaleEqual:(struct CGSize)arg1 realImageSize:(struct CGSize)arg2;
- (_Bool)isSizeEqual:(struct CGSize)arg1 otherSize:(struct CGSize)arg2;
- (void)loadImageFromCache:(id)arg1 response:(id)arg2;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)needLayout;
- (void)needLoad;
@property(nonatomic) _Bool needLoadingImage; // @synthesize needLoadingImage=_needLoadingImage;
@property(nonatomic) _Bool needPredraw; // @synthesize needPredraw=_needPredraw;
- (void)needPredraw:(id)arg1;
@property(nonatomic) _Bool needRoundCorner; // @synthesize needRoundCorner=_needRoundCorner;
- (void)onDownloadFailed:(id)arg1 startTime:(double)arg2;
- (void)onDownloadSucc:(id)arg1 image:(id)arg2 response:(id)arg3 startTime:(double)arg4;
@property(nonatomic) _Bool opaque; // @synthesize opaque=_opaque;
@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(nonatomic) _Bool picDownLoadFinish; // @synthesize picDownLoadFinish=_picDownLoadFinish;
- (void)predraw:(id)arg1;
@property(retain, nonatomic) NSInvocationOperation *predrawOperation; // @synthesize predrawOperation=_predrawOperation;
- (void)predrawOver:(id)arg1;
@property(nonatomic) long long reLayoutNum; // @synthesize reLayoutNum=_reLayoutNum;
- (void)reSet;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) __weak id <QZPhotoThumbDelegate> reportDelegate; // @synthesize reportDelegate=_reportDelegate;
@property(nonatomic) _Bool shouldShowVideoPlayIcon; // @synthesize shouldShowVideoPlayIcon=_shouldShowVideoPlayIcon;
@property(nonatomic) _Bool showAdvFlag; // @synthesize showAdvFlag=_showAdvFlag;
@property(nonatomic) long long specPicFlag; // @synthesize specPicFlag=_specPicFlag;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

