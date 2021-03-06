//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface NearbyAnchorManager : NSObject
{
    NSString *_currentUin;
    NSMutableDictionary *_anchorDictionary;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *anchorDictionary; // @synthesize anchorDictionary=_anchorDictionary;
- (struct CGPoint)anchorPointForKey:(id)arg1;
- (void)cleanAnchorWithKey:(id)arg1;
@property(copy, nonatomic) NSString *currentUin; // @synthesize currentUin=_currentUin;
- (id)init;
- (void)recordAnchorOffset:(struct CGPoint)arg1 withKey:(id)arg2;

@end

