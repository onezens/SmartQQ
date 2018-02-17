//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class ITTagInfo, NSString, QQAsynUrlImageView, UIImage, UILabel, UITapGestureRecognizer;

@interface NearbyInterestTagView : UIView <UIGestureRecognizerDelegate>
{
    UILabel *_titleLabel;
    ITTagInfo *_tagInfo;
    id <NearbyInterestTagViewDelegate> _delegate;
    int _xo;
    unsigned int _type;
    QQAsynUrlImageView *_logoUrlView;
    UITapGestureRecognizer *_gesture;
    _Bool _bEditing;
    UIImage *_defaultImage;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)addGesture;
@property(nonatomic) _Bool bEditing; // @synthesize bEditing=_bEditing;
- (id)colorWithType:(unsigned int)arg1;
- (void)dealloc;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) __weak id <NearbyInterestTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)iconInterestDefaultImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutView:(unsigned int)arg1 tagInfo:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeGesture;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) ITTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
- (void)tap:(id)arg1;
- (id)titleColorWithType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

