//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "GLKViewDelegate.h"

@class CAGradientLayer, CIContext, CIImage, EAGLContext, GLKView, NSString, UIImage;

@interface QQMulPhotoEditImageView : UIImageView <GLKViewDelegate>
{
    GLKView *_glKView;
    CIImage *_maskImage;
    UIImage *_editingImage;
    struct CGRect _drawFrame;
    _Bool _needClean;
    double _curScale;
    EAGLContext *_glContext;
    CIContext *_ciContext;
    CAGradientLayer *someLayer;
}

- (struct CGRect)calcEditFrame:(id)arg1;
- (id)convertToUIImage:(id)arg1;
- (void)dealloc;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEditingImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (void)setNeedsDisplay;
- (void)setupShadow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

