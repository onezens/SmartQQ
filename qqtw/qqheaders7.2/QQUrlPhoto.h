//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBasePhoto.h"

@class NSString;

@interface QQUrlPhoto : QQBasePhoto
{
    NSString *_photoUrl;
    NSString *_thumbUrl;
    NSString *imageTypeFromHTTP;
    NSString *imageFormat;
    _Bool _needRouteAdapterIpList;
}

- (void).cxx_destruct;
- (void)cancelDownloadPhoto;
- (void)downloadPhoto;
- (void)downloadThumbPhoto;
- (id)getImageRaw;
- (_Bool)isGif;
@property(nonatomic) _Bool needRouteAdapterIpList; // @synthesize needRouteAdapterIpList=_needRouteAdapterIpList;
- (void)photoRequestDidFinishLoad;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
- (void)sendRequest;
- (void)sendThumbRequest;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
- (void)thumbPhotoRequestDidFinishLoad;

@end

