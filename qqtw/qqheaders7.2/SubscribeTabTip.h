//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface SubscribeTabTip : NSObject <NSCoding>
{
    _Bool _hasShownForRedPoint;
    unsigned long long _msgTime;
    long long _msgUid;
    unsigned long long _uin;
}

- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) _Bool hasShownForRedPoint; // @synthesize hasShownForRedPoint=_hasShownForRedPoint;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property(nonatomic) long long msgUid; // @synthesize msgUid=_msgUid;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;

@end

