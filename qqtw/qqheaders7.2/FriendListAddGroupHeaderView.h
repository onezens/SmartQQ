//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel, UIView;

@interface FriendListAddGroupHeaderView : UIButton
{
    UIImageView *_addIconView;
    UILabel *_addLabel;
    UIView *_line;
    id <FriendListAddGroupDelegate> _delegate;
}

- (void)addGroup:(id)arg1;
@property(nonatomic) id <FriendListAddGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchCancell:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end

