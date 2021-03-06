//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, ViewInfo;

@interface AVVideoFrame : NSObject
{
    ViewInfo *_viewInfo;
    int _nBufferSize;
    int _nframeangle;
    int _imageFormat;
    int _srcWidth;
    int _srcHeightOfYPlane;
    int _dstWidth;
    int _dstHeightOfYPlane;
    _Bool _full;
    float _degree;
    long long _uin;
    int _srcType;
    _Bool _needFlush;
    int _xo;
    _Bool _isVideoLandScape;
    _Bool _isLocalLandScape;
    _Bool _isLocalVideo;
    NSMutableArray *_faceFeature;
}

- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *faceFeature; // @synthesize faceFeature=_faceFeature;
@property(nonatomic) _Bool isLocalLandScape; // @synthesize isLocalLandScape=_isLocalLandScape;
@property(nonatomic) _Bool isLocalVideo; // @synthesize isLocalVideo=_isLocalVideo;
@property(nonatomic) _Bool isVideoLandScape; // @synthesize isVideoLandScape=_isVideoLandScape;

// Remaining properties
@property(nonatomic) float degree; // @dynamic degree;
@property(nonatomic) int dstHeightOfYPlane; // @dynamic dstHeightOfYPlane;
@property(nonatomic) int dstWidth; // @dynamic dstWidth;
@property(nonatomic) _Bool full; // @dynamic full;
@property(nonatomic) int imageFormat; // @dynamic imageFormat;
@property(nonatomic) int nBufferSize; // @dynamic nBufferSize;
@property(nonatomic) _Bool needFlush; // @dynamic needFlush;
@property(nonatomic) int nframeangle; // @dynamic nframeangle;
@property(nonatomic) int srcHeightOfYPlane; // @dynamic srcHeightOfYPlane;
@property(nonatomic) int srcType; // @dynamic srcType;
@property(nonatomic) int srcWidth; // @dynamic srcWidth;
@property(nonatomic) long long uin; // @dynamic uin;
@property(retain, nonatomic) ViewInfo *viewInfo; // @dynamic viewInfo;

@end

