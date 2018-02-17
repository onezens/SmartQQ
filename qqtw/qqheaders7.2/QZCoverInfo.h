//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSArray, NSString, QZCoverCoverData;

@interface QZCoverInfo : QzoneModel
{
    _Bool _isForceRefresh;
    NSString *_keyID;
    NSString *_packageLocalPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *activityUrl; // @dynamic activityUrl;
@property(readonly, nonatomic) NSString *coverId; // @dynamic coverId;
@property(readonly, nonatomic) NSString *dynamicAlbumPicUrl; // @dynamic dynamicAlbumPicUrl;
@property(readonly, nonatomic) NSString *dynamicAlbumWebUrl; // @dynamic dynamicAlbumWebUrl;
@property(readonly, nonatomic) long long fullScreenTransparency; // @dynamic fullScreenTransparency;
@property(readonly, nonatomic) long long gameJumpType; // @dynamic gameJumpType;
@property(readonly, nonatomic) NSString *gameJumpUrl; // @dynamic gameJumpUrl;
@property(readonly, nonatomic) NSString *gameSchema; // @dynamic gameSchema;
@property(readonly, nonatomic) double gameXCoordinateLU; // @dynamic gameXCoordinateLU;
@property(readonly, nonatomic) double gameXCoordinateRD; // @dynamic gameXCoordinateRD;
@property(readonly, nonatomic) double gameYCoordinateLU; // @dynamic gameYCoordinateLU;
@property(readonly, nonatomic) double gameYCoordinateRD; // @dynamic gameYCoordinateRD;
@property(readonly, nonatomic) NSString *gifUrl; // @dynamic gifUrl;
- (id)init;
@property(readonly, nonatomic) _Bool isDaytime; // @dynamic isDaytime;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool isForceRefresh; // @synthesize isForceRefresh=_isForceRefresh;
- (_Bool)isFullScreenCover;
- (_Bool)isWebViewCover;
@property(retain, nonatomic) NSString *keyID; // @synthesize keyID=_keyID;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *packageLocalPath; // @synthesize packageLocalPath=_packageLocalPath;
@property(readonly, nonatomic) NSString *packageMd5; // @dynamic packageMd5;
@property(readonly, nonatomic) NSString *packageUrl; // @dynamic packageUrl;
@property(readonly, nonatomic) _Bool photoWallCombinePic; // @dynamic photoWallCombinePic;
@property(readonly, nonatomic) NSArray *photoWallUrls; // @dynamic photoWallUrls;
@property(readonly, nonatomic) NSString *qzoneShowBgImageUrl; // @dynamic qzoneShowBgImageUrl;
@property(readonly, nonatomic) NSString *qzoneShowFgDir; // @dynamic qzoneShowFgDir;
@property(readonly, nonatomic) long long qzoneShowFgImageCount; // @dynamic qzoneShowFgImageCount;
@property(readonly, nonatomic) NSString *qzoneShowFgZipUrl; // @dynamic qzoneShowFgZipUrl;
@property(readonly, nonatomic) long long style; // @dynamic style;
@property(readonly, nonatomic) NSString *type; // @dynamic type;
@property(readonly, nonatomic) NSString *url; // @dynamic url;
@property(readonly, nonatomic) NSString *videoClientKey; // @dynamic videoClientKey;
@property(readonly, nonatomic) NSString *videoCoverId; // @dynamic videoCoverId;
@property(readonly, nonatomic) NSString *videoCoverPicUrl; // @dynamic videoCoverPicUrl;
@property(readonly, nonatomic) long long videoCoverStatus; // @dynamic videoCoverStatus;
@property(readonly, nonatomic) NSString *videoCoverUrl; // @dynamic videoCoverUrl;
@property(readonly, nonatomic) long long videoHeight; // @dynamic videoHeight;
@property(readonly, nonatomic) long long videoWidth; // @dynamic videoWidth;
@property(readonly, nonatomic) long long weather; // @dynamic weather;

// Remaining properties
@property(retain, nonatomic) NSString *clientHybridCoverUrl; // @dynamic clientHybridCoverUrl;
@property(nonatomic) double coverRatio; // @dynamic coverRatio;
@property(retain, nonatomic) QZCoverCoverData *originData; // @dynamic originData;
@property(nonatomic) long long uin; // @dynamic uin;

@end

