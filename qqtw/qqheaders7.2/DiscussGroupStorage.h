//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DiscussGroupStorage : NSObject
{
    long long _uin;
    NSString *encryptKey;
}

- (_Bool)createDiscussGroupFolder;
- (void)dealloc;
- (void)deleteDiscussGroupListFile;
- (void)deleteDiscussMemberData:(long long)arg1;
- (void)deleteFavoriteDiscussGroupListFile;
@property(retain, nonatomic) NSString *encryptKey; // @synthesize encryptKey;
- (id)getDiscussMemberListPath:(long long)arg1;
- (id)getDiscussMemberListPathEnc:(long long)arg1;
- (id)getFavoriteGroupListPath;
- (id)getGroupListPath;
- (id)getGroupPath;
- (_Bool)hasFile:(id)arg1;
- (id)initWithCurrentUin:(long long)arg1;
- (id)loadDiscussGroupList;
- (id)loadDiscussMemberList:(long long)arg1;
@property(nonatomic) long long uin; // @synthesize uin=_uin;

@end

