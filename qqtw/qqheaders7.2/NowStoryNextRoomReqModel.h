//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface NowStoryNextRoomReqModel : QQModel
{
    NSString *_story_topic;
    NSString *_topic_name;
    long long _source;
    long long _direction;
    unsigned long long _next_room_id;
    long long _sex;
    unsigned long long _room_id;
}

- (void).cxx_destruct;
- (id)description;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long next_room_id; // @synthesize next_room_id=_next_room_id;
- (id)paramsDict;
- (id)paramsStr;
@property(nonatomic) unsigned long long room_id; // @synthesize room_id=_room_id;
@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *story_topic; // @synthesize story_topic=_story_topic;
@property(retain, nonatomic) NSString *topic_name; // @synthesize topic_name=_topic_name;

@end

