//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class APStrangerInfo, NSString;

@interface NMFeedComment : QQModel <NSCopying>
{
    NSString *_commentId;
    NSString *_feedId;
    APStrangerInfo *_publisher;
    unsigned int _time;
    NSString *_content;
    NSString *_replyComment;
    APStrangerInfo *_replyUser;
    _Bool _canDelete;
    _Bool _isMine;
    _Bool _isHot;
    int _xo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool canDelete; // @dynamic canDelete;
@property(copy, nonatomic) NSString *commentId; // @dynamic commentId;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(copy, nonatomic) NSString *feedId; // @dynamic feedId;
@property(nonatomic) _Bool isHot; // @dynamic isHot;
@property(nonatomic) _Bool isMine; // @dynamic isMine;
@property(retain, nonatomic) APStrangerInfo *publisher; // @dynamic publisher;
@property(copy, nonatomic) NSString *replyComment; // @dynamic replyComment;
@property(retain, nonatomic) APStrangerInfo *replyUser; // @dynamic replyUser;
@property(nonatomic) unsigned int time; // @dynamic time;

@end

