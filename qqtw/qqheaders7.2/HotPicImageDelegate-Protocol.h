//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HotPicInfo, NSError, UIImage;

@protocol HotPicImageDelegate <NSObject>
- (void)getHotpicImageComplete:(HotPicInfo *)arg1 image:(UIImage *)arg2 tagId:(unsigned long long)arg3 isThumb:(_Bool)arg4 success:(_Bool)arg5 error:(NSError *)arg6;
@end

