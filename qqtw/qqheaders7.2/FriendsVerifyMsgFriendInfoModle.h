//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface FriendsVerifyMsgFriendInfoModle : NSObject <NSCoding>
{
    NSString *_msg_joint_friend;
    NSString *_msg_blacklist;
}

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *msg_blacklist; // @synthesize msg_blacklist=_msg_blacklist;
@property(retain, nonatomic) NSString *msg_joint_friend; // @synthesize msg_joint_friend=_msg_joint_friend;

@end

