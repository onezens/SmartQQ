//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface TBUserIdModel : QQModel
{
    unsigned long long _uid;
    NSString *_unionId;
}

+ (id)createWithUserId:(struct CPBMessageDecoder *)arg1;
- (_Bool)converUserId:(struct CPBMessageEncoder *)arg1;
- (void)dealloc;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;

@end

