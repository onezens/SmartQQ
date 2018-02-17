//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ReadInJoyTopicItem : NSObject
{
    unsigned int _businessId;
    unsigned int _numberOfParticipants;
    NSString *_businessName;
    NSString *_businessUrl;
    NSString *_businessNamePrefix;
    NSString *_picUrl;
    NSString *_topicNameStr;
    NSString *_participantsStr;
}

+ (id)topicItemFromDecoder:(struct CPBMessageDecoder *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int businessId; // @synthesize businessId=_businessId;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(copy, nonatomic) NSString *businessNamePrefix; // @synthesize businessNamePrefix=_businessNamePrefix;
@property(copy, nonatomic) NSString *businessUrl; // @synthesize businessUrl=_businessUrl;
- (id)description;
- (void)genParticipantsStr;
- (void)genTopicNameStr;
@property(nonatomic) unsigned int numberOfParticipants; // @synthesize numberOfParticipants=_numberOfParticipants;
@property(copy, nonatomic) NSString *participantsStr; // @synthesize participantsStr=_participantsStr;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *topicNameStr; // @synthesize topicNameStr=_topicNameStr;
- (void)toEncoder:(struct CPBMessageEncoder *)arg1;

@end

