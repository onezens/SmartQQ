//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class QQAsynUrlImageView, QQGroupSearchType3Model, UILabel;

@interface QQGroupSearchType3Button : UIButton
{
    QQAsynUrlImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    QQGroupSearchType3Model *_model;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) QQGroupSearchType3Model *model; // @synthesize model=_model;
- (void)setHighlighted:(_Bool)arg1;

@end
