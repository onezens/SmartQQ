//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQOpenGroupModel : NSObject
{
    int _settingType;
    NSString *_groupCode;
    unsigned long long _speakInterval;
    unsigned long long _groupFlagEx;
    unsigned long long _startSpeakInterval;
    unsigned long long _groupClassEx;
    unsigned long long _groupClass;
    unsigned long long _maxMember;
    unsigned long long _specialClass;
    NSString *_groupName;
}

- (void)dealloc;
@property(nonatomic) unsigned long long groupClass; // @synthesize groupClass=_groupClass;
@property(nonatomic) unsigned long long groupClassEx; // @synthesize groupClassEx=_groupClassEx;
@property(retain, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) unsigned long long groupFlagEx; // @synthesize groupFlagEx=_groupFlagEx;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)init;
@property(nonatomic) unsigned long long maxMember; // @synthesize maxMember=_maxMember;
@property(nonatomic) int settingType; // @synthesize settingType=_settingType;
@property(nonatomic) unsigned long long speakInterval; // @synthesize speakInterval=_speakInterval;
@property(nonatomic) unsigned long long specialClass; // @synthesize specialClass=_specialClass;
@property(nonatomic) unsigned long long startSpeakInterval; // @synthesize startSpeakInterval=_startSpeakInterval;

@end

