//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface ShoppingFolderExShowMsgModel : NSObject
{
    int type;
    NSDictionary *exShowInfo;
}

+ (id)FolderExShowModelWithInfo:(id)arg1 type:(int)arg2;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *exShowInfo; // @synthesize exShowInfo;
- (void)reSetExShowInfo:(id)arg1 type:(int)arg2;
@property(nonatomic) int type; // @synthesize type;

@end

