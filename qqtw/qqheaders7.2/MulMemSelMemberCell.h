//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQAvatarView, UIImageView, UILabel;

@interface MulMemSelMemberCell : UIView
{
    UIImageView *_imgCheckBoxIcon;
    QQAvatarView *_imgHeaderView;
    UILabel *_labelNick;
    UILabel *_labelDetail;
    NSString *_accessibility;
    int _checkBoxStype;
    _Bool _isEnabled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accessibility; // @synthesize accessibility=_accessibility;
- (void)initCellUI;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(int)arg2;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (void)loadCellWithMemberInfo:(id)arg1;

@end
