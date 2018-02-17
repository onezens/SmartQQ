//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (Helper)
+ (_Bool)checkMoneyFormat:(id)arg1 replacement:(id)arg2;
+ (id)getParamsFromUrl:(id)arg1;
+ (id)safeStr:(id)arg1;
- (_Bool)checkUerID;
- (_Bool)containSubString:(id)arg1 ignoreCass:(_Bool)arg2;
- (id)decodeUrl;
- (id)encodeUrl;
- (id)formatToBankCardNumber;
- (id)gtm_stringByUnescapingFromURLArgument;
- (id)hex;
- (_Bool)isEmpty;
- (_Bool)isHBType:(int)arg1;
- (_Bool)isIPAddr;
- (long long)moneyYuanToFen;
- (struct CGSize)sizeWithFontTP:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (id)space;
- (id)stringByEscapingForURLQuery;
- (id)stringByUnescapingFromURLQuery;
- (id)stringWithBalance;
- (id)substringConstrainedWithWidth:(double)arg1 font:(id)arg2;
- (double)transToTimeInterval;
- (id)transTodate;
- (id)trim;
@end

