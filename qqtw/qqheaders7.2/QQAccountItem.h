//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQAccountItem : NSObject
{
    NSString *_itemTitle;
    NSString *_url;
    NSString *_itemKey;
    NSString *_itemStyle;
    NSString *_itemContent;
    _Bool _edit;
    int _type;
    _Bool _hasValue;
    NSString *_placeHolder;
    int _xo;
}

+ (id)CreateItem:(id)arg1 url:(id)arg2 key:(id)arg3 style:(id)arg4 content:(id)arg5;
+ (id)CreateItem:(id)arg1 url:(id)arg2 placeHolder:(id)arg3 type:(int)arg4 hasValue:(_Bool)arg5;
+ (id)CreateItem:(id)arg1 url:(id)arg2 type:(int)arg3 hasValue:(_Bool)arg4;
- (int)GetHeightWithItem;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) NSString *itemContent; // @dynamic itemContent;
@property(retain, nonatomic) NSString *itemKey; // @dynamic itemKey;
@property(retain, nonatomic) NSString *itemStyle; // @dynamic itemStyle;
@property(retain, nonatomic) NSString *itemTitle; // @dynamic itemTitle;
@property(retain, nonatomic) NSString *placeHolder; // @dynamic placeHolder;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

