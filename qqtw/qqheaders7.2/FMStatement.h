//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMStatement : NSObject
{
    struct sqlite3_stmt *_statement;
    NSString *_query;
    long long _useCount;
    _Bool _inUse;
}

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)description;
- (void)finalize;
@property _Bool inUse; // @synthesize inUse=_inUse;
@property(retain) NSString *query; // @synthesize query=_query;
- (void)reset;
@property struct sqlite3_stmt *statement; // @synthesize statement=_statement;
@property long long useCount; // @synthesize useCount=_useCount;

@end

