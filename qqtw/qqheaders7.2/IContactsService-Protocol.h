//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ContactModel, NSString;

@protocol IContactsService <NSObject>
- (long long)getChatUINWithMobilePhoneStr:(NSString *)arg1;
- (int)getContactBinderFromWithMobilePhoneStr:(NSString *)arg1;
- (NSString *)getContactMobilePhoneWithUIN:(long long)arg1;
- (ContactModel *)getContactModelWithMobilePhoneStr:(NSString *)arg1;
- (NSString *)getContactNameWithMobilePhoneStr:(NSString *)arg1;
- (NSString *)getContactNameWithUIN:(long long)arg1;
- (NSString *)getContactNickNameWithMobilePhoneStr:(NSString *)arg1;
- (long long)getContactUINWithMobilePhoneStr:(NSString *)arg1;
- (NSString *)getCountryAndPhoneCodeStrWithMobilePhoneStr:(NSString *)arg1;
- (int)getFriendNetworkType:(NSString *)arg1;
- (NSString *)getMobilePhoneWithChatUIN:(long long)arg1;
- (NSString *)getMobilePhoneWithTemporaryUIN:(long long)arg1;
- (NSString *)getMyselfMobilePhone;
- (NSString *)getMyselfMobilePhoneWithoutCountry;
- (NSString *)getNoCountryPhoneWithMobilePhone:(NSString *)arg1;
- (long long)getTemporaryUIN:(NSString *)arg1;
- (long long)getTemporaryUINWithMobilePhoneStr:(NSString *)arg1 makeIfNotExist:(_Bool)arg2;
- (_Bool)isBinding;
- (_Bool)isInactive;
- (_Bool)isMobilePhoneAtBindContacts:(NSString *)arg1;
- (_Bool)isMobilePhoneAtBlackList:(NSString *)arg1;
- (_Bool)isMobilePhoneAtContacts:(NSString *)arg1;
- (_Bool)isPCHasCamera:(NSString *)arg1;
- (_Bool)isSupportVoice:(NSString *)arg1;
- (_Bool)isTemporaryUIN:(long long)arg1;
- (void)setChatUIN:(long long)arg1 withMobilePhoneStr:(NSString *)arg2;
- (void)setContactUIN:(long long)arg1 withMobilePhoneStr:(NSString *)arg2;
- (void)setNoCountryPhone:(NSString *)arg1 withMobilePhoneStr:(NSString *)arg2;
- (_Bool)updateContactNickName:(NSString *)arg1 withMobilePhoneStr:(NSString *)arg2;
@end

