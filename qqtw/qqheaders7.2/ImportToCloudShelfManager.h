//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HttpRequestDelegate.h"

@class NSString;

@interface ImportToCloudShelfManager : NSObject <HttpRequestDelegate>
{
}

+ (id)instance;
- (_Bool)addToCloudShelf:(id)arg1;
- (void)commitBookShelf:(int)arg1 action:(int)arg2 result:(id)arg3;
- (id)createCloudDictFromBookInfo:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

