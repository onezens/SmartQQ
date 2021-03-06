//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSData, NSString;

@interface QQC2CCookieStorage : NSObject <IQQDBOperationBase>
{
    NSData *_cookie;
    NSData *_accCookie;
    NSData *_pubAccountCookie;
    NSString *_uin;
    _Bool _changed;
}

- (void)dealloc;
- (void)deleteCookie;
- (id)getAccCookie;
- (id)getCookie;
- (id)getFilePath;
- (id)getPubAccountCookie;
- (unsigned long long)getTableSign;
- (id)initWithUin:(id)arg1;
- (void)load;
- (void)save;
- (void)saveInDbThread;
- (void)setAccCookie:(id)arg1;
- (void)setCookie:(id)arg1;
- (void)setPubAccountCookie:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

