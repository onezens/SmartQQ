//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, MCDoodlePattern, MCMagicPen, NSMutableArray, NSMutableDictionary, NSString, QQGraffitiStrokeLine, QQRichPTVGLProgramBase;

@interface QQGraffitiStroke : NSObject
{
    int _style;
    unsigned int _patternProgram;
    unsigned int _lightPenProgram;
    unsigned int _fireworksProgram;
    unsigned int _textureCoordinateVBO;
    unsigned int _patternPostionVBO;
    unsigned int _lightPenPostionVBO;
    unsigned int _lightPenTextureAlphasVBO;
    unsigned int _fireworksPostionVBO;
    unsigned int _fireworksTextureAlphasVBO;
    unsigned int _sampleFrameBuffer;
    unsigned int _sampleColorRenderBuffer;
    unsigned int _sampleDepthRenderBuffer;
    NSString *_currentStrokeResourcePath;
    MCDoodlePattern *_currentPattern;
    QQRichPTVGLProgramBase *_util;
    EAGLContext *_context;
    struct CGPoint _lastPoint;
    struct CGSize _outputSize;
    struct CGPoint _previousPoint;
    struct CGPoint _previousPoint2;
    unsigned int _undoDrawProgram;
    NSMutableArray *_lines;
    QQGraffitiStrokeLine *_curLine;
    NSString *_resourceDirectory;
    MCMagicPen *_magicPen;
    NSMutableDictionary *_templateItems;
}

- (void)addFireworksAttributionsWithProgramHandle:(unsigned int)arg1;
- (void)addLightpenAttributionsWithProgramHandle:(unsigned int)arg1;
- (void)addPatternAttributionsWithProgramHandle:(unsigned int)arg1;
- (struct CGPoint)calculateRelativePoint:(struct CGPoint)arg1;
- (unsigned int)createProgramWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2;
- (void)dealloc;
- (double)distanceBetweenPoint1:(struct CGPoint)arg1 andPoint2:(struct CGPoint)arg2;
- (void)drawBackgroundWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2 renderBuffer:(unsigned int)arg3;
- (void)drawFireworksWithPoints:(id)arg1;
- (void)drawFireworksWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2 renderBuffer:(unsigned int)arg3 userTrackPoints:(id)arg4;
- (void)drawLightpenWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2 renderBuffer:(unsigned int)arg3 userTrackPoints:(id)arg4;
- (void)drawLineWithPoints:(id)arg1;
- (void)drawPatternWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2 renderBuffer:(unsigned int)arg3 userTrackPoints:(id)arg4;
- (void)enableFireworksAttributions;
- (void)enableLightpenAttributions;
- (void)enablePatternAttributions;
- (void)endLine:(unsigned int)arg1;
- (void)erase;
- (unsigned int)generateNewTextureFromFramebuffer:(unsigned int)arg1;
- (id)initWithGLContext:(id)arg1;
- (id)interpolationPointsWithSource:(id)arg1 raduis:(double)arg2;
@property(retain, nonatomic) MCMagicPen *magicPen; // @synthesize magicPen=_magicPen;
- (void)newLine;
- (struct CGPoint)normalizeUserTrackPoint:(struct CGPoint)arg1;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (void)removeLastLine;
- (void)renderLine:(unsigned int)arg1 renderBuffer:(unsigned int)arg2 fromPoint:(struct CGPoint)arg3 toPoint:(struct CGPoint)arg4;
@property(copy, nonatomic) NSString *resourceDirectory; // @synthesize resourceDirectory=_resourceDirectory;
@property(retain, nonatomic) NSMutableDictionary *templateItems; // @synthesize templateItems=_templateItems;
- (void)switchFireworksStrokeContext;
- (void)switchLightPenStrokeContext;
- (void)switchPatternStrokeContext;
- (unsigned int)switchToUndoDrawProgram;
- (void)textureToRenderbuffer:(unsigned int)arg1 framebuffer:(unsigned int)arg2 renderbuffer:(unsigned int)arg3;
- (void)unbindFramebufferTexture:(unsigned int)arg1;
- (void)undoDraw:(unsigned int)arg1 renderBuffer:(unsigned int)arg2;
- (void)undoDrawFireworksWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2 renderBuffer:(unsigned int)arg3 vertexs:(const void *)arg4 vertexsLen:(unsigned int)arg5 alphas:(const void *)arg6 alphasLen:(unsigned int)arg7 drawCount:(unsigned int)arg8;
- (void)undoDrawImpl:(id)arg1 framebuffer:(unsigned int)arg2 renderbuffer:(unsigned int)arg3;
- (void)undoDrawInit:(unsigned int)arg1 renderBuffer:(unsigned int)arg2;
- (void)undoDrawPatternWithSampleTexture:(unsigned int)arg1 frameBuffer:(unsigned int)arg2 renderBuffer:(unsigned int)arg3 positionData:(const void *)arg4 positionDataLen:(unsigned int)arg5 coordData:(const void *)arg6 coordDataLen:(unsigned int)arg7 patternIndex:(unsigned long long)arg8 drawCount:(int)arg9;
- (void)useProgram;

@end

