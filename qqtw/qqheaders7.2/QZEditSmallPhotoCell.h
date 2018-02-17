//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBasePhotoCell.h"

@class NSArray, NSMutableArray, NSMutableOrderedSet;

@interface QZEditSmallPhotoCell : QZBasePhotoCell
{
    NSMutableArray *_photoButtons;
    NSArray *_photoModels;
    long long _maxPhotoModelsNum;
    NSMutableOrderedSet *_selectedPhotoModels;
    _Bool _isForward;
    _Bool _useLocalImage;
    _Bool _showCheckBox;
    long long _sectionIndex;
}

+ (double)height;
+ (double)photoWidth;
- (void).cxx_destruct;
@property(nonatomic) _Bool isForward; // @synthesize isForward=_isForward;
- (void)onClickCheckBox:(id)arg1;
- (void)onSelectPhotoBtn:(id)arg1;
@property(retain, nonatomic) NSArray *photoModels; // @synthesize photoModels=_photoModels;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
- (void)selectPhotoBtn:(id)arg1;
@property(nonatomic) _Bool showCheckBox; // @synthesize showCheckBox=_showCheckBox;
@property(nonatomic) _Bool useLocalImage; // @synthesize useLocalImage=_useLocalImage;
- (void)updateLayoutWithPhotoModels:(id)arg1 selectedPhotoModels:(id)arg2 maxPhotoModelsNum:(long long)arg3 hideVideo:(_Bool)arg4;

@end

