//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class AlbumTempElement, NSArray, NSDictionary, NSMutableArray, NSString, PhotoTemplate, QZEventPhotoModel, QzonePhotoModel;

@interface QZPhotoListRowModel : QZoneModel
{
    NSMutableArray *_recommendAlbumList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *recommendAlbumList; // @synthesize recommendAlbumList=_recommendAlbumList;

// Remaining properties
@property(nonatomic) long long backgroundType; // @dynamic backgroundType;
@property(retain, nonatomic) NSString *descTitle; // @dynamic descTitle;
@property(retain, nonatomic) QZEventPhotoModel *eventModel; // @dynamic eventModel;
@property(retain, nonatomic) NSString *eventTitle; // @dynamic eventTitle;
@property(retain, nonatomic) AlbumTempElement *eventTitleElement; // @dynamic eventTitleElement;
@property(nonatomic) double height; // @dynamic height;
@property(nonatomic) _Bool hideYear; // @dynamic hideYear;
@property(nonatomic) long long photoIndex; // @dynamic photoIndex;
@property(retain, nonatomic) QzonePhotoModel *photoModel; // @dynamic photoModel;
@property(retain, nonatomic) NSArray *photoModels; // @dynamic photoModels;
@property(retain, nonatomic) PhotoTemplate *photoTemplate; // @dynamic photoTemplate;
@property(nonatomic) long long rowType; // @dynamic rowType;
@property(nonatomic) long long smallRowNumType; // @dynamic smallRowNumType;
@property(retain, nonatomic) NSDictionary *uinNickDict; // @dynamic uinNickDict;

@end

