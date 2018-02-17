//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, UserInfo;

@interface NMFeedNowAD : QQModel <NSCopying>
{
    unsigned int _style;
    unsigned int _publish_time;
    UserInfo *_userInfo;
    NSMutableArray *_rpt_str_pic_url;
    NSString *_msg_text;
    NSString *_attendInfo;
    NSString *_actionUrl;
    NSMutableArray *_msg_hot_topic_list;
    NSString *_moreUrl;
    NSString *_duration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *attendInfo; // @synthesize attendInfo=_attendInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;
@property(retain, nonatomic) NSMutableArray *msg_hot_topic_list; // @synthesize msg_hot_topic_list=_msg_hot_topic_list;
@property(retain, nonatomic) NSString *msg_text; // @synthesize msg_text=_msg_text;
@property(nonatomic) unsigned int publish_time; // @synthesize publish_time=_publish_time;
@property(retain, nonatomic) NSMutableArray *rpt_str_pic_url; // @synthesize rpt_str_pic_url=_rpt_str_pic_url;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(retain, nonatomic) UserInfo *userInfo; // @synthesize userInfo=_userInfo;

@end

