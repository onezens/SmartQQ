//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FaceScorePersonInfoModel : NSObject
{
    _Bool _isFriend;
    int _msgDirectionFlag;
    unsigned long long _uin;
    NSString *_xmlStr;
}

- (void)dealloc;
@property(nonatomic) _Bool isFriend; // @synthesize isFriend=_isFriend;
@property(nonatomic) int msgDirectionFlag; // @synthesize msgDirectionFlag=_msgDirectionFlag;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *xmlStr; // @synthesize xmlStr=_xmlStr;

@end

