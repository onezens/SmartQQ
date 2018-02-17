//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAEAGLLayer, EAGLContext, QQGraffitiStroke;

@interface GLStrokeConfigure : NSObject
{
    CAEAGLLayer *_glLayer;
    int _backingWidth;
    int _backingHeight;
    EAGLContext *_glContext;
    unsigned int _viewRenderbuffer;
    unsigned int _viewFramebuffer;
    _Bool initialized;
    QQGraffitiStroke *_stroke;
    _Bool _needResize;
}

@property(nonatomic) int backingHeight; // @synthesize backingHeight=_backingHeight;
@property(nonatomic) int backingWidth; // @synthesize backingWidth=_backingWidth;
- (void)beginLine;
- (void)changeResPath:(id)arg1;
- (void)clean;
- (void)dealloc;
- (void)destoryGL;
- (void)endLine;
- (void)erase;
@property(readonly, nonatomic) CAEAGLLayer *glLayer; // @synthesize glLayer=_glLayer;
- (_Bool)initGL;
@property(nonatomic) _Bool needResize; // @synthesize needResize=_needResize;
- (void)onViewLayoutSubviews;
- (void)onViewSetFrame:(struct CGRect)arg1;
- (void)presentBuffer;
- (void)removeLastLine;
- (void)renderLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 needPresent:(_Bool)arg3;
- (_Bool)resizeFromLayer:(id)arg1;
- (void)undoDraw;
@property(readonly, nonatomic) unsigned int viewFramebuffer; // @synthesize viewFramebuffer=_viewFramebuffer;
@property(readonly, nonatomic) unsigned int viewRenderbuffer; // @synthesize viewRenderbuffer=_viewRenderbuffer;

@end
