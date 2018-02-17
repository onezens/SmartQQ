//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSDate, NSMutableArray, NSString;

@interface ITSearchReqItem : SAMRequestItem
{
    _Bool _isFirstList;
    NSDate *_lastReqDate;
    NSString *_keyWord;
    unsigned int _tagType;
    unsigned int _startIndex;
    _Bool _shouldGetPersonal;
    NSMutableArray *_listArray;
    NSMutableArray *_selArray;
    _Bool _isLoading;
}

- (void).cxx_destruct;
- (char *)getRequestBuffer;
- (id)init;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (id)serviceCmd;

// Remaining properties
@property(nonatomic) _Bool isFirstList; // @dynamic isFirstList;
@property(nonatomic) _Bool isLoading; // @dynamic isLoading;
@property(retain, nonatomic) NSString *keyWord; // @dynamic keyWord;
@property(retain, nonatomic) NSDate *lastReqDate; // @dynamic lastReqDate;
@property(retain, nonatomic) NSMutableArray *listArray; // @dynamic listArray;
@property(retain, nonatomic) NSMutableArray *selArray; // @dynamic selArray;
@property(nonatomic) _Bool shouldGetPersonal; // @dynamic shouldGetPersonal;
@property(nonatomic) unsigned int startIndex; // @dynamic startIndex;
@property(nonatomic) unsigned int tagType; // @dynamic tagType;

@end

