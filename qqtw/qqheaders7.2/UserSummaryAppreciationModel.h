//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface UserSummaryAppreciationModel : QQModel
{
    _Bool _isEmpty;
    long long _flowerCount;
    NSString *_flowerTips;
}

- (void).cxx_destruct;
- (_Bool)canDisplayFlower;
- (id)description;
@property(nonatomic) long long flowerCount; // @synthesize flowerCount=_flowerCount;
@property(copy, nonatomic) NSString *flowerTips; // @synthesize flowerTips=_flowerTips;
- (id)init;
@property(nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
- (void)parseFromBuffer:(const char *)arg1 length:(int)arg2;

@end

