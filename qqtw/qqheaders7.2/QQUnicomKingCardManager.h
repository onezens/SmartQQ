//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQGrayTipsManagerDelegate.h"

@class NSDictionary, NSString;

@interface QQUnicomKingCardManager : NSObject <QQGrayTipsManagerDelegate>
{
    NSDictionary *_internalDic;
    NSString *_selfUin;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)carrierType;
- (id)configForEntry:(unsigned long long)arg1;
- (void)didFetchConfigFromServer:(id)arg1;
- (id)getKey;
- (void)grayTipsManagerDidInsertMsgTab:(id)arg1 retusls:(id)arg2;
- (void)graytipsManagerDidProcessAIO:(id)arg1 results:(id)arg2;
- (id)init;
- (id)keyForEntryType:(unsigned long long)arg1;
- (id)lastInsertGrayTipTimeKey;
- (void)loadConfig;
- (_Bool)shouldShowTips;
- (void)tryToInsertGrayTips:(id)arg1 isFromC2C:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

