//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQDBRepairManager : NSObject
{
    NSString *_pathname;
    int _flag;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)dealloc;
- (void)handleEnterForeground;
- (void)handleLogout;
- (void)handleMalformDBWithPath:(id)arg1;
- (void)increaseShowCountForPath:(id)arg1;
- (id)init;
- (_Bool)isMessageDBRepairInProgress;
- (void)notifyRepairComplete;
- (void)resetShowCountForPath:(id)arg1;
- (_Bool)shouldShowPromptForPath:(id)arg1;
- (void)showProgressWindow;
- (void)showPrompt;

@end

