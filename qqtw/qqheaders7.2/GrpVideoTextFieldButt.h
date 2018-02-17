//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QQAVGroupTextField, UIImageView;

@interface GrpVideoTextFieldButt : UIView
{
    int _buttType;
    UIImageView *_contentImage;
    QQAVGroupTextField *_parentView;
    NSString *_normalResourceStr;
    NSString *_pressResourceStr;
}

- (void).cxx_destruct;
@property(nonatomic) int buttType; // @synthesize buttType=_buttType;
@property(retain, nonatomic) UIImageView *contentImage; // @synthesize contentImage=_contentImage;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *normalResourceStr; // @synthesize normalResourceStr=_normalResourceStr;
@property(nonatomic) __weak QQAVGroupTextField *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSString *pressResourceStr; // @synthesize pressResourceStr=_pressResourceStr;
- (void)setGrpVideoButtonState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
