//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface TBPicItem : UIView
{
    NSString *_reuseIdentifier;
    long long _index;
}

- (void)doInitUI:(struct CGRect)arg1;
@property(nonatomic) long long index; // @synthesize index=_index;
- (id)initWithFrame:(struct CGRect)arg1 withReuseIdentifier:(id)arg2;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;

@end
