//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQGroupRedDotProxy : NSObject
{
}

+ (id)getInstance;
- (id)packageGetRedDotRequest:(unsigned long long)arg1 appids:(id)arg2;
- (id)packageSetRedDotRequest:(unsigned long long)arg1 serviceType:(int)arg2 args:(id)arg3;
- (id)parseGetRedDotResponse:(const char *)arg1 len:(int)arg2;
- (id)parseRedDotInfo:(struct CPBMessageDecoder *)arg1;

@end

