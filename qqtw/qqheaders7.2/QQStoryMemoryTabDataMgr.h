//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQStoryMemoryTabDataMgr : NSObject
{
    _Bool _end;
    _Bool _friend;
    _Bool _strangerView;
    unsigned int _totalVideoCount;
    NSString *_cookie;
}

@property(nonatomic, getter=allowStrangerView) _Bool strangerView; // @synthesize strangerView=_strangerView;
@property(copy, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
- (void)dealloc;
@property(nonatomic, getter=isEnd) _Bool end; // @synthesize end=_end;
@property(nonatomic, getter=isFriend) _Bool friend; // @synthesize friend=_friend;
@property(nonatomic) unsigned int totalVideoCount; // @synthesize totalVideoCount=_totalVideoCount;

@end

