//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSString;

@interface NMTopicInfo : QQModel <NSCopying>
{
    unsigned long long _topicId;
    NSString *_topicStr;
    NSString *_forewordStr;
    unsigned int _createTime;
    unsigned int _updateTime;
    unsigned int _buttonStyle;
    NSString *_buttonImgUrl;
    NSString *_bgImgUrl;
    NSString *_joinInfo;
    int _xo;
}

- (void).cxx_destruct;
- (id)completeTopicStr;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

// Remaining properties
@property(copy, nonatomic) NSString *bgImgUrl; // @dynamic bgImgUrl;
@property(copy, nonatomic) NSString *buttonImgUrl; // @dynamic buttonImgUrl;
@property(nonatomic) unsigned int buttonStyle; // @dynamic buttonStyle;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(copy, nonatomic) NSString *forewordStr; // @dynamic forewordStr;
@property(copy, nonatomic) NSString *joinInfo; // @dynamic joinInfo;
@property(nonatomic) unsigned long long topicId; // @dynamic topicId;
@property(copy, nonatomic) NSString *topicStr; // @dynamic topicStr;
@property(nonatomic) unsigned int updateTime; // @dynamic updateTime;

@end

