//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSDate, NSDictionary, NSString, QzoneCommSparkleWord, QzoneFeedAudio, QzoneFeedUser;

@interface QzoneFeedReply : QzoneModel
{
}

- (_Bool)enableAction;

// Remaining properties
@property(retain, nonatomic) QzoneFeedAudio *audio; // @dynamic audio;
@property(retain, nonatomic) NSString *clientKey; // @dynamic clientKey;
@property(retain, nonatomic) NSString *commentID; // @dynamic commentID;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(retain, nonatomic) NSDictionary *extendInfo; // @dynamic extendInfo;
@property(nonatomic) _Bool isDeleted; // @dynamic isDeleted;
@property(nonatomic) _Bool isNew; // @dynamic isNew;
@property(retain, nonatomic) NSString *refer; // @dynamic refer;
@property(retain, nonatomic) NSString *replyID; // @dynamic replyID;
@property(retain, nonatomic) QzoneCommSparkleWord *sparkleWord; // @dynamic sparkleWord;
@property(retain, nonatomic) QzoneFeedUser *target; // @dynamic target;
@property(retain, nonatomic) QzoneFeedUser *user; // @dynamic user;

@end

