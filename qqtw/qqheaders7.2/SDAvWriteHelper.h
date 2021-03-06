//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSArray, NSObject<OS_dispatch_queue>;

@interface SDAvWriteHelper : NSObject
{
    int videoID;
    CDStruct_1b6d18a9 _lastVideoFrameTime;
    NSArray *reserveAVdata;
    struct OpaqueAudioConverter *audioConverterPCM;
    NSObject<OS_dispatch_queue> *_audioQueue;
    NSObject<OS_dispatch_queue> *_aVideoQueue;
    unsigned int staMax;
    _Bool _istartVideo;
    _Bool _needAudio;
    _Bool _initVideoWriter;
    int _frameCount;
    int _mAVsample;
    AVAssetWriter *_videoWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
}

+ (id)getAvParmaKey;
+ (CDStruct_1b6d18a9)getCMtime:(int)arg1 timeScale:(int)arg2;
+ (id)getInstance;
+ (_Bool)initTVKLitePlayer:(int)arg1 Path:(id)arg2;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *adaptor; // @synthesize adaptor=_adaptor;
- (void)appendAudioData:(char *)arg1 size:(unsigned int)arg2 isAAC:(_Bool)arg3 audio:(id)arg4;
- (void)appendPixed:(id)arg1;
- (void)appendPixed:(char *)arg1 toYUVWidth:(unsigned int)arg2 Height:(unsigned int)arg3;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
- (void)callWithDict:(id)arg1 selector:(id)arg2;
- (struct __CVBuffer *)copyDataFromBuffer:(const char *)arg1 toYUVPixelBufferWithWidth:(unsigned int)arg2 Height:(unsigned int)arg3;
- (struct AudioStreamBasicDescription)creatAudio:(char *)arg1 isAAC:(_Bool)arg2 audio:(id)arg3;
- (struct opaqueCMSampleBuffer *)createAudioSample:(void *)arg1 frames:(unsigned int)arg2 asbd:(struct AudioStreamBasicDescription)arg3 audio:(id)arg4;
- (void)dealloc;
- (id)decodeSample:(void *)arg1 len:(int)arg2 inPD:(struct AudioStreamBasicDescription)arg3 outPD:(struct AudioStreamBasicDescription)arg4 AACtoPCM:(_Bool)arg5;
- (void)endAvwrite;
@property(nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
- (struct AudioStreamBasicDescription)getAudioFormat:(char *)arg1 isAAC:(_Bool)arg2 audio:(id)arg3;
- (struct OpaqueAudioConverter *)initDecoder:(struct AudioStreamBasicDescription)arg1 outPD:(struct AudioStreamBasicDescription)arg2 AACtoPCM:(_Bool)arg3 pSize:(unsigned int *)arg4;
@property(nonatomic) _Bool initVideoWriter; // @synthesize initVideoWriter=_initVideoWriter;
@property(nonatomic) _Bool istartVideo; // @synthesize istartVideo=_istartVideo;
@property(nonatomic) int mAVsample; // @synthesize mAVsample=_mAVsample;
@property(nonatomic) _Bool needAudio; // @synthesize needAudio=_needAudio;
@property(retain, nonatomic) AVAssetWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
- (void)startAvwrite;
- (void)stopAvWrite:(_Bool)arg1;

@end

