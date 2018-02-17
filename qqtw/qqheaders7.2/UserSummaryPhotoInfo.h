//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSString;

@interface UserSummaryPhotoInfo : QQModel <NSCopying>
{
    _Bool _valid;
    int _imageId;
    int _timeStamp;
    NSString *_imageUrl;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)httpToHttps;
@property(nonatomic) int imageId; // @synthesize imageId=_imageId;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) int timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;

@end

