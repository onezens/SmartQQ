//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface RqdLocalObject : NSObject <NSCoding>
{
    long long md5;
    long long time;
    int dcount;
    long long encLen;
}

@property(nonatomic) int dcount; // @synthesize dcount;
@property(nonatomic) long long encLen; // @synthesize encLen;
- (id)encodeData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long md5; // @synthesize md5;
- (_Bool)setEncodeData:(id)arg1;
@property(nonatomic) long long time; // @synthesize time;

@end
