//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QQFriendShareModel : NSObject <NSCoding>
{
    NSString *originalNick;
    NSString *filteredNick;
    NSString *freindUin;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)filterIllegalCharacter:(id)arg1;
@property(retain, nonatomic) NSString *filteredNick; // @synthesize filteredNick;
@property(retain, nonatomic) NSString *freindUin; // @synthesize freindUin;
- (id)initWithCoder:(id)arg1;
- (id)initWithUin:(id)arg1 nick:(id)arg2;
@property(retain, nonatomic) NSString *originalNick; // @synthesize originalNick;

@end

