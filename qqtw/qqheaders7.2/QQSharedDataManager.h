//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, QQCurrentAccountDocument;

@interface QQSharedDataManager : NSObject
{
    NSMutableDictionary *_docMap;
    QQCurrentAccountDocument *_currentAccountDoc;
}

+ (id)instance;
- (void).cxx_destruct;
- (id)currentAccountDoc;
- (id)currentChatListDoc;
- (id)currentContainer;
- (id)init;

@end

