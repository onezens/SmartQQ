//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@interface TBGroupDynamicGroupInfo : QQModel
{
    unsigned int _seq;
    unsigned long long _groupId;
}

+ (id)createWithQQStory:(const struct GroupInfo *)arg1;
- (void)dealloc;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;

@end

