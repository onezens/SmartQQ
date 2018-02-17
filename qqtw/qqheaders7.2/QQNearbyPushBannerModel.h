//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface QQNearbyPushBannerModel : QQModel
{
    unsigned long long _channel;
    NSString *_imageURL;
    NSString *_md5;
    NSString *_digest;
    NSString *_linkURL;
    unsigned long long _weight;
    NSString *_beginTime;
    NSString *_endTime;
    _Bool _isValid;
    int _xo;
    CDUnknownBlockType _imageBlock;
}

- (void).cxx_destruct;
- (id)description;
- (void)downloadPicture;
- (void)getPictureWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isModelValid;
- (_Bool)isOutDate;
- (id)picturePath;

// Remaining properties
@property(copy, nonatomic) NSString *beginTime; // @dynamic beginTime;
@property(nonatomic) unsigned long long channel; // @dynamic channel;
@property(copy, nonatomic) NSString *digest; // @dynamic digest;
@property(copy, nonatomic) NSString *endTime; // @dynamic endTime;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(nonatomic) _Bool isValid; // @dynamic isValid;
@property(copy, nonatomic) NSString *linkURL; // @dynamic linkURL;
@property(copy, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) unsigned long long weight; // @dynamic weight;

@end

