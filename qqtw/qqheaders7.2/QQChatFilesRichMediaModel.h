//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, QQAIOModel;

@interface QQChatFilesRichMediaModel : NSObject
{
    _Bool _checked;
    _Bool _bCheckModel;
    QQAIOModel *_aioModel;
    NSString *_sectionKey;
    NSIndexPath *_indexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QQAIOModel *aioModel; // @synthesize aioModel=_aioModel;
@property(nonatomic) _Bool bCheckModel; // @synthesize bCheckModel=_bCheckModel;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSString *sectionKey; // @synthesize sectionKey=_sectionKey;

@end

