//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SpriteAioEnterActionModel : NSObject
{
    int _actionId;
    unsigned int _type;
    int _updateTs;
    long long _uin;
}

@property(nonatomic) int actionId; // @synthesize actionId=_actionId;
- (id)initWithDict:(id)arg1 uin:(long long)arg2;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) int updateTs; // @synthesize updateTs=_updateTs;

@end

