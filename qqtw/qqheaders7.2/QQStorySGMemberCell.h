//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, QQAvatarView, UILabel;

@interface QQStorySGMemberCell : UICollectionViewCell
{
    _Bool _isInviteCell;
    NSString *_unionid;
    QQAvatarView *_avatarView;
    UILabel *_nameLabel;
}

+ (struct CGSize)itemSize;
@property(retain, nonatomic) QQAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isInviteCell; // @synthesize isInviteCell=_isInviteCell;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSString *unionid; // @synthesize unionid=_unionid;

@end

