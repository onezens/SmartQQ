//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary, QZJPhotoAlbum, QZJPhotoSOutshare, QZJPhotoSVideoflowUser;

@interface QZJPhotoGetPhotoList2Rsp : JceObjectV2
{
}


// Remaining properties
@property(retain, nonatomic, getter=jce_user, setter=setJce_user:) QZJPhotoSVideoflowUser *jcev2_p_11_o_user; // @dynamic jcev2_p_11_o_user;
@property(retain, nonatomic, getter=jce_features, setter=setJce_features:) NSDictionary *jcev2_p_12_o_features__b0x9i_M09ONSNumberONSData; // @dynamic jcev2_p_12_o_features__b0x9i_M09ONSNumberONSData;
@property(retain, nonatomic, getter=jce_albuminfo, setter=setJce_albuminfo:) QZJPhotoAlbum *jcev2_p_1_r_albuminfo; // @dynamic jcev2_p_1_r_albuminfo;
@property(retain, nonatomic, getter=jce_photolist, setter=setJce_photolist:) NSArray *jcev2_p_2_r_photolist__b0x9i_VOQZJFeedsSPicdata; // @dynamic jcev2_p_2_r_photolist__b0x9i_VOQZJFeedsSPicdata;
@property(nonatomic, getter=jce_finish, setter=setJce_finish:) unsigned int jcev2_p_6_o_finish; // @dynamic jcev2_p_6_o_finish;
@property(retain, nonatomic, getter=jce_shareinfo, setter=setJce_shareinfo:) QZJPhotoSOutshare *jcev2_p_7_o_shareinfo; // @dynamic jcev2_p_7_o_shareinfo;
@property(nonatomic, getter=jce_lossy_service, setter=setJce_lossy_service:) int jcev2_p_8_o_lossy_service; // @dynamic jcev2_p_8_o_lossy_service;
@property(retain, nonatomic, getter=jce_recommand_album, setter=setJce_recommand_album:) NSArray *jcev2_p_9_o_recommand_album__b0x9i_VOQZJPhotoAlbum; // @dynamic jcev2_p_9_o_recommand_album__b0x9i_VOQZJPhotoAlbum;
@end

