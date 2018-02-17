//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableString, NSString, QQAvatarView, QQRecommendedFriend, RichStateOneLineFastView, UIImageView, UILabel, UIView;

@interface QQPotentialFriendsTableViewCell : UITableViewCell
{
    QQAvatarView *_headerImageView;
    UILabel *_nameLabel;
    UIImageView *_sexAndAgeView;
    UIImageView *_sexView;
    UILabel *_ageLabel;
    UILabel *_mutualFriendLabel;
    RichStateOneLineFastView *_signatureLabel;
    UIImageView *_zoneImageView;
    UIView *_addButton;
    UIView *_backgroundView;
    NSString *_addButtonTitle;
    NSMutableString *_mutualFriendLabelText;
    QQRecommendedFriend *_friend;
    CDUnknownBlockType _addPotentialFriendButtonTapedCallBack;
}

- (void).cxx_destruct;
- (void)addButtonTaped:(id)arg1;
- (id)createAddButtonWithTitle:(id)arg1;
- (void)didMoveToWindow;
@property(retain, nonatomic) QQRecommendedFriend *friend;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAddPotentialFriendButtonTapedCallBack:(CDUnknownBlockType)arg1;
- (void)setupViews;

@end

