//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface QQStoryMsgExInfo : NSObject
{
    NSString *_storyId;
    NSString *_title;
    NSString *_coverUrl;
    NSString *_logoUrl;
    int _themeColor;
    double _themeAlpha;
    NSString *_srcName;
    NSString *_srcAction;
    NSString *_msgAction;
    NSString *_unionId;
    NSString *_contentType;
    int _storyType;
    NSString *_brief;
    UIImage *_coverImage;
    NSString *_feedID;
    NSString *_moreTipWording;
    int _xo;
    _Bool _needRequestShareInfo;
    NSString *_uin;
    NSString *_reserved1;
    NSString *_reserved2;
    NSString *_reserved3;
    NSString *_reserved4;
}

+ (id)modelWithDictionary:(id)arg1;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
- (id)creatXMLMessageForShareGroupInfoCard;
- (id)creatXMLMessageForStoryInfo;
- (id)creatXMLMessageForStoryInfoCard;
- (id)creatXMLMessageForUserInfoCard;
- (id)creatXMLMessageForWebMsg;
- (void)dealloc;
- (id)dictionary;
- (id)init;
@property(nonatomic) _Bool needRequestShareInfo; // @synthesize needRequestShareInfo=_needRequestShareInfo;
@property(copy, nonatomic) NSString *reserved1; // @synthesize reserved1=_reserved1;
@property(copy, nonatomic) NSString *reserved2; // @synthesize reserved2=_reserved2;
@property(copy, nonatomic) NSString *reserved3; // @synthesize reserved3=_reserved3;
@property(copy, nonatomic) NSString *reserved4; // @synthesize reserved4=_reserved4;
@property(nonatomic) double themeAlpha; // @synthesize themeAlpha=_themeAlpha;
@property(nonatomic) int themeColor; // @synthesize themeColor=_themeColor;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;

// Remaining properties
@property(copy, nonatomic) NSString *brief; // @dynamic brief;
@property(copy, nonatomic) NSString *contentType; // @dynamic contentType;
@property(copy, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(copy, nonatomic) NSString *feedID; // @dynamic feedID;
@property(copy, nonatomic) NSString *logoUrl; // @dynamic logoUrl;
@property(copy, nonatomic) NSString *moreTipWording; // @dynamic moreTipWording;
@property(copy, nonatomic) NSString *msgAction; // @dynamic msgAction;
@property(copy, nonatomic) NSString *srcAction; // @dynamic srcAction;
@property(copy, nonatomic) NSString *srcName; // @dynamic srcName;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(nonatomic) int storyType; // @dynamic storyType;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *unionId; // @dynamic unionId;

@end

