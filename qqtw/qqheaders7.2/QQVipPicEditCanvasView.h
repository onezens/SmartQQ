//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CropViewDelegate.h"

@class CropView, NSMutableArray, NSString, QQVipPicEditTextBubbleLayer, UIImageView;

@interface QQVipPicEditCanvasView : UIView <CropViewDelegate>
{
    NSMutableArray *_drawLayers;
    _Bool _isCroping;
    UIImageView *_sourceImageView;
    QQVipPicEditTextBubbleLayer *_textBubbleLayer;
    CropView *_cropView;
    CDStruct_fc86e66d _operationRecorder;
    struct CGRect _cropRect;
    struct CGRect _scaleCropRect;
    struct CGAffineTransform _originalTransform;
}

- (void).cxx_destruct;
- (void)addBubbleByKey:(id)arg1;
- (void)addDrawLayer:(id)arg1;
- (id)cropImage;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) CropView *cropView; // @synthesize cropView=_cropView;
- (void)executeCropFrameCmdForState:(long long)arg1;
- (void)hideCropView:(_Bool)arg1;
- (id)initWithSourceImage:(id)arg1;
- (void)initializeDrawLayers;
@property(nonatomic) _Bool isCroping; // @synthesize isCroping=_isCroping;
- (void)layoutSubviews;
@property(nonatomic) CDStruct_fc86e66d operationRecorder; // @synthesize operationRecorder=_operationRecorder;
@property(nonatomic) struct CGAffineTransform originalTransform; // @synthesize originalTransform=_originalTransform;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)recordForCropViewTouchBegan:(unsigned long long)arg1;
@property(nonatomic) struct CGRect scaleCropRect; // @synthesize scaleCropRect=_scaleCropRect;
- (void)setBubbleLayerActive:(_Bool)arg1;
- (void)setIsCropingByTempCmd:(_Bool)arg1;
@property(retain, nonatomic) UIImageView *sourceImageView; // @synthesize sourceImageView=_sourceImageView;
@property(retain, nonatomic) QQVipPicEditTextBubbleLayer *textBubbleLayer; // @synthesize textBubbleLayer=_textBubbleLayer;
- (id)sourceImage;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGAffineTransform)transformForCropRectFitCenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

