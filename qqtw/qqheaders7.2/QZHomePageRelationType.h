//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class NSMutableArray, NSString;

@interface QZHomePageRelationType : QZoneModel
{
    int _is_open_follow;
    int _is_visitor_gray_follow_usr;
    int _is_host_gray_follow_usr;
}

+ (id)instanceWithQZJceResponse:(id)arg1;
- (id)initWithQZJceResponsQZHomePageRelationType:(id)arg1;
@property(nonatomic) int is_host_gray_follow_usr; // @synthesize is_host_gray_follow_usr=_is_host_gray_follow_usr;
@property(nonatomic) int is_open_follow; // @synthesize is_open_follow=_is_open_follow;
@property(nonatomic) int is_visitor_gray_follow_usr; // @synthesize is_visitor_gray_follow_usr=_is_visitor_gray_follow_usr;

// Remaining properties
@property(nonatomic) _Bool is_askfor_friend; // @dynamic is_askfor_friend;
@property(nonatomic) _Bool is_black; // @dynamic is_black;
@property(nonatomic) int is_both_friend; // @dynamic is_both_friend;
@property(nonatomic) _Bool is_concerned; // @dynamic is_concerned;
@property(nonatomic) int is_friend; // @dynamic is_friend;
@property(nonatomic) int is_in_visitor_notify_list; // @dynamic is_in_visitor_notify_list;
@property(nonatomic) _Bool is_realname; // @dynamic is_realname;
@property(nonatomic) int is_recipient_yellow_banner; // @dynamic is_recipient_yellow_banner;
@property(nonatomic) int is_reverse_black; // @dynamic is_reverse_black;
@property(nonatomic) int is_special; // @dynamic is_special;
@property(nonatomic) _Bool is_uncare; // @dynamic is_uncare;
@property(retain, nonatomic) NSString *levelMessage; // @dynamic levelMessage;
@property(retain, nonatomic) NSMutableArray *questions; // @dynamic questions;
@property(nonatomic) long long relation; // @dynamic relation;

@end

