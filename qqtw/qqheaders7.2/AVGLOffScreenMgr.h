//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, QAVFilter, QQRichGLProgramCustom, QQRichGLProgramFaceOff, QQRichGLProgramGraffiti, QQRichGLProgramMeshDistortion, QQRichGLProgramPortraitSmoothReal, QQRichPTVGLProgramCommon, QQRichPTVGLProgramGesture;

@interface AVGLOffScreenMgr : NSObject
{
    unsigned int _vertexShaderHandle;
    unsigned int _fragmentShaderHandle;
    unsigned int _programHandle;
    unsigned int _indexBuffer;
    unsigned int _vetexBuffer;
    EAGLContext *_context;
    EAGLContext *_resourceContext;
    unsigned int *_textureUniforms;
    unsigned int _positionAttributeLocation;
    unsigned int _texCoordAttributeLocation;
    unsigned int _rotateZMatrixUniform;
    unsigned int _displayTypeUiform;
    unsigned int _frameBuffer;
    unsigned int _renderBuffer;
    unsigned int _rotateTexture;
    unsigned int _decorateTexture;
    unsigned int _laterProTexture;
    unsigned int _tempTexture1;
    unsigned int _tempTexture3;
    unsigned int _luminanceTexture;
    unsigned int _chromaTexture;
    struct CGSize _preset;
    struct __CVOpenGLESTextureCache *_coreVideoTextureCache;
    struct __CVBuffer *_offscreenRenderTarget;
    struct __CVBuffer *_offscreenRenderTexture;
    struct __CVOpenGLESTextureCache *_yuvVideoTextureCache;
    struct __CVBuffer *_yuvScreenRenderTarget;
    struct __CVBuffer *_yuvScreenRenderTexture;
    char *_imageBuf;
    int _imageWidth;
    int _imageHeight;
    float _yRotateMatrix[16];
    int _faceDectWidth;
    int _faceDectHeight;
    QQRichPTVGLProgramCommon *_program;
    QAVFilter *_filter;
    QQRichGLProgramMeshDistortion *_meshDistortionProgram;
    QQRichGLProgramCustom *_customProgram;
    QQRichGLProgramPortraitSmoothReal *_PortraitSmoothRealProgram;
    QQRichGLProgramFaceOff *_faceOffProgram;
    QQRichGLProgramGraffiti *_graffitiProgram;
    long long _PortraitSmoothLevel;
    QQRichPTVGLProgramGesture *_gestureProgram;
}

@property(nonatomic) long long PortraitSmoothLevel; // @synthesize PortraitSmoothLevel=_PortraitSmoothLevel;
@property(retain, nonatomic) QQRichGLProgramPortraitSmoothReal *PortraitSmoothRealProgram; // @synthesize PortraitSmoothRealProgram=_PortraitSmoothRealProgram;
- (unsigned int)PreprocessRenderIfNeed;
- (void)applyRotationWithDegree:(float)arg1;
- (unsigned int)compileShaderString:(id)arg1 withType:(unsigned int)arg2;
- (void)compileShaders;
@property(retain, nonatomic) QQRichGLProgramCustom *customProgram; // @synthesize customProgram=_customProgram;
- (void)dealloc;
- (void)decorateBuffer:(char *)arg1 toBuf:(char *)arg2;
- (void)destroyOpenGL;
- (_Bool)doDecoRender;
@property(retain, nonatomic) QQRichGLProgramFaceOff *faceOffProgram; // @synthesize faceOffProgram=_faceOffProgram;
@property(retain, nonatomic) QAVFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) QQRichPTVGLProgramGesture *gestureProgram; // @synthesize gestureProgram=_gestureProgram;
- (id)getCurrentContext;
- (void)getOffScreenImage;
- (id)getResourceContext;
@property(retain, nonatomic) QQRichGLProgramGraffiti *graffitiProgram; // @synthesize graffitiProgram=_graffitiProgram;
- (id)init;
- (_Bool)initOffscreenRenderTarget;
- (void)initOpenGL;
- (_Bool)initYUVScreenRenderTarget;
- (void)laterProcessInputTex:(unsigned int)arg1 ToTexRef:(unsigned int)arg2;
@property(retain, nonatomic) QQRichGLProgramMeshDistortion *meshDistortionProgram; // @synthesize meshDistortionProgram=_meshDistortionProgram;
@property(nonatomic) struct CGSize preset; // @synthesize preset=_preset;
@property(retain, nonatomic) QQRichPTVGLProgramCommon *program; // @synthesize program=_program;
- (void)renderBufferToTexture:(char *)arg1;
- (void)renderCustom;
- (void)renderWithFaceOff;
- (_Bool)renderWithFaceOffMesh;
- (void)renderWithMeshDistortion;
- (_Bool)renderWithPostprocess;
- (_Bool)renderWithPreprocess;
- (void)setResourceContext;
- (void)setupContext;
- (void)setupFrameBuffer;
- (void)setupIndices;
- (void)setupRenderBuffer;
- (void)setupTexture;
- (void)setupVBO;
- (void)textureNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)textureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)uninitOffscreenRenderTarget;
- (void)uninitYUVScreenRenderTarget;
- (void)useCurrentContext;
- (void)yuvBuffertoRGBBuffer:(char *)arg1;

@end

