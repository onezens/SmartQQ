//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFriendModel.h"

@class NSIndexPath, NSString, RedPointItem, UIImage;

@interface QQTableCellItem : QQFriendModel
{
    NSString *_title;
    int _type;
    NSIndexPath *_indexPath;
    id _object;
    NSString *_iconName;
    struct CGRect _rect;
    SEL _sel;
    NSString *_key;
    NSString *_url;
    NSString *_itunesUrl;
    _Bool _isTransformIcon;
    UIImage *_iconPic;
    NSString *_iconPicUrl;
    unsigned char _hintType;
    _Bool _isHightLinghted;
    long long _unreadCount;
    NSString *_tipsText;
    NSString *_tipsIconUrl;
    _Bool _tipsShowInTab;
    unsigned int _resID;
    _Bool _local;
    _Bool _localNew;
    _Bool _isShow;
    _Bool _isRequestting;
    RedPointItem *_redPointItem;
    NSString *_accessibilityString;
}

+ (id)CreateItem:(id)arg1 withType:(int)arg2 indexPath:(id)arg3 object:(id)arg4;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
@property(nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
- (void)sendAction;

// Remaining properties
@property(retain, nonatomic) NSString *accessibilityString; // @dynamic accessibilityString;
@property(nonatomic) unsigned char hintType; // @dynamic hintType;
@property(retain, nonatomic) NSString *iconName; // @dynamic iconName;
@property(retain, nonatomic) UIImage *iconPic; // @dynamic iconPic;
@property(retain, nonatomic) NSString *iconPicUrl; // @dynamic iconPicUrl;
@property(retain, nonatomic) NSIndexPath *indexPath; // @dynamic indexPath;
@property(nonatomic) _Bool isHightLinghted; // @dynamic isHightLinghted;
@property(nonatomic) _Bool isRequestting; // @dynamic isRequestting;
@property(nonatomic) _Bool isShow; // @dynamic isShow;
@property(nonatomic) _Bool isTransformIcon; // @dynamic isTransformIcon;
@property(retain, nonatomic) NSString *itunesUrl; // @dynamic itunesUrl;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) _Bool local; // @dynamic local;
@property(nonatomic) _Bool localNew; // @dynamic localNew;
@property(nonatomic) struct CGRect rect; // @dynamic rect;
@property(retain, nonatomic) RedPointItem *redPointItem; // @dynamic redPointItem;
@property(nonatomic) unsigned int resID; // @dynamic resID;
@property(retain, nonatomic) NSString *tipsIconUrl; // @dynamic tipsIconUrl;
@property(nonatomic) _Bool tipsShowInTab; // @dynamic tipsShowInTab;
@property(retain, nonatomic) NSString *tipsText; // @dynamic tipsText;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) long long unreadCount; // @dynamic unreadCount;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

