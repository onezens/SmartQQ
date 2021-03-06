//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEAGLLayer, NSMutableArray, NSMutableDictionary, NSTimer, PituFaceSwapFilter;

@interface AVGLBaseView : UIView
{
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    unsigned int _frameBuffer2;
    CAEAGLLayer *_eaglLayer;
    NSMutableDictionary *_subViews;
    NSMutableArray *_subViewsKey;
    NSTimer *_timer;
    id <AVGLBaseViewDelegate> _delegate;
    _Bool _initFail;
    _Bool _stopDisplay;
    _Bool _isInTroopVideo;
    _Bool _shouldSwitchFace;
    PituFaceSwapFilter *_pFilter;
}

+ (Class)layerClass;
- (void)addNickName:(id)arg1 forView:(id)arg2;
- (void)addSubview:(id)arg1 forKey:(id)arg2;
- (void)blockImageForKey:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)changeSubviewForKey:(id)arg1 withKey:(id)arg2;
- (void)dealloc;
@property(nonatomic) id <AVGLBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)destroyOpenGL;
- (void)display;
- (void)flushFrame;
- (id)getSubViewsKey;
- (id)getSubviewForKey:(id)arg1;
- (_Bool)hasSmallView;
- (void)initOpenGL;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isInTroopVideo; // @synthesize isInTroopVideo=_isInTroopVideo;
@property(retain, nonatomic) PituFaceSwapFilter *pFilter; // @synthesize pFilter=_pFilter;
- (void)removeSubviewForKey:(id)arg1;
- (void)renderWithTexture:(unsigned int)arg1 friendTextrure:(unsigned int)arg2 size:(struct CGSize)arg3;
- (void)setBackGroundTransparent:(_Bool)arg1;
- (void)setCuttingEnable:(_Bool)arg1;
- (void)setHasBlackEdge:(_Bool)arg1;
@property(nonatomic) _Bool shouldSwitchFace; // @synthesize shouldSwitchFace=_shouldSwitchFace;
- (void)setupFrameBuffer;
- (void)setupLayer;
- (_Bool)setupLayerAndBindBuffer;
- (void)setupRenderBuffer;
- (id)smallViewsHittest:(struct CGPoint)arg1;
- (void)startDisplay;
- (void)stopDisplay;
- (void)switchToFloatState;
- (void)switchToFullState;
- (void)switchfaceWithView:(id)arg1 anotherView:(id)arg2;

@end

