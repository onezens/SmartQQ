//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSString, QZHostDNSStatisInfo;

@interface QZHostInfo : QzoneModel
{
}

+ (id)createWithRequest:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)hash;
- (id)initWithUrlString:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *domainHost; // @dynamic domainHost;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @dynamic finishBlock;
@property(retain, nonatomic) QZHostDNSStatisInfo *statisInfo; // @dynamic statisInfo;

@end

