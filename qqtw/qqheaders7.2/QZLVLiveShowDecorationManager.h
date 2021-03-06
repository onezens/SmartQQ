//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface QZLVLiveShowDecorationManager : NSObject
{
    _Bool _hasListened;
    NSString *_downloadURL;
    _Bool _isReady;
    NSMutableArray *_tasks;
    NSString *_localDir;
    NSArray *_generalLikeNames;
    NSArray *_otherLikeNames;
    _Bool _isInActivity;
    id <QZLVLiveShowDecorationManagerDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearLocalResource;
- (id)curGeneralLikeNames;
- (id)curOtherLikeNames;
- (void)dealloc;
@property(nonatomic) __weak id <QZLVLiveShowDecorationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)downDir;
- (id)filterGeneralLikeNames:(id)arg1;
- (id)generalLikeNames;
- (id)getImageWithName:(id)arg1;
- (id)init;
- (id)innerGeneralLikeNames;
- (id)innerOhterLikeNames;
@property(nonatomic) _Bool isInActivity; // @synthesize isInActivity=_isInActivity;
- (_Bool)isReady;
- (id)otherLikeNames;

@end

